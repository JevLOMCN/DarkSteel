// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 53

// FShaderCompilingManager @ 14850e090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShaderCompilingManager * __thiscall
FShaderCompilingManager::FShaderCompilingManager(FShaderCompilingManager *this)

{
  TArray<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FShaderCompileThreadRunnableBase *this_00;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  DWORD DVar9;
  int iVar10;
  FText *pFVar11;
  FAsyncCompilationNotification *pFVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  size_t sVar15;
  IFileManager *pIVar16;
  FString *pFVar17;
  FShaderCompilingManager *pFVar18;
  FName *pFVar19;
  FModuleManager *this_01;
  FGuid *pFVar20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar21;
  FShaderCompileDistributedThreadRunnable_Interface *pFVar22;
  IDistributedBuildController *pIVar23;
  FShaderCompileDistributedThreadRunnable_Interface *pFVar24;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  FDelegateHandle FVar25;
  FAssetCompilingManager *this_03;
  IConsoleManager *pIVar26;
  int iVar27;
  FStaticBasicLogRecord *pFVar28;
  atomic<int> aVar29;
  uint *puVar30;
  ForAnyElementType _Str;
  FScriptContainerElement *pFVar31;
  atomic<int> aVar32;
  undefined1 auStackY_2c8 [32];
  bool local_278 [8];
  FShaderCompileDistributedThreadRunnable_Interface *local_270;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FGuid local_1d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1c8;
  FShaderCompilingManager *local_1b8;
  FTextFormat local_1b0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_190;
  FString local_180;
  FString local_170;
  <lambda_1> local_160;
  FName local_158;
  undefined1 local_150 [8];
  FText local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  void *local_d8 [2];
  FGuid local_c8;
  TStringView<wchar_t> local_b8;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  int local_90;
  FScriptContainerElement *local_88;
  atomic<int> local_80;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  atomic<int> local_50;
  FScriptContainerElement *local_48;
  atomic<int> local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  this->bCompilingDuringGame = false;
  pFVar24 = (FShaderCompileDistributedThreadRunnable_Interface *)0x0;
  this->_padding_ = (longlong)&___7FShaderCompilingManager__6B_;
  *(undefined8 *)&this->ShaderMapJobs = 0;
  *(undefined8 *)&(this->ShaderMapJobs).field_0x8 = 0;
  *(undefined8 *)&(this->ShaderMapJobs).field_0x20 = 0;
  iVar10 = 0;
  *(undefined4 *)&(this->ShaderMapJobs).field_0x28 = 0;
  *(undefined4 *)&(this->ShaderMapJobs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShaderMapJobs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShaderMapJobs).field_0x34 = 0;
  *(undefined8 *)&(this->ShaderMapJobs).field_0x40 = 0;
  *(undefined4 *)&(this->ShaderMapJobs).field_0x48 = 0;
  this->NumExternalJobs = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompileQueueSection,4000);
  FShaderCompileJobCollection::FShaderCompileJobCollection
            (&this->AllJobs,&this->CompileQueueSection);
  *(undefined8 *)&this->PendingFinalizeShaderMaps = 0;
  pFVar17 = &this->ShaderCompileWorkerName;
  *(undefined8 *)&(this->PendingFinalizeShaderMaps).field_0x8 = 0;
  *(undefined8 *)&(this->PendingFinalizeShaderMaps).field_0x20 = 0;
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x28 = 0;
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x34 = 0;
  *(undefined8 *)&(this->PendingFinalizeShaderMaps).field_0x40 = 0;
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x48 = 0;
  (this->Threads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Threads).ArrayNum = 0;
  (this->Threads).ArrayMax = 0;
  this->NumDumpedShaderSources = (atomic<int>)0x0;
  this->bUseOnlyDistributedCompilationThread = false;
  (this->ShaderBaseWorkingDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderBaseWorkingDirectory).Data.ArrayNum = 0;
  (this->ShaderBaseWorkingDirectory).Data.ArrayMax = 0;
  (this->AbsoluteShaderBaseWorkingDirectory).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AbsoluteShaderBaseWorkingDirectory).Data.ArrayNum = 0;
  (this->AbsoluteShaderBaseWorkingDirectory).Data.ArrayMax = 0;
  (this->AbsoluteShaderDebugInfoDirectory).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AbsoluteShaderDebugInfoDirectory).Data.ArrayNum = 0;
  (this->AbsoluteShaderDebugInfoDirectory).Data.ArrayMax = 0;
  (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderCompileWorkerName).Data.ArrayNum = 0;
  (this->ShaderCompileWorkerName).Data.ArrayMax = 0;
  (this->WorkerCrashLogBaseDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkerCrashLogBaseDirectory).Data.ArrayNum = 0;
  (this->WorkerCrashLogBaseDirectory).Data.ArrayMax = 0;
  this->BuildDistributionController = (IDistributedBuildController *)0x0;
  this->bNoShaderCompilation = false;
  this->bAllowForIncompleteShaderMaps = false;
  this->NumSingleThreadedRunsBeforeRetry = -1;
  this->bDebugBreakOnPromptToRetryShaderCompile = false;
  this->LastNumRemainingAssets = 0;
  this->SuppressedShaderPlatforms = 0;
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_148,L"ShaderCompiler",L"ShaderNameFormat",
                       L"{0}|plural(one=Shader,other=Shaders)");
  FTextFormat::FTextFormat(&local_1b0,pFVar11,Default);
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  pFVar12 = ::operator_new(0x18);
  if (pFVar12 == (FAsyncCompilationNotification *)0x0) {
    pFVar12 = (FAsyncCompilationNotification *)0x0;
  }
  else if (local_1b0.TextFormatData.SharedReferenceCount.ReferenceController ==
           (TReferenceControllerBase<1> *)0x0) {
    (pFVar12->NotificationHandle).Id = -1;
    (pFVar12->AssetNameFormat).TextFormatData.Object = local_1b0.TextFormatData.Object;
    (pFVar12->AssetNameFormat).TextFormatData.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    (local_1b0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b0.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    (pFVar12->NotificationHandle).Id = -1;
    (pFVar12->AssetNameFormat).TextFormatData.Object = local_1b0.TextFormatData.Object;
    (pFVar12->AssetNameFormat).TextFormatData.SharedReferenceCount.ReferenceController =
         local_1b0.TextFormatData.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_1b0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b0.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.TextFormatData.SharedReferenceCount.ReferenceController);
  }
  (this->Notification).Ptr = pFVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.TextFormatData.SharedReferenceCount.ReferenceController);
  (this->OutOfMemoryDelegateHandle).ID = 0;
  bVar5 = AllowShaderCompiling();
  if (!bVar5) {
    this->bNoShaderCompilation = true;
    return this;
  }
  this->bIsEngineLoopInitialized = false;
  local_1b8 = this;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FShaderCompilingManager::FShaderCompilingManager_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnFEngineLoopInitComplete,&local_160);
  this->WorkersBusyTime = 0.0;
  ::FString::FString(&local_1e8,"ShaderCompileWorker.exe");
  pwVar13 = FWindowsPlatformProcess::GetBinariesSubdirectory();
  pFVar14 = FPaths::ProjectDir(&local_138);
  local_a0 = 8;
  local_a8 = L"Binaries";
  local_b8.DataPtr = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  iVar8 = (pFVar14->Data).ArrayNum;
  aVar29 = (atomic<int>)0x0;
  local_b8.Size = iVar8 - 1;
  if (iVar8 == 0) {
    local_b8.Size = (int)aVar29;
  }
  local_90 = iVar10;
  local_98 = pwVar13;
  if (pwVar13 != (wchar_t *)0x0) {
    sVar15 = wcslen(pwVar13);
    local_90 = (int)sVar15;
  }
  local_88 = local_1e8.Data.AllocatorInstance.Data;
  local_80 = (atomic<int>)(local_1e8.Data.ArrayNum - 1);
  if (local_1e8.Data.ArrayNum == 0) {
    local_80 = aVar29;
  }
  FPaths::CombineInternal(&local_258,&local_b8,4);
  if (pFVar17 != &local_258) {
    pFVar2 = (pFVar17->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar17->Data).AllocatorInstance.Data = local_258.Data.AllocatorInstance.Data;
    (this->ShaderCompileWorkerName).Data.ArrayNum = local_258.Data.ArrayNum;
    (this->ShaderCompileWorkerName).Data.ArrayMax = local_258.Data.ArrayMax;
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pIVar16 = IFileManager::Get();
  if ((this->ShaderCompileWorkerName).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  }
  cVar6 = (**(code **)((longlong)*pIVar16 + 0x50))(pIVar16,pwVar13);
  if (cVar6 == '\0') {
    pwVar13 = FWindowsPlatformProcess::GetBinariesSubdirectory();
    pFVar17 = FPaths::EngineDir(&local_128);
    local_68 = L"Binaries";
    local_60 = 8;
    local_78.DataPtr = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    iVar8 = (pFVar17->Data).ArrayNum;
    local_78.Size = iVar8 - 1;
    if (iVar8 == 0) {
      local_78.Size = (int)aVar29;
    }
    local_50 = aVar29;
    local_58 = pwVar13;
    if (pwVar13 != (wchar_t *)0x0) {
      sVar15 = wcslen(pwVar13);
      local_50 = SUB84(sVar15,0);
    }
    local_48 = local_1e8.Data.AllocatorInstance.Data;
    local_40 = (atomic<int>)(local_1e8.Data.ArrayNum - 1);
    if (local_1e8.Data.ArrayNum == 0) {
      local_40 = aVar29;
    }
    FPaths::CombineInternal(&local_248,&local_78,4);
    pFVar17 = &this->ShaderCompileWorkerName;
    if (pFVar17 != &local_248) {
      pFVar2 = (pFVar17->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar17->Data).AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
      (this->ShaderCompileWorkerName).Data.ArrayNum = local_248.Data.ArrayNum;
      (this->ShaderCompileWorkerName).Data.ArrayMax = local_248.Data.ArrayMax;
      local_248.Data.ArrayNum = 0;
      local_248.Data.ArrayMax = 0;
      local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  local_278[0] = false;
  bVar5 = FConfigCacheIni::GetBool
                    (GConfig,L"DevOptions.Shaders",L"bUseShaderCompilerFromLaunchDir",local_278,
                     &GEngineIni);
  if ((bVar5) && (local_278[0] != false)) {
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    bVar5 = FindShaderCompileWorkerExecutableInLaunchDir(&local_1e8,&local_218);
    if (bVar5) {
      aVar32 = (atomic<int>)(local_218.Data.ArrayNum - 1);
      if (local_218.Data.ArrayNum == 0) {
        aVar32 = aVar29;
      }
      ::FString::AssignRange
                (&this->ShaderCompileWorkerName,(wchar_t *)local_218.Data.AllocatorInstance.Data,
                 (int)aVar32);
    }
    else if (2 < (byte)LogShaderCompilers._0_1_) {
      FPaths::LaunchDir(&local_118);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = FPaths::ConvertRelativePathToFull(&local_108,&this->ShaderCompileWorkerName);
  pFVar17 = &this->ShaderCompileWorkerName;
  if (pFVar17 != pFVar14) {
    pFVar2 = (pFVar17->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar17->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ShaderCompileWorkerName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
    (this->ShaderCompileWorkerName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  bVar5 = FConfigCacheIni::GetBool
                    (GConfig,L"DevOptions.Shaders",L"bAllowCompilingThroughWorkers",
                     &this->bAllowCompilingThroughWorkers,&GEngineIni);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetBool( L\"DevOptions.Shaders\", L\"bAllowCompilingThroughWorkers\", bAllowCompilingThroughWorkers, GEngineIni )"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x31a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar18 = (FShaderCompilingManager *)(*pcVar4)();
    return pFVar18;
  }
  bVar5 = FConfigCacheIni::GetBool
                    (GConfig,L"DevOptions.Shaders",L"bAllowAsynchronousShaderCompiling",
                     &this->bAllowAsynchronousShaderCompiling,&GEngineIni);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetBool( L\"DevOptions.Shaders\", L\"bAllowAsynchronousShaderCompiling\", bAllowAsynchronousShaderCompiling, GEngineIni )"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x31b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar18 = (FShaderCompilingManager *)(*pcVar4)();
    return pFVar18;
  }
  pFVar19 = ::FName::FName(&local_158,L"ShaderPreprocessor");
  FVar3 = *pFVar19;
  this_01 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_01,FVar3);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar26 = IConsoleManager::Get();
    CVarAllowCompilingThroughWorkers =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar26 + 0xc0))
                   (pIVar26,L"r.Shaders.AllowCompilingThroughWorkers",0);
    _Init_thread_footer(&::_TSS0);
  }
  bVar5 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar5) {
    pwVar13 = FCommandLine::Get();
    bVar5 = FParse::Param(pwVar13,L"noshaderworker");
    if ((bVar5) ||
       ((CVarAllowCompilingThroughWorkers != (IConsoleVariable *)0x0 &&
        (iVar8 = (**(code **)(*(longlong *)CVarAllowCompilingThroughWorkers + 200))(), iVar8 == 0)))
       ) goto LAB_14850e755;
  }
  else {
LAB_14850e755:
    this->bAllowCompilingThroughWorkers = false;
  }
  bVar5 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar5) {
    this->bAllowAsynchronousShaderCompiling = false;
  }
  bVar5 = FConfigCacheIni::GetInt
                    (GConfig,L"DevOptions.Shaders",L"MaxShaderJobBatchSize",
                     &this->MaxShaderJobBatchSize,&GEngineIni);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetInt( L\"DevOptions.Shaders\", L\"MaxShaderJobBatchSize\", MaxShaderJobBatchSize, GEngineIni )"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x32c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar18 = (FShaderCompilingManager *)(*pcVar4)();
    return pFVar18;
  }
  bVar5 = FConfigCacheIni::GetBool
                    (GConfig,L"DevOptions.Shaders",L"bPromptToRetryFailedShaderCompiles",
                     &this->bPromptToRetryFailedShaderCompiles,&GEngineIni);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetBool( L\"DevOptions.Shaders\", L\"bPromptToRetryFailedShaderCompiles\", bPromptToRetryFailedShaderCompiles, GEngineIni )"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x32d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar18 = (FShaderCompilingManager *)(*pcVar4)();
    return pFVar18;
  }
  bVar5 = FConfigCacheIni::GetBool
                    (GConfig,L"DevOptions.Shaders",L"bDebugBreakOnPromptToRetryShaderCompile",
                     &this->bDebugBreakOnPromptToRetryShaderCompile,&GEngineIni);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetBool(L\"DevOptions.Shaders\", L\"bDebugBreakOnPromptToRetryShaderCompile\", bDebugBreakOnPromptToRetryShaderCompile, GEngineIni)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x32e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar18 = (FShaderCompilingManager *)(*pcVar4)();
    return pFVar18;
  }
  bVar5 = FConfigCacheIni::GetBool
                    (GConfig,L"DevOptions.Shaders",L"bLogJobCompletionTimes",
                     &this->bLogJobCompletionTimes,&GEngineIni);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetBool( L\"DevOptions.Shaders\", L\"bLogJobCompletionTimes\", bLogJobCompletionTimes, GEngineIni )"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x32f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar18 = (FShaderCompilingManager *)(*pcVar4)();
    return pFVar18;
  }
  FConfigCacheIni::GetFloat
            (GConfig,L"DevOptions.Shaders",L"WorkerTimeToLive",&GRegularWorkerTimeToLive,&GEngineIni
            );
  FConfigCacheIni::GetFloat
            (GConfig,L"DevOptions.Shaders",L"BuildWorkerTimeToLive",&GBuildWorkerTimeToLive,
             &GEngineIni);
  bVar5 = FConfigCacheIni::GetFloat
                    (GConfig,L"DevOptions.Shaders",L"ProcessGameThreadTargetTime",
                     &this->ProcessGameThreadTargetTime,&GEngineIni);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetFloat( L\"DevOptions.Shaders\", L\"ProcessGameThreadTargetTime\", ProcessGameThreadTargetTime, GEngineIni )"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x333,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar18 = (FShaderCompilingManager *)(*pcVar4)();
    return pFVar18;
  }
  DVar9 = FWindowsPlatformProcess::GetCurrentProcessId();
  this->ProcessId = DVar9;
  local_1d8.A = 0;
  local_1d8.B = 0;
  local_1d8.C = 0;
  local_1d8.D = 0;
  pFVar20 = FGuid::NewGuid(&local_c8);
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  local_1d8.A = pFVar20->A;
  local_1d8.B = pFVar20->B;
  local_1d8.C = pFVar20->C;
  local_1d8.D = pFVar20->D;
  ::FString::AppendInt(&local_208,this->ProcessId);
  pTVar21 = &FPaths::ProjectIntermediateDir(&local_f8)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_1c8,pTVar21,0x1b - (uint)(pTVar21->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_1c8,L"Shaders/WorkingDirectory/",0x19);
  aVar32 = (atomic<int>)(local_208.Data.ArrayNum - 1);
  if (local_208.Data.ArrayNum == 0) {
    aVar32 = aVar29;
  }
  if ((local_1c8.ArrayNum != 0) || (iVar8 = 1, (int)aVar32 + 1U == 0)) {
    iVar8 = iVar10;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_1a0,&local_1c8,iVar8 + (int)aVar32 + 1U);
  ::FString::PathAppend
            ((FString *)&local_1a0,(wchar_t *)local_208.Data.AllocatorInstance.Data,(int)aVar32);
  ::FString::ConcatFC(&local_180,(FString *)&local_1a0,L"/");
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  FGuid::AppendString(&local_1d8,&local_1f8,Digits);
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_1f8.Data.ArrayNum != 0) {
    _Str.Data = local_1f8.Data.AllocatorInstance.Data;
  }
  pTVar21 = &FPaths::ShaderWorkingDir(&local_e8)->Data;
  sVar15 = wcslen((wchar_t *)_Str.Data);
  iVar8 = (int)sVar15 + 1;
  if ((pTVar21->ArrayNum != 0) || (iVar27 = 1, iVar8 == 0)) {
    iVar27 = iVar10;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_190,pTVar21,iVar27 + iVar8);
  ::FString::PathAppend((FString *)&local_190,(wchar_t *)_Str.Data,(int)sVar15);
  ::FString::ConcatFC(&local_238,(FString *)&local_190,L"/");
  pFVar17 = &this->ShaderBaseWorkingDirectory;
  if (pFVar17 != &local_238) {
    pFVar2 = (pFVar17->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar17->Data).AllocatorInstance.Data = local_238.Data.AllocatorInstance.Data;
    (this->ShaderBaseWorkingDirectory).Data.ArrayNum = local_238.Data.ArrayNum;
    (this->ShaderBaseWorkingDirectory).Data.ArrayMax = local_238.Data.ArrayMax;
    local_238.Data.ArrayNum = 0;
    local_238.Data.ArrayMax = 0;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogShaderCompilers._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  pIVar16 = IFileManager::Get();
  if ((this->ShaderBaseWorkingDirectory).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(this->ShaderBaseWorkingDirectory).Data.AllocatorInstance.Data;
  }
  cVar6 = (**(code **)((longlong)*pIVar16 + 0x68))(pIVar16,pwVar13,0,1);
  if (cVar6 == '\0') {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  else if (4 < (byte)LogShaderCompilers._0_1_) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Cleaned_the_sha_151b08bd0,
               (FLogCategoryBase *)&LogShaderCompilers);
  }
  pIVar16 = IFileManager::Get();
  if ((this->ShaderBaseWorkingDirectory).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(this->ShaderBaseWorkingDirectory).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar16 + 0x108))(pIVar16,&local_170,pwVar13);
  FPaths::NormalizeDirectoryName(&local_170);
  ::FString::ConcatFC(&local_228,&local_170,L"/");
  pFVar17 = &this->AbsoluteShaderBaseWorkingDirectory;
  if (pFVar17 != &local_228) {
    pFVar2 = (pFVar17->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar17->Data).AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
    (this->AbsoluteShaderBaseWorkingDirectory).Data.ArrayNum = local_228.Data.ArrayNum;
    (this->AbsoluteShaderBaseWorkingDirectory).Data.ArrayMax = local_228.Data.ArrayMax;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  GetShaderDebugInfoPath();
  iVar10 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  iVar8 = FWindowsPlatformMisc::NumberOfCores();
  CalculateNumberOfCompilingThreads(this,iVar8,iVar10);
  pFVar22 = (FShaderCompileDistributedThreadRunnable_Interface *)
            FindShaderCompilingThread(this,Distributed);
  if (pFVar22 != (FShaderCompileDistributedThreadRunnable_Interface *)0x0) goto LAB_14850efee;
  if (this->bAllowCompilingThroughWorkers == false) {
LAB_14850efaa:
    this->BuildDistributionController = (IDistributedBuildController *)0x0;
    bVar5 = AllTargetPlatformSupportsRemoteShaderCompiling(this);
    if (bVar5) {
      if (3 < (byte)LogShaderCompilers._0_1_) {
        pFVar28 = &::LOG_Static;
        goto LAB_14850efdf;
      }
    }
    else if (3 < (byte)LogShaderCompilers._0_1_) {
      pFVar28 = &::LOG_Static;
LAB_14850efdf:
      UE::Logging::Private::BasicLog<4>(pFVar28,(FLogCategoryBase *)&LogShaderCompilers);
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pwVar13 = FCommandLine::Get();
      bDisabledFromCommandline = FParse::Param(pwVar13,L"NoRemoteShaderCompile");
      _Init_thread_footer(&::_TSS0);
    }
    if (((bDisabledFromCommandline != false) || (GShaderCompilerAllowDistributedCompilation == 0))
       || (bVar5 = AllTargetPlatformSupportsRemoteShaderCompiling(this), !bVar5))
    goto LAB_14850efaa;
    pIVar23 = FindRemoteCompilerController(this);
    this->BuildDistributionController = pIVar23;
    if (pIVar23 != (IDistributedBuildController *)0x0) {
      puVar30 = &this->NumShaderCompilingThreadsDuringGame;
      if (this->bCompilingDuringGame == false) {
        puVar30 = &this->NumShaderCompilingThreads;
      }
      (**(code **)((longlong)*pIVar23 + 0x50))(pIVar23,*puVar30);
      if (3 < (byte)LogShaderCompilers._0_1_) {
        (**(code **)((longlong)*this->BuildDistributionController + 0x68))
                  (this->BuildDistributionController,local_d8);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        if (local_d8[0] != (void *)0x0) {
          FMemory::Free(local_d8[0]);
        }
      }
      pIVar23 = this->BuildDistributionController;
      pFVar22 = ::operator_new(0xd8);
      if (pFVar22 != (FShaderCompileDistributedThreadRunnable_Interface *)0x0) {
        pFVar24 = FShaderCompileDistributedThreadRunnable_Interface::
                  FShaderCompileDistributedThreadRunnable_Interface(pFVar22,this,pIVar23);
      }
      local_270 = pFVar24;
      pwVar13 = FCommandLine::Get();
      bVar5 = FParse::Param(pwVar13,L"ExclusiveRemoteShaderCompiling");
      cVar6 = (**(code **)((longlong)*this->BuildDistributionController + 0x40))();
      pFVar22 = local_270;
      if ((cVar6 != '\0') || (bVar7 = false, bVar5)) {
        bVar7 = true;
      }
      pTVar1 = &this->Threads;
      this->bUseOnlyDistributedCompilationThread = bVar7;
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_270) &&
          ((FScriptContainerElement *)&local_270 < pFVar2 + (longlong)(this->Threads).ArrayMax * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar18 = (FShaderCompilingManager *)(*pcVar4)();
        return pFVar18;
      }
      iVar10 = (this->Threads).ArrayNum;
      if (iVar10 == (this->Threads).ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,&(this->Threads).ArrayMax);
      }
      (this->Threads).ArrayNum = iVar10 + 1;
      *(FShaderCompileDistributedThreadRunnable_Interface **)
       ((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_270;
      iVar10 = (this->Threads).ArrayNum;
      local_270 = (FShaderCompileDistributedThreadRunnable_Interface *)0x0;
      if (1 < iVar10) {
        pFVar31 = (this->Threads).AllocatorInstance.Data;
        pFVar2 = pFVar31 + (longlong)iVar10 * 8;
        while( true ) {
          if ((this->Threads).ArrayNum != iVar10) {
            local_278[1] = false;
            `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_278 + 1);
          }
          if (pFVar31 == pFVar2) break;
          this_00 = *(FShaderCompileThreadRunnableBase **)pFVar31;
          cVar6 = (**(code **)(this_00->_padding_ + 0x50))(this_00);
          if (cVar6 == '\0') {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                               ,0x3f7,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar18 = (FShaderCompilingManager *)(*pcVar4)();
              return pFVar18;
            }
LAB_14850ef75:
            pFVar31 = pFVar31 + 8;
          }
          else if (cVar6 == '\x01') {
            FShaderCompileThreadRunnableBase::SetPriorityRange(this_00,Normal,ForceLocal);
            pFVar31 = pFVar31 + 8;
          }
          else {
            if (cVar6 != '\x02') goto LAB_14850ef75;
            FShaderCompileThreadRunnableBase::SetPriorityRange(this_00,Low,ExtraHigh);
            pFVar31 = pFVar31 + 8;
          }
        }
      }
      if (local_270 != (FShaderCompileDistributedThreadRunnable_Interface *)0x0) {
        (**(code **)(local_270->_padding_ + 0x28))(local_270,1);
      }
      goto LAB_14850efee;
    }
    if (3 < (byte)LogShaderCompilers._0_1_) {
      pFVar28 = &::LOG_Static;
      goto LAB_14850efdf;
    }
  }
  pFVar22 = (FShaderCompileDistributedThreadRunnable_Interface *)0x0;
LAB_14850efee:
  FConfigCacheIni::SetBool
            (GConfig,L"/Script/UnrealEd.UnrealEdOptions",L"UsingXGE",
             pFVar22 != (FShaderCompileDistributedThreadRunnable_Interface *)0x0,&GEditorIni);
  if (this->bUseOnlyDistributedCompilationThread == false) {
    LaunchLocalShaderCompilingThread(this,true);
  }
  pFVar31 = (this->Threads).AllocatorInstance.Data;
  iVar10 = (this->Threads).ArrayNum;
  pFVar2 = pFVar31 + (longlong)iVar10 * 8;
  while( true ) {
    if ((this->Threads).ArrayNum != iVar10) {
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_278 + 2);
    }
    if (pFVar31 == pFVar2) break;
    FShaderCompileThreadRunnableBase::StartThread(*(FShaderCompileThreadRunnableBase **)pFVar31);
    pFVar31 = pFVar31 + 8;
  }
  this_02 = FCoreDelegates::GetOutOfMemoryDelegate();
  FVar25 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
           AddRaw<FShaderCompilingManager>
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                       *)this_02,(FShaderCompilingManager *)local_150,(pmf_53fde4da)this);
                    /* WARNING: Load size is inaccurate */
  (this->OutOfMemoryDelegateHandle).ID = *FVar25.ID;
  this_03 = FAssetCompilingManager::Get();
  FAssetCompilingManager::RegisterManager(this_03,(IAssetCompilingManager *)this);
  if (GDebugDumpWorkerCrashLog != false) {
    local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Data.ArrayNum = 0;
    local_268.Data.ArrayMax = 0;
    pwVar13 = FCommandLine::Get();
    bVar5 = FParse::Value(pwVar13,L"ShaderCompileWorkerCrashLogsDir=",&local_268,true,
                          (wchar_t **)0x0);
    if (bVar5) {
      pFVar17 = &this->WorkerCrashLogBaseDirectory;
      if (pFVar17 != &local_268) {
        pFVar2 = (pFVar17->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar17->Data).AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
        (this->WorkerCrashLogBaseDirectory).Data.ArrayNum = local_268.Data.ArrayNum;
        (this->WorkerCrashLogBaseDirectory).Data.ArrayMax = local_268.Data.ArrayMax;
        local_268.Data.ArrayNum = 0;
        local_268.Data.ArrayMax = 0;
        local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
    }
    else if (GIsBuildMachine != false) {
      pFVar17 = GetBuildMachineArtifactBasePath();
      ::FString::operator=(&this->WorkerCrashLogBaseDirectory,pFVar17);
    }
    if (1 < (this->WorkerCrashLogBaseDirectory).Data.ArrayNum) {
      pIVar16 = IFileManager::Get();
      if ((this->WorkerCrashLogBaseDirectory).Data.ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(this->WorkerCrashLogBaseDirectory).Data.AllocatorInstance.Data;
      }
      cVar6 = (**(code **)((longlong)*pIVar16 + 0x58))(pIVar16,pwVar13);
      if (cVar6 == '\0') {
        pIVar16 = IFileManager::Get();
        if ((this->WorkerCrashLogBaseDirectory).Data.ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(this->WorkerCrashLogBaseDirectory).Data.AllocatorInstance.Data;
        }
        cVar6 = (**(code **)((longlong)*pIVar16 + 0x60))(pIVar16,pwVar13,1);
        if ((cVar6 == '\0') &&
           (FWindowsPlatformMisc::GetLastError(), 2 < (byte)LogShaderCompilers._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
      }
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FShaderCompilingManager @ 148511190

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FShaderCompilingManager::~FShaderCompilingManager(FShaderCompilingManager *this)

{
  int iVar1;
  ulong64 uVar2;
  FAsyncCompilationNotification *pFVar3;
  void *pvVar4;
  FShaderJobCache *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  ulong64 *puVar9;
  FAssetCompilingManager *this_01;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined1 local_res8 [16];
  FDestructionSentinel local_48;
  
  this->_padding_ = (longlong)&___7FShaderCompilingManager__6B_;
  bVar7 = AllowShaderCompiling();
  if (bVar7) {
    pFVar12 = (this->Threads).AllocatorInstance.Data;
    iVar1 = (this->Threads).ArrayNum;
    pFVar10 = pFVar12 + (longlong)iVar1 * 8;
    while( true ) {
      if ((this->Threads).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar10) break;
      (**(code **)(**(longlong **)pFVar12 + 0x10))();
      if (*(longlong **)(*(longlong *)pFVar12 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(*(longlong *)pFVar12 + 0x20) + 0x20))();
      }
      pFVar12 = pFVar12 + 8;
    }
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FCoreDelegates::GetOutOfMemoryDelegate();
    uVar2 = (this->OutOfMemoryDelegateHandle).ID;
    if (uVar2 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_48);
      uVar11 = 0;
      if (0 < (this_00->InvocationList).ArrayNum) {
        lVar13 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar10 = (this_00->InvocationList).AllocatorInstance.Data + lVar13;
          if (((*(int *)&pFVar10[8].field_0x0 != 0) &&
              (*(longlong **)&pFVar10->field_0x0 != (longlong *)0x0)) &&
             (puVar9 = (ulong64 *)(**(code **)(**(longlong **)&pFVar10->field_0x0 + 0x40))(),
             *puVar9 == uVar2)) {
            if ((*(int *)&pFVar10[8].field_0x0 != 0) &&
               (*(undefined8 **)&pFVar10->field_0x0 != (undefined8 *)0x0)) {
              (**(code **)**(undefined8 **)&pFVar10->field_0x0)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)pFVar10,0,0,0x10);
              *(undefined4 *)&pFVar10[8].field_0x0 = 0;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false)
            ;
            break;
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 0x10;
        } while ((int)uVar11 < (this_00->InvocationList).ArrayNum);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    this_01 = FAssetCompilingManager::Get();
    FAssetCompilingManager::UnregisterManager(this_01,(IAssetCompilingManager *)this);
  }
  pFVar3 = (this->Notification).Ptr;
  if (pFVar3 != (FAsyncCompilationNotification *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->AssetNameFormat).TextFormatData.SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar3,0x18);
  }
  pFVar10 = (this->WorkerCrashLogBaseDirectory).Data.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pFVar10 = (this->ShaderCompileWorkerName).Data.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pFVar10 = (this->AbsoluteShaderDebugInfoDirectory).Data.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pFVar10 = (this->AbsoluteShaderBaseWorkingDirectory).Data.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pFVar10 = (this->ShaderBaseWorkingDirectory).Data.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  DestructItems<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int>
            ((TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>
              *)(this->Threads).AllocatorInstance.Data,(this->Threads).ArrayNum);
  pFVar10 = (this->Threads).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x48 = 0;
  pvVar4 = *(void **)&(this->PendingFinalizeShaderMaps).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingFinalizeShaderMaps);
  pFVar5 = (this->AllJobs).JobsCache.Ptr;
  if (pFVar5 != (FShaderJobCache *)0x0) {
    (*(code *)pFVar5[-1].TotalCacheDDCHits)(&pFVar5[-1].TotalCacheDDCHits);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompileQueueSection);
  *(undefined4 *)&(this->ShaderMapJobs).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ShaderMapJobs).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShaderMapJobs);
  this->_padding_ = (longlong)&___7IAssetCompilingManager__6B_;
  return;
}

// operator() @ 148513f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FShaderCompilingManager::ProcessFinishedJob'::__l2::<lambda_1>::operator()
          (void *this,FShaderCompileJob *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *_Str;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  void *pvVar6;
  size_t sVar7;
  ulong64 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_288 [32];
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [4];
  
  pTVar3 = CVarShaderCompilerLogSlowJobThreshold.Ref;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  if (*(char *)(*(longlong *)this + 0x11d) != '\0') goto LAB_148513fb3;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_148513f99:
    lVar5 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    lVar5 = 4;
    if (bVar4) goto LAB_148513f99;
  }
  if ((param_1->Output).CompileTime <= (double)*(int *)((longlong)pTVar3->ShadowedValue + lVar5)) {
    return;
  }
LAB_148513fb3:
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  bVar4 = FShaderCompilerInput::DumpDebugInfoEnabled(&param_1->Input);
  iVar10 = 0;
  if (bVar4) {
    iVar1 = (param_1->Input).DumpDebugInfoPath.Data.ArrayNum;
    pFVar2 = (param_1->Input).DumpDebugInfoPath.Data.AllocatorInstance.Data;
    iVar9 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar9 = iVar10;
    }
    uVar8 = (ulong64)iVar9;
    if (local_258.End < local_258.CurPos + uVar8) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,uVar8);
    }
    if (iVar9 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar2,uVar8 * 2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
    }
  }
  else {
    _Str = ((param_1->Key).ShaderType)->Name;
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
      iVar10 = (int)sVar7;
    }
    uVar8 = (ulong64)iVar10;
    if (local_258.End < local_258.CurPos + uVar8) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,uVar8);
    }
    if (iVar10 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(local_258.CurPos,_Str,uVar8 * 2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
    }
    ::FName::ToString(&(param_1->Input).ShaderFormat,&local_268);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"(permutation %d, format %s)");
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  if (3 < (byte)LogShaderCompilers._0_1_) {
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    *local_258.CurPos = L'\0';
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return;
}

// AddCompiledResults @ 148515810

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::AddCompiledResults
          (FShaderCompilingManager *this,
          TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
          *param_1,int param_2,FShaderMapCompileResults *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType *pFVar8;
  undefined1 *puVar9;
  TPairInitializer<int_const_&,FShaderMapCompileResults_const_&> local_res10;
  TPairInitializer<int_const_&,FShaderMapCompileResults_const_&> local_78;
  ForAnyElementType *local_68;
  FShaderMapCompileResults **local_60;
  FShaderMapCompileResults *local_58;
  ForAnyElementType local_50;
  int local_48 [3];
  undefined1 local_3c;
  undefined1 local_3b;
  FScriptContainerElement *local_38;
  undefined1 local_30;
  
  pFVar8 = (ForAnyElementType *)0x0;
  pFVar6 = pFVar8;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar9 = *(undefined1 **)&param_1->field_0x40;
    if (*(undefined1 **)&param_1->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_1->field_0x38;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        pFVar6 = (ForAnyElementType *)((longlong)iVar4 * 0x38 + *(longlong *)param_1);
        if (*(int *)&pFVar6->Data == param_2) break;
        iVar4 = *(int *)&pFVar6[6].Data;
        pFVar6 = pFVar8;
      } while (iVar4 != -1);
    }
  }
  pFVar7 = pFVar6 + 1;
  if (pFVar6 == (ForAnyElementType *)0x0) {
    pFVar7 = pFVar8;
  }
  local_res10.Value._0_4_ = param_2;
  if (pFVar7 == (ForAnyElementType *)0x0) {
    local_60 = &local_res10.Value;
    local_58 = param_3;
    TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FShaderMapCompileResults_const_&>_>
              ((TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
                *)param_1,&local_78,(bool *)&local_60);
  }
  else {
    iVar4 = (param_3->FinishedJobs).ArrayNum;
    pFVar1 = (param_3->FinishedJobs).AllocatorInstance.Data;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48[0] = iVar4;
    if (iVar4 == 0) {
      local_48[1] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,0,&local_50,iVar4,local_48 + 1);
      ConstructItems<TRefCountPtr<FShaderCommonCompileJob>,TRefCountPtr<FShaderCommonCompileJob>,int>
                (local_50.Data,(TRefCountPtr<FShaderCommonCompileJob> *)pFVar1,iVar4);
    }
    local_48[2] = (param_3->NumPendingJobs).Counter;
    if ((param_3->bAllJobsSucceeded == false) ||
       (local_3c = 1, *(char *)((longlong)&pFVar7[2].Data + 4) == '\0')) {
      local_3c = 0;
    }
    if ((param_3->bSkipResultProcessing != false) ||
       (local_3b = 0, *(char *)((longlong)&pFVar7[2].Data + 5) != '\0')) {
      local_3b = 1;
    }
    local_38 = pFVar7[3].Data;
    if (param_3->TimeStarted <= (double)pFVar7[3].Data) {
      local_38 = (FScriptContainerElement *)param_3->TimeStarted;
    }
    if ((param_3->bIsHung != false) || (local_30 = 0, *(char *)&pFVar7[4].Data != '\0')) {
      local_30 = 1;
    }
    if ((&local_50 == pFVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = *(int *)&pFVar7[1].Data;
    if (iVar4 != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar4,&local_50,local_48,local_48 + 1);
      ConstructItems<TRefCountPtr<FShaderCommonCompileJob>,TRefCountPtr<FShaderCommonCompileJob>,int>
                (local_50.Data + (longlong)iVar5 * 8,
                 (TRefCountPtr<FShaderCommonCompileJob> *)pFVar7->Data,iVar4);
    }
    local_78.Value = (FShaderMapCompileResults *)&local_res10.Value;
    local_68 = &local_50;
    TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FShaderMapCompileResults_const_&>_>
              ((TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
                *)param_1,&local_res10,(bool *)&local_78.Value);
    DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
              ((TRefCountPtr<FShaderCommonCompileJob> *)local_50.Data,local_48[0]);
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
      return;
    }
  }
  return;
}

// AllTargetPlatformSupportsRemoteShaderCompiling @ 148517fb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FShaderCompilingManager::AllTargetPlatformSupportsRemoteShaderCompiling
          (FShaderCompilingManager *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  ITargetPlatformManagerModule *pIVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  bVar2 = AllowShaderCompiling();
  if ((!bVar2) ||
     (pIVar6 = GetTargetPlatformManager(true), pIVar6 == (ITargetPlatformManagerModule *)0x0)) {
    return false;
  }
  plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x90))(pIVar6);
  uVar9 = 0;
  iVar8 = (int)plVar7[1];
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      cVar4 = (**(code **)(*(longlong *)(*(longlong *)(*plVar7 + lVar10) + 8) + 0xc0))
                        (*(longlong *)(*plVar7 + lVar10) + 8);
      if (cVar4 == '\0') {
        return false;
      }
      iVar8 = (int)plVar7[1];
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < iVar8);
  }
  return true;
}

// BlockOnAllShaderMapCompletion @ 148518670

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::BlockOnAllShaderMapCompletion
          (FShaderCompilingManager *this,
          TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<int,TRefCountPtr<FPendingShaderMapCompileResults>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>_>
  *pTVar1;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar2;
  FShaderJobCache *pFVar3;
  code *pcVar4;
  float fVar5;
  atomic<int> *paVar6;
  FFeedbackContext *pFVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  ulonglong uVar14;
  int *piVar15;
  FShaderMapCompileResults *this_00;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  TStaticArray<std::atomic<int>,5,4294967295> *pTVar18;
  FShaderMapCompileResults *pFVar19;
  uint uVar20;
  float fVar21;
  FShaderMapCompileResults *pFVar22;
  float fVar23;
  FFormatArgumentValue_u_8 FVar24;
  float local_res20 [2];
  uint local_318;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_310;
  longlong *local_2f8;
  undefined1 auStack_2f0 [16];
  uint uStack_2e0;
  uint uStack_2dc;
  longlong local_2d8;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_2d0;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *local_2c8;
  char local_2c0;
  char local_2bf;
  longlong *local_2b8;
  undefined1 auStack_2b0 [16];
  uint uStack_2a0;
  uint uStack_29c;
  longlong local_298;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_290;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *local_288;
  undefined2 local_280;
  longlong *local_278;
  undefined1 auStack_270 [16];
  uint uStack_260;
  uint uStack_25c;
  longlong local_258;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_250;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *local_248;
  undefined2 local_240;
  longlong *local_238;
  undefined1 auStack_230 [16];
  uint uStack_220;
  uint uStack_21c;
  longlong local_218;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_210;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *local_208;
  undefined2 local_200;
  FTextFormat local_1f8;
  FText local_1e8;
  FFormatArgumentValue local_1d8;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  undefined1 local_188 [32];
  longlong local_168;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_160;
  undefined1 local_158 [32];
  longlong local_138;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_130;
  undefined1 local_128 [32];
  longlong local_108;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_100;
  undefined1 local_f8 [32];
  longlong local_d8;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_d0;
  FSlowTask local_c8;
  FTextFormat local_68;
  FTextFormat local_58 [2];
  
  bVar9 = AllowShaderCompiling();
  if (bVar9) {
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1882,
                 "FShaderCompilingManager::BlockOnAllShaderMapCompletion",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                 ,0x75a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1882);
    }
    if (this->bAllowAsynchronousShaderCompiling == false) {
      pFVar22 = (FShaderMapCompileResults *)0x0;
      pFVar19 = pFVar22;
      do {
        pFVar17 = (this->Threads).AllocatorInstance.Data;
        iVar11 = (this->Threads).ArrayNum;
        pFVar2 = pFVar17 + (longlong)iVar11 * 8;
        while( true ) {
          if ((this->Threads).ArrayNum != iVar11) {
            local_res20[0] = (float)((uint)local_res20[0] & 0xffffff00);
            `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar17 == pFVar2) break;
          uVar20 = (**(code **)(**(longlong **)pFVar17 + 0x48))();
          pFVar19 = (FShaderMapCompileResults *)(ulonglong)uVar20;
          pFVar17 = pFVar17 + 8;
        }
        pTVar1 = &this->ShaderMapJobs;
        TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_128,
                   (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                    *)pTVar1);
        local_200 = 0;
        stack0xfffffffffffffdd8 = local_128._16_16_;
        local_238 = (longlong *)local_128._0_8_;
        auStack_230._0_8_ = local_128._8_8_;
        local_218 = local_108;
        pTStack_210 = pTStack_100;
        uVar14 = local_128._24_8_ >> 0x20;
        local_208 = (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                     *)pTVar1;
        if (local_128._28_4_ < *(int *)(local_128._16_8_ + 0x18)) {
          do {
            lVar16 = *(longlong *)(*local_238 + 8 + (longlong)(int)uVar14 * 0x18);
            this_00 = (FShaderMapCompileResults *)(lVar16 + 0x10);
            if (lVar16 == 0) {
              this_00 = pFVar22;
            }
            FShaderMapCompileResults::CheckIfHung(this_00);
            uStack_220 = uStack_220 & ~auStack_230._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_230);
            uVar14 = (ulonglong)uStack_21c;
          } while ((int)uStack_21c < *(int *)(auStack_230._8_8_ + 0x18));
          if (((char)local_200 != '\0') && (local_200._1_1_ != '\0')) {
            uVar20 = *(int *)&(local_208->Elements).field_0x8 -
                     *(int *)&(local_208->Elements).field_0x34;
            iVar11 = 1;
            if (3 < uVar20) {
              uVar14 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
              lVar16 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar11 = 1 << ((byte)lVar16 & 0x1f);
            }
            if (((0 < (int)uVar20) && (local_208->HashSize < iVar11)) ||
               (iVar11 < local_208->HashSize)) {
              local_208->HashSize = iVar11;
              TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
              ::Rehash(local_208);
            }
          }
        }
      } while (0 < (int)pFVar19);
      pFVar3 = (this->AllJobs).JobsCache.Ptr;
      SRWLock = &pFVar3->JobLock;
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      pTVar18 = &pFVar3->NumPendingJobs;
      lVar16 = 5;
      pFVar19 = pFVar22;
      do {
        paVar6 = pTVar18->Elements;
        pTVar18 = (TStaticArray<std::atomic<int>,5,4294967295> *)(pTVar18->Elements + 1);
        uVar20 = (int)pFVar19 + (int)*paVar6;
        pFVar19 = (FShaderMapCompileResults *)(ulonglong)uVar20;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      if ((uVar20 != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllJobs.GetNumPendingJobs() == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                              ,0x7b7,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar1 = &this->ShaderMapJobs;
      TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_f8,
                 (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                  *)pTVar1);
      local_2bf = '\0';
      stack0xfffffffffffffd18 = local_f8._16_16_;
      local_2f8 = (longlong *)local_f8._0_8_;
      auStack_2f0._0_8_ = local_f8._8_8_;
      local_2d8 = local_d8;
      pTStack_2d0 = pTStack_d0;
      uVar14 = local_f8._24_8_ >> 0x20;
      uVar20 = local_f8._28_4_;
      local_2c8 = (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                   *)pTVar1;
      if ((int)uVar20 < *(int *)(local_f8._16_8_ + 0x18)) {
        do {
          plVar8 = local_2f8;
          lVar16 = *(longlong *)(*local_2f8 + 8 + (longlong)(int)uVar14 * 0x18);
          pFVar19 = (FShaderMapCompileResults *)(lVar16 + 0x10);
          if (lVar16 == 0) {
            pFVar19 = pFVar22;
          }
          if (((pFVar19->NumPendingJobs).Counter != 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Results->NumPendingJobs.GetValue()== 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                                  ,0x7bc,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          AddCompiledResults(this,param_1,*(int *)(*plVar8 + (longlong)(int)uVar20 * 0x18),pFVar19);
          TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_2d0,uVar20);
          local_2c0 = '\x01';
          uStack_2e0 = uStack_2e0 & ~auStack_2f0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2f0);
          uVar14 = (ulonglong)uStack_2dc;
          uVar20 = uStack_2dc;
        } while ((int)uStack_2dc < *(int *)(auStack_2f0._8_8_ + 0x18));
        if ((local_2c0 != '\0') && (local_2bf != '\0')) {
          uVar20 = *(int *)&(local_2c8->Elements).field_0x8 -
                   *(int *)&(local_2c8->Elements).field_0x34;
          if (uVar20 < 4) {
            iVar11 = 1;
          }
          else {
            uVar14 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
            lVar16 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar11 = 1 << ((byte)lVar16 & 0x1f);
          }
          if (((0 < (int)uVar20) && (local_2c8->HashSize < iVar11)) ||
             (iVar11 < local_2c8->HashSize)) {
            local_2c8->HashSize = iVar11;
            TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
            ::Rehash(local_2c8);
          }
        }
      }
    }
    else {
      FVar24.IntValue = 0;
      lpCriticalSection = &this->CompileQueueSection;
      local_res20[0] = 0.0;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pTVar1 = &this->ShaderMapJobs;
      TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_188,
                 (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                  *)pTVar1);
      local_240 = 0;
      stack0xfffffffffffffd98 = local_188._16_16_;
      local_278 = (longlong *)local_188._0_8_;
      auStack_270._0_8_ = local_188._8_8_;
      local_258 = local_168;
      pTStack_250 = pTStack_160;
      uVar14 = local_188._24_8_ >> 0x20;
      local_248 = (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                   *)pTVar1;
      if (local_188._28_4_ < *(int *)(local_188._16_8_ + 0x18)) {
        do {
          lVar16 = *(longlong *)(*local_278 + 8 + (longlong)(int)uVar14 * 0x18);
          piVar15 = (int *)(lVar16 + 0x20);
          if (lVar16 == 0) {
            piVar15 = (int *)&DAT_00000010;
          }
          FVar24._0_4_ = (float)((int)FVar24.FloatValue + *piVar15);
          FVar24.IntValue._4_4_ = 0;
          uStack_260 = uStack_260 & ~auStack_270._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_270);
          uVar14 = (ulonglong)uStack_25c;
        } while ((int)uStack_25c < *(int *)(auStack_270._8_8_ + 0x18));
        local_res20[0] = FVar24._0_4_;
        if (((char)local_240 != '\0') && (local_240._1_1_ != '\0')) {
          uVar20 = *(int *)&(local_248->Elements).field_0x8 -
                   *(int *)&(local_248->Elements).field_0x34;
          iVar11 = 1;
          if (3 < uVar20) {
            uVar14 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
            lVar16 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar11 = 1 << ((byte)lVar16 & 0x1f);
          }
          if (((0 < (int)uVar20) && (local_248->HashSize < iVar11)) ||
             (iVar11 < local_248->HashSize)) {
            local_248->HashSize = iVar11;
            TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
            ::Rehash(local_248);
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar7 = GWarn;
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_1a8,L"ShaderCompiler",L"BlockOnAllShaderMapCompletion",
                           L"Compiling Shaders ({0})");
      pFVar13 = FTextFormat::FTextFormat(&local_68,pFVar12,Default);
      iVar11 = FVar24._0_4_;
      pFVar12 = FText::Format<int>(&local_1b8,pFVar13,iVar11);
      FSlowTask::FSlowTask(&local_c8,(float)iVar11,pFVar12,false,pFVar7);
      FSlowTask::Initialize(&local_c8);
      if (local_1b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
      }
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      fVar5 = __real_3c23d70a;
      if (0 < iVar11) {
        FSlowTask::MakeDialog(&local_c8,false,true);
        fVar5 = __real_3c23d70a;
      }
      while( true ) {
        fVar21 = 0.0;
        EnterCriticalSection((LPCRITICAL_SECTION)&this->CompileQueueSection);
        pTVar1 = &this->ShaderMapJobs;
        TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_158,
                   (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                    *)pTVar1);
        local_280 = 0;
        stack0xfffffffffffffd58 = local_158._16_16_;
        local_2b8 = (longlong *)local_158._0_8_;
        auStack_2b0._0_8_ = local_158._8_8_;
        local_298 = local_138;
        pTStack_290 = pTStack_130;
        uVar14 = local_158._24_8_ >> 0x20;
        local_318 = local_158._28_4_;
        fVar23 = FVar24.FloatValue;
        local_288 = (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                     *)pTVar1;
        if ((int)local_318 < *(int *)(local_158._16_8_ + 0x18)) {
          fVar21 = 0.0;
          do {
            lVar16 = *(longlong *)(*local_2b8 + 8 + (longlong)(int)(uint)uVar14 * 0x18);
            pFVar19 = (FShaderMapCompileResults *)(lVar16 + 0x10);
            if (lVar16 == 0) {
              pFVar19 = (FShaderMapCompileResults *)0x0;
            }
            if ((pFVar19->NumPendingJobs).Counter == 0) {
              AddCompiledResults(this,param_1,*(int *)(*local_2b8 + (longlong)(int)local_318 * 0x18)
                                 ,pFVar19);
              uVar20 = (uint)uVar14;
              if (lVar16 == 0) {
                uVar20 = local_318;
              }
              TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_290,uVar20);
              local_280 = CONCAT11(local_280._1_1_,1);
            }
            else {
              FShaderMapCompileResults::CheckIfHung(pFVar19);
              fVar21 = (float)((int)fVar21 + (pFVar19->NumPendingJobs).Counter);
            }
            uStack_2a0 = uStack_2a0 & ~auStack_2b0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2b0);
            uVar14 = (ulonglong)uStack_29c;
            local_318 = uStack_29c;
          } while ((int)uStack_29c < *(int *)(auStack_2b0._8_8_ + 0x18));
          fVar23 = local_res20[0];
          if (((char)local_280 != '\0') && (local_280._1_1_ != '\0')) {
            uVar20 = *(int *)&(local_288->Elements).field_0x8 -
                     *(int *)&(local_288->Elements).field_0x34;
            if (uVar20 < 4) {
              iVar11 = 1;
            }
            else {
              uVar14 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
              lVar16 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar11 = 1 << ((byte)lVar16 & 0x1f);
            }
            if (((0 < (int)uVar20) && (local_288->HashSize < iVar11)) ||
               (iVar11 < local_288->HashSize)) {
              local_288->HashSize = iVar11;
              TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
              ::Rehash(local_288);
              fVar23 = local_res20[0];
            }
          }
        }
        FVar24 = (float)SEXT48(fVar21);
        local_res20[0] = fVar21;
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->CompileQueueSection);
        if ((int)fVar21 < 1) break;
        if ((this->BuildDistributionController != (IDistributedBuildController *)0x0) &&
           (bVar10 = IsInGameThread(), bVar10)) {
          (**(code **)((longlong)*this->BuildDistributionController + 0x78))();
        }
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_198,L"ShaderCompiler",L"BlockOnAllShaderMapCompletion",
                             L"Compiling Shaders ({0})");
        pFVar13 = FTextFormat::FTextFormat(local_58,pFVar12,Default);
        local_1d8.Type = Int;
        local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_1d8.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_310.ArrayNum = 1;
        local_1d8.field1_0x8 = FVar24;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_310.AllocatorInstance,1,&local_310.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_310.AllocatorInstance.Data,&local_1d8,1);
        local_1f8.TextFormatData.Object = (pFVar13->TextFormatData).Object;
        local_1f8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_1f8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_1f8.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_1e8,&local_1f8,&local_310);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_310.AllocatorInstance.Data,local_310.ArrayNum);
        if ((FFormatArgumentValue *)local_310.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_310.AllocatorInstance.Data);
        }
        if (local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
        FSlowTask::EnterProgressFrame(&local_c8,(float)((int)fVar23 - (int)fVar21),&local_1e8);
        if (local_1e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
        }
        if (local_198.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
        }
        FWindowsPlatformProcess::Sleep(fVar5);
      }
      FSlowTask::Destroy(&local_c8);
      if (local_c8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_c8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.DefaultMessage.TextData.Reference + 0x10))();
      }
    }
    UpdateNumRemainingAssets(this);
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// BlockOnShaderMapCompletion @ 148519020

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::BlockOnShaderMapCompletion
          (FShaderCompilingManager *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
          *param_2)

{
  TMap<int,TRefCountPtr<FPendingShaderMapCompileResults>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>_>
  *this_00;
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  FShaderJobCache *pFVar2;
  code *pcVar3;
  atomic<int> *paVar4;
  float fVar5;
  FFeedbackContext *pFVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  FOutputDeviceRedirector *this_01;
  FShaderMapCompileResults *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FShaderMapCompileResults *pFVar16;
  int iVar17;
  undefined1 *puVar18;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar19;
  TStaticArray<std::atomic<int>,5,4294967295> *pTVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  FShaderMapCompileResults *pFVar25;
  uint uVar26;
  uint local_178;
  uint local_174;
  undefined1 local_170 [4];
  int local_16c;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_168;
  LPCRITICAL_SECTION local_158;
  FTextFormat local_150;
  FText local_140;
  FFormatArgumentValue local_130;
  FText local_110;
  FText local_100;
  FText local_f0;
  FSlowTask local_d8;
  FTextFormat local_78;
  FTextFormat local_68 [2];
  FShaderMapCompileResults *pFVar22;
  
  bVar7 = AllowShaderCompiling();
  if (bVar7) {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1749,"FShaderCompilingManager::BlockOnShaderMapCompletion"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                 ,0x6d5);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1749);
    }
    pFVar22 = (FShaderMapCompileResults *)0x0;
    uVar21 = 0;
    uVar10 = 0;
    pFVar13 = pFVar22;
    if (this->bAllowAsynchronousShaderCompiling == false) {
      do {
        pFVar19 = (this->Threads).AllocatorInstance.Data;
        iVar9 = (this->Threads).ArrayNum;
        pFVar14 = pFVar19 + (longlong)iVar9 * 8;
        while( true ) {
          if ((this->Threads).ArrayNum != iVar9) {
            local_170[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_170);
          }
          if (pFVar19 == pFVar14) break;
          uVar10 = (**(code **)(**(longlong **)pFVar19 + 0x48))();
          pFVar13 = (FShaderMapCompileResults *)(ulonglong)uVar10;
          pFVar19 = pFVar19 + 8;
        }
      } while (0 < (int)pFVar13);
      pFVar2 = (this->AllJobs).JobsCache.Ptr;
      SRWLock = &pFVar2->JobLock;
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      pTVar20 = &pFVar2->NumPendingJobs;
      lVar15 = 5;
      pFVar13 = pFVar22;
      do {
        paVar4 = pTVar20->Elements;
        pTVar20 = (TStaticArray<std::atomic<int>,5,4294967295> *)(pTVar20->Elements + 1);
        uVar10 = (int)pFVar13 + (int)*paVar4;
        pFVar13 = (FShaderMapCompileResults *)(ulonglong)uVar10;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      if ((uVar10 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllJobs.GetNumPendingJobs() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                             ,0x73d,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      pFVar13 = pFVar22;
      pFVar16 = pFVar22;
      if (0 < iVar9) {
LAB_148519820:
        uVar24 = (uint)pFVar16;
        uVar23 = ~uVar24 >> 0x1f;
        uVar10 = uVar21;
        if ((int)uVar24 < iVar9) {
          uVar10 = uVar23;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = *(uint *)((param_1->AllocatorInstance).Data +
                          (longlong)&(pFVar13->FinishedJobs).AllocatorInstance);
        if (*(int *)&(this->ShaderMapJobs).field_0x8 != *(int *)&(this->ShaderMapJobs).field_0x34) {
          puVar1 = *(undefined1 **)&(this->ShaderMapJobs).field_0x40;
          puVar18 = &(this->ShaderMapJobs).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar18 = puVar1;
          }
          iVar9 = *(int *)(puVar18 +
                          (ulonglong)(*(int *)&(this->ShaderMapJobs).field_0x48 - 1U & uVar10) * 4);
          if (iVar9 != -1) {
            do {
              lVar15 = *(longlong *)&this->ShaderMapJobs + (longlong)iVar9 * 0x18;
              if (*(uint *)(*(longlong *)&this->ShaderMapJobs + (longlong)iVar9 * 0x18) == uVar10) {
                pFVar16 = (FShaderMapCompileResults *)(lVar15 + 8);
                if (lVar15 == 0) {
                  pFVar16 = pFVar22;
                }
                if (pFVar16 != (FShaderMapCompileResults *)0x0) {
                  pFVar14 = (pFVar16->FinishedJobs).AllocatorInstance.Data;
                  pFVar16 = (FShaderMapCompileResults *)(pFVar14 + 0x10);
                  if (pFVar14 == (FScriptContainerElement *)0x0) {
                    pFVar16 = pFVar22;
                  }
                  if (((pFVar16->NumPendingJobs).Counter != 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Results->NumPendingJobs.GetValue() == 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                                         ,0x746,L""), bVar8)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (((pFVar16->FinishedJobs).ArrayNum < 1) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Results->FinishedJobs.Num() > 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                                         ,0x747,L""), bVar8)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar10 = uVar21;
                  if ((int)uVar24 < param_1->ArrayNum) {
                    uVar10 = uVar23;
                  }
                  if ((uVar10 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  AddCompiledResults(this,param_2,
                                     *(int *)((param_1->AllocatorInstance).Data +
                                             (longlong)&(pFVar13->FinishedJobs).AllocatorInstance),
                                     pFVar16);
                  uVar10 = uVar21;
                  if ((int)uVar24 < param_1->ArrayNum) {
                    uVar10 = uVar23;
                  }
                  if ((uVar10 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  iVar9 = *(int *)((param_1->AllocatorInstance).Data +
                                  (longlong)&(pFVar13->FinishedJobs).AllocatorInstance);
                  if (*(int *)&(this->ShaderMapJobs).field_0x8 !=
                      *(int *)&(this->ShaderMapJobs).field_0x34) {
                    puVar1 = *(undefined1 **)&(this->ShaderMapJobs).field_0x40;
                    puVar18 = &(this->ShaderMapJobs).field_0x38;
                    if (puVar1 != (undefined1 *)0x0) {
                      puVar18 = puVar1;
                    }
                    iVar17 = *(int *)(puVar18 +
                                     ((longlong)*(int *)&(this->ShaderMapJobs).field_0x48 - 1U &
                                     (longlong)iVar9) * 4);
                    if (iVar17 != -1) {
                      goto LAB_148519a30;
                    }
                  }
                }
                break;
              }
              iVar9 = *(int *)(lVar15 + 0x10);
            } while (iVar9 != -1);
          }
        }
        goto LAB_148519a52;
      }
    }
    else {
      lpCriticalSection = (LPCRITICAL_SECTION)&this->CompileQueueSection;
      local_174 = 0;
      local_158 = lpCriticalSection;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      iVar9 = param_1->ArrayNum;
      pFVar16 = pFVar22;
      pFVar25 = pFVar22;
      if (0 < iVar9) {
        do {
          uVar23 = (uint)pFVar13;
          uVar24 = uVar10;
          if ((int)uVar23 < iVar9) {
            uVar24 = ~uVar23 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar24 = *(uint *)((param_1->AllocatorInstance).Data +
                            (longlong)&(pFVar25->FinishedJobs).AllocatorInstance);
          if (*(int *)&(this->ShaderMapJobs).field_0x8 != *(int *)&(this->ShaderMapJobs).field_0x34)
          {
            puVar1 = *(undefined1 **)&(this->ShaderMapJobs).field_0x40;
            puVar18 = &(this->ShaderMapJobs).field_0x38;
            if (puVar1 != (undefined1 *)0x0) {
              puVar18 = puVar1;
            }
            iVar9 = *(int *)(puVar18 +
                            (ulonglong)(*(int *)&(this->ShaderMapJobs).field_0x48 - 1U & uVar24) * 4
                            );
            if (iVar9 != -1) {
              do {
                lVar15 = *(longlong *)&this->ShaderMapJobs + (longlong)iVar9 * 0x18;
                if (*(uint *)(*(longlong *)&this->ShaderMapJobs + (longlong)iVar9 * 0x18) == uVar24)
                {
                  pFVar13 = (FShaderMapCompileResults *)(lVar15 + 8);
                  if (lVar15 == 0) {
                    pFVar13 = pFVar22;
                  }
                  if (pFVar13 != (FShaderMapCompileResults *)0x0) {
                    pFVar19 = (pFVar13->FinishedJobs).AllocatorInstance.Data;
                    pFVar14 = pFVar19 + 0x20;
                    if (pFVar19 == (FScriptContainerElement *)0x0) {
                      pFVar14 = (FScriptContainerElement *)&DAT_00000010;
                    }
                    pFVar16 = (FShaderMapCompileResults *)
                              (ulonglong)(uint)((int)pFVar16 + *(int *)pFVar14);
                  }
                  break;
                }
                iVar9 = *(int *)(lVar15 + 0x10);
              } while (iVar9 != -1);
            }
          }
          local_174 = (uint)pFVar16;
          iVar9 = param_1->ArrayNum;
          pFVar13 = (FShaderMapCompileResults *)(ulonglong)(uVar23 + 1);
          pFVar25 = (FShaderMapCompileResults *)
                    ((longlong)&(pFVar25->FinishedJobs).AllocatorInstance.Data + 4);
        } while ((int)(uVar23 + 1) < iVar9);
      }
      LeaveCriticalSection(lpCriticalSection);
      pFVar6 = GWarn;
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_100,L"ShaderCompiler",L"BlockOnShaderMapCompletion",
                           L"Compiling Shaders ({0})");
      pFVar12 = FTextFormat::FTextFormat(&local_78,pFVar11,Default);
      pFVar11 = FText::Format<int>(&local_110,pFVar12,local_174);
      FSlowTask::FSlowTask(&local_d8,(float)(int)local_174,pFVar11,false,pFVar6);
      FSlowTask::Initialize(&local_d8);
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
      if (0 < (int)local_174) {
        FSlowTask::MakeDialogDelayed(&local_d8,__real_3f800000,false,false);
      }
      fVar5 = __real_3c23d70a;
      local_16c = 0;
LAB_1485192d0:
      local_178 = 0;
      EnterCriticalSection(lpCriticalSection);
      iVar9 = param_1->ArrayNum;
      uVar24 = uVar10;
      if (0 < iVar9) {
        this_00 = &this->ShaderMapJobs;
        pFVar13 = pFVar22;
        pFVar16 = pFVar22;
LAB_148519300:
        uVar26 = (uint)pFVar16;
        uVar23 = ~uVar26 >> 0x1f;
        uVar24 = uVar10;
        if ((int)uVar26 < iVar9) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = *(uint *)((param_1->AllocatorInstance).Data +
                          (longlong)&(pFVar13->FinishedJobs).AllocatorInstance);
        if (*(int *)&(this->ShaderMapJobs).field_0x8 != *(int *)&(this->ShaderMapJobs).field_0x34) {
          puVar1 = *(undefined1 **)&(this->ShaderMapJobs).field_0x40;
          puVar18 = &(this->ShaderMapJobs).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar18 = puVar1;
          }
          iVar9 = *(int *)(puVar18 +
                          (ulonglong)(*(int *)&(this->ShaderMapJobs).field_0x48 - 1U & uVar24) * 4);
          if (iVar9 != -1) {
            do {
              lVar15 = *(longlong *)&this_00->field_0x0 + (longlong)iVar9 * 0x18;
              if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar9 * 0x18) == uVar24) {
                pFVar16 = (FShaderMapCompileResults *)(lVar15 + 8);
                if (lVar15 == 0) {
                  pFVar16 = pFVar22;
                }
                if (pFVar16 != (FShaderMapCompileResults *)0x0) {
                  pFVar14 = (pFVar16->FinishedJobs).AllocatorInstance.Data;
                  pFVar16 = (FShaderMapCompileResults *)(pFVar14 + 0x10);
                  if (pFVar14 == (FScriptContainerElement *)0x0) {
                    pFVar16 = pFVar22;
                  }
                  if ((pFVar16->NumPendingJobs).Counter == 0) {
                    if (0 < (pFVar16->FinishedJobs).ArrayNum) {
                      uVar24 = uVar21;
                      if ((int)uVar26 < param_1->ArrayNum) {
                        uVar24 = uVar23;
                      }
                      if ((uVar24 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      AddCompiledResults(this,param_2,
                                         *(int *)((param_1->AllocatorInstance).Data +
                                                 (longlong)
                                                 &(pFVar13->FinishedJobs).AllocatorInstance),pFVar16
                                        );
                    }
                    uVar24 = uVar21;
                    if ((int)uVar26 < param_1->ArrayNum) {
                      uVar24 = uVar23;
                    }
                    if ((uVar24 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    iVar9 = *(int *)((param_1->AllocatorInstance).Data +
                                    (longlong)&(pFVar13->FinishedJobs).AllocatorInstance);
                    if (*(int *)&(this->ShaderMapJobs).field_0x8 !=
                        *(int *)&(this->ShaderMapJobs).field_0x34) {
                      puVar1 = *(undefined1 **)&(this->ShaderMapJobs).field_0x40;
                      puVar18 = &(this->ShaderMapJobs).field_0x38;
                      if (puVar1 != (undefined1 *)0x0) {
                        puVar18 = puVar1;
                      }
                      iVar17 = *(int *)(puVar18 +
                                       ((longlong)*(int *)&(this->ShaderMapJobs).field_0x48 - 1U &
                                       (longlong)iVar9) * 4);
                      if (iVar17 != -1) {
                        goto LAB_1485196b1;
                      }
                    }
                  }
                  else {
                    FShaderMapCompileResults::CheckIfHung(pFVar16);
                    local_178 = local_178 + (pFVar16->NumPendingJobs).Counter;
                  }
                }
                break;
              }
              iVar9 = *(int *)(lVar15 + 0x10);
            } while (iVar9 != -1);
          }
        }
        goto LAB_1485193b1;
      }
LAB_1485193d4:
      LeaveCriticalSection(lpCriticalSection);
      if (0 < (int)uVar24) {
        if ((this->BuildDistributionController != (IDistributedBuildController *)0x0) &&
           (bVar8 = IsInGameThread(), bVar8)) {
          (**(code **)((longlong)*this->BuildDistributionController + 0x78))();
        }
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_f0,L"ShaderCompiler",L"BlockOnShaderMapCompletion",
                             L"Compiling Shaders ({0})");
        pFVar12 = FTextFormat::FTextFormat(local_68,pFVar11,Default);
        local_130.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar24;
        local_130.Type = Int;
        local_130.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_130.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_168.AllocatorInstance.Data,&local_130,1);
        local_150.TextFormatData.Object = (pFVar12->TextFormatData).Object;
        local_150.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar12->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_150.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_150.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_150.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_140,&local_150,&local_168);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
        if ((FFormatArgumentValue *)local_168.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
        if (local_130.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_130.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar12->TextFormatData).SharedReferenceCount.ReferenceController);
        FSlowTask::EnterProgressFrame(&local_d8,(float)(int)(local_174 - uVar24),&local_140);
        if (local_140.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
        }
        if (local_f0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
        }
        FWindowsPlatformProcess::Sleep(fVar5);
        local_16c = local_16c + 1;
        local_174 = uVar24;
        if (0x32 < local_16c) {
          local_16c = 0;
          this_01 = GetGlobalLogSingleton();
          FOutputDeviceRedirector::FlushThreadedLogs(this_01,Async);
        }
        goto LAB_1485192d0;
      }
      FSlowTask::Destroy(&local_d8);
      if (local_d8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_d8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.DefaultMessage.TextData.Reference + 0x10))();
      }
    }
LAB_148519a6c:
    UpdateNumRemainingAssets(this);
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
  while (iVar17 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar17 * 0x18),
        iVar17 != -1) {
LAB_1485196b1:
    if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar17 * 0x18) == iVar9) {
      TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                       *)this_00,iVar17);
      break;
    }
  }
LAB_1485193b1:
  iVar9 = param_1->ArrayNum;
  pFVar16 = (FShaderMapCompileResults *)(ulonglong)(uVar26 + 1);
  pFVar13 = (FShaderMapCompileResults *)
            ((longlong)&(pFVar13->FinishedJobs).AllocatorInstance.Data + 4);
  lpCriticalSection = local_158;
  uVar24 = local_178;
  if (iVar9 <= (int)(uVar26 + 1)) goto LAB_1485193d4;
  goto LAB_148519300;
  while (iVar17 = *(int *)(*(longlong *)&this->ShaderMapJobs + 0x10 + (longlong)iVar17 * 0x18),
        iVar17 != -1) {
LAB_148519a30:
    if (*(int *)(*(longlong *)&this->ShaderMapJobs + (longlong)iVar17 * 0x18) == iVar9) {
      TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                       *)&this->ShaderMapJobs,iVar17);
      break;
    }
  }
LAB_148519a52:
  iVar9 = param_1->ArrayNum;
  pFVar13 = (FShaderMapCompileResults *)
            ((longlong)&(pFVar13->FinishedJobs).AllocatorInstance.Data + 4);
  pFVar16 = (FShaderMapCompileResults *)(ulonglong)(uVar24 + 1);
  if (iVar9 <= (int)(uVar24 + 1)) goto LAB_148519a6c;
  goto LAB_148519820;
}

// CalculateNumberOfCompilingThreads @ 148519d80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::CalculateNumberOfCompilingThreads
          (FShaderCompilingManager *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  bool local_res8 [8];
  bool local_res18 [8];
  int local_res20 [2];
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  float local_54 [11];
  
  bVar2 = FConfigCacheIni::GetInt
                    (GConfig,L"DevOptions.Shaders",L"NumUnusedShaderCompilingThreads",local_res20,
                     &GEngineIni);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetInt(L\"DevOptions.Shaders\", L\"NumUnusedShaderCompilingThreads\", NumUnusedShaderCompilingThreads, GEngineIni)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x47e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FConfigCacheIni::GetInt
                    (GConfig,L"DevOptions.Shaders",L"NumUnusedShaderCompilingThreadsDuringGame",
                     &local_68,&GEngineIni);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetInt(L\"DevOptions.Shaders\", L\"NumUnusedShaderCompilingThreadsDuringGame\", NumUnusedShaderCompilingThreadsDuringGame, GEngineIni)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x481,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FConfigCacheIni::GetInt
                    (GConfig,L"DevOptions.Shaders",L"ShaderCompilerCoreCountThreshold",&local_58,
                     &GEngineIni);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetInt(L\"DevOptions.Shaders\", L\"ShaderCompilerCoreCountThreshold\", ShaderCompilerCoreCountThreshold, GEngineIni)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0x484,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"DevOptions.Shaders",L"bForceUseSCWMemoryPressureLimits",local_res18,
             &GEngineIni);
  if (((PRIVATE_GIsRunningCommandlet == false) && (GIsBuildMachine == false)) &&
     (local_58 < param_2)) {
    bVar2 = FConfigCacheIni::GetFloat
                      (GConfig,L"DevOptions.Shaders",L"PercentageUnusedShaderCompilingThreads",
                       local_54,&GEngineIni);
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("GConfig->GetFloat(L\"DevOptions.Shaders\", L\"PercentageUnusedShaderCompilingThreads\", PercentageUnusedShaderCompilingThreads, GEngineIni)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                           ,0x48f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (__real_42c80000 <= local_54[0]) {
      local_54[0] = __real_42c80000;
    }
    if (local_54[0] <= 0.0) {
      local_54[0] = 0.0;
    }
    local_res20[0] =
         -((int)ROUND(__real_bf000000 - local_54[0] * (float)param_2 * __real_3ca3d70a) >> 1);
    local_68 = local_res20[0];
  }
  if (GForceAllCoresForShaderCompiling != 0) {
    local_res20[0] = 0;
  }
  uVar3 = 1;
  if ((this->bAllowCompilingThroughWorkers == false) || (param_2 <= local_res20[0])) {
    this->NumShaderCompilingThreads = 1;
    if (this->bAllowCompilingThroughWorkers == false) goto LAB_148519fb7;
  }
  else {
    this->NumShaderCompilingThreads = param_2 - local_res20[0];
  }
  if (local_68 < param_2) {
    uVar3 = param_2 - local_68;
  }
LAB_148519fb7:
  this->NumShaderCompilingThreadsDuringGame = uVar3;
  if (param_2 < 5) {
    this->NumShaderCompilingThreads = param_2 - 1U;
    this->NumShaderCompilingThreadsDuringGame = param_2 - 1U;
  }
  else if ((GIsBuildMachine != false) || (local_res18[0] != false)) {
    local_64 = 0.0;
    local_60 = 0.0;
    local_5c = 0.0;
    bVar2 = FConfigCacheIni::GetFloat
                      (GConfig,L"DevOptions.Shaders",L"CookerMemoryUsedInGB",&local_64,&GEngineIni);
    if ((bVar2) &&
       ((bVar2 = FConfigCacheIni::GetFloat
                           (GConfig,L"DevOptions.Shaders",L"MemoryToLeaveForTheOSInGB",&local_60,
                            &GEngineIni), bVar2 &&
        (bVar2 = FConfigCacheIni::GetFloat
                           (GConfig,L"DevOptions.Shaders",L"MemoryUsedPerSCWProcessInGB",&local_5c,
                            &GEngineIni), bVar2)))) {
      uVar3 = FGenericPlatformMemory::GetPhysicalGBRam();
      fVar5 = (float)uVar3 - local_64;
      if (fVar5 <= 0.0) {
        if (2 < (byte)LogShaderCompilers._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
      }
      else if (fVar5 <= local_60) {
        if (2 < (byte)LogShaderCompilers._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
      }
      else {
        fVar5 = fVar5 - local_60;
      }
      if (0.0 < local_5c) {
        local_res8[0] = true;
        this->NumShaderCompilingThreads =
             (int)ROUND((__real_3f800000 / local_5c + __real_3f800000 / local_5c) * fVar5 +
                        __real_3f000000) >> 1;
        FConfigCacheIni::GetBool
                  (GConfig,L"DevOptions.Shaders",L"bUseVirtualCores",local_res8,&GEngineIni);
        if (local_res8[0] != false) {
          param_1 = param_2;
        }
        uVar3 = param_1 - 1U;
        if (this->NumShaderCompilingThreads < param_1 - 1U) {
          uVar3 = this->NumShaderCompilingThreads;
        }
        uVar4 = 1;
        if (1 < uVar3) {
          uVar4 = uVar3;
        }
        this->NumShaderCompilingThreads = uVar4;
        uVar3 = this->NumShaderCompilingThreadsDuringGame;
        if ((int)uVar4 < (int)this->NumShaderCompilingThreadsDuringGame) {
          uVar3 = uVar4;
        }
        this->NumShaderCompilingThreadsDuringGame = uVar3;
      }
    }
    else if ((local_res18[0] != false) && (2 < (byte)LogShaderCompilers._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    if (GIsBuildMachine != false) {
      GCrashOnHungShaderMaps = 1;
    }
  }
  uVar3 = this->NumShaderCompilingThreads;
  uVar4 = this->NumShaderCompilingThreadsDuringGame;
  if ((int)uVar3 < 1) {
    uVar3 = 1;
  }
  this->NumShaderCompilingThreads = uVar3;
  if ((int)uVar4 < 1) {
    uVar4 = 1;
  }
  if ((int)uVar4 < (int)uVar3) {
    uVar3 = uVar4;
  }
  this->NumShaderCompilingThreadsDuringGame = uVar3;
  return;
}

// CancelCompilation @ 14851a580

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::CancelCompilation
          (FShaderCompilingManager *this,wchar_t *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined1 *puVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  uint local_58 [2];
  longlong local_50;
  LPCRITICAL_SECTION local_48;
  
  bVar4 = AllowShaderCompiling();
  if (bVar4) {
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                           ,0xa4d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FPlatformProperties::RequiresCookedData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                       ,0xa4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CompileQueueSection;
    local_48 = lpCriticalSection;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    iVar6 = param_2->ArrayNum;
    uVar13 = 0;
    if (0 < iVar6) {
      local_50 = 0;
      uVar10 = uVar13;
      do {
        lVar12 = local_50;
        uVar5 = 0;
        if ((int)uVar13 < iVar6) {
          uVar5 = ~uVar13 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)((param_2->AllocatorInstance).Data + lVar12);
        if (*(int *)&(this->ShaderMapJobs).field_0x8 != *(int *)&(this->ShaderMapJobs).field_0x34) {
          puVar7 = *(undefined1 **)&(this->ShaderMapJobs).field_0x40;
          puVar9 = &(this->ShaderMapJobs).field_0x38;
          if (puVar7 != (undefined1 *)0x0) {
            puVar9 = puVar7;
          }
          iVar6 = *(int *)(puVar9 + (ulonglong)
                                    (*(int *)&(this->ShaderMapJobs).field_0x48 - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              lVar1 = *(longlong *)&this->ShaderMapJobs + (longlong)iVar6 * 0x18;
              if (*(uint *)(*(longlong *)&this->ShaderMapJobs + (longlong)iVar6 * 0x18) == uVar5) {
                plVar11 = (longlong *)(lVar1 + 8);
                if (lVar1 == 0) {
                  plVar11 = (longlong *)0x0;
                }
                lVar12 = local_50;
                if (plVar11 != (longlong *)0x0) {
                  iVar6 = FShaderJobCache::RemoveAllPendingJobsWithId
                                    ((this->AllJobs).JobsCache.Ptr,uVar5);
                  lVar1 = *plVar11;
                  uVar10 = uVar10 + iVar6;
                  piVar8 = (int *)(lVar1 + 0x20);
                  if (lVar1 == 0) {
                    piVar8 = (int *)&DAT_00000010;
                  }
                  LOCK();
                  iVar2 = *piVar8;
                  *piVar8 = *piVar8 - iVar6;
                  UNLOCK();
                  if ((iVar2 < iVar6) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("PrevNumPendingJobs >= NumJobsRemoved",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                                         ,0xa5f,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  puVar7 = (undefined1 *)(lVar1 + 0x25);
                  if (lVar1 == 0) {
                    puVar7 = &DAT_00000015;
                  }
                  *puVar7 = 1;
                  lVar12 = local_50;
                  if (iVar2 == iVar6) {
                    piVar8 = (int *)(lVar1 + 0x18);
                    if (lVar1 == 0) {
                      piVar8 = (int *)&DAT_00000008;
                    }
                    if (*piVar8 == 0) {
                      TMapBase<int,TRefCountPtr<FPendingShaderMapCompileResults>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>_>
                      ::Remove((TMapBase<int,TRefCountPtr<FPendingShaderMapCompileResults>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>_>
                                *)&this->ShaderMapJobs,uVar5);
                      lVar12 = local_50;
                    }
                  }
                }
                break;
              }
              iVar6 = *(int *)(lVar1 + 0x10);
            } while (iVar6 != -1);
          }
        }
        local_58[0] = uVar5;
        if (*(int *)&(this->PendingFinalizeShaderMaps).field_0x8 !=
            *(int *)&(this->PendingFinalizeShaderMaps).field_0x34) {
          TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
                             *)&this->PendingFinalizeShaderMaps,uVar5,(int *)local_58);
        }
        lpCriticalSection = local_48;
        iVar6 = param_2->ArrayNum;
        local_50 = lVar12 + 4;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar6);
      if ((0 < (int)uVar10) && (3 < (byte)LogShaders._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// CreateShaderDebugInfoPath @ 148520480

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
FShaderCompilingManager::CreateShaderDebugInfoPath
          (FShaderCompilingManager *this,FString *__return_storage_ptr__,
          FShaderCompilerInput *param_1)

{
  FShaderCompilerInput::GetOrCreateShaderDebugInfoPath(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DumpDebugInfoForEachPendingJob @ 148522970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::DumpDebugInfoForEachPendingJob
          (FShaderCompilingManager *this,TFunction<bool___cdecl(FShaderCommonCompileJob_*)> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined ***pppuVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  code *local_68 [2];
  undefined **local_58;
  FShaderCompilingManager *local_50;
  TFunction<bool___cdecl(FShaderCommonCompileJob_*)> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (*(longlong *)param_1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingJobCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                       ,0xacf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = (this->Threads).AllocatorInstance.Data;
  iVar2 = (this->Threads).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Threads).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_78);
    }
    if (pFVar6 == pFVar1) break;
    local_40 = (undefined ***)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FShaderCompilingManager::DumpDebugInfoForEachPendingJob'::`13'::<lambda_1>,0,0>
                ::_vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FShaderCompilingManager::DumpDebugInfoForEachPendingJob'::__l13::<lambda_1>,bool,FShaderCommonCompileJob_*>
                  ::Call;
    local_50 = this;
    local_48 = param_1;
    (**(code **)(**(longlong **)pFVar6 + 0x60))(*(longlong **)pFVar6,local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar5 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar5 = local_40;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// FindRemoteCompilerController @ 148525fb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

IDistributedBuildController * __thiscall
FShaderCompilingManager::FindRemoteCompilerController(FShaderCompilingManager *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  IDistributedBuildController *pIVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  longlong lVar10;
  IDistributedBuildController *pIVar11;
  IDistributedBuildController *pIVar12;
  IDistributedBuildController *pIVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  IDistributedBuildController *pIVar16;
  undefined1 local_res10 [8];
  IDistributedBuildController *local_58;
  ForAnyElementType local_50;
  int local_48;
  int iStack_44;
  FString local_40;
  
  bVar6 = AllowShaderCompiling();
  if (!bVar6) {
    return (IDistributedBuildController *)0x0;
  }
  pIVar9 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName_const&___ptr64___cdecl_IDistributedBuildController::GetModularFeatureType(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_IDistributedBuildController::GetModularFeatureType(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName_const&___ptr64___cdecl_IDistributedBuildController::GetModularFeatureType(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_IDistributedBuildController::GetModularFeatureType(void)'
                    ::__l2::FeatureTypeName,L"DistributedBuildController");
    _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_IDistributedBuildController::GetModularFeatureType(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar5 = `public:_static_class_FName_const&___ptr64___cdecl_IDistributedBuildController::GetModularFeatureType(void)'
          ::__l2::FeatureTypeName;
  pIVar11 = (IDistributedBuildController *)0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  iStack_44 = 0;
  iVar8 = (**(code **)((longlong)*pIVar9 + 0x18))
                    (pIVar9,`public:_static_class_FName_const&___ptr64___cdecl_IDistributedBuildController::GetModularFeatureType(void)'
                            ::__l2::FeatureTypeName);
  pIVar13 = pIVar11;
  if (0 < iVar8) {
    do {
      lVar10 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar5,pIVar13);
      local_58 = (IDistributedBuildController *)(lVar10 + -8);
      if (lVar10 == 0) {
        local_58 = pIVar11;
      }
      if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)iStack_44 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pIVar11 = (IDistributedBuildController *)(*pcVar4)();
        return pIVar11;
      }
      if (local_48 == iStack_44) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_50,&iStack_44);
      }
      iVar1 = local_48 + 1;
      uVar14 = (int)pIVar13 + 1;
      *(IDistributedBuildController **)(local_50.Data + (longlong)local_48 * 8) = local_58;
      pIVar13 = (IDistributedBuildController *)(ulonglong)uVar14;
      local_48 = iVar1;
    } while ((int)uVar14 < iVar8);
  }
  iVar8 = local_48;
  pFVar2 = local_50.Data + (longlong)local_48 * 8;
  pIVar13 = pIVar11;
  FVar15.Data = local_50.Data;
  pIVar16 = pIVar11;
  while( true ) {
    if (local_48 != iVar8) {
      `TCheckedPointerIterator<IDistributedBuildController_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar15.Data == pFVar2) break;
    pIVar3 = *(IDistributedBuildController **)FVar15.Data;
    if ((pIVar3 != (IDistributedBuildController *)0x0) &&
       (cVar7 = (**(code **)((longlong)*pIVar3 + 0x60))(pIVar3), cVar7 != '\0')) {
      (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,&local_40);
      bVar6 = ::FString::StartsWith(&local_40,L"UBA",3,IgnoreCase);
      if (bVar6) {
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        pIVar12 = (IDistributedBuildController *)&DAT_00000002;
      }
      else {
        bVar6 = ::FString::StartsWith(&local_40,L"XGE",3,IgnoreCase);
        if (bVar6) {
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
          pIVar12 = (IDistributedBuildController *)&DAT_00000001;
        }
        else {
          pIVar12 = pIVar11;
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
        }
      }
      if ((pIVar13 == (IDistributedBuildController *)0x0) || ((uint)pIVar16 < (uint)pIVar12)) {
        pIVar13 = pIVar3;
        pIVar16 = pIVar12;
      }
    }
    FVar15.Data = FVar15.Data + 8;
  }
  if (pIVar13 != (IDistributedBuildController *)0x0) {
    (**(code **)((longlong)*pIVar13 + 0x58))(pIVar13);
    pIVar11 = pIVar13;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pIVar11;
}

// FindShaderCompilingThread @ 1485264d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FShaderCompileThreadRunnableBase * __thiscall
FShaderCompilingManager::FindShaderCompilingThread
          (FShaderCompilingManager *this,EShaderCompilerWorkerType param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EShaderCompilerWorkerType EVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Threads).AllocatorInstance.Data;
  iVar2 = (this->Threads).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Threads).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    EVar3 = (**(code **)(**(longlong **)pFVar4 + 0x50))();
    if (EVar3 == param_1) {
      return *(FShaderCompileThreadRunnableBase **)pFVar4;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (FShaderCompileThreadRunnableBase *)0x0;
}

// FinishAllCompilation @ 148526550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderCompilingManager::FinishAllCompilation(FShaderCompilingManager *this)

{
  undefined1 *puVar1;
  TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2734,"FShaderCompilingManager::FinishAllCompilation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
               ,0xaae);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2734);
  }
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0xaaf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!FPlatformProperties::RequiresCookedData()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                     ,0xab0,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  QueryPerformanceCounter(&local_98);
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  this_00 = &this->PendingFinalizeShaderMaps;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
  ::Append<FDefaultSetAllocator>
            ((TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
              *)local_88,this_00);
  bVar4 = 1 < *(int *)&(this->PendingFinalizeShaderMaps).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->PendingFinalizeShaderMaps).field_0x8);
  puVar1 = &(this->PendingFinalizeShaderMaps).field_0xc;
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x34 = 0;
  iVar2 = *(int *)&(this->PendingFinalizeShaderMaps).field_0x2c;
  *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingFinalizeShaderMaps).field_0x10
               ,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x48 = 1;
    TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
              *)this_00);
  }
  BlockOnAllShaderMapCompletion
            (this,(TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
                   *)local_88);
  AllowShaderCompiling();
  if ((local_88._8_4_ != local_54) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompiledShaderMaps.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0xac0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  QueryPerformanceCounter(&local_90);
  if (5 < (byte)LogShaders._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FinishCompilation @ 148526870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::FinishCompilation
          (FShaderCompilingManager *this,wchar_t *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  bool bVar7;
  undefined1 auStackY_1f8 [32];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1c8
  ;
  FText local_1b8;
  LARGE_INTEGER local_1a8;
  LARGE_INTEGER local_1a0;
  FString local_198;
  FFormatArgumentValue local_188;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FTextFormat local_118;
  FSlowTask local_108;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2680,"FShaderCompilingManager::FinishCompilation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
               ,0xa78);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2680);
  }
  bVar4 = AllowShaderCompiling();
  if (bVar4) {
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                           ,0xa80,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FPlatformProperties::RequiresCookedData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                       ,0xa81,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    QueryPerformanceCounter(&local_1a8);
    FText::FText(&local_1b8);
    if (param_1 == (wchar_t *)0x0) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_138,L"ShaderCompilingManager",L"CompilingShadersStatus",
                          L"Compiling shaders...");
      FText::operator=(&local_1b8,pFVar5);
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
    }
    else {
      local_1c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Pairs.ArrayNum = 0;
      local_1c8.Pairs.ArrayMax = 0;
      pFVar5 = FText::FromString(&local_168,param_1);
      local_188.Type = Text;
      FText::FText((FText *)&local_188.TextValue,pFVar5);
      if ((local_188.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_198,L"MaterialName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1c8,&local_198,&local_188);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_188.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_188.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_148,L"ShaderCompilingManager",L"CompilingShadersForMaterialStatus",
                          L"Compiling shaders: {MaterialName}...");
      pFVar6 = FTextFormat::FTextFormat(&local_118,pFVar5,Default);
      pFVar5 = FText::Format(&local_158,pFVar6,&local_1c8);
      FText::operator=(&local_1b8,pFVar5);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1c8.Pairs.AllocatorInstance.Data,
                 local_1c8.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_1c8.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_1c8.Pairs.AllocatorInstance.Data);
      }
    }
    FSlowTask::FSlowTask(&local_108,__real_3f800000,&local_1b8,false,GWarn);
    FSlowTask::Initialize(&local_108);
    pFVar5 = FText::FText(&local_128);
    FSlowTask::EnterProgressFrame(&local_108,__real_3f800000,pFVar5);
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    this_00 = &this->PendingFinalizeShaderMaps;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
    ::Append<FDefaultSetAllocator>
              ((TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
                *)local_a8,this_00);
    bVar4 = 1 < *(int *)&(this->PendingFinalizeShaderMaps).field_0x48;
    if (!bVar4) {
      TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PendingFinalizeShaderMaps).field_0x8);
    puVar1 = &(this->PendingFinalizeShaderMaps).field_0xc;
    *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x34 = 0;
    iVar2 = *(int *)&(this->PendingFinalizeShaderMaps).field_0x2c;
    *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PendingFinalizeShaderMaps).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->PendingFinalizeShaderMaps).field_0x48 = 1;
      TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
                *)this_00);
    }
    BlockOnShaderMapCompletion
              (this,param_2,
               (TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
                *)local_a8);
    AllowShaderCompiling();
    if ((local_a8._8_4_ != local_74) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompiledShaderMaps.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                           ,0xaa0,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    QueryPerformanceCounter(&local_1a0);
    if (5 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a8,0,local_a8._8_4_);
    iVar2 = SUB84(local_a8._8_8_,4);
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
    }
    local_74 = 0;
    local_80 = 0;
    local_78 = 0xffffffff;
    if (0x80 < local_7c) {
      local_7c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    FSlowTask::Destroy(&local_108);
    if (local_108.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.FrameMessage.TextData.Reference + 0x10))();
    }
    if (local_108.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.DefaultMessage.TextData.Reference + 0x10))();
    }
    if (local_1b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetAssetNameFormat @ 148529110

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall
FShaderCompilingManager::GetAssetNameFormat
          (FShaderCompilingManager *this,FTextFormat *__return_storage_ptr__)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"ShaderCompiler",L"ShaderNameFormat",
                      L"{0}|plural(one=Shader,other=Shaders)");
  FTextFormat::FTextFormat(__return_storage_ptr__,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetAssetTypeName @ 148529170

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall FShaderCompilingManager::GetAssetTypeName(FShaderCompilingManager *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"UE-Shader");
  return in_RDX;
}

// GetDependentTypeNames @ 14852a370

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TArrayView<FName,int> * __thiscall
FShaderCompilingManager::GetDependentTypeNames
          (FShaderCompilingManager *this,TArrayView<FName,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FName *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetDumpShaderDebugInfo @ 14852a3b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EDumpShaderDebugInfo __thiscall
FShaderCompilingManager::GetDumpShaderDebugInfo(FShaderCompilingManager *this)

{
  EDumpShaderDebugInfo EVar1;
  
  EVar1 = Never;
  if (GDumpShaderDebugInfo < 4) {
    EVar1 = GDumpShaderDebugInfo;
  }
  return EVar1;
}

// GetDumpShaderDebugInfoFlags @ 14852a3d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EShaderDebugInfoFlags __thiscall
FShaderCompilingManager::GetDumpShaderDebugInfoFlags(FShaderCompilingManager *this)

{
  TConsoleVariableData<bool> *pTVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  EShaderDebugInfoFlags EVar6;
  EShaderDebugInfoFlags EVar7;
  
  pTVar1 = CVarDebugDumpJobInputHashes.Ref;
  bVar3 = IsInParallelGameThread();
  lVar5 = 1;
  if (bVar3) {
LAB_14852a406:
    lVar4 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    if (bVar3) goto LAB_14852a406;
    lVar4 = 1;
  }
  pTVar2 = CVarDebugDumpJobDiagnostics.Ref;
  EVar6 = -(pTVar1->ShadowedValue[lVar4] != false) & InputHash;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_14852a433:
    lVar4 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    if (bVar3) goto LAB_14852a433;
    lVar4 = 1;
  }
  pTVar1 = CVarDebugDumpShaderCode.Ref;
  EVar7 = EVar6 | Diagnostics;
  if (pTVar2->ShadowedValue[lVar4] == false) {
    EVar7 = EVar6;
  }
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_14852a467:
    lVar4 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    if (bVar3) goto LAB_14852a467;
    lVar4 = 1;
  }
  pTVar2 = CVarDebugDumpShaderCodePlatformHashes.Ref;
  EVar6 = EVar7 | ShaderCodeBinary;
  if (pTVar1->ShadowedValue[lVar4] == false) {
    EVar6 = EVar7;
  }
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_14852a49b:
    lVar4 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    if (bVar3) goto LAB_14852a49b;
    lVar4 = 1;
  }
  pTVar1 = CVarDebugDumpDetailedShaderSource.Ref;
  EVar7 = EVar6 | ShaderCodePlatformHashes;
  if (pTVar2->ShadowedValue[lVar4] == false) {
    EVar7 = EVar6;
  }
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) goto LAB_14852a4cc;
  }
  lVar5 = 0;
LAB_14852a4cc:
  EVar6 = EVar7 | DetailedSource;
  if (pTVar1->ShadowedValue[lVar5] == false) {
    EVar6 = EVar7;
  }
  return EVar6;
}

// GetExternalMemoryUsage @ 14852a630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FShaderCompileMemoryUsage * __thiscall
FShaderCompilingManager::GetExternalMemoryUsage
          (FShaderCompilingManager *this,FShaderCompileMemoryUsage *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  __return_storage_ptr__->VirtualMemory = 0;
  __return_storage_ptr__->PhysicalMemory = 0;
  pFVar3 = (this->Threads).AllocatorInstance.Data;
  iVar2 = (this->Threads).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Threads).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x38))(*(longlong **)pFVar3,&local_30);
    __return_storage_ptr__->VirtualMemory = __return_storage_ptr__->VirtualMemory + local_30;
    __return_storage_ptr__->PhysicalMemory = __return_storage_ptr__->PhysicalMemory + local_28;
    pFVar3 = pFVar3 + 8;
  }
  return __return_storage_ptr__;
}

// GetLocalStats @ 14852b620

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::GetLocalStats(FShaderCompilingManager *this,FShaderCompilerStats *param_1)

{
  FShaderJobCache *this_00;
  ulong64 uVar1;
  
  if (GShaderCompilerStats != (FShaderCompilerStats *)0x0) {
    FShaderCompilerStats::Aggregate(param_1,GShaderCompilerStats);
    this_00 = (this->AllJobs).JobsCache.Ptr;
    AcquireSRWLockShared((PSRWLOCK)&this_00->JobLock);
    (param_1->Counters).TotalCacheSearchAttempts = this_00->TotalSearchAttempts;
    (param_1->Counters).TotalCacheHits = this_00->TotalCacheHits;
    (param_1->Counters).TotalCacheDuplicates = (uint)this_00->TotalCacheDuplicates;
    (param_1->Counters).TotalCacheDDCQueries = (uint)this_00->TotalCacheDDCQueries;
    (param_1->Counters).TotalCacheDDCHits = (uint)this_00->TotalCacheDDCHits;
    (param_1->Counters).UniqueCacheInputHashes = (longlong)(this_00->InputHashToJobData).NumItems;
    (param_1->Counters).UniqueCacheOutputs =
         (longlong)(*(int *)&(this_00->Outputs).field_0x8 - *(int *)&(this_00->Outputs).field_0x34);
    (param_1->Counters).CacheMemUsed = this_00->CurrentlyAllocatedMemory;
    uVar1 = FShaderJobCache::GetCurrentMemoryBudget(this_00);
    (param_1->Counters).CacheMemBudget = uVar1;
    ReleaseSRWLockShared((PSRWLOCK)&this_00->JobLock);
  }
  return;
}

// GetNumOutstandingJobs @ 14852bb00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall FShaderCompilingManager::GetNumOutstandingJobs(FShaderCompilingManager *this)

{
  return (((this->AllJobs).JobsCache.Ptr)->NumOutstandingJobs).Counter;
}

// GetNumPendingJobs @ 14852bbc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall FShaderCompilingManager::GetNumPendingJobs(FShaderCompilingManager *this)

{
  FShaderJobCache *pFVar1;
  atomic<int> *paVar2;
  longlong lVar3;
  TStaticArray<std::atomic<int>,5,4294967295> *pTVar4;
  int iVar5;
  
  pFVar1 = (this->AllJobs).JobsCache.Ptr;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->JobLock);
  iVar5 = 0;
  pTVar4 = &pFVar1->NumPendingJobs;
  lVar3 = 5;
  do {
    paVar2 = pTVar4->Elements;
    pTVar4 = (TStaticArray<std::atomic<int>,5,4294967295> *)(pTVar4->Elements + 1);
    iVar5 = iVar5 + (int)*paVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->JobLock);
  return iVar5;
}

// GetNumRemainingAssets @ 14852bcb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall FShaderCompilingManager::GetNumRemainingAssets(FShaderCompilingManager *this)

{
  FPlatformRWLock *SRWLock;
  FShaderJobCache *pFVar1;
  atomic<int> *paVar2;
  longlong lVar3;
  int iVar4;
  TStaticArray<std::atomic<int>,5,4294967295> *pTVar5;
  int iVar6;
  int iVar7;
  
  if ((((((this->AllJobs).JobsCache.Ptr)->NumOutstandingJobs).Counter < 1) &&
      (*(int *)&(this->ShaderMapJobs).field_0x8 - *(int *)&(this->ShaderMapJobs).field_0x34 < 1)) &&
     (*(int *)&(this->PendingFinalizeShaderMaps).field_0x8 -
      *(int *)&(this->PendingFinalizeShaderMaps).field_0x34 < 1)) {
    pFVar1 = (this->AllJobs).JobsCache.Ptr;
    SRWLock = &pFVar1->JobLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    iVar7 = 0;
    lVar3 = 5;
    iVar4 = 0;
    pTVar5 = &pFVar1->NumPendingJobs;
    do {
      paVar2 = pTVar5->Elements;
      pTVar5 = (TStaticArray<std::atomic<int>,5,4294967295> *)(pTVar5->Elements + 1);
      iVar4 = iVar4 + (int)*paVar2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if ((iVar4 < 1) && (this->NumExternalJobs < 1)) goto LAB_14852bd61;
  }
  iVar7 = 1;
LAB_14852bd61:
  iVar4 = ((*(int *)&(this->PendingFinalizeShaderMaps).field_0x8 -
           *(int *)&(this->ShaderMapJobs).field_0x34) + *(int *)&(this->ShaderMapJobs).field_0x8) -
          *(int *)&(this->PendingFinalizeShaderMaps).field_0x34;
  iVar6 = this->NumExternalJobs + (((this->AllJobs).JobsCache.Ptr)->NumOutstandingJobs).Counter;
  if (iVar4 < iVar6) {
    iVar4 = iVar6;
  }
  if (iVar7 < iVar4) {
    iVar7 = iVar4;
  }
  return iVar7;
}

// GetStaticAssetTypeName @ 14852d0b0

FName __cdecl FShaderCompilingManager::GetStaticAssetTypeName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"UE-Shader");
  return in_RCX;
}

// HandlePotentialRetry @ 14852f620

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FShaderCompilingManager::HandlePotentialRetry
          (FShaderCompilingManager *this,
          TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
          *param_1)

{
  return false;
}

// IsCompilingShaderMap @ 148531fe0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FShaderCompilingManager::IsCompilingShaderMap(FShaderCompilingManager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  FShaderMapCompileResults *pFVar4;
  undefined1 *puVar5;
  
  if (param_1 != 0) {
    lpCriticalSection = &this->CompileQueueSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->ShaderMapJobs).field_0x8 != *(int *)&(this->ShaderMapJobs).field_0x34) {
      puVar5 = *(undefined1 **)&(this->ShaderMapJobs).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->ShaderMapJobs).field_0x38;
      }
      iVar2 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->ShaderMapJobs).field_0x48 - 1U & param_1) * 4);
      if (iVar2 != -1) {
        do {
          lVar1 = *(longlong *)&this->ShaderMapJobs + (longlong)iVar2 * 0x18;
          if (*(uint *)(*(longlong *)&this->ShaderMapJobs + (longlong)iVar2 * 0x18) == param_1) {
            lVar3 = lVar1 + 8;
            if (lVar1 == 0) {
              lVar3 = 0;
            }
            if (lVar3 != 0) goto LAB_14853207f;
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x10);
        } while (iVar2 != -1);
      }
    }
    pFVar4 = TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
             ::Find((TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
                     *)&this->PendingFinalizeShaderMaps,param_1);
    if (pFVar4 != (FShaderMapCompileResults *)0x0) {
LAB_14853207f:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return false;
}

// IsShaderCompilerWorkerRunning @ 148532da0

bool __cdecl FShaderCompilingManager::IsShaderCompilerWorkerRunning(FProcHandle *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject((HANDLE)*param_1,0);
  return DVar1 == 0x102;
}

// LaunchLocalShaderCompilingThread @ 148532e00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShaderCompileThreadRunnableBase * __thiscall
FShaderCompilingManager::LaunchLocalShaderCompilingThread
          (FShaderCompilingManager *this,bool param_1)

{
  FShaderCompileThreadRunnableBase *pFVar1;
  FShaderCompileThreadRunnable *this_00;
  uint local_res18 [2];
  TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>
  local_res20;
  
  pFVar1 = FindShaderCompilingThread(this,LocalThread);
  if (pFVar1 == (FShaderCompileThreadRunnableBase *)0x0) {
    if (3 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    this_00 = ::operator_new(0xa8);
    local_res20.Ptr = (FShaderCompileThreadRunnableBase *)0x0;
    if (this_00 != (FShaderCompileThreadRunnable *)0x0) {
      local_res20.Ptr =
           (FShaderCompileThreadRunnableBase *)
           FShaderCompileThreadRunnable::FShaderCompileThreadRunnable(this_00,this);
    }
    if (GIsBuildMachine != false) {
      local_res18[0] = 8;
      FConfigCacheIni::GetInt
                (GConfig,L"DevOptions.Shaders",L"MinSCWsToSpawnBeforeWarning",(int *)local_res18,
                 &GEngineIni);
      if ((this->NumShaderCompilingThreads < local_res18[0]) && (2 < (byte)LogShaderCompilers._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      }
    }
    pFVar1 = LaunchShaderCompilingThread(this,&local_res20,param_1);
    if ((FShaderCompileThreadRunnable *)local_res20.Ptr != (FShaderCompileThreadRunnable *)0x0) {
      (**(code **)((local_res20.Ptr)->_padding_ + 0x28))(local_res20.Ptr,1);
    }
  }
  return pFVar1;
}

// LaunchRemoteShaderCompilingThread @ 148532f20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShaderCompileThreadRunnableBase * __thiscall
FShaderCompilingManager::LaunchRemoteShaderCompilingThread
          (FShaderCompilingManager *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  FShaderCompileThreadRunnableBase *pFVar4;
  IDistributedBuildController *pIVar5;
  FShaderCompileDistributedThreadRunnable_Interface *this_00;
  wchar_t *pwVar6;
  FStaticBasicLogRecord *pFVar7;
  longlong lVar8;
  TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>
  local_res18 [2];
  void *local_18 [2];
  
  pFVar4 = FindShaderCompilingThread(this,Distributed);
  if (pFVar4 != (FShaderCompileThreadRunnableBase *)0x0) {
    return pFVar4;
  }
  if (this->bAllowCompilingThroughWorkers != false) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pwVar6 = FCommandLine::Get();
      bDisabledFromCommandline = FParse::Param(pwVar6,L"NoRemoteShaderCompile");
      _Init_thread_footer(&::_TSS0);
    }
    if (((bDisabledFromCommandline == false) && (GShaderCompilerAllowDistributedCompilation != 0))
       && (bVar1 = AllTargetPlatformSupportsRemoteShaderCompiling(this), bVar1)) {
      pIVar5 = FindRemoteCompilerController(this);
      this->BuildDistributionController = pIVar5;
      if (pIVar5 != (IDistributedBuildController *)0x0) {
        lVar8 = 0x104;
        if (this->bCompilingDuringGame == false) {
          lVar8 = 0x100;
        }
        (**(code **)((longlong)*pIVar5 + 0x50))
                  (pIVar5,*(undefined4 *)
                           ((longlong)(this->CompileQueueSection).CriticalSection.Opaque1 +
                           lVar8 + -0x68));
        if (3 < (byte)LogShaderCompilers._0_1_) {
          (**(code **)((longlong)*this->BuildDistributionController + 0x68))
                    (this->BuildDistributionController,local_18);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
          if (local_18[0] != (void *)0x0) {
            FMemory::Free(local_18[0]);
          }
        }
        pIVar5 = this->BuildDistributionController;
        this_00 = ::operator_new(0xd8);
        local_res18[0].Ptr = (FShaderCompileThreadRunnableBase *)0x0;
        if (this_00 != (FShaderCompileDistributedThreadRunnable_Interface *)0x0) {
          local_res18[0].Ptr =
               (FShaderCompileThreadRunnableBase *)
               FShaderCompileDistributedThreadRunnable_Interface::
               FShaderCompileDistributedThreadRunnable_Interface(this_00,this,pIVar5);
        }
        pwVar6 = FCommandLine::Get();
        bVar1 = FParse::Param(pwVar6,L"ExclusiveRemoteShaderCompiling");
        cVar2 = (**(code **)((longlong)*this->BuildDistributionController + 0x40))();
        if ((cVar2 != '\0') || (bVar3 = false, bVar1)) {
          bVar3 = true;
        }
        this->bUseOnlyDistributedCompilationThread = bVar3;
        pFVar4 = LaunchShaderCompilingThread(this,local_res18,param_1);
        if ((FShaderCompileDistributedThreadRunnable_Interface *)local_res18[0].Ptr !=
            (FShaderCompileDistributedThreadRunnable_Interface *)0x0) {
          (**(code **)((local_res18[0].Ptr)->_padding_ + 0x28))(local_res18[0].Ptr,1);
        }
        return pFVar4;
      }
      if ((byte)LogShaderCompilers._0_1_ < 4) {
        return (FShaderCompileThreadRunnableBase *)0x0;
      }
      pFVar7 = &::LOG_Static;
      goto LAB_14853310d;
    }
  }
  this->BuildDistributionController = (IDistributedBuildController *)0x0;
  bVar1 = AllTargetPlatformSupportsRemoteShaderCompiling(this);
  if (bVar1) {
    if ((byte)LogShaderCompilers._0_1_ < 4) {
      return (FShaderCompileThreadRunnableBase *)0x0;
    }
    pFVar7 = &::LOG_Static;
  }
  else {
    if ((byte)LogShaderCompilers._0_1_ < 4) {
      return (FShaderCompileThreadRunnableBase *)0x0;
    }
    pFVar7 = &::LOG_Static;
  }
LAB_14853310d:
  UE::Logging::Private::BasicLog<4>(pFVar7,(FLogCategoryBase *)&LogShaderCompilers);
  return (FShaderCompileThreadRunnableBase *)0x0;
}

// LaunchShaderCompilingThread @ 148533170

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FShaderCompileThreadRunnableBase * __thiscall
FShaderCompilingManager::LaunchShaderCompilingThread
          (FShaderCompilingManager *this,
          TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>
          *param_1,bool param_2)

{
  int *piVar1;
  TArray<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  FShaderCompileThreadRunnableBase *this_00;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FShaderCompileThreadRunnableBase *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  
  if (!param_2) {
    FShaderCompileThreadRunnableBase::StartThread(param_1->Ptr);
  }
  pFVar8 = param_1->Ptr;
  pTVar2 = &this->Threads;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Threads).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FShaderCompileThreadRunnableBase *)(*pcVar4)();
    return pFVar8;
  }
  iVar7 = (this->Threads).ArrayNum;
  piVar1 = &(this->Threads).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Threads).ArrayNum = iVar7 + 1;
  *(FShaderCompileThreadRunnableBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
       param_1->Ptr;
  param_1->Ptr = (FShaderCompileThreadRunnableBase *)0x0;
  iVar7 = (this->Threads).ArrayNum;
  if (1 < iVar7) {
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar9 + (longlong)iVar7 * 8;
    while( true ) {
      if ((this->Threads).ArrayNum != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar3) break;
      this_00 = *(FShaderCompileThreadRunnableBase **)pFVar9;
      cVar6 = (**(code **)(this_00->_padding_ + 0x50))(this_00);
      if (cVar6 == '\0') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                           ,0x3f7,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FShaderCompileThreadRunnableBase *)(*pcVar4)();
          return pFVar8;
        }
LAB_1485332d8:
        pFVar9 = pFVar9 + 8;
      }
      else if (cVar6 == '\x01') {
        FShaderCompileThreadRunnableBase::SetPriorityRange(this_00,Normal,ForceLocal);
        pFVar9 = pFVar9 + 8;
      }
      else {
        if (cVar6 != '\x02') goto LAB_1485332d8;
        FShaderCompileThreadRunnableBase::SetPriorityRange(this_00,Low,ExtraHigh);
        pFVar9 = pFVar9 + 8;
      }
    }
  }
  return pFVar8;
}

// LaunchWorker @ 148533310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FProcHandle __thiscall
FShaderCompilingManager::LaunchWorker
          (FShaderCompilingManager *this,FString *param_1,uint param_2,uint param_3,FString *param_4
          ,FString *param_5,uint *param_6)

{
  bool bVar1;
  IFileManager *pIVar2;
  FString *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 in_register_00000084;
  undefined4 *in_stack_00000040;
  undefined1 auStackY_278 [32];
  uint7 in_stack_fffffffffffffdb1;
  undefined4 in_stack_fffffffffffffdc4;
  FString local_218;
  FString local_208;
  FString local_1f8;
  int local_1e8 [2];
  FString *local_1e0;
  FString local_1d8;
  TStringView<wchar_t> local_1c8;
  FScriptContainerElement *local_1b8;
  int local_1b0;
  FString local_1a8;
  FString local_198;
  FText local_188;
  FString local_178;
  FString local_168;
  FText local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TStringBuilderBase<wchar_t> local_f8;
  wchar_t local_d8 [64];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_5;
  local_1e0 = (FString *)param_6;
  bVar1 = AllowShaderCompiling();
  if (bVar1) {
    pIVar2 = IFileManager::Get();
    if (*(int *)((undefined8 *)CONCAT44(in_register_00000084,param_2) + 1) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)CONCAT44(in_register_00000084,param_2);
    }
    (**(code **)((longlong)*pIVar2 + 0x108))(pIVar2,&local_178,pwVar8);
    FPaths::NormalizeDirectoryName(&local_178);
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_218,(int)param_4);
    local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Data.ArrayNum = 0;
    local_1f8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_1f8,param_3);
    pFVar3 = ::FString::FString((FString *)&local_1c8,L"\"");
    ::FString::ConcatFF((FString *)&local_188,pFVar3,&local_178);
    ::FString::ConcatFC((FString *)&local_158,(FString *)&local_188,L"/\" ");
    ::FString::ConcatFF(&local_168,(FString *)&local_158,&local_1f8);
    ::FString::ConcatFC(&local_108,&local_168,L" ");
    ::FString::ConcatFF(&local_118,&local_108,&local_218);
    ::FString::ConcatFC(&local_128,&local_118,L" ");
    ::FString::ConcatFF(&local_138,&local_128,(FString *)local_1d8.Data.AllocatorInstance.Data);
    ::FString::ConcatFC(&local_148,&local_138,L" ");
    ::FString::ConcatFF(&local_208,&local_148,local_1e0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_158.TextData.Reference);
    }
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_188.TextData.Reference);
    }
    if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.DataPtr);
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    pFVar3 = ::FString::FString((FString *)&local_1c8,L" -communicatethroughfile ");
    iVar12 = (pFVar3->Data).ArrayNum;
    iVar10 = 0;
    iVar11 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar11 = iVar10;
    }
    ::FString::AppendChars(&local_208,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar11);
    if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.DataPtr);
    }
    if (GIsBuildMachine == false) {
      pwVar8 = L" -TimeToLive=%f";
    }
    else {
      pwVar8 = L" -TimeToLive=%f -buildmachine";
    }
    ::FString::PrintfImpl(&local_218,pwVar8);
    iVar12 = local_218.Data.ArrayNum + -1;
    if (local_218.Data.ArrayNum == 0) {
      iVar12 = iVar10;
    }
    ::FString::AppendChars(&local_208,(wchar_t *)local_218.Data.AllocatorInstance.Data,iVar12);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    local_f8.Base = local_d8;
    local_f8.bIsDynamic = false;
    local_f8.bIsExternal = false;
    local_f8.CurPos = local_d8;
    local_f8.End = (wchar_t *)local_58;
    FCommandLine::BuildSubprocessCommandLine(ProgramContext,false,&local_f8);
    ::FString::AppendChars
              (&local_208,local_f8.Base,
               (int)((longlong)local_f8.CurPos - (longlong)local_f8.Base >> 1));
    pFVar3 = ::FString::FString((FString *)&local_1c8,L" -nothreading ");
    iVar12 = (pFVar3->Data).ArrayNum;
    iVar11 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar11 = iVar10;
    }
    ::FString::AppendChars(&local_208,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar11);
    if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.DataPtr);
    }
    iVar12 = 0;
    if (GDebugDumpWorkerCrashLog != false) {
      ::FString::AppendChars(&local_208,L" -LogToMemory -DumpLogOnExitCrashOnly ",0x26);
      ::FString::PrintfImpl(&local_218,L"ShaderCompileWorker-%d.log");
      iVar11 = (this->WorkerCrashLogBaseDirectory).Data.ArrayNum;
      if (iVar11 < 2) {
        ::FString::PrintfImpl(&local_1f8,L"-Log=%s");
        iVar11 = local_1f8.Data.ArrayNum + -1;
        if (local_1f8.Data.ArrayNum == 0) {
          iVar11 = iVar12;
        }
        ::FString::AppendChars(&local_208,(wchar_t *)local_1f8.Data.AllocatorInstance.Data,iVar11);
        FVar7.Data = local_1f8.Data.AllocatorInstance.Data;
      }
      else {
        local_1c8.DataPtr =
             (wchar_t *)(this->WorkerCrashLogBaseDirectory).Data.AllocatorInstance.Data;
        local_1c8.Size = iVar11 + -1;
        local_1b8 = local_218.Data.AllocatorInstance.Data;
        local_1b0 = local_218.Data.ArrayNum + -1;
        if (local_218.Data.ArrayNum == 0) {
          local_1b0 = iVar12;
        }
        FPaths::CombineInternal(&local_1d8,&local_1c8,2);
        ::FString::PrintfImpl(&local_1f8,L"-AbsLog=%s");
        iVar11 = local_1f8.Data.ArrayNum + -1;
        if (local_1f8.Data.ArrayNum == 0) {
          iVar11 = iVar12;
        }
        ::FString::AppendChars(&local_208,(wchar_t *)local_1f8.Data.AllocatorInstance.Data,iVar11);
        FVar7.Data = local_1d8.Data.AllocatorInstance.Data;
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          FVar7.Data = local_1d8.Data.AllocatorInstance.Data;
        }
      }
      if (FVar7.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar7.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
    }
    local_1e8[0] = -1;
    FConfigCacheIni::GetInt
              (GConfig,L"DevOptions.Shaders",L"WorkerProcessPriority",local_1e8,&GEngineIni);
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    pwVar8 = FCommandLine::Get();
    bVar1 = FParse::Value(pwVar8,L"basedir=",&local_198,true,(wchar_t **)0x0);
    if (bVar1) {
      ::FString::PrintfImpl(&local_218,L"-basedir=%s");
      iVar11 = local_218.Data.ArrayNum + -1;
      if (local_218.Data.ArrayNum == 0) {
        iVar11 = iVar12;
      }
      ::FString::AppendChars(&local_208,(wchar_t *)local_218.Data.AllocatorInstance.Data,iVar11);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
    }
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    pwVar8 = FCommandLine::Get();
    bVar1 = FParse::Value(pwVar8,L"BaseFromWorkingDir=",&local_1a8,true,(wchar_t **)0x0);
    if (bVar1) {
      ::FString::PrintfImpl(&local_218,L"-BaseFromWorkingDir=%s");
      iVar11 = local_218.Data.ArrayNum + -1;
      if (local_218.Data.ArrayNum == 0) {
        iVar11 = iVar12;
      }
      ::FString::AppendChars(&local_208,(wchar_t *)local_218.Data.AllocatorInstance.Data,iVar11);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
    }
    local_1e0 = (FString *)((ulonglong)local_1e0 & 0xffffffff00000000);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_208.Data.ArrayNum != 0) {
      FVar7.Data = local_208.Data.AllocatorInstance.Data;
    }
    if ((this->ShaderCompileWorkerName).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(this->ShaderCompileWorkerName).Data.AllocatorInstance.Data;
    }
    FWindowsPlatformProcess::CreateProc
              ((wchar_t *)&local_1d8,pwVar8,SUB81(FVar7.Data,0),true,false,
               (uint *)((ulonglong)in_stack_fffffffffffffdb1 << 8),(int)&local_1e0,
               (wchar_t *)CONCAT44(in_stack_fffffffffffffdc4,local_1e8[0]),(void *)0x0,(void *)0x0);
    if (local_1d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      if (bFirstLaunch == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      }
      else {
        if (((bShowedMessageBox == false) && (PRIVATE_GIsRunningCommandlet == false)) &&
           (bVar1 = FApp::IsUnattended(), !bVar1)) {
          bShowedMessageBox = true;
          pFVar4 = FText::FromString(&local_158,&this->ShaderCompileWorkerName);
          pFVar5 = FText::AsLocalizable_Advanced_LocText
                             ((FText *)&local_1c8,L"ShaderCompiler",
                              L"LaunchingShaderCompileWorkerFailed",
                              L"Unable to launch {0} - make sure you built ShaderCompileWorker.");
          pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_168,pFVar5,Default);
          FText::Format<FText>(&local_188,pFVar6,pFVar4);
          if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
            (**(code **)(*(longlong *)local_1c8.DataPtr + 0x10))();
          }
          pFVar4 = FText::AsLocalizable_Advanced_LocText
                             ((FText *)&local_1c8,L"ShaderCompiler",
                              L"LaunchingShaderCompileWorkerFailedTitle",
                              L"Unable to launch ShaderCompileWorker.");
          pFVar3 = FText::ToString(pFVar4);
          if ((pFVar3->Data).ArrayNum == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
          }
          pFVar3 = FText::ToString(&local_188);
          if ((pFVar3->Data).ArrayNum == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
          }
          FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar9,pwVar8);
          if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
            (**(code **)(*(longlong *)local_1c8.DataPtr + 0x10))();
          }
          if (local_188.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
          }
        }
        if (1 < (byte)LogShaderCompilers._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"Couldn\'t launch %s! Make sure you build ShaderCompileWorker.\n");
        FWindowsPlatformMisc::RequestExitWithStatus(true,'\x01',(wchar_t *)0x0);
      }
    }
    else {
      if (in_stack_00000040 != (undefined4 *)0x0) {
        *in_stack_00000040 = local_1e0._0_4_;
      }
      bFirstLaunch = false;
    }
    (param_1->Data).AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_f8);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  else {
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  return (FProcHandle)param_1;
}

// OnDistributedShaderCompilingChanged @ 148534910

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::OnDistributedShaderCompilingChanged(FShaderCompilingManager *this)

{
  char cVar1;
  FShaderCompileThreadRunnableBase *pFVar2;
  
  if (this->BuildDistributionController != (IDistributedBuildController *)0x0) {
    cVar1 = (**(code **)((longlong)*this->BuildDistributionController + 0x40))();
    if ((this->bUseOnlyDistributedCompilationThread != false) && (cVar1 == '\0')) {
      pFVar2 = LaunchLocalShaderCompilingThread(this,false);
      if (pFVar2 != (FShaderCompileThreadRunnableBase *)0x0) {
        this->bUseOnlyDistributedCompilationThread = false;
      }
    }
  }
  return;
}

// OnMachineResourcesChanged @ 148534970

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::OnMachineResourcesChanged
          (FShaderCompilingManager *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IDistributedBuildController *pIVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  CalculateNumberOfCompilingThreads(this,param_1,param_2);
  pIVar3 = this->BuildDistributionController;
  if (pIVar3 != (IDistributedBuildController *)0x0) {
    lVar4 = 0x104;
    if (this->bCompilingDuringGame == false) {
      lVar4 = 0x100;
    }
    (**(code **)((longlong)*pIVar3 + 0x50))
              (pIVar3,*(undefined4 *)
                       ((longlong)(this->CompileQueueSection).CriticalSection.Opaque1 +
                       lVar4 + -0x68));
  }
  pFVar5 = (this->Threads).AllocatorInstance.Data;
  iVar2 = (this->Threads).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Threads).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar5 + 0x58))();
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// PreparePipelineCompileJob @ 14853a210

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderPipelineCompileJob * __thiscall
FShaderCompilingManager::PreparePipelineCompileJob
          (FShaderCompilingManager *this,uint param_1,FShaderPipelineCompileJobKey *param_2,
          EShaderCompileJobPriority param_3)

{
  FShaderCompilerJobTable *this_00;
  FShaderJobCache *this_01;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  FShaderPipelineCompileJob *pFVar4;
  FPlatformRWLock *SRWLock;
  
  bVar2 = AllowShaderCompiling();
  if (!bVar2) {
    return (FShaderPipelineCompileJob *)0x0;
  }
  this_01 = (this->AllJobs).JobsCache.Ptr;
  this_00 = &this_01->JobTable;
  uVar3 = FShaderPipelineCompileJobKey::MakeHash(param_2,param_1);
  SRWLock = &this_00->Stripes[1][uVar3 >> 0x1a].StripeLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar4 = FShaderCompilerJobTable::
           InternalFindJob<FShaderPipelineCompileJob,FShaderPipelineCompileJobKey>
                     (this_00,uVar3,param_1,param_2);
  bVar2 = false;
  if (pFVar4 == (FShaderPipelineCompileJob *)0x0) {
    pFVar4 = ::operator_new(0xd8);
    if (pFVar4 == (FShaderPipelineCompileJob *)0x0) {
      FShaderCompilerJobTable::InternalAddJob(this_00,(FShaderCommonCompileJob *)0x0);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return (FShaderPipelineCompileJob *)0x0;
    }
    pFVar4 = FShaderPipelineCompileJob::FShaderPipelineCompileJob
                       (pFVar4,uVar3,param_1,param_3,param_2);
    FShaderCompilerJobTable::InternalAddJob(this_00,(FShaderCommonCompileJob *)pFVar4);
    bVar1 = true;
    bVar2 = true;
    if (pFVar4 == (FShaderPipelineCompileJob *)0x0) goto LAB_14853a2f7;
  }
  bVar1 = bVar2;
  LOCK();
  *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
  UNLOCK();
LAB_14853a2f7:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (bVar1) {
    if (pFVar4 != (FShaderPipelineCompileJob *)0x0) {
      FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)pFVar4);
    }
  }
  else {
    if (*(EShaderCompileJobPriority *)((longlong)&pFVar4->_padding_ + 1) < param_3) {
      FShaderJobCache::InternalSetPriority(this_01,(FShaderCommonCompileJob *)pFVar4,param_3);
    }
    FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)pFVar4);
    pFVar4 = (FShaderPipelineCompileJob *)0x0;
  }
  return pFVar4;
}

// PrepareShaderCompileJob @ 14853a380

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderCompileJob * __thiscall
FShaderCompilingManager::PrepareShaderCompileJob
          (FShaderCompilingManager *this,uint param_1,FShaderCompileJobKey *param_2,
          EShaderCompileJobPriority param_3)

{
  FShaderCompilerJobTable *this_00;
  FShaderJobCache *this_01;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  FShaderCompileJob *pFVar4;
  FPlatformRWLock *SRWLock;
  
  bVar2 = AllowShaderCompiling();
  if (!bVar2) {
    return (FShaderCompileJob *)0x0;
  }
  this_01 = (this->AllJobs).JobsCache.Ptr;
  this_00 = &this_01->JobTable;
  uVar3 = FShaderCompileJobKey::MakeHash(param_2,param_1);
  SRWLock = &this_00->Stripes[0][uVar3 >> 0x1a].StripeLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar4 = FShaderCompilerJobTable::InternalFindJob<FShaderCompileJob,FShaderCompileJobKey>
                     (this_00,uVar3,param_1,param_2);
  bVar2 = false;
  if (pFVar4 == (FShaderCompileJob *)0x0) {
    pFVar4 = ::operator_new(0x800);
    if (pFVar4 == (FShaderCompileJob *)0x0) {
      FShaderCompilerJobTable::InternalAddJob(this_00,(FShaderCommonCompileJob *)0x0);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return (FShaderCompileJob *)0x0;
    }
    pFVar4 = FShaderCompileJob::FShaderCompileJob(pFVar4,uVar3,param_1,param_3,param_2);
    FShaderCompilerJobTable::InternalAddJob(this_00,(FShaderCommonCompileJob *)pFVar4);
    bVar1 = true;
    bVar2 = true;
    if (pFVar4 == (FShaderCompileJob *)0x0) goto LAB_14853a464;
  }
  bVar1 = bVar2;
  LOCK();
  *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
  UNLOCK();
LAB_14853a464:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (bVar1) {
    if (pFVar4 != (FShaderCompileJob *)0x0) {
      FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)pFVar4);
    }
  }
  else {
    if (*(EShaderCompileJobPriority *)((longlong)&pFVar4->_padding_ + 1) < param_3) {
      FShaderJobCache::InternalSetPriority(this_01,(FShaderCommonCompileJob *)pFVar4,param_3);
    }
    FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)pFVar4);
    pFVar4 = (FShaderCompileJob *)0x0;
  }
  return pFVar4;
}

// PrintStats @ 14853a4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FShaderCompilingManager::PrintStats(FShaderCompilingManager *this)

{
  FShaderJobCache *this_00;
  int iVar1;
  uint uVar2;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [40];
  undefined1 local_1e0 [32];
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  long64 local_198;
  long64 lStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  long64 local_148;
  long64 lStack_140;
  long64 local_138;
  long64 lStack_130;
  undefined8 local_128;
  ulong64 local_120;
  ulong64 local_118;
  undefined8 local_110;
  ulong64 local_108;
  ulong64 local_100;
  undefined8 local_f8;
  uint local_f0;
  ulong64 local_e8;
  ulong64 local_e0;
  ulong64 local_d8;
  ulong64 local_d0;
  undefined8 local_c8;
  FShaderCompilerMaterialCounters local_c0;
  ForAnyElementType local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  bool local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_238;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_208,4000);
  local_1b8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_1b0 = _UNK_150631d98;
  local_1a8 = 0.0;
  dStack_1a0 = 0.0;
  local_188 = 0.0;
  dStack_180 = 0.0;
  local_168 = 0.0;
  dStack_160 = 0.0;
  local_148 = 0;
  lStack_140 = 0;
  local_c0.MaterialTranslateTotalTimeSec = 0.0;
  local_c0.MaterialTranslateTranslationOnlyTimeSec = 0.0;
  local_c0.MaterialTranslateSerializationOnlyTimeSec = 0.0;
  local_1e0._0_8_ = (FScriptContainerElement *)0x0;
  local_1e0._8_8_ = 0;
  local_1c0 = (void *)0x0;
  local_198 = 0;
  lStack_190 = 0;
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_158 = 0.0;
  dStack_150 = 0.0;
  local_138 = 0;
  lStack_130 = 0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_120 = 0;
  local_118 = 0;
  local_110._0_4_ = 0;
  local_110._4_4_ = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0;
  local_c0.NumMaterialsCooked = 0;
  local_c0.MaterialTranslateCalls = 0;
  local_c0.MaterialCacheHits = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  local_28 = false;
  if (GShaderCompilerStats != (FShaderCompilerStats *)0x0) {
    FShaderCompilerStats::Aggregate((FShaderCompilerStats *)local_208,GShaderCompilerStats);
    this_00 = (this->AllJobs).JobsCache.Ptr;
    AcquireSRWLockShared((PSRWLOCK)&this_00->JobLock);
    local_108 = this_00->TotalSearchAttempts;
    local_100 = this_00->TotalCacheHits;
    local_f8._4_4_ = (uint)this_00->TotalCacheDDCQueries;
    local_f8._0_4_ = (uint)this_00->TotalCacheDuplicates;
    local_f0 = (uint)this_00->TotalCacheDDCHits;
    local_e8 = (ulong64)(this_00->InputHashToJobData).NumItems;
    local_e0 = (ulong64)(*(int *)&(this_00->Outputs).field_0x8 -
                        *(int *)&(this_00->Outputs).field_0x34);
    local_d8 = this_00->CurrentlyAllocatedMemory;
    local_d0 = FShaderJobCache::GetCurrentMemoryBudget(this_00);
    ReleaseSRWLockShared((PSRWLOCK)&this_00->JobLock);
  }
  FShaderCompilerStats::WriteStatSummary((FShaderCompilerStats *)local_208);
  DestructItems<FShaderCompilerStats::FWorkerDiagnosticsInfo,int>
            ((FWorkerDiagnosticsInfo *)local_38.Data,(int)local_30);
  if ((FWorkerDiagnosticsInfo *)local_38.Data != (FWorkerDiagnosticsInfo *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderTimings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FShaderTimings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
  ::DestroyElements((TSparseArray<TMap<FString,FShaderStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderStats,0>_>,FDefaultSparseArrayAllocator>
                     *)local_1e0,0,local_1e0._8_4_);
  iVar1 = SUB84(local_1e0._8_8_,4);
  local_1e0._8_8_ = local_1e0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_1e0,0,(int *)(local_1e0 + 0xc));
  }
  uVar2 = local_1b8._4_4_;
  local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
  uStack_1b0 = 0xffffffff;
  if (0x80 < uVar2) {
    local_1b8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e0 + 0x10),0);
  }
  if (local_1c0 != (void *)0x0) {
    FMemory::Free(local_1c0);
  }
  if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e0._0_8_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)local_208);
  return;
}

// ProcessAsyncResults @ 14853a8a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::ProcessAsyncResults
          (FShaderCompilingManager *this,float param_1,bool param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  IDistributedBuildController *pIVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FShaderMapCompileResults *pFVar11;
  ulonglong uVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  TMap<int,TRefCountPtr<FPendingShaderMapCompileResults>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>_>
  *pTVar13;
  uint uVar14;
  FShaderMapCompileResults *pFVar15;
  bool bVar16;
  FLLMScope local_res20 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  longlong *local_108;
  undefined1 auStack_100 [16];
  uint uStack_f0;
  uint uStack_ec;
  longlong local_e8;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_e0;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *local_d8;
  char local_d0;
  char cStack_cf;
  undefined4 local_c8;
  FName local_c4;
  LARGE_INTEGER local_b8;
  LPCRITICAL_SECTION local_b0;
  LARGE_INTEGER local_a8;
  FMemScope local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  *pTStack_70;
  
  FLLMScope::FLLMScope
            (local_res20,LLMTagDeclaration_ShaderCompiler.UniqueName,false,None,Default,true);
  local_c4 = LLMTagDeclaration_ShaderCompiler.UniqueName;
  FMemScope::FMemScope(&local_a0,&local_c4,true);
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2787,"FShaderCompilingManager::ProcessAsyncResults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
               ,0xae3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2787);
  }
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                         ,0xae6,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  QueryPerformanceCounter(&local_b8);
  if (param_2) {
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_118.AllocatorInstance,&local_118.ArrayMax);
    local_118.ArrayNum = iVar10 + 1;
    *(int *)(local_118.AllocatorInstance.Data + (longlong)iVar10 * 4) = GlobalShaderMapId;
    BlockOnShaderMapCompletion(GShaderCompilingManager,&local_118,&this->PendingFinalizeShaderMaps);
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  else {
    pIVar5 = this->BuildDistributionController;
    if (pIVar5 != (IDistributedBuildController *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,0);
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CompileQueueSection;
  local_b0 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (!param_2) {
    this->bCompilingDuringGame = true;
  }
  pTVar13 = &this->ShaderMapJobs;
  TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
              *)pTVar13);
  local_d0 = '\0';
  cStack_cf = '\0';
  stack0xffffffffffffff08 = local_98._16_16_;
  local_108 = (longlong *)local_98._0_8_;
  auStack_100._0_8_ = local_98._8_8_;
  local_e8 = local_78;
  pTStack_e0 = pTStack_70;
  uVar12 = local_98._24_8_ >> 0x20;
  local_d8 = (TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
              *)pTVar13;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      puVar4 = (uint *)(*local_108 + (longlong)(int)uVar12 * 0x18);
      if (0 < *(int *)(*(longlong *)(*local_108 + 8 + (longlong)(int)uVar12 * 0x18) + 0x18)) {
        pFVar11 = TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
                              *)&this->PendingFinalizeShaderMaps,*puVar4,(int *)puVar4);
        lVar6 = *(longlong *)(puVar4 + 2);
        pFVar15 = (FShaderMapCompileResults *)(lVar6 + 0x10);
        if ((pFVar11 == pFVar15) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = *(int *)(lVar6 + 0x18);
        if (iVar10 != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar10,(ForAnyElementType *)pFVar11,
                             &(pFVar11->FinishedJobs).ArrayNum,&(pFVar11->FinishedJobs).ArrayMax);
          ConstructItems<TRefCountPtr<FShaderCommonCompileJob>,TRefCountPtr<FShaderCommonCompileJob>,int>
                    ((pFVar11->FinishedJobs).AllocatorInstance.Data + (longlong)iVar9 * 8,
                     (TRefCountPtr<FShaderCommonCompileJob> *)
                     (pFVar15->FinishedJobs).AllocatorInstance.Data,iVar10);
        }
        lVar6 = *(longlong *)(puVar4 + 2);
        piVar1 = (int *)(lVar6 + 0x1c);
        if (*piVar1 < 0) {
          DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
                    (*(TRefCountPtr<FShaderCommonCompileJob> **)(lVar6 + 0x10),
                     *(int *)(lVar6 + 0x18));
          *(undefined4 *)(lVar6 + 0x18) = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)(lVar6 + 0x10),0,piVar1);
          }
        }
        else {
          DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
                    (*(TRefCountPtr<FShaderCommonCompileJob> **)(lVar6 + 0x10),
                     *(int *)(lVar6 + 0x18));
          *(undefined4 *)(lVar6 + 0x18) = 0;
        }
        if ((pFVar11->bAllJobsSucceeded == false) ||
           (*(char *)(*(longlong *)(puVar4 + 2) + 0x24) == '\0')) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        pFVar11->bAllJobsSucceeded = bVar8;
      }
      if ((*(int *)(*(longlong *)(puVar4 + 2) + 0x18) != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Results->FinishedJobs.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                             ,0xb16,L"Failed to remove finished jobs, %d remain"), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)(*(longlong *)(puVar4 + 2) + 0x20) == 0) {
        TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_e0,uStack_ec);
        local_d0 = '\x01';
      }
      uStack_f0 = uStack_f0 & ~auStack_100._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_100);
      lpCriticalSection = local_b0;
      uVar12 = (ulonglong)uStack_ec;
    } while ((int)uStack_ec < *(int *)(auStack_100._8_8_ + 0x18));
    if ((local_d0 != '\0') && (cStack_cf != '\0')) {
      uVar14 = *(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34;
      if (uVar14 < 4) {
        iVar10 = 1;
      }
      else {
        uVar12 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_c8 = (undefined4)lVar6;
        iVar10 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar14) && (local_d8->HashSize < iVar10)) || (iVar10 < local_d8->HashSize)) {
        local_d8->HashSize = iVar10;
        TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
        ::Rehash(local_d8);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  puVar2 = &(this->PendingFinalizeShaderMaps).field_0x34;
  puVar3 = &(this->PendingFinalizeShaderMaps).field_0x8;
  iVar10 = *(int *)puVar3 - *(int *)puVar2;
  if (((0 < iVar10) && (AllowShaderCompiling(), param_1 <= 0.0)) &&
     ((*(int *)puVar3 != *(int *)puVar2 &&
      (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("TimeSlice > 0 || PendingFinalizeShaderMaps.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                          ,0xb2d,L""), bVar8)))) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((!param_2) || (0.0 < param_1)) {
    if ((0 < iVar10 - (*(int *)puVar3 - *(int *)puVar2)) && (5 < (byte)LogShaders._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  else {
    if ((*(int *)puVar3 != *(int *)puVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingFinalizeShaderMaps.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                           ,0xb33,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((0 < (*(int *)puVar2 - *(int *)puVar3) + iVar10) && (2 < (byte)LogShaders._0_1_)) {
      QueryPerformanceCounter(&local_a8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  UpdateNumRemainingAssets(this);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// ProcessAsyncResults @ 14853ae70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::ProcessAsyncResults
          (FShaderCompilingManager *this,bool param_1,bool param_2)

{
  if (param_1) {
    ProcessAsyncResults(this,this->ProcessGameThreadTargetTime,param_2);
    return;
  }
  ProcessAsyncResults(this,0.0,param_2);
  return;
}

// ProcessAsyncTasks @ 14853ae90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::ProcessAsyncTasks
          (FShaderCompilingManager *this,FProcessAsyncTaskParams *param_1)

{
  if (param_1->bPlayInEditorAssetsOnly != false) {
    return;
  }
  if (param_1->bLimitExecutionTime != false) {
    ProcessAsyncResults(this,this->ProcessGameThreadTargetTime,false);
    return;
  }
  ProcessAsyncResults(this,0.0,false);
  return;
}

// ProcessAsyncTasks @ 14853aec0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::ProcessAsyncTasks(FShaderCompilingManager *this,bool param_1)

{
  if (param_1) {
    ProcessAsyncResults(this,this->ProcessGameThreadTargetTime,false);
    return;
  }
  ProcessAsyncResults(this,0.0,false);
  return;
}

// ProcessCompiledShaderMaps @ 14853aef0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::ProcessCompiledShaderMaps
          (FShaderCompilingManager *this,
          TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
          *param_1,float param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) {
    return;
  }
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"NoShaderCompile");
  if (!bVar1) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"PrecompiledShadersOnly");
    bNoShaderCompile = false;
    if (!bVar1) goto LAB_145e4ba6d;
  }
  bNoShaderCompile = true;
LAB_145e4ba6d:
  _Init_thread_footer(&::_TSS0);
  return;
}

// ProcessFinishedJob @ 14853b320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::ProcessFinishedJob
          (FShaderCompilingManager *this,FShaderCommonCompileJob *param_1,
          EShaderCompileJobStatus param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined **local_48;
  FShaderCompilingManager *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FShaderCompilingManager::ProcessFinishedJob'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FShaderCompilingManager::ProcessFinishedJob'::__l2::<lambda_1>,void,FShaderCompileJob_&>
                ::Call;
  local_40 = this;
  FShaderCommonCompileJob::ForEachSingleShaderJob
            (param_1,(TFunction<void___cdecl(FShaderCompileJob_&)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FShaderJobCache::ProcessFinishedJob((this->AllJobs).JobsCache.Ptr,param_1,param_2);
  return;
}

// PropagateMaterialChangesToPrimitives @ 14853be40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::PropagateMaterialChangesToPrimitives
          (FShaderCompilingManager *this,
          TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
          *param_1)

{
  undefined1 *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FObjectCacheContext *this_01;
  longlong lVar7;
  IPrimitiveComponent **ppIVar8;
  int iVar9;
  uint *puVar10;
  undefined1 auStackY_198 [32];
  FObjectCacheContextScope local_148 [8];
  ForAnyElementType local_140;
  undefined8 local_138;
  UMaterialInterface *local_130;
  int local_128;
  TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
  *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<UMaterialInterface_*,int> local_b8;
  TObjectCacheIterator<IPrimitiveComponent> local_a8;
  TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar5 = AllowShaderCompiling();
  if (bVar5) {
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_88._32_8_ = 0;
    iVar9 = 0;
    local_88._40_4_ = 0;
    local_88._52_4_ = 0;
    local_48 = (void *)0x0;
    local_88._44_4_ = 0x80;
    local_88._48_4_ = 0xffffffff;
    FObjectCacheContextScope::FObjectCacheContextScope(local_148);
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2327,
                 "FShaderCompilingManager::PropagateMaterialChangesToPrimitives",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                 ,0x917);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2327);
    }
    this_00 = &param_1->field_0x10;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138 = 0;
    iVar2 = *(int *)&param_1->field_0x28;
    uStack_114 = 1;
    local_100 = iVar9;
    iStack_104 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar10 = (uint *)this_00;
      }
      uVar3 = *puVar10;
      local_100 = 0;
      iVar9 = 0;
      while (uVar3 == 0) {
        lVar7 = (longlong)iVar9;
        local_100 = local_100 + 0x20;
        iVar9 = iVar9 + 1;
        iStack_104 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14853bf9f;
        uVar3 = puVar10[lVar7 + 1];
      }
      uStack_114 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_114 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_128 = (int)lVar7;
      iStack_104 = local_100 + -1 + local_128;
      if (iVar2 < iStack_104) {
        iStack_104 = iVar2;
      }
    }
LAB_14853bf9f:
    uStack_108 = 0xffffffff;
    TStack_e8._padding_ = CONCAT44(uStack_114,iVar9);
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    TStack_e8._28_4_ = iStack_104;
    TStack_e8.BaseBitIndex = local_100;
    local_120 = param_1;
    iStack_118 = iVar9;
    local_110 = this_00;
    iStack_fc = iStack_104;
    local_f0 = param_1;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
    TStack_e8.CurrentBitIndex = iStack_104;
    if (iStack_104 < iVar2) {
      do {
        local_130 = (UMaterialInterface *)
                    (**(code **)(**(longlong **)
                                   (*(longlong *)local_f0 +
                                   (longlong)TStack_e8.CurrentBitIndex * 0x18) + 0x4e0))();
        if (((local_140.Data <= (FScriptContainerElement *)&local_130) &&
            ((FScriptContainerElement *)&local_130 < local_140.Data + (longlong)local_138._4_4_ * 8)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (int)local_138;
        if ((int)local_138 == local_138._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_140,(int *)((longlong)&local_138 + 4));
        }
        local_138 = CONCAT44(local_138._4_4_,iVar9 + 1);
        *(UMaterialInterface **)(local_140.Data + (longlong)iVar9 * 8) = local_130;
        TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
      } while (TStack_e8.CurrentBitIndex < (TStack_e8.Array)->NumBits);
    }
    this_01 = FObjectCacheContextScope::GetContext(local_148);
    iStack_c0 = (int)local_138;
    local_c8 = local_140.Data;
    if (((int)local_138 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_b8._12_4_ = uStack_bc;
    local_b8.ArrayNum = iStack_c0;
    local_b8.DataPtr = (UMaterialInterface **)local_c8;
    FObjectCacheContext::GetPrimitivesAffectedByMaterials(this_01,&local_a8,&local_b8);
    for (ppIVar8 = local_a8.ArrayView.DataPtr;
        ppIVar8 != local_a8.ArrayView.DataPtr + local_a8.ArrayView.ArrayNum; ppIVar8 = ppIVar8 + 1)
    {
      (**(code **)((longlong)**ppIVar8 + 0x48))();
    }
    if (local_a8.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.OwnedArray.AllocatorInstance.Data);
    }
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar5 = 1 < *(int *)&param_1->field_0x48;
    if (!bVar5) {
      TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
                        *)param_1);
    }
    TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)param_1,0,*(int *)&param_1->field_0x8);
    *(undefined4 *)&param_1->field_0x8 = 0;
    if (*(int *)&param_1->field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)param_1,0,(int *)&param_1->field_0xc);
    }
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
    *(undefined4 *)&param_1->field_0x28 = 0;
    if ((*(int *)&param_1->field_0x2c < 0) || (0x80 < *(int *)&param_1->field_0x2c)) {
      *(undefined4 *)&param_1->field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    if (bVar5) {
      *(undefined4 *)&param_1->field_0x48 = 1;
      TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
                *)param_1);
    }
    FObjectCacheContextScope::~FObjectCacheContextScope(local_148);
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88);
  }
  return;
}

// ReleaseJob @ 14853fe20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::ReleaseJob
          (FShaderCompilingManager *this,TRefCountPtr<FShaderCommonCompileJob> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FShaderCommonCompileJob *pFVar3;
  FPendingShaderMapCompileResults *pFVar4;
  
  pFVar3 = param_1->Reference;
  pFVar4 = (pFVar3->PendingShaderMap).Reference;
  if (pFVar4 != (FPendingShaderMapCompileResults *)0x0) {
    (pFVar3->PendingShaderMap).Reference = (FPendingShaderMapCompileResults *)0x0;
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  pFVar3->bReleased = '\x01';
  FShaderCompilerJobTable::RemoveJob(&((this->AllJobs).JobsCache.Ptr)->JobTable,pFVar3);
  pFVar3 = param_1->Reference;
  if (pFVar3 != (FShaderCommonCompileJob *)0x0) {
    param_1->Reference = (FShaderCommonCompileJob *)0x0;
    FShaderCommonCompileJob::Release(pFVar3);
  }
  return;
}

// ReleaseJob @ 14853feb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::ReleaseJob(FShaderCompilingManager *this,FShaderCommonCompileJob *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FPendingShaderMapCompileResults *pFVar3;
  
  pFVar3 = (param_1->PendingShaderMap).Reference;
  if (pFVar3 != (FPendingShaderMapCompileResults *)0x0) {
    (param_1->PendingShaderMap).Reference = (FPendingShaderMapCompileResults *)0x0;
    puVar1 = &pFVar3->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  param_1->bReleased = '\x01';
  FShaderCompilerJobTable::RemoveJob(&((this->AllJobs).JobsCache.Ptr)->JobTable,param_1);
  return;
}

// ReportMemoryUsage @ 1485415f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FShaderCompilingManager::ReportMemoryUsage(FShaderCompilingManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Threads).AllocatorInstance.Data;
  iVar2 = (this->Threads).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Threads).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileThreadRunnableBase,TDefaultDelete<FShaderCompileThreadRunnableBase>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x30))(*(longlong **)pFVar3,0);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ShouldRecompileToDumpShaderDebugInfo @ 148546470

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FShaderCompilingManager::ShouldRecompileToDumpShaderDebugInfo
          (FShaderCompilingManager *this,FShaderCompilerInput *param_1,
          FShaderCompilerOutput *param_2,bool param_3)

{
  bool bVar1;
  EDumpShaderDebugInfo EVar2;
  
  if (1 < (param_1->DumpDebugInfoPath).Data.ArrayNum) {
    return false;
  }
  bVar1 = true;
  EVar2 = Never;
  if (GDumpShaderDebugInfo < 4) {
    EVar2 = GDumpShaderDebugInfo;
  }
  if (GIsBuildMachine) {
    bVar1 = (int)this->NumDumpedShaderSources < GMaxNumDumpedShaderSources;
  }
  if (EVar2 == OnError) {
    if (!bVar1) {
      return false;
    }
    if (param_3) {
      return false;
    }
  }
  else {
    if (EVar2 != OnErrorOrWarning) {
      return false;
    }
    if (!bVar1) {
      return false;
    }
    if ((param_3) && ((param_2->Errors).ArrayNum < 1)) {
      return false;
    }
  }
  return true;
}

// ShouldRecompileToDumpShaderDebugInfo @ 1485464e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FShaderCompilingManager::ShouldRecompileToDumpShaderDebugInfo
          (FShaderCompilingManager *this,FShaderCompileJob *param_1)

{
  bool bVar1;
  byte bVar2;
  EDumpShaderDebugInfo EVar3;
  
  if (1 < (param_1->Input).DumpDebugInfoPath.Data.ArrayNum) {
    return false;
  }
  bVar1 = true;
  EVar3 = Never;
  if (GDumpShaderDebugInfo < 4) {
    EVar3 = GDumpShaderDebugInfo;
  }
  bVar2 = (byte)param_1->_padding_ & 2;
  if (GIsBuildMachine) {
    bVar1 = (int)this->NumDumpedShaderSources < GMaxNumDumpedShaderSources;
  }
  if (EVar3 == OnError) {
    if (!bVar1) {
      return false;
    }
    if (bVar2 != 0) {
      return false;
    }
  }
  else {
    if (EVar3 != OnErrorOrWarning) {
      return false;
    }
    if (!bVar1) {
      return false;
    }
    if ((bVar2 != 0) && ((param_1->Output).Errors.ArrayNum < 1)) {
      return false;
    }
  }
  return true;
}

// Shutdown @ 148546570

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FShaderCompilingManager::Shutdown(FShaderCompilingManager *this)

{
  return;
}

// SubmitJobs @ 148548d50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderCompilingManager::SubmitJobs
          (FShaderCompilingManager *this,
          TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2,FString *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  FString *pFVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  EShaderPlatform EVar17;
  FScriptContainerElement *pFVar18;
  double dVar19;
  FLLMScope local_c4;
  undefined1 local_c0 [4];
  uint local_bc;
  int local_b8 [2];
  FMemScope local_b0;
  FName local_a8;
  uint *local_a0;
  LARGE_INTEGER local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  FLLMScope::FLLMScope
            (&local_c4,LLMTagDeclaration_ShaderCompiler.UniqueName,false,None,Default,true);
  local_a8 = LLMTagDeclaration_ShaderCompiler.UniqueName;
  FMemScope::FMemScope(&local_b0,&local_a8,true);
  bVar8 = AllowShaderCompiling();
  if (bVar8) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1454,"FShaderCompilingManager::SubmitJobs",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                 ,0x5ae);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1454);
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FPlatformProperties::RequiresCookedData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                       ,0x5af,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_1->ArrayNum == 0) {
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FMemScope::~FMemScope(&local_b0);
      FLLMScope::~FLLMScope(&local_c4);
      pFVar3 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pFVar3 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    else {
      if ((GShaderCompilerStats == (FShaderCompilerStats *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("GShaderCompilerStats",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompiler.cpp"
                             ,0x5b6,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((param_1->ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = *(longlong *)(param_1->AllocatorInstance).Data;
      lVar16 = 0;
      if (*(char *)(lVar15 + 0x30) == '\0') {
        lVar16 = lVar15;
      }
      if (lVar16 == 0) {
        pFVar11 = ::FString::FString(&local_70,param_3);
        pFVar12 = ::FString::FString(local_60,param_2);
        EVar17 = SP_NumPlatforms;
      }
      else {
        pFVar11 = ::FString::FString(&local_90,param_3);
        pFVar12 = ::FString::FString(&local_80,param_2);
        EVar17 = (EShaderPlatform)(*(uint *)(lVar16 + 0xd8) >> 4);
      }
      FShaderCompilerStats::RegisterCompiledShaders
                (GShaderCompilerStats,param_1->ArrayNum,EVar17,pFVar12,pFVar11);
      if (&this->CompileQueueSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&this->CompileQueueSection);
      dVar7 = __real_4170000000000000;
      pFVar18 = (param_1->AllocatorInstance).Data;
      iVar2 = param_1->ArrayNum;
      pFVar3 = pFVar18 + (longlong)iVar2 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar2) {
          `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_c0);
        }
        if (pFVar18 == pFVar3) break;
        local_bc = *(uint *)(*(longlong *)pFVar18 + 0x2c);
        if (*(int *)&(this->ShaderMapJobs).field_0x8 != *(int *)&(this->ShaderMapJobs).field_0x34) {
          puVar4 = *(undefined1 **)&(this->ShaderMapJobs).field_0x40;
          puVar14 = &(this->ShaderMapJobs).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar14 = puVar4;
          }
          iVar10 = *(int *)(puVar14 +
                           (ulonglong)(*(int *)&(this->ShaderMapJobs).field_0x48 - 1U & local_bc) *
                           4);
          if (iVar10 != -1) {
            do {
              lVar15 = *(longlong *)&this->ShaderMapJobs + (longlong)iVar10 * 0x18;
              if (*(uint *)(*(longlong *)&this->ShaderMapJobs + (longlong)iVar10 * 0x18) == local_bc
                 ) {
                if (lVar15 != 0) goto LAB_1485490b6;
                break;
              }
              iVar10 = *(int *)(lVar15 + 0x10);
            } while (iVar10 != -1);
          }
        }
        local_a0 = &local_bc;
        TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_&&>_>
                  ((TSet<TTuple<int,TRefCountPtr<FPendingShaderMapCompileResults>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FPendingShaderMapCompileResults>,0>,FDefaultSetAllocator>
                    *)&this->ShaderMapJobs,(uint)local_b8,
                   (TKeyInitializer<int_&&> *)(ulonglong)local_bc,(bool *)&local_a0);
        lVar15 = *(longlong *)&this->ShaderMapJobs + (longlong)local_b8[0] * 0x18;
LAB_1485490b6:
        if (*(longlong *)(lVar15 + 8) == 0) {
          puVar13 = ::operator_new(0x38);
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)0x0;
          }
          else {
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            *(undefined4 *)(puVar13 + 4) = 0;
            *(undefined2 *)((longlong)puVar13 + 0x24) = 1;
            QueryPerformanceCounter(&local_98);
            dVar19 = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle;
            *(undefined1 *)(puVar13 + 6) = 0;
            puVar13[5] = dVar19 + dVar7;
            *(undefined4 *)(puVar13 + 1) = 0;
            *puVar13 = &___7FPendingShaderMapCompileResults__6B_;
          }
          puVar5 = *(undefined8 **)(lVar15 + 8);
          if (puVar5 != puVar13) {
            *(undefined8 **)(lVar15 + 8) = puVar13;
            if (puVar13 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
              UNLOCK();
            }
            if (puVar5 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar5 + 1);
              LOCK();
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar10 == 1) && (piVar1 != (int *)0x0)) {
                (**(code **)*puVar5)(puVar5,1);
              }
            }
          }
        }
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar15 + 8) + 0x20);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        puVar13 = *(undefined8 **)(lVar15 + 8);
        puVar5 = *(undefined8 **)(*(longlong *)pFVar18 + 0x18);
        if (puVar5 != puVar13) {
          *(undefined8 **)(*(longlong *)pFVar18 + 0x18) = puVar13;
          if (puVar13 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
            UNLOCK();
          }
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            LOCK();
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar10 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
        }
        pFVar18 = pFVar18 + 8;
      }
      bVar9 = IsInGameThread();
      if (bVar9) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->CompileQueueSection);
        FShaderJobCache::SubmitJobs((this->AllJobs).JobsCache.Ptr,param_1);
      }
      else {
        FShaderJobCache::SubmitJobs((this->AllJobs).JobsCache.Ptr,param_1);
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->CompileQueueSection);
      }
      UpdateNumRemainingAssets(this);
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FMemScope::~FMemScope(&local_b0);
      FLLMScope::~FLLMScope(&local_c4);
      pFVar3 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pFVar3 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
  }
  else {
    FMemScope::~FMemScope(&local_b0);
    FLLMScope::~FLLMScope(&local_c4);
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
      return;
    }
  }
  return;
}

// UpdateNumRemainingAssets @ 14854b9d0

/* WARNING: Removing unreachable block (ram,0x00014854bb46) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FShaderCompilingManager::UpdateNumRemainingAssets(FShaderCompilingManager *this)

{
  TMulticastDelegate<void___cdecl(TArray<FAssetCompileData,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  FAsyncCompilationNotification *this_01;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  FAssetCompilingManager *pFVar10;
  longlong lVar11;
  uint uVar12;
  
  bVar5 = IsInGameThread();
  if ((bVar5) &&
     (iVar8 = (**(code **)(this->_padding_ + 0x18))(this), this->LastNumRemainingAssets != iVar8)) {
    if (iVar8 == 0) {
      pFVar10 = FAssetCompilingManager::Get();
      this_00 = &pFVar10->AssetPostCompileEvent;
      if ((this_00 ==
           (TMulticastDelegate<void___cdecl(TArray<FAssetCompileData,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
            *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this_00);
      puVar1 = &(pFVar10->AssetPostCompileEvent).field_0x3c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar12 = *(int *)&(pFVar10->AssetPostCompileEvent).field_0x30 - 1;
      if (-1 < (int)uVar12) {
        lVar11 = (longlong)(int)uVar12 << 4;
        bVar5 = false;
        do {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&(pFVar10->AssetPostCompileEvent).field_0x30) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          lVar2 = *(longlong *)&(pFVar10->AssetPostCompileEvent).field_0x28;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      puVar1 = &(pFVar10->AssetPostCompileEvent).field_0x3c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    }
    this_01 = (this->Notification).Ptr;
    this->LastNumRemainingAssets = iVar8;
    FAsyncCompilationNotification::Update(this_01,iVar8);
  }
  return;
}

