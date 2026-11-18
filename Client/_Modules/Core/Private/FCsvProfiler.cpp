// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 63

// FCsvProfiler @ 141915310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCsvProfiler * __thiscall FCsvProfiler::FCsvProfiler(FCsvProfiler *this)

{
  code *pcVar1;
  bool bVar2;
  EBuildConfiguration EVar3;
  FCsvStatNameValidator *pFVar4;
  FEvent *pFVar5;
  FCsvProfiler *pFVar6;
  wchar_t *pwVar7;
  FString *pFVar8;
  FString *pFVar9;
  FEngineVersion *pFVar10;
  FCsvStatNameValidator *pFVar11;
  FCsvStatNameValidator *pFVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  undefined1 auStack_2a8 [32];
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  <lambda_1> local_190 [8];
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  pFVar12 = (FCsvStatNameValidator *)0x0;
  this->NumFramesToCapture = -1;
  this->CaptureFrameNumber = 0;
  this->CaptureFrameNumberRT = 0;
  (this->CsvGUID).A = 0;
  (this->CsvGUID).B = 0;
  (this->CsvGUID).C = 0;
  (this->CsvGUID).D = 0;
  this->bInsertEndFrameAtFrameStart = false;
  this->bNamedEventsWasEnabled = false;
  this->LastEndFrameTimestamp = 0;
  this->CaptureEndFrameCount = 0;
  this->CaptureStartTime = 0.0;
  (this->OutputFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFilename).Data.ArrayNum = 0;
  (this->OutputFilename).Data.ArrayMax = 0;
  this->CaptureOnEventFrameCount = -1;
  pFVar4 = ::operator_new(0x58);
  pFVar11 = pFVar12;
  if (pFVar4 != (FCsvStatNameValidator *)0x0) {
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x10 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x18 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x20 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x28 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x30 = 0;
    (pFVar4->ValidCharactersSet).Hash.InlineData[0] = '\0';
    (pFVar4->ValidCharactersSet).Hash.InlineData[1] = '\0';
    (pFVar4->ValidCharactersSet).Hash.InlineData[2] = '\0';
    (pFVar4->ValidCharactersSet).Hash.InlineData[3] = '\0';
    (pFVar4->ValidCharactersSet).Hash._padding_ = 0;
    (pFVar4->ValidCharactersSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).HashSize = 0;
    (pFVar4->ValidCharacters).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements = 0;
    (pFVar4->ValidCharactersSet).Elements.field_0x8 = 2;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0xc = 0xffffffffffffffff;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x18 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x20 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x28 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x30 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).HashSize = 0;
    (pFVar4->ValidCharacters).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = pFVar4;
  }
  (this->CommandQueue).Tail = (TNode *)pFVar11;
  (this->CommandQueue).Head = (TNode *)pFVar11;
  this->ProcessingThread = (FCsvProfilerProcessingThread *)0x0;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->FileWriteBlockingEvent = pFVar5;
  (this->IsShuttingDown).Counter = 0;
  *(undefined8 *)&this->MetadataMap = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataMap).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x48 = 0;
  *(undefined8 *)&this->NonPersistentMetadataMap = 0;
  *(undefined8 *)&(this->NonPersistentMetadataMap).field_0x8 = 0;
  *(undefined8 *)&(this->NonPersistentMetadataMap).field_0x20 = 0;
  *(undefined4 *)&(this->NonPersistentMetadataMap).field_0x28 = 0;
  *(undefined4 *)&(this->NonPersistentMetadataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NonPersistentMetadataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NonPersistentMetadataMap).field_0x34 = 0;
  *(undefined8 *)&(this->NonPersistentMetadataMap).field_0x40 = 0;
  *(undefined4 *)&(this->NonPersistentMetadataMap).field_0x48 = 0;
  pFVar4 = ::operator_new(0x58);
  pFVar11 = pFVar12;
  if (pFVar4 != (FCsvStatNameValidator *)0x0) {
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x10 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x18 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x20 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x28 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x30 = 0;
    (pFVar4->ValidCharactersSet).Hash.InlineData[0] = '\0';
    (pFVar4->ValidCharactersSet).Hash.InlineData[1] = '\0';
    (pFVar4->ValidCharactersSet).Hash.InlineData[2] = '\0';
    (pFVar4->ValidCharactersSet).Hash.InlineData[3] = '\0';
    (pFVar4->ValidCharactersSet).Hash._padding_ = 0;
    (pFVar4->ValidCharactersSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).HashSize = 0;
    (pFVar4->ValidCharacters).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x10 = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar4->ValidCharactersSet).Elements.field_0x30 = 0;
    *(undefined4 *)&(pFVar4->ValidCharactersSet).Elements.field_0x34 = 0x80;
    (pFVar4->ValidCharactersSet).Hash.InlineData[0] = 0xff;
    (pFVar4->ValidCharactersSet).Hash.InlineData[1] = 0xff;
    (pFVar4->ValidCharactersSet).Hash.InlineData[2] = 0xff;
    (pFVar4->ValidCharactersSet).Hash.InlineData[3] = 0xff;
    (pFVar4->ValidCharactersSet).Hash._padding_ = 0;
    *(undefined8 *)&(pFVar4->ValidCharactersSet).HashSize = 0;
    *(undefined4 *)&(pFVar4->ValidCharacters).Data.AllocatorInstance.Data = 0;
    pFVar11 = pFVar4;
  }
  (this->MetadataQueue).Tail = (TNode *)pFVar11;
  (this->MetadataQueue).Head = (TNode *)pFVar11;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MetadataCS,4000);
  *(undefined8 *)&this->OnCSVProfileStartDelegate = 0;
  *(undefined8 *)&(this->OnCSVProfileStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCSVProfileStartDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCSVProfileStartDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnCSVProfileFirstFrameDelegate = 0;
  *(undefined8 *)&(this->OnCSVProfileFirstFrameDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCSVProfileFirstFrameDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCSVProfileFirstFrameDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnCSVProfileEndRequestedDelegate = 0;
  *(undefined8 *)&(this->OnCSVProfileEndRequestedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCSVProfileEndRequestedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCSVProfileEndRequestedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnCSVProfileEndDelegate = 0;
  *(undefined8 *)&(this->OnCSVProfileEndDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCSVProfileEndDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCSVProfileEndDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnCSVProfileEndFrameDelegate = 0;
  *(undefined8 *)&(this->OnCSVProfileEndFrameDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCSVProfileEndFrameDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCSVProfileEndFrameDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnCSVProfileFinishedDelegate = 0;
  *(undefined8 *)&(this->OnCSVProfileFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCSVProfileFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCSVProfileFinishedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnCSVProfileEventDelegate = 0;
  *(undefined8 *)&(this->OnCSVProfileEventDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCSVProfileEventDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCSVProfileEventDelegate).field_0x18 = 2;
  this->RenderThreadId = (atomic<unsigned_int>)0x0;
  this->RHIThreadId = (atomic<unsigned_int>)0x0;
  bVar2 = IsInGameThread();
  pwVar14 = L"";
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0xd83,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FCsvProfiler *)(*pcVar1)();
    return pFVar6;
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrame,(_func___cdecl_void *)local_1b0);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(_func___cdecl_void *)local_1a8);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrameRT,(_func___cdecl_void *)local_1a0);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrameRT,(_func___cdecl_void *)local_198);
  local_148._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"Windows",7,Yes);
  ::FString::PrintfImpl(&local_1d0,L"%s");
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  EVar3 = FApp::GetBuildConfiguration();
  pwVar7 = ::LexToString(EVar3);
  ::FString::FString(&local_1e0,pwVar7);
  pFVar8 = ::FString::FString(&local_178,"\"");
  pwVar7 = FCommandLine::Get();
  pFVar9 = ::FString::FString(&local_188,"\"");
  ::FString::ConcatFC(&local_1c0,pFVar9,pwVar7);
  ::FString::ConcatFF(&local_250,&local_1c0,pFVar8);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  ::FString::ReplaceInline(&local_250,L"\n",L"",IgnoreCase);
  ::FString::ReplaceInline(&local_250,L"\r",L"",IgnoreCase);
  pwVar7 = FApp::GetBuildVersion();
  ::FString::FString(&local_1f0,pwVar7);
  pFVar10 = FEngineVersion::Current();
  FEngineVersion::ToString(pFVar10,&local_200,Branch);
  pFVar10 = FEngineVersion::Current();
  FEngineVersion::ToString(pFVar10,&local_210,Patch);
  local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.Data.ArrayNum = 0;
  local_260.Data.ArrayMax = 0;
  local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.Data.ArrayNum = 0;
  local_270.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetOSVersions(&local_260,&local_270);
  ::FString::TrimStartAndEndInline(&local_260);
  ::FString::TrimStartAndEndInline(&local_270);
  ::FString::PrintfImpl(&local_220,L"%s %s");
  pFVar11 = ::operator_new(0x60);
  if (pFVar11 != (FCsvStatNameValidator *)0x0) {
    pFVar12 = FCsvStatNameValidator::FCsvStatNameValidator(pFVar11);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_1d0.Data.ArrayNum != 0) {
    FVar13.Data = local_1d0.Data.AllocatorInstance.Data;
  }
  GCsvStatNameValidator = pFVar12;
  SetMetadataInternal(this,L"Platform",(wchar_t *)FVar13.Data,true,Persistent);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_1e0.Data.ArrayNum != 0) {
    FVar13.Data = local_1e0.Data.AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"Config",(wchar_t *)FVar13.Data,true,Persistent);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_1f0.Data.ArrayNum != 0) {
    FVar13.Data = local_1f0.Data.AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"BuildVersion",(wchar_t *)FVar13.Data,true,Persistent);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_200.Data.ArrayNum != 0) {
    FVar13.Data = local_200.Data.AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"EngineVersion",(wchar_t *)FVar13.Data,true,Persistent);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_210.Data.ArrayNum != 0) {
    FVar13.Data = local_210.Data.AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"EngineReleaseVersion",(wchar_t *)FVar13.Data,true,Persistent);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_220.Data.ArrayNum != 0) {
    FVar13.Data = local_220.Data.AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"OS",(wchar_t *)FVar13.Data,true,Persistent);
  pFVar8 = FGenericPlatformMisc::GetDeviceMakeAndModel(&local_168);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"CPU",pwVar7,true,Persistent);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  bVar2 = FGenericPlatformMisc::IsPGOEnabled();
  pwVar7 = L"0";
  if (bVar2) {
    pwVar7 = L"1";
  }
  SetMetadataInternal(this,L"PGOEnabled",pwVar7,true,Persistent);
  SetMetadataInternal(this,L"PGOProfilingEnabled",L"0",true,Persistent);
  SetMetadataInternal(this,L"LTOEnabled",L"0",true,Persistent);
  SetMetadataInternal(this,L"ASan",L"0",true,Persistent);
  SetMetadataInternal(this,L"MergedModules",L"0",true,Persistent);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
  ::AddLambda<_FCsvProfiler::FCsvProfiler_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::OnSystemResolutionChanged,local_190);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_250.Data.ArrayNum != 0) {
    FVar13.Data = local_250.Data.AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"Commandline",(wchar_t *)FVar13.Data,false,Persistent);
  pFVar8 = FGenericPlatformMisc::GetLoginId(&local_158);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"LoginID",pwVar14,true,Persistent);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  FGenericPlatformMisc::GetDeviceTag(&local_230);
  if (1 < local_230.Data.ArrayNum) {
    SetMetadataInternal(this,L"DeviceTag",(wchar_t *)local_230.Data.AllocatorInstance.Data,true,
                        Persistent);
  }
  FGenericPlatformMisc::GetDeviceId(&local_240);
  if (1 < local_240.Data.ArrayNum) {
    SetMetadataInternal(this,L"DeviceID",(wchar_t *)local_240.Data.AllocatorInstance.Data,true,
                        Persistent);
  }
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FCsvProfiler @ 14191b270

void __thiscall FCsvProfiler::~FCsvProfiler(FCsvProfiler *this)

{
  FCsvProfilerProcessingThread *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FString *pFVar4;
  
  GCsvProfilerIsCapturing = false;
  LOCK();
  (this->IsShuttingDown).Counter = (this->IsShuttingDown).Counter + 1;
  UNLOCK();
  pFVar1 = this->ProcessingThread;
  if (pFVar1 != (FCsvProfilerProcessingThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    this->ProcessingThread = (FCsvProfilerProcessingThread *)0x0;
  }
  if (this->FileWriteBlockingEvent != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(this->FileWriteBlockingEvent);
    this->FileWriteBlockingEvent = (FEvent *)0x0;
  }
  pFVar4 = GStartOnEvent;
  if (GStartOnEvent != (FString *)0x0) {
    pFVar2 = (GStartOnEvent->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar4,0x10);
    GStartOnEvent = (FString *)0x0;
  }
  pFVar4 = GStopOnEvent;
  if (GStopOnEvent != (FString *)0x0) {
    pFVar2 = (GStopOnEvent->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar4,0x10);
    GStopOnEvent = (FString *)0x0;
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCSVProfileEventDelegate).field_0x8,
             *(int *)&(this->OnCSVProfileEventDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnCSVProfileEventDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCSVProfileEventDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCSVProfileFinishedDelegate).field_0x8,
             *(int *)&(this->OnCSVProfileFinishedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnCSVProfileFinishedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCSVProfileFinishedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCSVProfileEndFrameDelegate).field_0x8,
             *(int *)&(this->OnCSVProfileEndFrameDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnCSVProfileEndFrameDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCSVProfileEndFrameDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCSVProfileEndDelegate).field_0x8,
             *(int *)&(this->OnCSVProfileEndDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnCSVProfileEndDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCSVProfileEndDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCSVProfileEndRequestedDelegate).field_0x8,
             *(int *)&(this->OnCSVProfileEndRequestedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnCSVProfileEndRequestedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCSVProfileEndRequestedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCSVProfileFirstFrameDelegate).field_0x8,
             *(int *)&(this->OnCSVProfileFirstFrameDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnCSVProfileFirstFrameDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCSVProfileFirstFrameDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCSVProfileStartDelegate).field_0x8,
             *(int *)&(this->OnCSVProfileStartDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnCSVProfileStartDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCSVProfileStartDelegate);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MetadataCS);
  TQueue<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,1>
  ::
  ~TQueue<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,1>
            (&this->MetadataQueue);
  *(undefined4 *)&(this->NonPersistentMetadataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NonPersistentMetadataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NonPersistentMetadataMap);
  *(undefined4 *)&(this->MetadataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MetadataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetadataMap);
  TQueue<FCsvCaptureCommand,1>::~TQueue<FCsvCaptureCommand,1>(&this->CommandQueue);
  pFVar2 = (this->OutputFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 14191e640

void __thiscall
`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>::operator()(void *this,uint param_1,uint param_2)

{
  FCsvProfiler *pFVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%u");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = FCsvProfiler::Get();
  FCsvProfiler::SetMetadataInternal
            (pFVar1,L"SystemResolution.ResX",(wchar_t *)FVar2.Data,true,Persistent);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"%u");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = FCsvProfiler::Get();
  FCsvProfiler::SetMetadataInternal
            (pFVar1,L"SystemResolution.ResY",(wchar_t *)FVar2.Data,true,Persistent);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// BeginCapture @ 141927610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCsvProfiler::BeginCapture
          (FCsvProfiler *this,int param_1,FString *param_2,FString *param_3,
          ECsvProfilerFlags param_4)

{
  ECsvCommandType EVar1;
  TNode *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FLLMScope local_res8 [2];
  FString local_b8;
  FString local_a8;
  ECsvProfilerFlags local_98;
  TPromise<FString> *local_90;
  undefined8 local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FMemScope local_78;
  undefined1 local_70 [72];
  TReferenceControllerBase<1> *pTStack_28;
  
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_78,CsvProfiler,true);
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0xfa2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_88 = 0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  if (((this->CommandQueue).Tail)->NextNode != (TNode *)0x0) {
    pTVar2 = ((this->CommandQueue).Tail)->NextNode;
    EVar1 = (pTVar2->Item).CommandType;
    ::FString::operator=(&local_b8,&(pTVar2->Item).DestinationFolder);
    ::FString::operator=(&local_a8,&(pTVar2->Item).Filename);
    pTVar4 = pTStack_80;
    local_98 = (pTVar2->Item).Flags;
    local_90 = (pTVar2->Item).Completion;
    pTStack_80 = *(TReferenceControllerBase<1> **)&(pTVar2->Item).Future.field_0x8;
    local_88 = *(undefined8 *)&(pTVar2->Item).Future;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (EVar1 == Start) {
      if (2 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      goto LAB_141927816;
    }
  }
  if (FCsvProfilerThreadData::Singleton.TlsSlot == 0xffffffff) {
    FCsvProfilerThreadData::Singleton.TlsSlot = TlsAlloc();
    if (FCsvProfilerThreadData::Singleton.TlsSlot == 0xffffffff) {
      if (1 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      goto LAB_141927816;
    }
  }
  local_70._4_4_ = GCsvProfilerFrameNumber;
  local_70[0] = Start;
  local_70._8_4_ = param_1;
  ::FString::FString((FString *)(local_70 + 0x10),param_2);
  ::FString::FString((FString *)(local_70 + 0x20),param_3);
  local_70._48_4_ = param_4;
  local_70._64_8_ = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  TQueue<FCsvCaptureCommand,1>::Enqueue(&this->CommandQueue,(FCsvCaptureCommand *)local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  if ((FScriptContainerElement *)local_70._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._32_8_);
  }
  if ((FScriptContainerElement *)local_70._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._16_8_);
  }
LAB_141927816:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// BeginCaptureInternal @ 141927880

/* WARNING: Removing unreachable block (ram,0x000141927e11) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvProfiler::BeginCaptureInternal(FCsvProfiler *this,FCsvCaptureCommand *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  TConsoleVariableData<bool> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  TArray<FEventExecCmds,TSizedDefaultAllocator<32>_> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FCsvCategoryData *this_00;
  FString *pFVar18;
  FDateTime FVar19;
  IFileManager *pIVar20;
  FArchive *pFVar21;
  FCsvStreamWriter *pFVar22;
  longlong lVar23;
  FCsvProfilerProcessingThread *pFVar24;
  wchar_t *pwVar25;
  FRunnableThread *pFVar26;
  FGuid *pFVar27;
  IConsoleManager *pIVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  ForAnyElementType FVar31;
  undefined1 local_res20 [8];
  int local_178 [2];
  FString local_170;
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  FString local_150;
  FString local_140;
  int local_130;
  TReferenceControllerBase<1> *local_128;
  FString local_120;
  FString local_110;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TSharedRef<FArchive,1> local_c0;
  FString local_b0;
  FString local_a0 [2];
  FString local_80;
  FString local_70;
  FGuid local_60;
  FCsvBenchmarkResult local_50;
  
  if (GCsvProfilerIsCapturing) {
    if ((byte)LogCsvProfiler._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    return;
  }
  if (3 < (byte)LogCsvProfiler._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
  }
  if (GConfig != (FConfigCacheIni *)0x0) {
    this_00 = FCsvCategoryData::Get();
    FCsvCategoryData::UpdateCategoriesFromConfig(this_00);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCSVProfileStartDelegate);
  pTVar9 = CVarCsvWriteBufferSize.Ref;
  bVar12 = IsInParallelGameThread();
  if (bVar12) {
LAB_14192795d:
    lVar23 = 0;
  }
  else {
    bVar12 = IsInGameThread();
    lVar23 = 4;
    if (bVar12) goto LAB_14192795d;
  }
  pTVar8 = CVarCsvContinuousWrites.Ref;
  iVar14 = *(int *)((longlong)pTVar9->ShadowedValue + lVar23);
  iVar15 = 0;
  if (0 < iVar14) {
    iVar15 = iVar14;
  }
  local_130 = iVar15;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar9 = CVarCsvCompressionMode.Ref;
  iVar14 = pTVar8->ShadowedValue[0];
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pTVar9->ShadowedValue[0] == 0) {
LAB_141927a20:
    bVar12 = false;
  }
  else if (pTVar9->ShadowedValue[0] == 1) {
    bVar12 = 0 < iVar15;
  }
  else {
    if (((param_1->Flags & CompressOutput) == None) || (iVar15 < 1)) goto LAB_141927a20;
    bVar12 = true;
  }
  bVar13 = 1 < (param_1->DestinationFolder).Data.ArrayNum;
  if (bVar13) {
    ::FString::ConcatFC(&local_f0,&param_1->DestinationFolder,L"/");
    pFVar18 = &local_f0;
    local_110.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
  }
  else {
    pFVar18 = FPaths::ProjectSavedDir();
    ::FString::ConcatFC(local_a0,pFVar18,L"Profiling/");
    ::FString::ConcatFC(&local_e0,local_a0,L"CSV/");
    pFVar18 = &local_e0;
    local_110.Data.AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
  }
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.Data.ArrayNum = (pFVar18->Data).ArrayNum;
  local_110.Data.ArrayMax = (pFVar18->Data).ArrayMax;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  if ((bVar13) && (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if ((!bVar13) && (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if ((!bVar13) && (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
  }
  iVar15 = (param_1->Filename).Data.ArrayNum;
  bVar13 = 1 < iVar15;
  if (bVar13) {
    pFVar29 = (param_1->Filename).Data.AllocatorInstance.Data;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = iVar15;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar15,0,&local_160,iVar15,&local_154);
    memcpy(local_160.Data,pFVar29,(longlong)iVar15 * 2);
    FVar31.Data = local_160.Data;
    iVar15 = local_158;
  }
  else {
    FVar19 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)FVar19.Ticks,&local_80,L"%Y%m%d_%H%M%S");
    ::FString::PrintfImpl(&local_d0,L"Profile(%s)%s");
    FVar31.Data = local_d0.Data.AllocatorInstance.Data;
    iVar15 = local_d0.Data.ArrayNum;
  }
  local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Data.ArrayNum = iVar15;
  if (iVar15 == 0) {
    local_170.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar15,0,(ForAnyElementType *)&local_170,iVar15,&local_170.Data.ArrayMax);
    memcpy(local_170.Data.AllocatorInstance.Data,FVar31.Data,(longlong)iVar15 * 2);
  }
  if ((bVar13) && (local_160.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_160.Data);
  }
  if ((!bVar13) && (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if ((!bVar13) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFF(&local_150,&local_110,&local_170);
  pFVar18 = &this->OutputFilename;
  if (pFVar18 != &local_150) {
    pFVar29 = (pFVar18->Data).AllocatorInstance.Data;
    if (pFVar29 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar29);
    }
    (pFVar18->Data).AllocatorInstance.Data = local_150.Data.AllocatorInstance.Data;
    (this->OutputFilename).Data.ArrayNum = local_150.Data.ArrayNum;
    (this->OutputFilename).Data.ArrayMax = local_150.Data.ArrayMax;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  pIVar20 = IFileManager::Get();
  if ((this->OutputFilename).Data.ArrayNum == 0) {
    pwVar25 = L"";
  }
  else {
    pwVar25 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
  }
  pFVar21 = (FArchive *)(**(code **)((longlong)*pIVar20 + 0x20))(pIVar20,pwVar25);
  local_128 = ::operator_new(0x18);
  if (local_128 == (TReferenceControllerBase<1> *)0x0) {
    local_128 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_128->SharedReferenceCount = (atomic<int>)0x1;
    local_128->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFArchive__U__DefaultDeleter_VFArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_128->WeakReferenceCount = (atomic<int>)0x1;
    local_128[1]._padding_ = (longlong)pFVar21;
  }
  pTVar9 = CVarCsvStreamFramesToBuffer.Ref;
  if (pFVar21 == (FArchive *)0x0) {
    if (1 < (byte)LogCsvProfiler._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
    goto LAB_141928405;
  }
  bVar13 = IsInParallelGameThread();
  if (bVar13) {
LAB_141927d5d:
    lVar23 = 0;
  }
  else {
    bVar13 = IsInGameThread();
    lVar23 = 4;
    if (bVar13) goto LAB_141927d5d;
  }
  iVar15 = *(int *)((longlong)pTVar9->ShadowedValue + lVar23);
  pFVar22 = ::operator_new(0xf0);
  pTVar7 = CVarCsvAggregateTaskWorkerStats.Ref;
  if (pFVar22 == (FCsvStreamWriter *)0x0) {
    this->CsvWriter = (FCsvStreamWriter *)0x0;
  }
  else {
    bVar13 = IsInParallelGameThread();
    if ((bVar13) || (bVar13 = IsInGameThread(), bVar13)) {
      lVar23 = 0;
    }
    else {
      lVar23 = 1;
    }
    pTVar11 = local_128;
    bVar13 = pTVar7->ShadowedValue[lVar23];
    aVar1 = this->RHIThreadId;
    aVar2 = this->RenderThreadId;
    local_c0.SharedReferenceCount.ReferenceController = local_128;
    if (local_128 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_128->SharedReferenceCount = (atomic<int>)((int)local_128->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c0.Object = pFVar21;
    pFVar22 = FCsvStreamWriter::FCsvStreamWriter
                        (pFVar22,&local_c0,0 < iVar14,local_130,(longlong)iVar15,bVar12,(uint)aVar2,
                         (uint)aVar1,bVar13);
    this->CsvWriter = pFVar22;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  GCsvRepeatFrameCount = param_1->Value;
  this->NumFramesToCapture = GCsvRepeatFrameCount;
  this->CaptureFrameNumber = 0;
  this->CaptureFrameNumberRT = 0;
  QueryPerformanceCounter(&local_100);
  bVar12 = GCsvUseProcessingThread != false;
  this->LastEndFrameTimestamp = (ulong64)local_100;
  this->CurrentFlags = param_1->Flags;
  if ((bVar12) && (this->ProcessingThread == (FCsvProfilerProcessingThread *)0x0)) {
    pFVar24 = ::operator_new(0x48);
    if (pFVar24 == (FCsvProfilerProcessingThread *)0x0) {
      pFVar24 = (FCsvProfilerProcessingThread *)0x0;
    }
    else {
      pFVar24->CsvProfiler = this;
      pFVar24->_padding_ = (longlong)&___7FCsvProfilerProcessingThread__6B_;
      (pFVar24->StopCounter).Counter = 0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar24->StallGameThreadCs,4000);
      pFVar24->Priority = TPri_Lowest;
      pwVar25 = FCommandLine::Get();
      bVar12 = FParse::Param(pwVar25,L"csvProfilerHighPriority");
      if (bVar12) {
        pFVar24->Priority = TPri_Highest;
      }
      pFVar26 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar24,L"CSVProfiler",0,pFVar24->Priority,
                           0xffffffffffffffff,None,false);
      pFVar24->Thread = pFVar26;
    }
    this->ProcessingThread = pFVar24;
    if (pFVar24->Thread == (FRunnableThread *)0x0) {
      if (1 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      pFVar24 = this->ProcessingThread;
      if (pFVar24 != (FCsvProfilerProcessingThread *)0x0) {
        (**(code **)(pFVar24->_padding_ + 0x28))(pFVar24,1);
      }
      this->ProcessingThread = (FCsvProfilerProcessingThread *)0x0;
      GCsvUseProcessingThread = false;
    }
  }
  pFVar27 = FGuid::NewGuid(&local_60);
  uVar4 = pFVar27->B;
  uVar5 = pFVar27->C;
  uVar6 = pFVar27->D;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  (this->CsvGUID).A = pFVar27->A;
  (this->CsvGUID).B = uVar4;
  (this->CsvGUID).C = uVar5;
  (this->CsvGUID).D = uVar6;
  FGuid::AppendString(&this->CsvGUID,&local_140,Digits);
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar31.Data = local_140.Data.AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"CsvID",(wchar_t *)FVar31.Data,true,Persistent);
  if (3 < (byte)LogCsvProfiler._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
  }
  iVar14 = FWindowsPlatformMisc::GetMaxRefreshRate();
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar28 = IConsoleManager::Get();
    CsvTargetFrameRateCVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar28 + 0xc0))(pIVar28,L"csv.TargetFrameRateOverride",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar28 = IConsoleManager::Get();
    MaxFPSCVar = (IConsoleVariable *)(**(code **)((longlong)*pIVar28 + 0xc0))(pIVar28,L"t.MaxFPS",1)
    ;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pIVar28 = IConsoleManager::Get();
    SyncIntervalCVar =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar28 + 0xc0))(pIVar28,L"rhi.SyncInterval",1)
    ;
    _Init_thread_footer(&::_TSS2);
  }
  local_178[0] = iVar14;
  if ((CsvTargetFrameRateCVar == (IConsoleVariable *)0x0) ||
     (iVar15 = (**(code **)(*(longlong *)CsvTargetFrameRateCVar + 200))(), iVar15 < 1)) {
    pwVar25 = FCommandLine::Get();
    bVar12 = FParse::Value(pwVar25,L"csv.TargetFrameRateOverride",local_178);
    iVar15 = local_178[0];
    if (!bVar12) {
      if ((MaxFPSCVar != (IConsoleVariable *)0x0) &&
         (iVar15 = (**(code **)(*(longlong *)MaxFPSCVar + 200))(), 0 < iVar15)) {
        iVar14 = (**(code **)(*(longlong *)MaxFPSCVar + 200))();
      }
      iVar15 = iVar14;
      if ((SyncIntervalCVar != (IConsoleVariable *)0x0) &&
         (iVar16 = (**(code **)(*(longlong *)SyncIntervalCVar + 200))(), 0 < iVar16)) {
        iVar16 = (**(code **)(*(longlong *)SyncIntervalCVar + 200))();
        iVar17 = FWindowsPlatformMisc::GetMaxRefreshRate();
        iVar15 = iVar17 / iVar16;
        if (iVar14 < iVar17 / iVar16) {
          iVar15 = iVar14;
        }
      }
    }
  }
  else {
    iVar15 = (**(code **)(*(longlong *)CsvTargetFrameRateCVar + 200))();
  }
  pTVar10 = GCsvEventExecCmds;
  if (GCsvEventExecCmds != (TArray<FEventExecCmds,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar14 = GCsvEventExecCmds->ArrayNum;
    pFVar29 = (GCsvEventExecCmds->AllocatorInstance).Data;
    pFVar30 = pFVar29 + (longlong)iVar14 * 0x40;
    while( true ) {
      if (pTVar10->ArrayNum != iVar14) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FEventExecCmds,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar29 == pFVar30) break;
      LOCK();
      *(undefined4 *)pFVar29 = 0;
      UNLOCK();
      pFVar29 = pFVar29 + 0x40;
    }
  }
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_120,iVar15);
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar31.Data = local_120.Data.AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"TargetFramerate",(wchar_t *)FVar31.Data,true,Persistent);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  FVar19 = FDateTime::UtcNow();
  FDateTime::ToUnixTimestamp((FDateTime *)FVar19.Ticks);
  ::FString::PrintfImpl(&local_b0,L"%lld");
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_b0.Data.ArrayNum != 0) {
    FVar31.Data = local_b0.Data.AllocatorInstance.Data;
  }
  SetMetadataInternal(this,L"StartTimestamp",(wchar_t *)FVar31.Data,true,Persistent);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  pwVar25 = L"0";
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    pwVar25 = L"1";
  }
  SetMetadataInternal(this,L"NamedEvents",pwVar25,true,Persistent);
  if (FGenericPlatformMemory::ProgramSize != 0) {
    pFVar18 = ::FString::SanitizeFloat
                        (&local_70,
                         (double)((float)FGenericPlatformMemory::ProgramSize * __real_35800000),1);
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
    SetMetadataInternal(this,L"ProgramSizeMB",pwVar25,true,Persistent);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  this->bNamedEventsWasEnabled = 0 < GCycleStatsShouldEmitNamedEvents;
  pTVar9 = CVarCsvStatCounts.Ref;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  GCsvStatCounts = pTVar9->ShadowedValue[0] != 0;
  if ((FCsvProfilerThreadData::Singleton.TlsSlot == 0xffffffff) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FCsvProfilerThreadData::IsTlsSlotInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                          ,0xea7,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_170.Data.ArrayNum != 0) {
    FVar31.Data = local_170.Data.AllocatorInstance.Data;
  }
  FCsvProfilerTrace::OutputBeginCapture
            ((wchar_t *)FVar31.Data,(uint)this->RenderThreadId,(uint)this->RHIThreadId,"EventWait",
             GCsvStatCounts);
  GCsvProfilerIsCapturing = true;
  QueryPerformanceCounter(&local_f8);
  this->CaptureStartTime =
       (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  pTVar7 = CVarCsvBenchmark.Ref;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pTVar7->ShadowedValue[0] == false) {
    pwVar25 = FCommandLine::Get();
    bVar12 = FParse::Param(pwVar25,L"csvBench");
    if (bVar12) goto LAB_1419283a5;
  }
  else {
LAB_1419283a5:
    pTVar9 = CVarCsvBenchmarkIterationCount.Ref;
    bVar12 = IsInParallelGameThread();
    if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FCsvBenchmark::Run(&GCsvBenchmark,&local_50,pTVar9->ShadowedValue[0]);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
LAB_141928405:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  return;
}

// BeginExclusiveStat @ 141928550

void __cdecl FCsvProfiler::BeginExclusiveStat(char *param_1,char *param_2)

{
  FCsvTimingMarker *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  FCsvProfilerThreadData *this;
  char *pcVar4;
  LARGE_INTEGER local_res18 [2];
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false))
  {
    if (GCsvProfilerNamedEventsExclusive) {
      local_res18[0].s.LowPart = 0xffff8080;
      pcVar4 = param_1;
      if (param_2 != (char *)0x0) {
        pcVar4 = param_2;
      }
      CsvBeginNamedEvent((FColor)0xffff8080,pcVar4);
    }
    this = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this == (FCsvProfilerThreadData *)0x0) {
      this = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(local_res18);
    FCsvProfilerTrace::OutputBeginExclusiveStat
              (param_1,_GCsvCategory_Exclusive.Index,
               CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart));
    uVar2 = (this->TimingMarkers).Counter;
    if ((char)uVar2 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this->TimingMarkers);
    }
    uVar3 = _GCsvCategory_Exclusive.Index;
    pFVar1 = ((this->TimingMarkers).TailBlock)->Entries + (uVar2 & 0xff);
    *(ulonglong *)pFVar1 = CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart);
    pFVar1->field_0x15 = 0x12;
    *(char **)&pFVar1->field_0x8 = param_1;
    *(uint *)&pFVar1->field_0x10 = uVar3;
    (this->TimingMarkers).Counter = (this->TimingMarkers).Counter + 1;
  }
  return;
}

// BeginFrame @ 141928650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvProfiler::BeginFrame(FCsvProfiler *this)

{
  int *piVar1;
  LARGE_INTEGER *pLVar2;
  ulonglong uVar3;
  TNode *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FBlock *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::BeginFrame(void)_::_2_::FStat_STAT_FCsvProfiler_BeginFrame>
  FVar15;
  FCsvProfilerThreadData *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar16;
  FName FVar17;
  ulonglong uVar18;
  uint uVar19;
  FLLMScope local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_108;
  FName local_100;
  undefined1 local_e8 [72];
  TReferenceControllerBase<1> *pTStack_a0;
  LARGE_INTEGER local_98;
  FScopedCsvStatExclusive local_90;
  LARGE_INTEGER local_88;
  FMemScope local_80;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  undefined1 local_58 [24];
  
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_80,CsvProfiler,true);
  uVar18 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCsvProfiler_BeginFrame ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::BeginFrame(void)_::_2_::FStat_STAT_FCsvProfiler_BeginFrame>
           )0x0) {
        pFVar14 = ::FName::FName(&local_68,"STAT_FCsvProfiler_BeginFrame");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfiler_BeginFrame,*pFVar14,
                   L"STAT_FCsvProfiler_BeginFrame","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar15 = StatPtr_STAT_FCsvProfiler_BeginFrame;
  if (StatPtr_STAT_FCsvProfiler_BeginFrame ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::BeginFrame(void)_::_2_::FStat_STAT_FCsvProfiler_BeginFrame>
       )0x0) {
    pFVar14 = ::FName::FName(&local_60,"STAT_FCsvProfiler_BeginFrame");
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::BeginFrame(void)_::_2_::FStat_STAT_FCsvProfiler_BeginFrame>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfiler_BeginFrame,
                          *pFVar14,L"STAT_FCsvProfiler_BeginFrame","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar15;
  bVar8 = false;
  bVar10 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar19 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.Value;
        local_res20.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0xde7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar16.Value;
      uStackX_14 = uVar19;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      goto LAB_1419287e9;
    }
  }
  bVar9 = false;
  FVar17 = local_100;
LAB_1419287e9:
  if (__CsvProfilerStat3560 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("CsvProfiler");
    __CsvProfilerStat3560 = true;
  }
  local_90.StatName = "CsvProfiler";
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
    if (GCsvProfilerNamedEventsExclusive != false) {
      local_res10 = 0xffff8080;
      CsvBeginNamedEvent((FColor)0xffff8080,"CSV_CsvProfiler");
    }
    this_00 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this_00 == (FCsvProfilerThreadData *)0x0) {
      this_00 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_108);
    FCsvProfilerTrace::OutputBeginExclusiveStat
              ("CsvProfiler",_GCsvCategory_Exclusive.Index,local_108.QuadPart);
    uVar3 = (this_00->TimingMarkers).Counter;
    if ((char)uVar3 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this_00->TimingMarkers)
      ;
    }
    uVar19 = _GCsvCategory_Exclusive.Index;
    pLVar2 = (LARGE_INTEGER *)(((this_00->TimingMarkers).TailBlock)->Entries + (uVar3 & 0xff));
    pLVar2->QuadPart = (LONGLONG)local_108;
    pLVar2[1].QuadPart = (LONGLONG)"CsvProfiler";
    *(undefined1 *)((longlong)pLVar2 + 0x15) = 0x12;
    pLVar2[2].s.LowPart = uVar19;
    (this_00->TimingMarkers).Counter = (this_00->TimingMarkers).Counter + 1;
  }
  bVar13 = IsInGameThread();
  if (!bVar13) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInGameThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                        ,0xdea,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(bool *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0xb68) =
       GCsvTrackWaitsOnGameThread;
  if (this->bInsertEndFrameAtFrameStart != false) {
    this->bInsertEndFrameAtFrameStart = false;
    EndFrame(this);
  }
  if (GCsvProfilerIsWritingFile == false) {
    local_e8[0] = Count;
    local_e8._4_4_ = 0xffffffff;
    local_e8._8_4_ = 0xffffffff;
    local_e8._16_8_ = (FScriptContainerElement *)0x0;
    local_e8._24_4_ = 0;
    local_e8._28_4_ = 0;
    local_e8._32_8_ = (FScriptContainerElement *)0x0;
    local_e8._40_4_ = 0;
    local_e8._44_4_ = 0;
    local_e8._64_8_ = 0;
    pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
    if (((this->CommandQueue).Tail)->NextNode != (TNode *)0x0) {
      pTVar4 = ((this->CommandQueue).Tail)->NextNode;
      local_e8[0] = (pTVar4->Item).CommandType;
      local_e8._4_4_ = (pTVar4->Item).FrameRequested;
      local_e8._8_4_ = (pTVar4->Item).Value;
      ::FString::operator=((FString *)(local_e8 + 0x10),&(pTVar4->Item).DestinationFolder);
      ::FString::operator=((FString *)(local_e8 + 0x20),&(pTVar4->Item).Filename);
      pTVar12 = pTStack_a0;
      local_e8._48_4_ = (pTVar4->Item).Flags;
      local_e8._56_8_ = (pTVar4->Item).Completion;
      pTVar5 = *(TReferenceControllerBase<1> **)&(pTVar4->Item).Future.field_0x8;
      uVar6 = *(undefined8 *)&(pTVar4->Item).Future;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58._0_8_ = local_e8._64_8_;
      local_58._8_8_ = pTStack_a0;
      local_e8._64_8_ = uVar6;
      pTStack_a0 = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      if (local_e8[0] == Start) {
        TQueue<FCsvCaptureCommand,1>::Dequeue(&this->CommandQueue,(FCsvCaptureCommand *)local_e8);
        BeginCaptureInternal(this,(FCsvCaptureCommand *)local_e8);
      }
    }
    if (GCsvProfilerIsCapturing != false) {
      bVar13 = IsInGameThread();
      if (!bVar13) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                            ,0x55b,L"");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar19 = (uint)GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[0].Counter;
      if ((GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[0].Counter & 0xf) == 0) {
        TSingleProducerSingleConsumerList<unsigned___int64,16>::AddTailBlock
                  (GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer);
      }
      pFVar11 = GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[0].TailBlock;
      QueryPerformanceCounter(&local_98);
      *(LARGE_INTEGER *)(pFVar11->Entries + (uVar19 & 0xf)) = local_98;
      GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[0].Counter =
           GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[0].Counter + 1;
      if (this->CaptureFrameNumber == 0) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnCSVProfileFirstFrameDelegate);
      }
      if ((this->bNamedEventsWasEnabled == false) && (0 < GCycleStatsShouldEmitNamedEvents)) {
        this->bNamedEventsWasEnabled = true;
        SetMetadataInternal(this,L"NamedEvents",L"1",true,Persistent);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
    if ((FScriptContainerElement *)local_e8._32_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._32_8_);
    }
    if ((FScriptContainerElement *)local_e8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._16_8_);
    }
  }
  if (GCsvTestingGT != false) {
    CSVTest();
  }
  FCsvABTest::BeginFrameUpdate(&GCsvABTest,this->CaptureFrameNumber,GCsvProfilerIsCapturing);
  FScopedCsvStatExclusive::~FScopedCsvStatExclusive(&local_90);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_78.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_78);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// BeginFrameEOP @ 141928cb0

void __thiscall FCsvProfiler::BeginFrameEOP(FCsvProfiler *this)

{
  atomic<int> aVar1;
  FBlock *pFVar2;
  uint uVar3;
  LARGE_INTEGER local_res10 [3];
  
  if (GCsvProfilerIsCapturing) {
    LOCK();
    aVar1 = (atomic<int>)((int)GFrameBoundaries.EOPCounter + -1);
    UNLOCK();
    if (GFrameBoundaries.EOPCounter == (atomic<int>)0x0) {
      LOCK();
      UNLOCK();
      return;
    }
    uVar3 = (uint)GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[2].Counter;
    GFrameBoundaries.EOPCounter = aVar1;
    if ((GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[2].Counter & 0xf) == 0) {
      TSingleProducerSingleConsumerList<unsigned___int64,16>::AddTailBlock
                (GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer + 2);
    }
    pFVar2 = GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[2].TailBlock;
    QueryPerformanceCounter(local_res10);
    *(LARGE_INTEGER *)(pFVar2->Entries + (uVar3 & 0xf)) = local_res10[0];
    GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[2].Counter =
         GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[2].Counter + 1;
  }
  return;
}

// BeginFrameRT @ 141928d50

void __thiscall FCsvProfiler::BeginFrameRT(FCsvProfiler *this)

{
  code *pcVar1;
  FBlock *pFVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  uint uVar5;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,CsvProfiler,true);
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->RenderThreadId = aVar4;
  UNLOCK();
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0xf77,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GCsvProfilerIsCapturing != false) {
    bVar3 = IsInRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x55e,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    GFrameBoundaries.EOPCounter = (atomic<int>)((int)GFrameBoundaries.EOPCounter + 1);
    UNLOCK();
    uVar5 = (uint)GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter;
    if ((GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter & 0xf) == 0) {
      TSingleProducerSingleConsumerList<unsigned___int64,16>::AddTailBlock
                (GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer + 1);
    }
    pFVar2 = GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].TailBlock;
    QueryPerformanceCounter(&local_res10);
    *(LARGE_INTEGER *)(pFVar2->Entries + (uVar5 & 0xf)) = local_res10;
    GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter =
         GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter + 1;
  }
  GCsvProfilerIsCapturingRT = GCsvProfilerIsCapturing;
  if (GCsvTestingRT != false) {
    CSVTest();
  }
  *(bool *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xb68)
       = GCsvTrackWaitsOnRenderThread;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// BeginSetWaitStat @ 141929450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfiler::BeginSetWaitStat(char *param_1,char *param_2,char *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  FCsvProfilerThreadData *pFVar9;
  FLLMScope *this;
  ForAnyElementType FVar10;
  TArray<FCsvWaitStatName,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStackY_1d8 [32];
  FLLMScope local_188;
  FLLMScope local_184;
  char *local_180;
  char *pcStack_178;
  char *local_170;
  FMemScope local_168;
  FMemScope local_160;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false))
  {
    if (GCsvProfilerNamedEventsExclusive) {
      local_148._padding_ = 0;
      if (param_1 == (char *)0x0) {
        local_148.Ptr = (wchar_t *)0x0;
        local_148.StringLength = 0;
      }
      else {
        sVar8 = strlen(param_1);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,param_1,(int)sVar8,Yes)
        ;
      }
      ::FString::PrintfImpl(&local_158,L"CsvWaitStat_%s");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_158.Data.ArrayNum != 0) {
        FVar10.Data = local_158.Data.AllocatorInstance.Data;
      }
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Yellow,(wchar_t *)FVar10.Data);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    if (param_1 == (char *)0x0) {
      pFVar9 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar9 == (FCsvProfilerThreadData *)0x0) {
        pFVar9 = FCsvProfilerThreadData::CreateTLSData();
      }
      FLLMScope::FLLMScope(&local_188,CsvProfiler,false,None,Default,true);
      FMemScope::FMemScope(&local_168,CsvProfiler,true);
      pTVar11 = &pFVar9->WaitStatNameStack;
      pFVar2 = (pTVar11->AllocatorInstance).Data;
      if ((pFVar2 < (FScriptContainerElement *)0x1506b1311) &&
         (&GIgnoreWaitStatName <
          (FCsvWaitStatName *)(pFVar2 + (longlong)(pFVar9->WaitStatNameStack).ArrayMax * 0x18))) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = (pFVar9->WaitStatNameStack).ArrayNum;
      piVar1 = &(pFVar9->WaitStatNameStack).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&pTVar11->AllocatorInstance,piVar1);
      }
      (pFVar9->WaitStatNameStack).ArrayNum = iVar7 + 1;
      pcVar5 = GIgnoreWaitStatName.FormattedStatName;
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
      *(char **)pFVar2 = GIgnoreWaitStatName.StatName;
      *(char **)(pFVar2 + 8) = pcVar5;
      *(char **)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) =
           GIgnoreWaitStatName.FormattedStatNameNonCP;
      FMemScope::~FMemScope(&local_168);
      this = &local_188;
    }
    else {
      pFVar9 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar9 == (FCsvProfilerThreadData *)0x0) {
        pFVar9 = FCsvProfilerThreadData::CreateTLSData();
      }
      local_180 = param_1;
      pcStack_178 = param_2;
      local_170 = param_3;
      FLLMScope::FLLMScope(&local_184,CsvProfiler,false,None,Default,true);
      FMemScope::FMemScope(&local_160,CsvProfiler,true);
      pTVar11 = &pFVar9->WaitStatNameStack;
      pFVar2 = (pTVar11->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_180) &&
         ((FScriptContainerElement *)&local_180 <
          pFVar2 + (longlong)(pFVar9->WaitStatNameStack).ArrayMax * 0x18)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = (pFVar9->WaitStatNameStack).ArrayNum;
      piVar1 = &(pFVar9->WaitStatNameStack).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&pTVar11->AllocatorInstance,piVar1);
      }
      (pFVar9->WaitStatNameStack).ArrayNum = iVar7 + 1;
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
      *(char **)pFVar2 = local_180;
      *(char **)(pFVar2 + 8) = pcStack_178;
      *(char **)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = local_170;
      FMemScope::~FMemScope(&local_160);
      this = &local_184;
    }
    FLLMScope::~FLLMScope(this);
  }
  return;
}

// BeginStat @ 1419297b0

void __cdecl FCsvProfiler::BeginStat(FName *param_1,uint param_2)

{
  LARGE_INTEGER *pLVar1;
  ulonglong uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  FString *pFVar5;
  FCsvProfilerThreadData *this;
  wchar_t *pwVar6;
  LARGE_INTEGER local_res18;
  FString local_18;
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    if (param_1->Number != 0) {
      local_res18 = (LARGE_INTEGER)param_1;
      `ValidateFName'::__l2::<lambda_1>::operator()(&local_res18);
    }
    if (GCsvProfilerNamedEventsTiming != false) {
      local_res18.s.LowPart = 0xffff80ff;
      if (CpuChannel->Enabled < 0) {
        pFVar5 = ::FName::ToString(param_1,&local_18);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res18.s,pwVar6);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      else {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  (param_1,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0x1a3);
      }
    }
    this = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this == (FCsvProfilerThreadData *)0x0) {
      this = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res18);
    FCsvProfilerTrace::OutputBeginStat(param_1,param_2,local_res18.QuadPart);
    uVar2 = (this->TimingMarkers).Counter;
    if ((char)uVar2 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this->TimingMarkers);
    }
    pLVar1 = (LARGE_INTEGER *)(((this->TimingMarkers).TailBlock)->Entries + (uVar2 & 0xff));
    FVar3.Value = (param_1->ComparisonIndex).Value;
    uVar4 = param_1->Number;
    pLVar1->QuadPart = (LONGLONG)local_res18;
    *(DWORD *)(pLVar1 + 1) = FVar3.Value;
    *(uint *)((longlong)(pLVar1 + 1) + 4) = uVar4;
    *(undefined1 *)((longlong)pLVar1 + 0x15) = 3;
    pLVar1[2].s.LowPart = param_2;
    (this->TimingMarkers).Counter = (this->TimingMarkers).Counter + 1;
  }
  return;
}

// BeginStat @ 141929910

void __cdecl FCsvProfiler::BeginStat(char *param_1,uint param_2,char *param_3)

{
  ulonglong uVar1;
  FBlock *pFVar2;
  FCsvProfilerThreadData *this;
  char *pcVar3;
  ulonglong uVar4;
  LARGE_INTEGER local_res20;
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    if (GCsvProfilerNamedEventsTiming) {
      local_res20.s.LowPart = 0xffff80ff;
      pcVar3 = param_1;
      if (param_3 != (char *)0x0) {
        pcVar3 = param_3;
      }
      CsvBeginNamedEvent((FColor)0xffff80ff,pcVar3);
    }
    this = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this == (FCsvProfilerThreadData *)0x0) {
      this = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res20);
    FCsvProfilerTrace::OutputBeginStat
              (param_1,param_2,CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart));
    uVar1 = (this->TimingMarkers).Counter;
    uVar4 = uVar1 & 0xff;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this->TimingMarkers);
    }
    pFVar2 = (this->TimingMarkers).TailBlock;
    pFVar2->Entries[uVar4].field_0x15 = 2;
    *(char **)&pFVar2->Entries[uVar4].field_0x8 = param_1;
    *(uint *)&pFVar2->Entries[uVar4].field_0x10 = param_2;
    *(ulonglong *)(pFVar2->Entries + uVar4) = CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart)
    ;
    (this->TimingMarkers).Counter = (this->TimingMarkers).Counter + 1;
  }
  return;
}

// BeginWait @ 141929a10

void __cdecl FCsvProfiler::BeginWait(void)

{
  LARGE_INTEGER *pLVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FCsvProfilerThreadData *pFVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  FColor_u_0 FVar10;
  char *pcVar11;
  FCsvWaitStatName *pFVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res18;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_38 [2];
  LARGE_INTEGER local_30;
  code *local_28;
  undefined1 *local_20;
  
  if (!GCsvProfilerIsCapturing) {
    return;
  }
  if (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] == false) {
    return;
  }
  pFVar7 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
  if (pFVar7 == (FCsvProfilerThreadData *)0x0) {
    pFVar7 = FCsvProfilerThreadData::CreateTLSData();
  }
  iVar2 = (pFVar7->WaitStatNameStack).ArrayNum;
  if (iVar2 == 0) {
    pFVar12 = &GDefaultWaitStatName;
  }
  else {
    uVar6 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar6 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar12 = (FCsvWaitStatName *)
              ((pFVar7->WaitStatNameStack).AllocatorInstance.Data +
              ((longlong)(pFVar7->WaitStatNameStack).ArrayNum * 3 + -3) * 8);
  }
  if (pFVar12->StatName == "[IGNORE]") {
    return;
  }
  if (GCsvProfilerNamedEventsExclusive != false) {
    puVar8 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
    local_20 = local_res8;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar9 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar8);
    if (*(int *)(pFVar9 + 3) < 1) {
      local_res18 = 0xffff8080;
      local_38[0].Bits = 0xffff8080;
      if (CpuChannel->Enabled < 0) {
        FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_38[0]._s_0,"CsvEventWait (Non-CP)");
      }
      else {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ("CsvEventWait (Non-CP)",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0x191);
      }
      pcVar11 = pFVar12->FormattedStatNameNonCP;
      if (pcVar11 == (char *)0x0) goto LAB_141929bf0;
      FVar10.Bits = 0xffff8080;
    }
    else {
      local_res10 = 0xffc06060;
      local_res20[0].Bits = 0xffc06060;
      if (CpuChannel->Enabled < 0) {
        FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res20[0]._s_0,"CsvEventWait");
      }
      else {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ("CsvEventWait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0x191);
      }
      pcVar11 = pFVar12->FormattedStatName;
      if (pcVar11 == (char *)0x0) goto LAB_141929bf0;
      FVar10.Bits = 0xffc06060;
    }
    CsvBeginNamedEvent((FColor)FVar10,pcVar11);
  }
LAB_141929bf0:
  pFVar7 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
  if (pFVar7 == (FCsvProfilerThreadData *)0x0) {
    pFVar7 = FCsvProfilerThreadData::CreateTLSData();
  }
  pcVar11 = pFVar12->StatName;
  QueryPerformanceCounter(&local_30);
  FCsvProfilerTrace::OutputBeginExclusiveStat
            (pcVar11,_GCsvCategory_Exclusive.Index,local_30.QuadPart);
  uVar3 = (pFVar7->TimingMarkers).Counter;
  if ((char)uVar3 == '\0') {
    TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar7->TimingMarkers);
  }
  uVar6 = _GCsvCategory_Exclusive.Index;
  pLVar1 = (LARGE_INTEGER *)(((pFVar7->TimingMarkers).TailBlock)->Entries + (uVar3 & 0xff));
  pLVar1->QuadPart = (LONGLONG)local_30;
  *(undefined1 *)((longlong)pLVar1 + 0x15) = 0x12;
  pLVar1[1].QuadPart = (LONGLONG)pcVar11;
  pLVar1[2].s.LowPart = uVar6;
  (pFVar7->TimingMarkers).Counter = (pFVar7->TimingMarkers).Counter + 1;
  return;
}

// EnableCategoryByIndex @ 141935350

void __thiscall FCsvProfiler::EnableCategoryByIndex(FCsvProfiler *this,uint param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (0x7ff < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CategoryIndex < CSV_MAX_CATEGORY_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x131f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GCsvCategoriesEnabled[param_1] = param_2;
  return;
}

// EnableCategoryByString @ 1419353b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCsvProfiler::EnableCategoryByString(FCsvProfiler *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FCsvCategoryData *lpCriticalSection;
  FString *pFVar5;
  int *piVar6;
  FString local_18;
  
  lpCriticalSection = FCsvCategoryData::Get();
  if ((lpCriticalSection == (FCsvCategoryData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = ::FString::ToLower(param_1,&local_18);
  piVar6 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                 *)&lpCriticalSection->CategoryNameToIndex,pFVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (piVar6 == (int *)0x0) {
    if (lpCriticalSection != (FCsvCategoryData *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    iVar1 = *piVar6;
    if (lpCriticalSection != (FCsvCategoryData *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (-1 < iVar1) {
      if (4 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      GCsvCategoriesEnabled[iVar1] = true;
      return true;
    }
  }
  if (2 < (byte)LogCsvProfiler._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
  }
  return false;
}

// EndCapture @ 141935540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedFuture<FString> * __thiscall
FCsvProfiler::EndCapture
          (FCsvProfiler *this,TSharedFuture<FString> *__return_storage_ptr__,
          TRefCountPtr<FBaseGraphTask> param_1)

{
  int *piVar1;
  FSharedReferencer<1> *pFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar3
  ;
  int iVar4;
  undefined8 *puVar5;
  TNode *pTVar6;
  TFutureState<FString> *pTVar7;
  code *pcVar8;
  bool bVar9;
  TSharedFuture<FString> *pTVar10;
  FDateTime this_00;
  FCsvProfiler *pFVar11;
  FString *pFVar12;
  TPromise<FString> *pTVar13;
  TPromise<FString> *pTVar14;
  FEvent *pFVar15;
  TNode *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  TPromise<FString> *pTVar20;
  atomic<int> *paVar21;
  undefined1 auStackY_238 [32];
  undefined4 local_208 [2];
  FMemScope local_200;
  undefined1 local_1f8 [72];
  TReferenceControllerBase<1> *pTStack_1b0;
  LARGE_INTEGER local_1a8;
  FBaseGraphTask *local_1a0;
  FString local_198;
  undefined1 local_188 [72];
  TReferenceControllerBase<1> *local_140;
  TPromise<FString> *local_130;
  FString local_128;
  undefined1 local_118 [24];
  undefined8 uStack_100;
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  ForElementType<FSetElementId> local_e0;
  ulonglong local_d0;
  TPromise<FString> *local_c8;
  TReferenceControllerBase<1> local_b8;
  TFutureState<FString> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar20 = (TPromise<FString> *)0x0;
  local_208[0] = 0;
  local_1a0 = param_1.Reference;
  FLLMScope::FLLMScope((FLLMScope *)local_208,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_200,CsvProfiler,true);
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0xfcf,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar10 = (TSharedFuture<FString> *)(*pcVar8)();
    return pTVar10;
  }
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x12df,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar10 = (TSharedFuture<FString> *)(*pcVar8)();
    return pTVar10;
  }
  if (GCsvProfilerIsCapturing == false) {
    if (2 < (byte)LogCsvProfiler._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    FMemScope::~FMemScope(&local_200);
    FLLMScope::~FLLMScope((FLLMScope *)local_208);
    puVar5 = *(undefined8 **)param_1.Reference;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 6);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  else {
    local_1f8._64_8_ = 0;
    pTStack_1b0 = (TReferenceControllerBase<1> *)0x0;
    local_1f8[0] = Count;
    local_1f8._4_4_ = 0xffffffff;
    local_1f8._8_4_ = 0xffffffff;
    local_1f8._16_8_ = (FScriptContainerElement *)0x0;
    local_1f8._24_4_ = 0;
    local_1f8._28_4_ = 0;
    local_1f8._32_8_ = (FScriptContainerElement *)0x0;
    local_1f8._40_4_ = 0;
    local_1f8._44_4_ = 0;
    bVar9 = TQueue<FCsvCaptureCommand,1>::Peek(&this->CommandQueue,(FCsvCaptureCommand *)local_1f8);
    if ((bVar9) && (local_1f8[0] == Stop)) {
      if (2 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      *(undefined8 *)__return_storage_ptr__ = local_1f8._64_8_;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTStack_1b0;
      if (pTStack_1b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_1b0->SharedReferenceCount =
             (atomic<int>)((int)pTStack_1b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1b0);
      if ((FScriptContainerElement *)local_1f8._32_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1f8._32_8_);
      }
      if ((FScriptContainerElement *)local_1f8._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1f8._16_8_);
      }
      FMemScope::~FMemScope(&local_200);
      FLLMScope::~FLLMScope((FLLMScope *)local_208);
      puVar5 = *(undefined8 **)param_1.Reference;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 6);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
    else {
      bVar9 = TQueue<FCsvCaptureCommand,1>::Peek
                        (&this->CommandQueue,(FCsvCaptureCommand *)local_1f8);
      if ((bVar9) && ((local_1f8[0] == Start && (2 < (byte)LogCsvProfiler._0_1_)))) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnCSVProfileEndRequestedDelegate);
      this_00 = FDateTime::UtcNow();
      FDateTime::ToUnixTimestamp((FDateTime *)this_00.Ticks);
      ::FString::PrintfImpl(&local_198,L"%lld");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_198.Data.ArrayNum != 0) {
        FVar18.Data = local_198.Data.AllocatorInstance.Data;
      }
      pFVar11 = Get();
      SetMetadataInternal(pFVar11,L"EndTimestamp",(wchar_t *)FVar18.Data,true,NonPersistent);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      QueryPerformanceCounter(&local_1a8);
      pFVar12 = ::FString::SanitizeFloat
                          (&local_128,
                           ((double)local_1a8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                           __real_4170000000000000) - this->CaptureStartTime,1);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar11 = Get();
      SetMetadataInternal(pFVar11,L"CaptureDuration",pwVar19,true,NonPersistent);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      pTVar13 = ::operator_new(0x18);
      pTVar14 = pTVar20;
      if (pTVar13 != (TPromise<FString> *)0x0) {
        local_b8._8_8_ = *(undefined8 *)param_1.Reference;
        if (local_b8._8_8_ != 0) {
          LOCK();
          *(int *)(local_b8._8_8_ + 0x30) = *(int *)(local_b8._8_8_ + 0x30) + 1;
          UNLOCK();
        }
        local_b8._padding_ =
             (longlong)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCsvProfiler::EndCapture'::`2'::<lambda_2>,1,0>::_vftable_;
        local_a0 = (TReferenceControllerBase<1> *)0x0;
        local_c8 = (TPromise<FString> *)
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`FCsvProfiler::EndCapture'::__l2::<lambda_2>,void>::Call;
        pTVar14 = ::operator_new(0x90);
        if (pTVar14 == (TPromise<FString> *)0x0) {
          (pTVar13->State).Object = (TFutureState<FString> *)0x10;
          (pTVar13->State).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          pTVar14 = pTVar20;
        }
        else {
          *(undefined4 *)&(pTVar14->State).SharedReferenceCount.ReferenceController = 1;
          *(undefined4 *)((longlong)&(pTVar14->State).SharedReferenceCount.ReferenceController + 4)
               = 1;
          (pTVar14->State).Object =
               (TFutureState<FString> *)
               &
               ___7__TIntrusiveReferenceController_V__TFutureState_VFString_____00_SharedPointerInternals__6B_
          ;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar14->bFutureRetrieved,4000)
          ;
          *(TPromise<FString> **)&pTVar14[2].bFutureRetrieved = local_c8;
          pTVar14[4].State.SharedReferenceCount.ReferenceController = local_a0;
          pTVar14[3].State.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)local_b8._padding_;
          pTVar14[3].bFutureRetrieved = (bool)local_b8.SharedReferenceCount._0_1_;
          *(undefined3 *)&pTVar14[3].field_0x11 = local_b8.SharedReferenceCount._1_3_;
          *(atomic<int> *)&pTVar14[3].field_0x14 = local_b8.WeakReferenceCount;
          pTVar14[4].State.Object = local_a8;
          if (*(longlong *)&pTVar14[2].bFutureRetrieved != 0) {
            local_c8 = pTVar20;
          }
          pFVar15 = FGenericPlatformProcess::GetSynchEventFromPool(true);
          *(FEvent **)&pTVar14[4].bFutureRetrieved = pFVar15;
          *(undefined1 *)&(pTVar14 + 4)[1].State.Object = 0;
          if ((&pTVar14->bFutureRetrieved == (bool *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            pTVar10 = (TSharedFuture<FString> *)(*pcVar8)();
            return pTVar10;
          }
          (pTVar13->State).Object = (TFutureState<FString> *)&pTVar14->bFutureRetrieved;
          (pTVar13->State).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pTVar14;
          LOCK();
          pFVar2 = &(pTVar14->State).SharedReferenceCount;
          *(int *)&pFVar2->ReferenceController = *(int *)&pFVar2->ReferenceController + 1;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar14);
        pTVar13->bFutureRetrieved = false;
        local_130 = pTVar20;
        pTVar20 = pTVar13;
        pTVar14 = (TPromise<FString> *)&DAT_00000003;
      }
      if ((((ulonglong)pTVar14 & 2) != 0) &&
         (pTVar14 = (TPromise<FString> *)(ulonglong)((uint)pTVar14 & 0xfffffffd),
         local_c8 != (TPromise<FString> *)0x0)) {
        pTVar17 = &local_b8;
        if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
          pTVar17 = local_a0;
        }
        (**(code **)(pTVar17->_padding_ + 0x10))();
      }
      if ((((ulonglong)pTVar14 & 1) != 0) && (local_130 != (TPromise<FString> *)0x0)) {
        LOCK();
        pTVar14 = local_130 + 2;
        iVar4 = *(int *)&(pTVar14->State).Object;
        *(int *)&(pTVar14->State).Object = *(int *)&(pTVar14->State).Object + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)((local_130->State).Object)->_padding_)(local_130,1);
        }
      }
      lpCriticalSection = &this->MetadataCS;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar10 = (TSharedFuture<FString> *)(*pcVar8)();
        return pTVar10;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=(&local_98,
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&this->MetadataMap);
      pTVar3 = &this->NonPersistentMetadataMap;
      TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
      Append<FDefaultSetAllocator>
                ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)&local_98,pTVar3);
      local_e0.InlineData[0] = '\0';
      local_e0.InlineData[1] = '\0';
      local_e0.InlineData[2] = '\0';
      local_e0.InlineData[3] = '\0';
      local_e0._padding_ = 0;
      local_d0 = 0;
      local_118._16_8_ = 0;
      uStack_100 = 0;
      local_118._0_8_ = (FScriptContainerElement *)0x0;
      local_118._8_8_ = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_ec = 0x80;
      local_e8 = 0xffffffff;
      local_e4 = 0;
      local_e0.SecondaryData = (ForElementType<FSetElementId>)0x0;
      if (pTVar3 != (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                     *)local_118) {
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)pTVar3,
                   (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)local_118);
      }
      local_d0 = local_d0 & 0xffffffff00000000;
      if (local_e0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e0.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_118,0,local_118._8_4_);
      bVar9 = local_118._12_4_ != 0;
      paVar21 = (atomic<int> *)&DAT_00000008;
      local_118._8_8_ = (ulonglong)(uint)local_118._12_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
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
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      pTVar16 = ::operator_new(0x58);
      if (pTVar16 != (TNode *)0x0) {
        pTVar16->NextNode = (TNode *)0x0;
        *(undefined8 *)&(pTVar16->Item).field_0x0 = 0;
        *(undefined8 *)&(pTVar16->Item).field_0x8 = 0;
        *(undefined8 *)&(pTVar16->Item).field_0x20 = 0;
        *(undefined4 *)&(pTVar16->Item).field_0x28 = 0;
        *(undefined4 *)&(pTVar16->Item).field_0x2c = 0x80;
        *(undefined4 *)&(pTVar16->Item).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pTVar16->Item).field_0x34 = 0;
        *(undefined8 *)&(pTVar16->Item).field_0x40 = 0;
        *(undefined4 *)&(pTVar16->Item).field_0x48 = 0;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)&pTVar16->Item,&local_98);
        pTVar6 = (this->MetadataQueue).Head;
        (this->MetadataQueue).Head = pTVar16;
        pTVar6->NextNode = pTVar16;
      }
      if ((pTVar20->bFutureRetrieved != false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bFutureRetrieved",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x24d,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar10 = (TSharedFuture<FString> *)(*pcVar8)();
        return pTVar10;
      }
      pTVar7 = (pTVar20->State).Object;
      pTVar20->bFutureRetrieved = true;
      if ((pTVar7 == (TFutureState<FString> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar10 = (TSharedFuture<FString> *)(*pcVar8)();
        return pTVar10;
      }
      pTVar17 = (pTVar20->State).SharedReferenceCount.ReferenceController;
      pTVar7 = (pTVar20->State).Object;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        paVar21 = &pTVar17->SharedReferenceCount;
        LOCK();
        *paVar21 = (atomic<int>)((int)*paVar21 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar21 = (atomic<int>)((int)*paVar21 + 1);
        UNLOCK();
      }
      local_188._4_4_ = GCsvProfilerFrameNumber;
      local_188[0] = Stop;
      local_188._16_8_ = (FScriptContainerElement *)0x0;
      local_188._24_4_ = 0;
      local_188._28_4_ = 0;
      local_188._32_8_ = (FScriptContainerElement *)0x0;
      local_188._40_4_ = 0;
      local_188._44_4_ = 0;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar21 = (atomic<int>)((int)*paVar21 + 1);
        UNLOCK();
      }
      local_188._56_8_ = pTVar20;
      local_188._64_8_ = pTVar7;
      local_140 = pTVar17;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      TQueue<FCsvCaptureCommand,1>::Enqueue(&this->CommandQueue,(FCsvCaptureCommand *)local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140)
      ;
      if ((FScriptContainerElement *)local_188._32_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._32_8_);
      }
      if ((FScriptContainerElement *)local_188._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._16_8_);
      }
      *(TFutureState<FString> **)__return_storage_ptr__ = pTVar7;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar17;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1b0);
      if ((FScriptContainerElement *)local_1f8._32_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1f8._32_8_);
      }
      if ((FScriptContainerElement *)local_1f8._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1f8._16_8_);
      }
      FMemScope::~FMemScope(&local_200);
      FLLMScope::~FLLMScope((FLLMScope *)local_208);
      puVar5 = *(undefined8 **)local_1a0;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 6);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// EndExclusiveStat @ 141935de0

void __cdecl FCsvProfiler::EndExclusiveStat(char *param_1)

{
  LARGE_INTEGER *pLVar1;
  ulonglong uVar2;
  uint uVar3;
  FCsvProfilerThreadData *this;
  LARGE_INTEGER local_res10;
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false))
  {
    this = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this == (FCsvProfilerThreadData *)0x0) {
      this = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res10);
    FCsvProfilerTrace::OutputEndExclusiveStat
              (param_1,_GCsvCategory_Exclusive.Index,local_res10.QuadPart);
    uVar2 = (this->TimingMarkers).Counter;
    if ((char)uVar2 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this->TimingMarkers);
    }
    uVar3 = _GCsvCategory_Exclusive.Index;
    pLVar1 = (LARGE_INTEGER *)(((this->TimingMarkers).TailBlock)->Entries + (uVar2 & 0xff));
    pLVar1->QuadPart = (LONGLONG)local_res10;
    *(undefined1 *)((longlong)pLVar1 + 0x15) = 0x10;
    pLVar1[1] = (LARGE_INTEGER)param_1;
    pLVar1[2].s.LowPart = uVar3;
    (this->TimingMarkers).Counter = (this->TimingMarkers).Counter + 1;
    if (GCsvProfilerNamedEventsExclusive != false) {
      if (-1 < CpuChannel->Enabled) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      FGenericPlatformMisc::EndNamedEvent();
      return;
    }
  }
  return;
}

// EndFrame @ 141935ee0

/* WARNING: Removing unreachable block (ram,0x000141936508) */
/* WARNING: Removing unreachable block (ram,0x000141936552) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvProfiler::EndFrame(FCsvProfiler *this)

{
  int *piVar1;
  ulonglong uVar2;
  FBlock *pFVar3;
  FCsvProfilerProcessingThread *pFVar4;
  TNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  bool bVar11;
  BOOL BVar12;
  uint uVar13;
  int iVar14;
  FCsvProfilerThreadData *pFVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::EndFrame(void)_::_15_::FStat_STAT_FCsvProfiler_EndFrame_Capturing>
  FVar17;
  ulong64 uVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::EndFrame(void)_::_30_::FStat_STAT_FCsvProfiler_EndFrame_Stop>
  FVar21;
  FNameEntryId FVar22;
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar23;
  FNameEntryId FVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  FLLMScope local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  undefined4 local_res18;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_258 [2];
  FName local_250;
  FName local_240;
  LARGE_INTEGER local_230;
  LARGE_INTEGER local_228;
  FName local_220;
  FName local_218 [2];
  undefined1 local_208 [72];
  TReferenceControllerBase<1> *pTStack_1c0;
  FScopedCsvStatExclusive local_1b8;
  undefined8 local_1b0;
  LARGE_INTEGER local_1a8;
  LARGE_INTEGER local_1a0;
  LARGE_INTEGER local_198;
  FScopedCsvStatExclusive local_190;
  FMemScope local_188;
  FStatMessage local_180;
  FStatMessage local_170;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  undefined1 local_140 [24];
  FPlatformMemoryStats local_128;
  
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_188,CsvProfiler,true);
  if (__CsvProfilerStat3769 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("CsvProfiler");
    __CsvProfilerStat3769 = true;
  }
  local_190.StatName = "CsvProfiler";
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
    if (GCsvProfilerNamedEventsExclusive != false) {
      local_res10 = 0xffff8080;
      CsvBeginNamedEvent((FColor)0xffff8080,"CSV_CsvProfiler");
    }
    pFVar15 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar15 == (FCsvProfilerThreadData *)0x0) {
      pFVar15 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_230);
    FCsvProfilerTrace::OutputBeginExclusiveStat
              ("CsvProfiler",_GCsvCategory_Exclusive.Index,local_230.QuadPart);
    uVar2 = (pFVar15->TimingMarkers).Counter;
    uVar25 = uVar2 & 0xff;
    if ((char)uVar2 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar15->TimingMarkers)
      ;
    }
    uVar13 = _GCsvCategory_Exclusive.Index;
    pFVar3 = (pFVar15->TimingMarkers).TailBlock;
    ((LARGE_INTEGER *)(pFVar3->Entries + uVar25))->QuadPart = (LONGLONG)local_230;
    pFVar3->Entries[uVar25].field_0x15 = 0x12;
    *(char **)&pFVar3->Entries[uVar25].field_0x8 = "CsvProfiler";
    *(uint *)&pFVar3->Entries[uVar25].field_0x10 = uVar13;
    (pFVar15->TimingMarkers).Counter = (pFVar15->TimingMarkers).Counter + 1;
  }
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                          ,0xebb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar24.Value = 0;
  if (GCsvProfilerIsCapturing != false) {
    pFVar4 = this->ProcessingThread;
    if (pFVar4 != (FCsvProfilerProcessingThread *)0x0) {
      bVar10 = IsInGameThread();
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                              ,0xc7f,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lpCriticalSection = &pFVar4->StallGameThreadCs;
      BVar12 = TryEnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (BVar12 == 0) {
        if (`public:_void___cdecl_FCsvProfilerProcessingThread::StallGameThreadIfNeeded(void)___ptr64'
            ::__l2::__CsvProfilerStat3205 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("CsvProfiler_Stall");
          `public:_void___cdecl_FCsvProfilerProcessingThread::StallGameThreadIfNeeded(void)___ptr64'
          ::__l2::__CsvProfilerStat3205 = true;
        }
        local_1b8.StatName = "CsvProfiler_Stall";
        if ((GCsvProfilerIsCapturing != false) &&
           (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
          if (GCsvProfilerNamedEventsExclusive != false) {
            local_res18 = 0xffff8080;
            CsvBeginNamedEvent((FColor)0xffff8080,"CSV_CsvProfiler_Stall");
          }
          pFVar15 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
          if (pFVar15 == (FCsvProfilerThreadData *)0x0) {
            pFVar15 = FCsvProfilerThreadData::CreateTLSData();
          }
          QueryPerformanceCounter(&local_228);
          FCsvProfilerTrace::OutputBeginExclusiveStat
                    ("CsvProfiler_Stall",_GCsvCategory_Exclusive.Index,local_228.QuadPart);
          uVar2 = (pFVar15->TimingMarkers).Counter;
          uVar25 = uVar2 & 0xff;
          if ((char)uVar2 == '\0') {
            TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                      (&pFVar15->TimingMarkers);
          }
          uVar13 = _GCsvCategory_Exclusive.Index;
          pFVar3 = (pFVar15->TimingMarkers).TailBlock;
          ((LARGE_INTEGER *)(pFVar3->Entries + uVar25))->QuadPart = (LONGLONG)local_228;
          pFVar3->Entries[uVar25].field_0x15 = 0x12;
          *(char **)&pFVar3->Entries[uVar25].field_0x8 = "CsvProfiler_Stall";
          *(uint *)&pFVar3->Entries[uVar25].field_0x10 = uVar13;
          (pFVar15->TimingMarkers).Counter = (pFVar15->TimingMarkers).Counter + 1;
        }
        if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        FScopedCsvStatExclusive::~FScopedCsvStatExclusive(&local_1b8);
      }
      else {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnCSVProfileEndFrameDelegate);
    FCsvPersistentCustomStats::RecordStats(&GCsvPersistentCustomStats);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_FCsvProfiler_EndFrame_Capturing ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::EndFrame(void)_::_15_::FStat_STAT_FCsvProfiler_EndFrame_Capturing>
           )0x0) {
        pFVar16 = ::FName::FName(&local_160,"STAT_FCsvProfiler_EndFrame_Capturing");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfiler_EndFrame_Capturing,
                   *pFVar16,L"STAT_FCsvProfiler_EndFrame_Capturing","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar17 = StatPtr_STAT_FCsvProfiler_EndFrame_Capturing;
    if (StatPtr_STAT_FCsvProfiler_EndFrame_Capturing ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::EndFrame(void)_::_15_::FStat_STAT_FCsvProfiler_EndFrame_Capturing>
         )0x0) {
      pFVar16 = ::FName::FName(&local_158,"STAT_FCsvProfiler_EndFrame_Capturing");
      FVar17 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::EndFrame(void)_::_15_::FStat_STAT_FCsvProfiler_EndFrame_Capturing>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_FCsvProfiler_EndFrame_Capturing,*pFVar16,
                            L"STAT_FCsvProfiler_EndFrame_Capturing","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar23 = *(FName *)FVar17;
    bVar10 = false;
    bVar8 = false;
    local_250.ComparisonIndex.Value = 0;
    local_250.Number = 0;
    FVar22 = FVar23.ComparisonIndex.Value;
    uVar13 = FVar23.Number;
    if ((FVar22.Value == 0) && (uVar13 == 0)) {
LAB_1419363b1:
      bVar7 = false;
      FVar23 = local_250;
      FVar22.Value = FVar24.Value;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar10 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_220.ComparisonIndex.Value = FVar22.Value;
          local_220.Number = uVar13;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_220,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                     ,0xec8);
          bVar10 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1419363b1;
      local_res10 = FVar22.Value;
      uStackX_14 = uVar13;
      local_250 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar7 = true;
      FVar22.Value = local_250.ComparisonIndex.Value;
    }
    if ((-1 < this->NumFramesToCapture) &&
       (iVar14 = this->NumFramesToCapture + -1, this->NumFramesToCapture = iVar14, iVar14 == 0)) {
      local_1b0 = 0;
      EndCapture(this,(TSharedFuture<FString> *)local_140,(FBaseGraphTask *)&local_1b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_140._8_8_);
    }
    QueryPerformanceCounter(&local_1a8);
    RecordCustomStatMinimal
              ("FrameTime",0,
               (float)((double)(local_1a8.QuadPart - this->LastEndFrameTimestamp) *
                       FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000),Set);
    PlatformMemoryHelpers::GetFrameMemoryStats(&local_128);
    fVar26 = (float)(ulonglong)local_128._padding_ * __real_35800000;
    fVar28 = (float)(ulonglong)local_128._padding_ * __real_35800000;
    fVar29 = (float)(ulonglong)local_128._padding_ * __real_35800000;
    uVar18 = FGenericPlatformMemory::GetExtraDevelopmentMemorySize();
    fVar27 = fVar26 - (float)(uVar18 >> 0x14);
    fVar30 = 0.0;
    if (fVar27 < 0.0) {
      fVar30 = (float)((uint)fVar27 ^ __xmm_80000000800000008000000080000000);
    }
    uVar18 = FGenericPlatformMemory::GetExtraDevelopmentMemorySize();
    RecordCustomStatMinimal("MemoryFreeMB",0,fVar27,Set);
    RecordCustomStatMinimal("PhysicalUsedMB",0,fVar28,Set);
    RecordCustomStatMinimal("VirtualUsedMB",0,fVar29,Set);
    RecordCustomStatMinimal("ExtendedUsedMB",0,fVar30,Set);
    RecordCustomStatMinimal("SystemMaxMB",0,(fVar28 + fVar26) - (float)(uVar18 >> 0x14),Set);
    if (this->ProcessingThread == (FCsvProfilerProcessingThread *)0x0) {
      ProcessStatData(this,(uint *)0x0);
    }
    this->CaptureFrameNumber = this->CaptureFrameNumber + 1;
    this->LastEndFrameTimestamp = (ulong64)local_1a8;
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar7) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
        local_180.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
        local_180.NameAndInfo.Index.Value = FVar22.Value;
        QueryPerformanceCounter(&local_1a0);
        local_180.StatData.Pad[4] = '\0';
        local_180.StatData.Pad[5] = '\0';
        local_180.StatData.Pad[6] = '\0';
        local_180.StatData.Pad[7] = '\0';
        local_180.StatData.Pad[0] = local_1a0.s.LowPart._0_1_;
        local_180.StatData.Pad[1] = local_1a0.s.LowPart._1_1_;
        local_180.StatData.Pad[2] = local_1a0.s.LowPart._2_1_;
        local_180.StatData.Pad[3] = local_1a0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar19,&local_180);
        piVar1 = &pFVar19->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar19,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar19,false,false);
        }
      }
    }
  }
  local_208[0] = Count;
  local_208._4_4_ = 0xffffffff;
  local_208._8_4_ = 0xffffffff;
  local_208._16_8_ = (FScriptContainerElement *)0x0;
  local_208._24_4_ = 0;
  local_208._28_4_ = 0;
  local_208._32_8_ = (FScriptContainerElement *)0x0;
  local_208._40_4_ = 0;
  local_208._44_4_ = 0;
  local_208._64_8_ = 0;
  pTStack_1c0 = (TReferenceControllerBase<1> *)0x0;
  if (((this->CommandQueue).Tail)->NextNode == (TNode *)0x0) goto LAB_1419369c4;
  pTVar5 = ((this->CommandQueue).Tail)->NextNode;
  local_208[0] = (pTVar5->Item).CommandType;
  local_208._4_4_ = (pTVar5->Item).FrameRequested;
  local_208._8_4_ = (pTVar5->Item).Value;
  ::FString::operator=((FString *)(local_208 + 0x10),&(pTVar5->Item).DestinationFolder);
  ::FString::operator=((FString *)(local_208 + 0x20),&(pTVar5->Item).Filename);
  pTVar9 = pTStack_1c0;
  local_208._48_4_ = (pTVar5->Item).Flags;
  local_208._56_8_ = (pTVar5->Item).Completion;
  pTStack_1c0 = *(TReferenceControllerBase<1> **)&(pTVar5->Item).Future.field_0x8;
  local_208._64_8_ = *(undefined8 *)&(pTVar5->Item).Future;
  if (pTStack_1c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_1c0->SharedReferenceCount = (atomic<int>)((int)pTStack_1c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (local_208[0] != Stop) goto LAB_1419369c4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_FCsvProfiler_EndFrame_Stop ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::EndFrame(void)_::_30_::FStat_STAT_FCsvProfiler_EndFrame_Stop>
         )0x0) {
      pFVar16 = ::FName::FName(&local_150,"STAT_FCsvProfiler_EndFrame_Stop");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfiler_EndFrame_Stop,*pFVar16,
                 L"STAT_FCsvProfiler_EndFrame_Stop","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar21 = StatPtr_STAT_FCsvProfiler_EndFrame_Stop;
  if (StatPtr_STAT_FCsvProfiler_EndFrame_Stop ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::EndFrame(void)_::_30_::FStat_STAT_FCsvProfiler_EndFrame_Stop>
       )0x0) {
    pFVar16 = ::FName::FName(&local_148,"STAT_FCsvProfiler_EndFrame_Stop");
    FVar21 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvProfiler::EndFrame(void)_::_30_::FStat_STAT_FCsvProfiler_EndFrame_Stop>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfiler_EndFrame_Stop,
                          *pFVar16,L"STAT_FCsvProfiler_EndFrame_Stop","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar21;
  bVar10 = false;
  bVar8 = false;
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar13 = FVar23.Number;
  if ((FVar22.Value == 0) && (uVar13 == 0)) {
LAB_1419368d9:
    bVar7 = false;
    FVar23 = local_240;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_258[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_258[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218[0].ComparisonIndex.Value = FVar22.Value;
        local_218[0].Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_218,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0xeff);
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1419368d9;
    local_res10 = FVar22.Value;
    uStackX_14 = uVar13;
    local_240 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_240.ComparisonIndex.Value;
  }
  bVar11 = TryEndCaptureInternal(this,(FCsvCaptureCommand *)local_208);
  if (bVar11) {
    TQueue<FCsvCaptureCommand,1>::Dequeue(&this->CommandQueue,(FCsvCaptureCommand *)local_208);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_170.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      local_170.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_198);
      local_170.StatData.Pad[4] = '\0';
      local_170.StatData.Pad[5] = '\0';
      local_170.StatData.Pad[6] = '\0';
      local_170.StatData.Pad[7] = '\0';
      local_170.StatData.Pad[0] = local_198.s.LowPart._0_1_;
      local_170.StatData.Pad[1] = local_198.s.LowPart._1_1_;
      local_170.StatData.Pad[2] = local_198.s.LowPart._2_1_;
      local_170.StatData.Pad[3] = local_198.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar19,&local_170);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
LAB_1419369c4:
  GCsvProfilerFrameNumber = GCsvProfilerFrameNumber + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c0);
  if ((FScriptContainerElement *)local_208._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_208._32_8_);
  }
  if ((FScriptContainerElement *)local_208._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_208._16_8_);
  }
  FScopedCsvStatExclusive::~FScopedCsvStatExclusive(&local_190);
  FMemScope::~FMemScope(&local_188);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// EndFrameRT @ 141936b80

void __thiscall FCsvProfiler::EndFrameRT(FCsvProfiler *this)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(local_res18,CsvProfiler,true);
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0xf8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GCsvProfilerIsCapturing != false) {
    this->CaptureFrameNumberRT = this->CaptureFrameNumberRT + 1;
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// EndSetWaitStat @ 141936c30

void __cdecl FCsvProfiler::EndSetWaitStat(void)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  FCsvProfilerThreadData *pFVar4;
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false))
  {
    if (GCsvProfilerNamedEventsExclusive) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    pFVar4 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar4 == (FCsvProfilerThreadData *)0x0) {
      pFVar4 = FCsvProfilerThreadData::CreateTLSData();
    }
    if (0 < (pFVar4->WaitStatNameStack).ArrayNum) {
      iVar3 = (pFVar4->WaitStatNameStack).ArrayNum;
      uVar1 = iVar3 - 1;
      _Dst = (pFVar4->WaitStatNameStack).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18;
      iVar3 = ~uVar1 + iVar3;
      if (iVar3 != 0) {
        memmove(_Dst,_Dst + 0x18,(longlong)iVar3 * 0x18);
      }
      piVar2 = &(pFVar4->WaitStatNameStack).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&(pFVar4->WaitStatNameStack).AllocatorInstance,
                 (pFVar4->WaitStatNameStack).ArrayNum,&(pFVar4->WaitStatNameStack).ArrayMax);
    }
  }
  return;
}

// EndStat @ 141936d00

void __cdecl FCsvProfiler::EndStat(FName *param_1,uint param_2)

{
  LARGE_INTEGER *pLVar1;
  ulonglong uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  FCsvProfilerThreadData *this;
  LARGE_INTEGER local_res18;
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    if (param_1->Number != 0) {
      local_res18 = (LARGE_INTEGER)param_1;
      `ValidateFName'::__l2::<lambda_1>::operator()(&local_res18);
    }
    this = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this == (FCsvProfilerThreadData *)0x0) {
      this = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res18);
    FCsvProfilerTrace::OutputEndStat(param_1,param_2,local_res18.QuadPart);
    uVar2 = (this->TimingMarkers).Counter;
    if ((char)uVar2 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this->TimingMarkers);
    }
    pLVar1 = (LARGE_INTEGER *)(((this->TimingMarkers).TailBlock)->Entries + (uVar2 & 0xff));
    FVar3.Value = (param_1->ComparisonIndex).Value;
    uVar4 = param_1->Number;
    pLVar1->QuadPart = (LONGLONG)local_res18;
    *(DWORD *)(pLVar1 + 1) = FVar3.Value;
    *(uint *)((longlong)(pLVar1 + 1) + 4) = uVar4;
    *(undefined1 *)((longlong)pLVar1 + 0x15) = 1;
    pLVar1[2].s.LowPart = param_2;
    (this->TimingMarkers).Counter = (this->TimingMarkers).Counter + 1;
    if (GCsvProfilerNamedEventsTiming != false) {
      if (-1 < CpuChannel->Enabled) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  return;
}

// EndStat @ 141936e20

void __cdecl FCsvProfiler::EndStat(char *param_1,uint param_2)

{
  ulonglong uVar1;
  FBlock *pFVar2;
  FCsvProfilerThreadData *this;
  ulonglong uVar3;
  LARGE_INTEGER local_res18;
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    this = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this == (FCsvProfilerThreadData *)0x0) {
      this = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res18);
    FCsvProfilerTrace::OutputEndStat(param_1,param_2,local_res18.QuadPart);
    uVar1 = (this->TimingMarkers).Counter;
    uVar3 = uVar1 & 0xff;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this->TimingMarkers);
    }
    pFVar2 = (this->TimingMarkers).TailBlock;
    pFVar2->Entries[uVar3].field_0x15 = 0;
    *(char **)&pFVar2->Entries[uVar3].field_0x8 = param_1;
    ((LARGE_INTEGER *)(pFVar2->Entries + uVar3))[2].s.LowPart = param_2;
    ((LARGE_INTEGER *)(pFVar2->Entries + uVar3))->QuadPart = (LONGLONG)local_res18;
    (this->TimingMarkers).Counter = (this->TimingMarkers).Counter + 1;
    if (GCsvProfilerNamedEventsTiming != false) {
      if (-1 < CpuChannel->Enabled) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  return;
}

// EndWait @ 141936f20

void __cdecl FCsvProfiler::EndWait(void)

{
  LARGE_INTEGER *pLVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FCsvProfilerThreadData *pFVar8;
  FCsvWaitStatName *pFVar9;
  LARGE_INTEGER local_res8;
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false))
  {
    pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
      pFVar8 = FCsvProfilerThreadData::CreateTLSData();
    }
    iVar2 = (pFVar8->WaitStatNameStack).ArrayNum;
    if (iVar2 == 0) {
      pFVar9 = &GDefaultWaitStatName;
    }
    else {
      uVar7 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar7 = ~(iVar2 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = (FCsvWaitStatName *)
               ((pFVar8->WaitStatNameStack).AllocatorInstance.Data +
               ((longlong)(pFVar8->WaitStatNameStack).ArrayNum * 3 + -3) * 8);
    }
    if (pFVar9->StatName != "[IGNORE]") {
      pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
        pFVar8 = FCsvProfilerThreadData::CreateTLSData();
      }
      pcVar3 = pFVar9->StatName;
      QueryPerformanceCounter(&local_res8);
      FCsvProfilerTrace::OutputEndExclusiveStat
                (pcVar3,_GCsvCategory_Exclusive.Index,local_res8.QuadPart);
      uVar4 = (pFVar8->TimingMarkers).Counter;
      if ((char)uVar4 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar8->TimingMarkers);
      }
      uVar7 = _GCsvCategory_Exclusive.Index;
      pLVar1 = (LARGE_INTEGER *)(((pFVar8->TimingMarkers).TailBlock)->Entries + (uVar4 & 0xff));
      pLVar1->QuadPart = (LONGLONG)local_res8;
      *(undefined1 *)((longlong)pLVar1 + 0x15) = 0x10;
      pLVar1[1].QuadPart = (LONGLONG)pcVar3;
      pLVar1[2].s.LowPart = uVar7;
      (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
      if (GCsvProfilerNamedEventsExclusive != false) {
        if (CpuChannel->Enabled < 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        else {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((pFVar9->FormattedStatName != (char *)0x0) ||
           (pFVar9->FormattedStatNameNonCP != (char *)0x0)) {
          if (CpuChannel->Enabled < 0) {
            FGenericPlatformMisc::EndNamedEvent();
            return;
          }
          FCpuProfilerTrace::OutputEndEvent();
          return;
        }
      }
    }
  }
  return;
}

// FinalizeCsvFile @ 14193b3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvProfiler::FinalizeCsvFile(FCsvProfiler *this)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar1
  ;
  undefined1 *puVar2;
  int *piVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  void *pvVar6;
  FCsvStreamWriter *this_00;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  DWORD DVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_private:_void___cdecl_FCsvProfiler::FinalizeCsvFile(void)_::_2_::FStat_STAT_FCsvProfiler_FinalizeCsvFile>
  FVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar21;
  FName FVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auStackY_1b8 [32];
  FColor_u_0 local_154;
  LARGE_INTEGER local_150;
  FName local_148;
  FName local_140;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  FStatMessage local_120;
  FDestructionSentinel local_110;
  FName local_f8;
  FName local_f0;
  undefined1 local_e8 [24];
  undefined8 uStack_d0;
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_b0;
  ulonglong local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FCsvProfiler_FinalizeCsvFile ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FCsvProfiler::FinalizeCsvFile(void)_::_2_::FStat_STAT_FCsvProfiler_FinalizeCsvFile>
         )0x0) {
      pFVar19 = ::FName::FName(&local_f8,"STAT_FCsvProfiler_FinalizeCsvFile");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfiler_FinalizeCsvFile,*pFVar19,
                 L"STAT_FCsvProfiler_FinalizeCsvFile","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_FCsvProfiler_FinalizeCsvFile;
  if (StatPtr_STAT_FCsvProfiler_FinalizeCsvFile ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FCsvProfiler::FinalizeCsvFile(void)_::_2_::FStat_STAT_FCsvProfiler_FinalizeCsvFile>
       )0x0) {
    pFVar19 = ::FName::FName(&local_f0,"STAT_FCsvProfiler_FinalizeCsvFile");
    FVar20 = (FThreadSafeStaticStat<_private:_void___cdecl_FCsvProfiler::FinalizeCsvFile(void)_::_2_::FStat_STAT_FCsvProfiler_FinalizeCsvFile>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfiler_FinalizeCsvFile,
                          *pFVar19,L"STAT_FCsvProfiler_FinalizeCsvFile","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar20;
  bVar11 = false;
  bVar12 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar13 = false;
  bVar14 = false;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar24 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar24 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_154.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_154._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.ComparisonIndex.Value = FVar21.Value;
        local_148.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0x1006);
        bVar11 = true;
        bVar12 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_150.s.LowPart = FVar21.Value;
      local_150.s.HighPart = uVar24;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar13 = true;
      goto LAB_14193b56b;
    }
  }
  bVar12 = bVar14;
  bVar11 = bVar13;
  bVar13 = false;
  FVar22 = local_140;
LAB_14193b56b:
  uVar24 = GCsvProcessingThreadId;
  if (GGameThreadIsCsvProcessingThread != false) {
    uVar24 = GGameThreadId;
  }
  DVar17 = GetCurrentThreadId();
  if ((DVar17 != uVar24) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInCsvProcessingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                          ,0x1007,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (3 < (byte)LogCsvProfiler._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
  }
  QueryPerformanceCounter(&local_150);
  ProcessStatData(this,(uint *)0x0);
  FCsvStreamWriter::GetAllocatedSize(this->CsvWriter);
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  pTVar4 = ((this->MetadataQueue).Tail)->NextNode;
  if (pTVar4 != (TNode *)0x0) {
    pTVar1 = &pTVar4->Item;
    if ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
         *)local_98 != pTVar1) {
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)local_98,
                 (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)pTVar1);
    }
    pTVar5 = (this->MetadataQueue).Tail;
    (this->MetadataQueue).Tail = pTVar4;
    local_e8._16_8_ = 0;
    uStack_d0 = 0;
    local_b0.InlineData[0] = '\0';
    local_b0.InlineData[1] = '\0';
    local_b0.InlineData[2] = '\0';
    local_b0.InlineData[3] = '\0';
    local_b0._padding_ = 0;
    local_b0.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a0 = 0;
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    if (pTVar1 != (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)local_e8) {
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)pTVar1,
                 (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)local_e8);
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b0.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_e8,0,local_e8._8_4_);
    iVar10 = SUB84(local_e8._8_8_,4);
    local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
    }
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_c0 = 0;
    if (0x80 < local_bc) {
      local_bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    if (pTVar5 != (TNode *)0x0) {
      *(undefined4 *)&(pTVar5->Item).field_0x48 = 0;
      pvVar6 = *(void **)&(pTVar5->Item).field_0x40;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pTVar5->Item);
      ::operator_delete(pTVar5,0x58);
    }
  }
  FCsvStreamWriter::Finalize
            (this->CsvWriter,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_98);
  this_00 = this->CsvWriter;
  if (this_00 != (FCsvStreamWriter *)0x0) {
    FCsvStreamWriter::~FCsvStreamWriter(this_00);
    ::operator_delete(this_00,0xf0);
  }
  uVar24 = GCsvProcessingThreadId;
  bVar14 = GGameThreadIsCsvProcessingThread != false;
  this->CsvWriter = (FCsvStreamWriter *)0x0;
  if (bVar14) {
    uVar24 = GGameThreadId;
  }
  DVar17 = GetCurrentThreadId();
  if ((DVar17 != uVar24) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInCsvProcessingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                          ,0x50e,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FFrameBoundaries::Update(&GFrameBoundaries,Count);
  GFrameBoundaries.FrameBoundaryTimestamps[0].ArrayNum = 0;
  if (GFrameBoundaries.FrameBoundaryTimestamps[0].ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&GFrameBoundaries.FrameBoundaryTimestamps[0].AllocatorInstance,0,
               &GFrameBoundaries.FrameBoundaryTimestamps[0].ArrayMax);
  }
  GFrameBoundaries.FrameBoundaryTimestamps[1].ArrayNum = 0;
  if (GFrameBoundaries.FrameBoundaryTimestamps[1].ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&GFrameBoundaries.FrameBoundaryTimestamps[1].AllocatorInstance,0,
               &GFrameBoundaries.FrameBoundaryTimestamps[1].ArrayMax);
  }
  GFrameBoundaries.FrameBoundaryTimestamps[2].ArrayNum = 0;
  if (GFrameBoundaries.FrameBoundaryTimestamps[2].ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&GFrameBoundaries.FrameBoundaryTimestamps[2].AllocatorInstance,0,
               &GFrameBoundaries.FrameBoundaryTimestamps[2].ArrayMax);
  }
  GFrameBoundaries.CurrentReadFrameIndex = 0;
  LOCK();
  GFrameBoundaries.EOPCounter = (atomic<int>)0x0;
  UNLOCK();
  if (((3 < (byte)LogCsvProfiler._0_1_) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler),
      3 < (byte)LogCsvProfiler._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler),
     3 < (byte)LogCsvProfiler._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnCSVProfileFinishedDelegate,(FWriteAccessScope *)&local_110);
  puVar2 = &(this->OnCSVProfileFinishedDelegate).field_0x1c;
  *(int *)puVar2 = *(int *)puVar2 + 1;
  bVar14 = false;
  uVar24 = *(int *)&(this->OnCSVProfileFinishedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar24) {
    lVar23 = (longlong)(int)uVar24 << 4;
    bVar14 = false;
    do {
      uVar18 = 0;
      if ((int)uVar24 < *(int *)&(this->OnCSVProfileFinishedDelegate).field_0x10) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar7 = *(longlong *)&(this->OnCSVProfileFinishedDelegate).field_0x8;
      if (((*(int *)(lVar23 + 8 + lVar7) == 0) ||
          (plVar8 = *(longlong **)(lVar23 + lVar7), plVar8 == (longlong *)0x0)) ||
         (cVar16 = (**(code **)(*plVar8 + 0x68))(), cVar16 == '\0')) {
        bVar14 = true;
      }
      lVar23 = lVar23 + -0x10;
      uVar24 = uVar24 - 1;
    } while (-1 < (int)uVar24);
  }
  puVar2 = &(this->OnCSVProfileFinishedDelegate).field_0x1c;
  *(int *)puVar2 = *(int *)puVar2 + -1;
  if (bVar14) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnCSVProfileFinishedDelegate,false);
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  QueryPerformanceCounter(&local_130);
  if (3 < (byte)LogCsvProfiler._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
  }
  GCsvProfilerIsWritingFile = false;
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  bVar14 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
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
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_120.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_128);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_128.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_128.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_128.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_128.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_120);
      piVar3 = &this_01->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// Get @ 1419449f0

FCsvProfiler * __cdecl FCsvProfiler::Get(void)

{
  if (InstancePtr == (FCsvProfiler *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FCsvProfiler(&::Instance);
        atexit(`FCsvProfiler::Get'::__l5::_dynamic_atexit_destructor_for__Instance__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    InstancePtr = &::Instance;
  }
  return InstancePtr;
}

// GetCaptureFrameNumber @ 141945a30

int __thiscall FCsvProfiler::GetCaptureFrameNumber(FCsvProfiler *this)

{
  return this->CaptureFrameNumber;
}

// GetCaptureFrameNumberRT @ 141945a40

int __thiscall FCsvProfiler::GetCaptureFrameNumberRT(FCsvProfiler *this)

{
  return this->CaptureFrameNumberRT;
}

// GetCategoryIndex @ 141945a50

int __cdecl FCsvProfiler::GetCategoryIndex(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FCsvCategoryData *lpCriticalSection;
  FString *pFVar4;
  int *piVar5;
  FString local_18;
  
  lpCriticalSection = FCsvCategoryData::Get();
  if (lpCriticalSection == (FCsvCategoryData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar4 = ::FString::ToLower(param_1,&local_18);
  piVar5 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                 *)&lpCriticalSection->CategoryNameToIndex,pFVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (piVar5 != (int *)0x0) {
    iVar3 = *piVar5;
    if (lpCriticalSection != (FCsvCategoryData *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return iVar3;
  }
  if (lpCriticalSection != (FCsvCategoryData *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return -1;
}

// GetCsvID @ 1419461f0

FGuid * __thiscall FCsvProfiler::GetCsvID(FCsvProfiler *this)

{
  return &this->CsvGUID;
}

// GetFrameExecCommands @ 1419476e0

void __thiscall
FCsvProfiler::GetFrameExecCommands
          (FCsvProfiler *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  TArray<FEventExecCmds,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint *puVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 local_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  int iStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined4 uStack_58;
  int iStack_54;
  int local_50;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x38b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if (GCsvProfilerIsCapturing != false) {
    if ((GCsvFrameExecCmds !=
         (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *)0x0) &&
       (pTVar10 = TMapBase<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                          *)GCsvFrameExecCmds,this->CaptureFrameNumber),
       pTVar10 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1,pTVar10);
    }
    pTVar5 = GCsvFrameModuloExecCmds;
    if (GCsvFrameModuloExecCmds !=
        (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
         *)0x0) {
      iVar2 = *(int *)&GCsvFrameModuloExecCmds->field_0x28;
      TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&GCsvFrameModuloExecCmds->field_0x10
      ;
      iStack_68 = 0;
      local_50 = 0;
      uStack_64 = 1;
      iVar8 = 0;
      if (iVar2 != 0) {
        puVar13 = *(uint **)&GCsvFrameModuloExecCmds->field_0x20;
        if (*(uint **)&GCsvFrameModuloExecCmds->field_0x20 == (uint *)0x0) {
          puVar13 = (uint *)TStack_90.Array;
        }
        uVar3 = *puVar13;
        while (uVar3 == 0) {
          lVar11 = (longlong)iStack_68;
          local_50 = local_50 + 0x20;
          iStack_68 = iStack_68 + 1;
          iVar8 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_68) goto LAB_141947840;
          uVar3 = puVar13[lVar11 + 1];
        }
        uStack_64 = -uVar3 & uVar3;
        uVar1 = (ulonglong)uStack_64 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res18 = (int)lVar11;
        iVar8 = local_50 + -1 + local_res18;
        if (iVar2 < iVar8) {
          iVar8 = iVar2;
        }
      }
LAB_141947840:
      local_70 = GCsvFrameModuloExecCmds;
      uStack_58 = 0xffffffff;
      TStack_90._padding_ = CONCAT44(uStack_64,iStack_68);
      TStack_90.CurrentBitIndex = iVar8;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      TStack_90._28_4_ = local_9c;
      TStack_90.BaseBitIndex = local_50;
      local_60 = (undefined1 *)TStack_90.Array;
      iStack_54 = iVar8;
      if (iVar8 < iVar2) {
        do {
          if ((uint)this->CaptureFrameNumber %
              *(uint *)((longlong)iVar8 * 0x20 + *(longlong *)pTVar5) == 0) {
            TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                               (*(longlong *)pTVar5 + 8 + (longlong)iVar8 * 0x20));
          }
          TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
          iVar8 = TStack_90.CurrentBitIndex;
        } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
      }
    }
    pTVar6 = GCsvEventExecCmds;
    if (GCsvEventExecCmds != (TArray<FEventExecCmds,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar12 = (GCsvEventExecCmds->AllocatorInstance).Data;
      iVar2 = GCsvEventExecCmds->ArrayNum;
      pTVar10 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar12 + 0x18);
      pFVar14 = pFVar12 + (longlong)iVar2 * 0x40;
      while( true ) {
        if (pTVar6->ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FEventExecCmds,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar12 == pFVar14) break;
        LOCK();
        iVar8 = *(int *)pFVar12;
        *(int *)pFVar12 = 0;
        UNLOCK();
        if (0 < iVar8) {
          if ((param_1 == pTVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = pTVar10->ArrayNum;
          if (iVar8 != 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,iVar8,&param_1->AllocatorInstance,&param_1->ArrayNum,
                               &param_1->ArrayMax);
            ConstructItems<FString,FString,int>
                      ((param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10,
                       (FString *)(pTVar10->AllocatorInstance).Data,iVar8);
          }
        }
        pFVar12 = pFVar12 + 0x40;
        pTVar10 = pTVar10 + 4;
      }
    }
  }
  return;
}

// GetMetadataMapCopy @ 141948450

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall
FCsvProfiler::GetMetadataMapCopy
          (FCsvProfiler *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar3
  ;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,CsvProfiler,true);
  lpCriticalSection = &this->MetadataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)__return_storage_ptr__,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->MetadataMap);
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Append<FDefaultSetAllocator>(__return_storage_ptr__,&this->NonPersistentMetadataMap);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// GetNumFrameToCaptureOnEvent @ 141948a00

int __thiscall FCsvProfiler::GetNumFrameToCaptureOnEvent(FCsvProfiler *this)

{
  return this->CaptureOnEventFrameCount;
}

// GetOrCreatePersistentCustomStatFloat @ 141948a60

TCsvPersistentCustomStat<float> * __thiscall
FCsvProfiler::GetOrCreatePersistentCustomStatFloat
          (FCsvProfiler *this,FName param_1,int param_2,bool param_3)

{
  TCsvPersistentCustomStat<float> *pTVar1;
  
  pTVar1 = FCsvPersistentCustomStats::GetOrCreatePersistentCustomStat<float>
                     (&GCsvPersistentCustomStats,param_1,param_2,param_3);
  return pTVar1;
}

// GetOrCreatePersistentCustomStatInt @ 141948a80

TCsvPersistentCustomStat<int> * __thiscall
FCsvProfiler::GetOrCreatePersistentCustomStatInt
          (FCsvProfiler *this,FName param_1,int param_2,bool param_3)

{
  TCsvPersistentCustomStat<int> *pTVar1;
  
  pTVar1 = FCsvPersistentCustomStats::GetOrCreatePersistentCustomStat<int>
                     (&GCsvPersistentCustomStats,param_1,param_2,param_3);
  return pTVar1;
}

// Init @ 14194d850

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvProfiler::Init(FCsvProfiler *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  FBlock *pFVar4;
  TArray<FEventExecCmds,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  wchar_t *pwVar11;
  TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar12;
  IConsoleVariable *this_00;
  FCsvCategoryData *pFVar13;
  FString *pFVar14;
  int *piVar15;
  FCsvProfiler *this_01;
  TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar16;
  ulonglong uVar17;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar18;
  TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar19;
  uint *puVar20;
  FStaticBasicLogRecord *pFVar21;
  ForElementType<FSetElementId> FVar22;
  ForAnyElementType FVar23;
  TSet<TTuple<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_02;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  ForAnyElementType *pFVar28;
  ForAnyElementType FVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_228 [2];
  FString local_220;
  FString local_210;
  int local_200 [2];
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1c8;
  FString local_1b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_198;
  TArray<FString,TSizedDefaultAllocator<32>_> local_188;
  int local_178;
  uint local_174;
  uint local_170;
  FScriptContainerElement *local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TPairInitializer<unsigned_int_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&&> local_c0;
  TArray<FEventExecCmds,TSizedDefaultAllocator<32>_> *local_b0;
  FScriptContainerElement *local_a8;
  FString local_a0;
  uint *local_90;
  FString **local_88;
  undefined1 local_80 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  
  pwVar11 = FCommandLine::Get();
  FParse::Value(pwVar11,L"csvCaptureOnEventFrameCount=",&this->CaptureOnEventFrameCount);
  pTVar12 = ::operator_new(0x10);
  pTVar19 = (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
             *)0x0;
  pTVar16 = pTVar19;
  if (pTVar12 !=
      (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    *(undefined8 *)pTVar12 = 0;
    *(undefined8 *)&pTVar12->field_0x8 = 0;
    pTVar16 = pTVar12;
  }
  GStartOnEvent = (FString *)pTVar16;
  pwVar11 = FCommandLine::Get();
  FParse::Value(pwVar11,L"csvStartOnEvent=",(FString *)pTVar16,true,(wchar_t **)0x0);
  pFVar14 = GStartOnEvent;
  if ((GStartOnEvent->Data).ArrayNum < 2) {
    pFVar26 = (GStartOnEvent->Data).AllocatorInstance.Data;
    if (pFVar26 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar26);
    }
    ::operator_delete(pFVar14,0x10);
    GStartOnEvent = (FString *)0x0;
  }
  pTVar12 = ::operator_new(0x10);
  pTVar16 = pTVar19;
  if (pTVar12 !=
      (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    *(undefined8 *)pTVar12 = 0;
    *(undefined8 *)&pTVar12->field_0x8 = 0;
    pTVar16 = pTVar12;
  }
  GStopOnEvent = (FString *)pTVar16;
  pwVar11 = FCommandLine::Get();
  FParse::Value(pwVar11,L"csvStopOnEvent=",(FString *)pTVar16,true,(wchar_t **)0x0);
  pFVar14 = GStopOnEvent;
  if ((GStopOnEvent->Data).ArrayNum < 2) {
    pFVar26 = (GStopOnEvent->Data).AllocatorInstance.Data;
    if (pFVar26 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar26);
    }
    ::operator_delete(pFVar14,0x10);
    GStopOnEvent = (FString *)0x0;
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar11,L"csvGpuStats");
  if (bVar8) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.GPUCsvStatsEnabled",1);
    if (this_00 != (IConsoleVariable *)0x0) {
      local_120 = 0;
      IConsoleVariable::Set<int>(this_00,1,ECVF_SetByCode,(FName)0x0);
    }
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar11,L"csvTest");
  if (bVar8) {
    GCsvTestingGT = true;
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar11,L"csvTestMT");
  if (bVar8) {
    GCsvTestingGT = true;
    GCsvTestingRT = true;
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar11,L"csvTestCategoryOnly");
  if (bVar8) {
    GAllCategoriesStartDisabled = true;
    GCsvTestCategoryOnly = true;
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar11,L"csvAllCategoriesDisabled");
  if (bVar8) {
    GAllCategoriesStartDisabled = true;
LAB_14194daa8:
    memset(GCsvCategoriesEnabled,0,0x800);
  }
  else if (GAllCategoriesStartDisabled != false) goto LAB_14194daa8;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Value(pwVar11,L"csvCategories=",&local_f0,false,(wchar_t **)0x0);
  if (bVar8) {
    local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.ArrayNum = 0;
    local_198.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_f0,&local_198,L",",true);
    pTVar16 = pTVar19;
    pTVar12 = pTVar19;
    if (0 < local_198.ArrayNum) {
      do {
        uVar31 = (uint)pTVar12;
        uVar25 = 0;
        if ((int)uVar31 < local_198.ArrayNum) {
          uVar25 = ~uVar31 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar26 = local_198.AllocatorInstance.Data + (longlong)pTVar16;
        pFVar13 = FCsvCategoryData::Get();
        if ((pFVar13 == (FCsvCategoryData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar13);
        pFVar14 = ::FString::ToLower((FString *)pFVar26,&local_78);
        piVar15 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                  ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                          *)&pFVar13->CategoryNameToIndex,pFVar14);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (piVar15 == (int *)0x0) {
          if (pFVar13 != (FCsvCategoryData *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar13);
          }
LAB_14194dc6a:
          if (2 < (byte)LogCsvProfiler._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
          }
        }
        else {
          iVar10 = *piVar15;
          if (pFVar13 != (FCsvCategoryData *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar13);
          }
          if (iVar10 < 0) goto LAB_14194dc6a;
          if (4 < (byte)LogCsvProfiler._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
          }
          GCsvCategoriesEnabled[iVar10] = true;
        }
        pTVar16 = (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   *)&pTVar16->field_0x10;
        pTVar12 = (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   *)(ulonglong)(uVar31 + 1);
      } while ((int)(uVar31 + 1) < local_198.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
    if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
    }
  }
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.Data.ArrayNum = 0;
  local_100.Data.ArrayMax = 0;
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Value(pwVar11,L"csvMetadata=",&local_100,false,(wchar_t **)0x0);
  if (bVar8) {
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_100,&local_188,L",",true);
    pTVar16 = pTVar19;
    if (0 < local_188.ArrayNum) {
      do {
        uVar31 = (uint)pTVar16;
        uVar25 = 0;
        if ((int)uVar31 < local_188.ArrayNum) {
          uVar25 = ~uVar31 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar26 = local_188.AllocatorInstance.Data + (longlong)(int)uVar31 * 0x10;
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_150.Data.ArrayNum = 0;
        local_150.Data.ArrayMax = 0;
        ::FString::FString(&local_a0,L"=");
        bVar8 = ::FString::Split((FString *)pFVar26,&local_a0,&local_140,&local_150);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          FVar29.Data = (FScriptContainerElement *)L"";
          if (local_150.Data.ArrayNum != 0) {
            FVar29.Data = local_150.Data.AllocatorInstance.Data;
          }
          FVar23.Data = (FScriptContainerElement *)L"";
          if (local_140.Data.ArrayNum != 0) {
            FVar23.Data = local_140.Data.AllocatorInstance.Data;
          }
          this_01 = Get();
          SetMetadataInternal(this_01,(wchar_t *)FVar23.Data,(wchar_t *)FVar29.Data,true,Persistent)
          ;
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        pTVar16 = (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   *)(ulonglong)(uVar31 + 1);
      } while ((int)(uVar31 + 1) < local_188.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar11,L"csvNoProcessingThread");
  if (bVar8) {
    GCsvUseProcessingThread = false;
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar11,L"csvNamedEvents");
  if (bVar8) {
    GCsvProfilerNamedEventsExclusive = true;
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar11,L"csvNamedEventsTiming");
  if (bVar8) {
    GCsvProfilerNamedEventsTiming = true;
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar11,L"csvStatCounts");
  if (bVar8) {
    local_118 = 0;
    IConsoleVariable::Set<int>
              ((IConsoleVariable *)CVarCsvStatCounts._padding_,1,ECVF_SetByCode,(FName)0x0);
  }
  local_200[0] = 0;
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Value(pwVar11,L"csvCaptureFrames=",local_200);
  if (bVar8) {
    bVar8 = IsInGameThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                           ,0x125b,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    BeginCapture(this,local_200[0],&local_e0,&local_d0,None);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    BeginFrame(this);
    LOCK();
    GFrameBoundaries.EOPCounter = (atomic<int>)((int)GFrameBoundaries.EOPCounter + 1);
    UNLOCK();
    uVar25 = (uint)GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter;
    if ((GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter & 0xf) == 0) {
      TSingleProducerSingleConsumerList<unsigned___int64,16>::AddTailBlock
                (GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer + 1);
    }
    pFVar4 = GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].TailBlock;
    QueryPerformanceCounter((LARGE_INTEGER *)&local_c0.Value);
    pFVar4->Entries[uVar25 & 0xf] = (ulong64)local_c0.Value;
    GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter =
         GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter + 1;
    this->bInsertEndFrameAtFrameStart = true;
  }
  pwVar11 = FCommandLine::Get();
  FParse::Value(pwVar11,L"csvRepeat=",&GCsvRepeatCount);
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Value(pwVar11,L"csvCompression=",&local_178);
  if (bVar8) {
    if (local_178 == 0) {
      local_108 = 0;
      iVar10 = 0;
    }
    else {
      if (local_178 != 1) {
        if (2 < (byte)LogCsvProfiler._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
        }
        goto LAB_14194e0a3;
      }
      local_110 = 0;
      iVar10 = 1;
    }
    IConsoleVariable::Set<int>
              ((IConsoleVariable *)CVarCsvCompressionMode._padding_,iVar10,ECVF_SetByCode,(FName)0x0
              );
  }
LAB_14194e0a3:
  FCsvABTest::InitFromCommandline(&GCsvABTest);
  local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.Data.ArrayNum = 0;
  local_160.Data.ArrayMax = 0;
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Value(pwVar11,L"-csvExecCmds=",&local_160,false,(wchar_t **)0x0);
  if (bVar8) {
    pTVar16 = ::operator_new(0x50);
    GCsvFrameExecCmds = pTVar19;
    if (pTVar16 !=
        (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
         *)0x0) {
      *(undefined8 *)&pTVar16->field_0x10 = 0;
      *(undefined8 *)&pTVar16->field_0x18 = 0;
      *(undefined8 *)&pTVar16->field_0x38 = 0;
      *(undefined8 *)&pTVar16->field_0x48 = 0;
      *(undefined8 *)pTVar16 = 0;
      *(undefined8 *)&pTVar16->field_0x8 = 0;
      *(undefined8 *)&pTVar16->field_0x20 = 0;
      *(undefined4 *)&pTVar16->field_0x28 = 0;
      *(undefined4 *)&pTVar16->field_0x2c = 0x80;
      *(undefined4 *)&pTVar16->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar16->field_0x34 = 0;
      *(undefined8 *)&pTVar16->field_0x40 = 0;
      GCsvFrameExecCmds = pTVar16;
    }
    pTVar16 = ::operator_new(0x50);
    GCsvFrameModuloExecCmds = pTVar19;
    if (pTVar16 !=
        (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
         *)0x0) {
      *(undefined8 *)&pTVar16->field_0x10 = 0;
      *(undefined8 *)&pTVar16->field_0x18 = 0;
      *(undefined8 *)&pTVar16->field_0x38 = 0;
      *(undefined8 *)&pTVar16->field_0x48 = 0;
      *(undefined8 *)pTVar16 = 0;
      *(undefined8 *)&pTVar16->field_0x8 = 0;
      *(undefined8 *)&pTVar16->field_0x20 = 0;
      *(undefined4 *)&pTVar16->field_0x28 = 0;
      *(undefined4 *)&pTVar16->field_0x2c = 0x80;
      *(undefined4 *)&pTVar16->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar16->field_0x34 = 0;
      *(undefined8 *)&pTVar16->field_0x40 = 0;
      GCsvFrameModuloExecCmds = pTVar16;
    }
    local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.ArrayNum = 0;
    local_1a8.ArrayMax = 0;
    iVar10 = ::FString::ParseIntoArray(&local_160,&local_1a8,L",",true);
    uVar7 = local_1a8._8_8_;
    if (0 < iVar10) {
      uVar17 = (ulonglong)local_1a8.ArrayNum;
      pFVar26 = local_1a8.AllocatorInstance.Data + uVar17 * 0x10;
      FVar29.Data = local_1a8.AllocatorInstance.Data;
LAB_14194e1d2:
      if (local_1a8.ArrayNum != (int)uVar17) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar29.Data != pFVar26) {
        local_210.Data.ArrayNum = *(int *)(FVar29.Data + 8);
        lVar27 = (longlong)local_210.Data.ArrayNum;
        pvVar1 = *(void **)FVar29.Data;
        local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_210.Data.ArrayNum == 0) {
          local_210.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_210.Data.ArrayNum,0,(ForAnyElementType *)&local_210,
                     local_210.Data.ArrayNum,&local_210.Data.ArrayMax);
          memcpy(local_210.Data.AllocatorInstance.Data,pvVar1,lVar27 * 2);
        }
        for (FVar23.Data = local_210.Data.AllocatorInstance.Data;
            FVar23.Data !=
            local_210.Data.AllocatorInstance.Data + (longlong)local_210.Data.ArrayNum * 2;
            FVar23.Data = FVar23.Data + 2) {
          if (*(short *)FVar23.Data == 0x3a) {
            iVar10 = (int)((longlong)FVar23.Data - (longlong)local_210.Data.AllocatorInstance.Data
                          >> 1);
            if (iVar10 != -1) {
              pFVar14 = ::FString::Mid(&local_210,&local_68,0,iVar10);
              ::FString::ToLower(pFVar14,&local_1b8);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              ::FString::RightChop(&local_210,&local_1f8,iVar10 + 1);
              bVar8 = ::FString::StartsWith(&local_1b8,L"r",1,IgnoreCase);
              if (bVar8) {
                pFVar14 = ::FString::Mid(&local_210,&local_58,1,iVar10);
                if (&local_1b8 != pFVar14) {
                  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                  }
                  local_1b8.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
                  (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_1b8.Data.ArrayNum = (pFVar14->Data).ArrayNum;
                  local_1b8.Data.ArrayMax = (pFVar14->Data).ArrayMax;
                  (pFVar14->Data).ArrayNum = 0;
                  (pFVar14->Data).ArrayMax = 0;
                }
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
              }
              this_02 = (TSet<TTuple<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)GCsvFrameExecCmds;
              if (bVar8) {
                this_02 = (TSet<TTuple<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           *)GCsvFrameModuloExecCmds;
              }
              FVar23.Data = (FScriptContainerElement *)L"";
              if (local_1b8.Data.ArrayNum != 0) {
                FVar23.Data = local_1b8.Data.AllocatorInstance.Data;
              }
              local_228[0] = _wtoi((wchar_t *)FVar23.Data);
              if (*(int *)&(this_02->Elements).field_0x8 == *(int *)&(this_02->Elements).field_0x34)
              goto LAB_14194e3e9;
              FVar2 = (this_02->Hash).SecondaryData;
              FVar22 = (ForElementType<FSetElementId>)&this_02->Hash;
              if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                FVar22 = FVar2;
              }
              uVar25 = *(uint *)((longlong)FVar22 +
                                (ulonglong)(this_02->HashSize - 1U & local_228[0]) * 4);
              if (uVar25 == 0xffffffff) goto LAB_14194e3e9;
              goto LAB_14194e3c0;
            }
            break;
          }
        }
        goto LAB_14194e59c;
      }
    }
    DestructItems<FString,int>((FString *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
    if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
  }
  pwVar11 = FCommandLine::Get();
  bVar8 = FParse::Value(pwVar11,L"-csvEventExecCmds=",&local_160,false,(wchar_t **)0x0);
  if (bVar8) {
    pTVar16 = ::operator_new(0x10);
    if (pTVar16 !=
        (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
         *)0x0) {
      *(undefined8 *)pTVar16 = 0;
      *(undefined8 *)&pTVar16->field_0x8 = 0;
      pTVar19 = pTVar16;
    }
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.ArrayNum = 0;
    local_1c8.ArrayMax = 0;
    GCsvEventExecCmds = (TArray<FEventExecCmds,TSizedDefaultAllocator<32>_> *)pTVar19;
    iVar10 = ::FString::ParseIntoArray(&local_160,&local_1c8,L",",true);
    if (0 < iVar10) {
      uVar17 = (ulonglong)local_1c8.ArrayNum;
      local_a8 = local_1c8.AllocatorInstance.Data + uVar17 * 0x10;
      local_170 = local_1c8.ArrayNum;
      FVar29.Data = local_1c8.AllocatorInstance.Data;
      while( true ) {
        pFVar26 = local_a8;
        local_168 = FVar29.Data;
        if (local_1c8.ArrayNum != (int)uVar17) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar29.Data == pFVar26) break;
        local_1d8.Data.ArrayNum = *(int *)(FVar29.Data + 8);
        lVar27 = (longlong)local_1d8.Data.ArrayNum;
        pvVar1 = *(void **)FVar29.Data;
        local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_1d8.Data.ArrayNum == 0) {
          local_1d8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1d8.Data.ArrayNum,0,(ForAnyElementType *)&local_1d8,
                     local_1d8.Data.ArrayNum,&local_1d8.Data.ArrayMax);
          memcpy(local_1d8.Data.AllocatorInstance.Data,pvVar1,lVar27 * 2);
        }
        iVar10 = ::FString::Find(&local_1d8,L"::",2,IgnoreCase,FromStart,-1);
        if (iVar10 != -1) {
          ::FString::Mid(&local_1d8,&local_1e8,0,iVar10);
          ::FString::RightChop(&local_1d8,&local_220,iVar10 + 2);
          if (local_1e8.Data.ArrayNum < 2) {
            ::FString::operator=(&local_1e8,L"*");
          }
          bVar8 = false;
          local_b0 = GCsvEventExecCmds;
          local_174 = GCsvEventExecCmds->ArrayNum;
          uVar17 = (ulonglong)(int)local_174;
          pFVar24 = (GCsvEventExecCmds->AllocatorInstance).Data;
          pFVar30 = pFVar24 + uVar17 * 0x40;
          pFVar26 = pFVar24 + 0x20;
          while( true ) {
            if (local_b0->ArrayNum != (int)uVar17) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FEventExecCmds,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            pTVar5 = GCsvEventExecCmds;
            if (pFVar24 == pFVar30) break;
            iVar10 = *(int *)(pFVar26 + -0x10);
            if (iVar10 == local_1e8.Data.ArrayNum) {
              if (1 < iVar10) {
                iVar10 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(pFVar26 + -0x18),
                                    (wchar_t *)local_1e8.Data.AllocatorInstance.Data);
                bVar9 = iVar10 == 0;
                goto LAB_14194e7bd;
              }
LAB_14194e7c8:
              bVar8 = true;
              if (((*(FString **)(pFVar26 + -8) <= &local_220) &&
                  (&local_220 < *(FString **)(pFVar26 + -8) + *(int *)(pFVar26 + 4))) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar10 = *(int *)pFVar26;
              if (iVar10 == *(int *)(pFVar26 + 4)) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)(pFVar26 + -8),(int *)(pFVar26 + 4));
              }
              iVar6 = local_220.Data.ArrayNum;
              FVar29.Data = local_220.Data.AllocatorInstance.Data;
              *(int *)pFVar26 = iVar10 + 1;
              pFVar28 = (ForAnyElementType *)(*(longlong *)(pFVar26 + -8) + (longlong)iVar10 * 0x10)
              ;
              pFVar28->Data = (FScriptContainerElement *)0x0;
              piVar15 = (int *)((longlong)&pFVar28[1].Data + 4);
              *(int *)&pFVar28[1].Data = local_220.Data.ArrayNum;
              if (local_220.Data.ArrayNum != 0) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_220.Data.ArrayNum,0,pFVar28,local_220.Data.ArrayNum,piVar15);
                memcpy(pFVar28->Data,FVar29.Data,(longlong)iVar6 * 2);
                goto LAB_14194e8d1;
              }
              uVar17 = (ulonglong)local_174;
              pFVar24 = pFVar24 + 0x40;
              *piVar15 = 0;
              pFVar26 = pFVar26 + 0x40;
            }
            else {
              bVar9 = iVar10 + local_1e8.Data.ArrayNum == 1;
LAB_14194e7bd:
              if (bVar9) goto LAB_14194e7c8;
LAB_14194e8d1:
              pFVar24 = pFVar24 + 0x40;
              uVar17 = (ulonglong)local_174;
              pFVar26 = pFVar26 + 0x40;
            }
          }
          if (!bVar8) {
            iVar10 = GCsvEventExecCmds->ArrayNum;
            if (iVar10 == GCsvEventExecCmds->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x4040,&GCsvEventExecCmds->AllocatorInstance,
                                  &GCsvEventExecCmds->ArrayMax);
              pTVar5->ArrayNum = iVar10;
            }
            pTVar5->ArrayNum = iVar10 + 1;
            pFVar26 = (pTVar5->AllocatorInstance).Data;
            lVar27 = (longlong)iVar10 * 0x40;
            *(undefined8 *)(pFVar26 + lVar27) = 0;
            *(undefined8 *)(pFVar26 + lVar27 + 0x28) = 0;
            *(undefined8 *)(pFVar26 + lVar27 + 0x30) = 0;
            *(undefined8 *)(pFVar26 + lVar27 + 0x38) = 0;
            *(undefined8 *)(pFVar26 + lVar27 + 0x10) = 0;
            *(undefined4 *)(pFVar26 + lVar27 + 0x20) = 0;
            *(undefined8 *)(pFVar26 + lVar27 + 8) = 0;
            *(undefined8 *)(pFVar26 + lVar27 + 0x18) = 0;
            *(undefined4 *)(pFVar26 + lVar27 + 0x24) = 0;
            uVar25 = local_1e8.Data.ArrayNum - 1;
            if (local_1e8.Data.ArrayNum == 0) {
              uVar25 = 0;
            }
            ::FString::AssignRange
                      ((FString *)(pFVar26 + lVar27 + 8),
                       (wchar_t *)local_1e8.Data.AllocatorInstance.Data,uVar25);
            if (((*(FString **)(pFVar26 + lVar27 + 0x18) <= &local_220) &&
                (&local_220 <
                 *(FString **)(pFVar26 + lVar27 + 0x18) + *(int *)(pFVar26 + lVar27 + 0x24))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar10 = *(int *)(pFVar26 + lVar27 + 0x20);
            if (iVar10 == *(int *)(pFVar26 + lVar27 + 0x24)) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)(pFVar26 + lVar27 + 0x18),
                                  (int *)(pFVar26 + lVar27 + 0x24));
            }
            iVar6 = local_220.Data.ArrayNum;
            FVar29.Data = local_220.Data.AllocatorInstance.Data;
            *(int *)(pFVar26 + lVar27 + 0x20) = iVar10 + 1;
            pFVar28 = (ForAnyElementType *)
                      (*(longlong *)(pFVar26 + lVar27 + 0x18) + (longlong)iVar10 * 0x10);
            pFVar28->Data = (FScriptContainerElement *)0x0;
            piVar15 = (int *)((longlong)&pFVar28[1].Data + 4);
            *(int *)&pFVar28[1].Data = local_220.Data.ArrayNum;
            if (local_220.Data.ArrayNum == 0) {
              *piVar15 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_220.Data.ArrayNum,0,pFVar28,local_220.Data.ArrayNum,piVar15);
              memcpy(pFVar28->Data,FVar29.Data,(longlong)iVar6 * 2);
            }
          }
          if (3 < (byte)LogCsvProfiler._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
          }
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          FVar29.Data = local_168;
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
            FVar29.Data = local_168;
          }
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        FVar29.Data = FVar29.Data + 0x10;
        uVar17 = (ulonglong)local_170;
      }
    }
    DestructItems<FString,int>((FString *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
  }
  bVar8 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar8) {
    GCsvUseProcessingThread = bVar8;
  }
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnInit,(_func___cdecl_void *)local_80);
  }
  else {
    pFVar13 = FCsvCategoryData::Get();
    FCsvCategoryData::UpdateCategoriesFromConfig(pFVar13);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  return;
  while (uVar25 = puVar20[6], uVar25 != 0xffffffff) {
LAB_14194e3c0:
    puVar20 = (uint *)((longlong)(int)uVar25 * 0x20 + *(longlong *)&this_02->Elements);
    if (*puVar20 == local_228[0]) {
      pTVar16 = (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                 *)(puVar20 + 2);
      if (puVar20 == (uint *)0x0) {
        pTVar16 = pTVar19;
      }
      if (pTVar16 !=
          (TMap<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           *)0x0) goto LAB_14194e43f;
      break;
    }
  }
LAB_14194e3e9:
  local_90 = local_228;
  local_130 = (FString *)0x0;
  local_88 = &local_130;
  local_128 = 0;
  TSet<TTuple<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&&>_>
            (this_02,&local_c0,(bool *)&local_90);
  DestructItems<FString,int>(local_130,(int)local_128);
  if (local_130 != (FString *)0x0) {
    FMemory::Free(local_130);
  }
LAB_14194e43f:
  pTVar18 = TMapBase<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked((TMapBase<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                           *)this_02,local_228[0]);
  pFVar24 = (pTVar18->AllocatorInstance).Data;
  if (((pFVar24 <= (FScriptContainerElement *)&local_1f8) &&
      ((FScriptContainerElement *)&local_1f8 < pFVar24 + (longlong)pTVar18->ArrayMax * 0x10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = pTVar18->ArrayNum;
  if (iVar10 == pTVar18->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar18->AllocatorInstance,&pTVar18->ArrayMax);
  }
  iVar6 = local_1f8.Data.ArrayNum;
  FVar23.Data = local_1f8.Data.AllocatorInstance.Data;
  pTVar18->ArrayNum = iVar10 + 1;
  pFVar24 = (pTVar18->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(undefined8 *)&pFVar24->field_0x0 = 0;
  *(int *)&pFVar24[8].field_0x0 = local_1f8.Data.ArrayNum;
  if (local_1f8.Data.ArrayNum == 0) {
    *(int *)(pFVar24 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar24,local_1f8.Data.ArrayNum,
               (int *)(pFVar24 + 0xc));
    memcpy(*(void **)&pFVar24->field_0x0,FVar23.Data,(longlong)iVar6 * 2);
  }
  if (bVar8) {
    if ((byte)LogCsvProfiler._0_1_ < 4) goto LAB_14194e57b;
    pFVar21 = &::LOG_Static;
  }
  else {
    if ((byte)LogCsvProfiler._0_1_ < 4) goto LAB_14194e57b;
    pFVar21 = (FStaticBasicLogRecord *)&PTR_u_Added_CsvExecCo_1506bd8e8;
  }
  UE::Logging::Private::BasicLog<4>(pFVar21,(FLogCategoryBase *)&LogCsvProfiler);
LAB_14194e57b:
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
LAB_14194e59c:
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  uVar17 = uVar7 & 0xffffffff;
  FVar29.Data = FVar29.Data + 0x10;
  goto LAB_14194e1d2;
}

// IsCapturing @ 1419511b0

bool __thiscall FCsvProfiler::IsCapturing(FCsvProfiler *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x12df,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return GCsvProfilerIsCapturing;
}

// IsCapturing_Renderthread @ 141951200

bool __thiscall FCsvProfiler::IsCapturing_Renderthread(FCsvProfiler *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x132b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return GCsvProfilerIsCapturingRT;
}

// IsCategoryEnabled @ 141951250

bool __thiscall FCsvProfiler::IsCategoryEnabled(FCsvProfiler *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (0x7ff < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CategoryIndex < CSV_MAX_CATEGORY_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x1325,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return GCsvCategoriesEnabled[param_1];
}

// IsEndCapturePending @ 141951900

bool __thiscall FCsvProfiler::IsEndCapturePending(FCsvProfiler *this)

{
  ECsvCommandType EVar1;
  TNode *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  FString local_48;
  FString local_38;
  ECsvProfilerFlags local_28;
  TPromise<FString> *local_20;
  undefined8 local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x12eb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_18 = 0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  if (((this->CommandQueue).Tail)->NextNode != (TNode *)0x0) {
    pTVar2 = ((this->CommandQueue).Tail)->NextNode;
    EVar1 = (pTVar2->Item).CommandType;
    ::FString::operator=(&local_48,&(pTVar2->Item).DestinationFolder);
    ::FString::operator=(&local_38,&(pTVar2->Item).Filename);
    pTVar4 = pTStack_10;
    local_28 = (pTVar2->Item).Flags;
    local_20 = (pTVar2->Item).Completion;
    pTStack_10 = *(TReferenceControllerBase<1> **)&(pTVar2->Item).Future.field_0x8;
    local_18 = *(undefined8 *)&(pTVar2->Item).Future;
    if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (EVar1 == Stop) {
      bVar5 = true;
      goto LAB_1419519eb;
    }
  }
  bVar5 = false;
LAB_1419519eb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// IsWaitTrackingEnabledOnCurrentThread @ 1419531f0

bool __cdecl FCsvProfiler::IsWaitTrackingEnabledOnCurrentThread(void)

{
  if ((!GCsvTrackWaitsOnAllThreads) &&
     (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xb68) == '\0')) {
    return false;
  }
  return true;
}

// IsWritingFile @ 141953230

bool __thiscall FCsvProfiler::IsWritingFile(FCsvProfiler *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x12e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return GCsvProfilerIsWritingFile;
}

// OnEndFramePostFork @ 141957530

void __thiscall FCsvProfiler::OnEndFramePostFork(FCsvProfiler *this)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  bVar2 = FForkProcessHelper::IsForkedMultithreadInstance();
  if (bVar2) {
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar3,L"csvNoProcessingThread");
    if (!bVar2) {
      GCsvUseProcessingThread = true;
      goto LAB_141957560;
    }
  }
  GCsvUseProcessingThread = false;
LAB_141957560:
  GGameThreadIsCsvProcessingThread = (bool)(GCsvUseProcessingThread ^ 1);
  if (this->ProcessingThread != (FCsvProfilerProcessingThread *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProcessingThread == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0xf6e,L"CSV profiling should not be started pre-fork");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ProcessStatData @ 14195e0a0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FCsvProfiler::ProcessStatData(FCsvProfiler *this,uint *param_1)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  DWORD DVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_float___cdecl_FCsvProfiler::ProcessStatData(unsigned_int_*)_::_2_::FStat_STAT_FCsvProfiler_ProcessStatData>
  FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  uint uVar15;
  float fVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  uint *local_res10;
  FColor_u_0 local_res18;
  uint local_res1c;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FCsvProcessThreadDataStats local_88;
  FName local_78;
  FStatMessage local_68 [2];
  
  uVar11 = GCsvProcessingThreadId;
  if (GGameThreadIsCsvProcessingThread) {
    uVar11 = GGameThreadId;
  }
  local_res10 = param_1;
  DVar8 = GetCurrentThreadId();
  if (DVar8 != uVar11) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInCsvProcessingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x1331,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      fVar16 = (float)(*pcVar2)();
      return fVar16;
    }
  }
  FVar14.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCsvProfiler_ProcessStatData ==
          (FThreadSafeStaticStat<_private:_float___cdecl_FCsvProfiler::ProcessStatData(unsigned_int_*)_::_2_::FStat_STAT_FCsvProfiler_ProcessStatData>
           )0x0) {
        pFVar9 = ::FName::FName(&local_98,"STAT_FCsvProfiler_ProcessStatData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfiler_ProcessStatData,*pFVar9,
                   L"STAT_FCsvProfiler_ProcessStatData","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar10 = StatPtr_STAT_FCsvProfiler_ProcessStatData;
  if (StatPtr_STAT_FCsvProfiler_ProcessStatData ==
      (FThreadSafeStaticStat<_private:_float___cdecl_FCsvProfiler::ProcessStatData(unsigned_int_*)_::_2_::FStat_STAT_FCsvProfiler_ProcessStatData>
       )0x0) {
    pFVar9 = ::FName::FName(&local_90,"STAT_FCsvProfiler_ProcessStatData");
    FVar10 = (FThreadSafeStaticStat<_private:_float___cdecl_FCsvProfiler::ProcessStatData(unsigned_int_*)_::_2_::FStat_STAT_FCsvProfiler_ProcessStatData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCsvProfiler_ProcessStatData,
                          *pFVar9,L"STAT_FCsvProfiler_ProcessStatData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar7 = false;
  bVar5 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Bits != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar7 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar12.Bits;
        local_res1c = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0x1333);
        bVar7 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar12.Bits;
      uStackX_c = uVar11;
      local_78 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      FVar14.Value = local_78.ComparisonIndex.Value;
      goto LAB_14195e257;
    }
  }
  bVar4 = false;
  FVar13 = local_78;
LAB_14195e257:
  fVar16 = 0.0;
  if ((this->IsShuttingDown).Counter == 0) {
    QueryPerformanceCounter(&local_res20);
    local_88.TimestampCount = 0;
    local_88.CustomStatCount = 0;
    local_88.EventCount = 0;
    dVar3 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    uVar11 = 0;
    uVar15 = 0;
    if (this->CsvWriter != (FCsvStreamWriter *)0x0) {
      FCsvStreamWriter::Process(this->CsvWriter,&local_88);
      uVar11 = local_88.TimestampCount;
      uVar15 = local_88.CustomStatCount;
    }
    uVar6 = local_88.EventCount;
    QueryPerformanceCounter(&local_a8);
    fVar16 = (float)((double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3) *
             __real_447a0000;
    if (__CsvProfilerStat4928 == false) {
      FCsvProfilerTrace::OutputInlineStat("NumTimestampsProcessed",_GCsvCategory_CsvProfiler.Index);
      __CsvProfilerStat4928 = true;
    }
    RecordCustomStat("NumTimestampsProcessed",_GCsvCategory_CsvProfiler.Index,uVar11,Accumulate);
    if (__CsvProfilerStat4929 == false) {
      FCsvProfilerTrace::OutputInlineStat("NumCustomStatsProcessed",_GCsvCategory_CsvProfiler.Index)
      ;
      __CsvProfilerStat4929 = true;
    }
    RecordCustomStat("NumCustomStatsProcessed",_GCsvCategory_CsvProfiler.Index,uVar15,Accumulate);
    if (__CsvProfilerStat4930 == false) {
      FCsvProfilerTrace::OutputInlineStat("NumEventsProcessed",_GCsvCategory_CsvProfiler.Index);
      __CsvProfilerStat4930 = true;
    }
    RecordCustomStat("NumEventsProcessed",_GCsvCategory_CsvProfiler.Index,uVar6,Accumulate);
    if (__CsvProfilerStat4931 == false) {
      FCsvProfilerTrace::OutputInlineStat("ProcessCSVStats",_GCsvCategory_CsvProfiler.Index);
      __CsvProfilerStat4931 = true;
    }
    RecordCustomStat("ProcessCSVStats",_GCsvCategory_CsvProfiler.Index,fVar16,Accumulate);
    if (local_res10 != (uint *)0x0) {
      *local_res10 = uVar15 + uVar11;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_68[0].NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_a0);
      local_68[0].StatData.Pad[4] = '\0';
      local_68[0].StatData.Pad[5] = '\0';
      local_68[0].StatData.Pad[6] = '\0';
      local_68[0].StatData.Pad[7] = '\0';
      local_68[0].StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_68[0].StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_68[0].StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_68[0].StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return fVar16;
}

// RecordCustomStat @ 14195fb20

void __cdecl
FCsvProfiler::RecordCustomStat(FName *param_1,uint param_2,int param_3,ECsvCustomStatOp param_4)

{
  ulonglong uVar1;
  uint uVar2;
  LARGE_INTEGER LVar3;
  FCsvProfilerThreadData *pFVar4;
  LARGE_INTEGER *pLVar5;
  LARGE_INTEGER local_28 [2];
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    if (param_1->Number != 0) {
      local_28[0] = (LARGE_INTEGER)param_1;
      `ValidateFName'::__l2::<lambda_1>::operator()(local_28);
    }
    pFVar4 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar4 == (FCsvProfilerThreadData *)0x0) {
      pFVar4 = FCsvProfilerThreadData::CreateTLSData();
    }
    uVar1 = (pFVar4->CustomStats).Counter;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvCustomStat,256>::AddTailBlock(&pFVar4->CustomStats);
    }
    pLVar5 = (LARGE_INTEGER *)(((pFVar4->CustomStats).TailBlock)->Entries + (uVar1 & 0xff));
    QueryPerformanceCounter(local_28);
    LVar3 = local_28[0];
    FCsvProfilerTrace::OutputCustomStat(param_1,param_2,param_3,param_4,local_28[0].QuadPart);
    uVar2 = param_1->Number;
    *(DWORD *)(pLVar5 + 1) = (param_1->ComparisonIndex).Value;
    *(uint *)((longlong)(pLVar5 + 1) + 4) = uVar2;
    pLVar5->QuadPart = (LONGLONG)LVar3;
    pLVar5[2].s.LowPart = param_2;
    *(ECsvCustomStatOp *)((longlong)pLVar5 + 0x14) = param_4;
    *(undefined1 *)((longlong)pLVar5 + 0x15) = 0xd;
    ((FValue *)&pLVar5[3].s.LowPart)->AsInt = param_3;
    (pFVar4->CustomStats).Counter = (pFVar4->CustomStats).Counter + 1;
  }
  return;
}

// RecordCustomStat @ 14195fc30

void __cdecl
FCsvProfiler::RecordCustomStat(FName *param_1,uint param_2,float param_3,ECsvCustomStatOp param_4)

{
  ulonglong uVar1;
  FBlock *pFVar2;
  LARGE_INTEGER LVar3;
  FCsvProfilerThreadData *pFVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_38 [4];
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    if (param_1->Number != 0) {
      local_38[0] = (LARGE_INTEGER)param_1;
      `ValidateFName'::__l2::<lambda_1>::operator()(local_38);
    }
    pFVar4 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar4 == (FCsvProfilerThreadData *)0x0) {
      pFVar4 = FCsvProfilerThreadData::CreateTLSData();
    }
    uVar1 = (pFVar4->CustomStats).Counter;
    uVar5 = uVar1 & 0xff;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvCustomStat,256>::AddTailBlock(&pFVar4->CustomStats);
    }
    pFVar2 = (pFVar4->CustomStats).TailBlock;
    QueryPerformanceCounter(local_38);
    LVar3 = local_38[0];
    FCsvProfilerTrace::OutputCustomStat(param_1,param_2,param_3,param_4,local_38[0].QuadPart);
    pFVar2->Entries[uVar5]._padding_ = (longlong)*param_1;
    pFVar2->Entries[uVar5].Value.AsFloat = param_3;
    ((LARGE_INTEGER *)(pFVar2->Entries + uVar5))->QuadPart = (LONGLONG)LVar3;
    *(uint *)&pFVar2->Entries[uVar5]._padding_ = param_2;
    *(ECsvCustomStatOp *)((longlong)&pFVar2->Entries[uVar5]._padding_ + 4) = param_4;
    *(undefined1 *)((longlong)&pFVar2->Entries[uVar5]._padding_ + 5) = 5;
    (pFVar4->CustomStats).Counter = (pFVar4->CustomStats).Counter + 1;
  }
  return;
}

// RecordCustomStat @ 14195fd60

void __cdecl
FCsvProfiler::RecordCustomStat(FName *param_1,uint param_2,double param_3,ECsvCustomStatOp param_4)

{
  RecordCustomStat(param_1,param_2,(float)param_3,param_4);
  return;
}

// RecordCustomStat @ 14195fd70

void __cdecl
FCsvProfiler::RecordCustomStat(char *param_1,uint param_2,int param_3,ECsvCustomStatOp param_4)

{
  ulonglong uVar1;
  FCsvProfilerThreadData *pFVar2;
  LARGE_INTEGER *pLVar3;
  LARGE_INTEGER local_28 [2];
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    pFVar2 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar2 == (FCsvProfilerThreadData *)0x0) {
      pFVar2 = FCsvProfilerThreadData::CreateTLSData();
    }
    uVar1 = (pFVar2->CustomStats).Counter;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvCustomStat,256>::AddTailBlock(&pFVar2->CustomStats);
    }
    pLVar3 = (LARGE_INTEGER *)(((pFVar2->CustomStats).TailBlock)->Entries + (uVar1 & 0xff));
    QueryPerformanceCounter(local_28);
    FCsvProfilerTrace::OutputCustomStat(param_1,param_2,param_3,param_4,local_28[0].QuadPart);
    pLVar3->QuadPart = (LONGLONG)local_28[0];
    pLVar3[1] = (LARGE_INTEGER)param_1;
    pLVar3[2].s.LowPart = param_2;
    *(ECsvCustomStatOp *)((longlong)pLVar3 + 0x14) = param_4;
    *(undefined1 *)((longlong)pLVar3 + 0x15) = 0xc;
    ((FValue *)&pLVar3[3].s.LowPart)->AsInt = param_3;
    (pFVar2->CustomStats).Counter = (pFVar2->CustomStats).Counter + 1;
  }
  return;
}

// RecordCustomStat @ 14195fe60

void __cdecl
FCsvProfiler::RecordCustomStat(char *param_1,uint param_2,float param_3,ECsvCustomStatOp param_4)

{
  ulonglong uVar1;
  FBlock *pFVar2;
  FCsvProfilerThreadData *pFVar3;
  ulonglong uVar4;
  LARGE_INTEGER local_38 [4];
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    pFVar3 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar3 == (FCsvProfilerThreadData *)0x0) {
      pFVar3 = FCsvProfilerThreadData::CreateTLSData();
    }
    uVar1 = (pFVar3->CustomStats).Counter;
    uVar4 = uVar1 & 0xff;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvCustomStat,256>::AddTailBlock(&pFVar3->CustomStats);
    }
    pFVar2 = (pFVar3->CustomStats).TailBlock;
    QueryPerformanceCounter(local_38);
    FCsvProfilerTrace::OutputCustomStat(param_1,param_2,param_3,param_4,local_38[0].QuadPart);
    pFVar2->Entries[uVar4].Value.AsFloat = param_3;
    ((LARGE_INTEGER *)(pFVar2->Entries + uVar4))->QuadPart = (LONGLONG)local_38[0];
    pFVar2->Entries[uVar4]._padding_ = (longlong)param_1;
    *(uint *)&pFVar2->Entries[uVar4]._padding_ = param_2;
    *(ECsvCustomStatOp *)((longlong)&pFVar2->Entries[uVar4]._padding_ + 4) = param_4;
    *(undefined1 *)((longlong)&pFVar2->Entries[uVar4]._padding_ + 5) = 4;
    (pFVar3->CustomStats).Counter = (pFVar3->CustomStats).Counter + 1;
  }
  return;
}

// RecordCustomStat @ 14195ff70

void __cdecl
FCsvProfiler::RecordCustomStat(char *param_1,uint param_2,double param_3,ECsvCustomStatOp param_4)

{
  RecordCustomStat(param_1,param_2,(float)param_3,param_4);
  return;
}

// RecordCustomStatMinimal @ 14195ff80

void __cdecl
FCsvProfiler::RecordCustomStatMinimal
          (char *param_1,uint param_2,int param_3,ECsvCustomStatOp param_4)

{
  ulonglong uVar1;
  FCsvProfilerThreadData *pFVar2;
  LARGE_INTEGER *pLVar3;
  LARGE_INTEGER local_28 [2];
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    pFVar2 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar2 == (FCsvProfilerThreadData *)0x0) {
      pFVar2 = FCsvProfilerThreadData::CreateTLSData();
    }
    uVar1 = (pFVar2->CustomStats).Counter;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvCustomStat,256>::AddTailBlock(&pFVar2->CustomStats);
    }
    pLVar3 = (LARGE_INTEGER *)(((pFVar2->CustomStats).TailBlock)->Entries + (uVar1 & 0xff));
    QueryPerformanceCounter(local_28);
    FCsvProfilerTrace::OutputCustomStat(param_1,param_2,param_3,param_4,local_28[0].QuadPart);
    pLVar3->QuadPart = (LONGLONG)local_28[0];
    pLVar3[1] = (LARGE_INTEGER)param_1;
    pLVar3[2].s.LowPart = param_2;
    *(ECsvCustomStatOp *)((longlong)pLVar3 + 0x14) = param_4;
    *(undefined1 *)((longlong)pLVar3 + 0x15) = 0xc;
    ((FValue *)&pLVar3[3].s.LowPart)->AsInt = param_3;
    (pFVar2->CustomStats).Counter = (pFVar2->CustomStats).Counter + 1;
  }
  return;
}

// RecordCustomStatMinimal @ 141960070

void __cdecl
FCsvProfiler::RecordCustomStatMinimal
          (char *param_1,uint param_2,float param_3,ECsvCustomStatOp param_4)

{
  ulonglong uVar1;
  FBlock *pFVar2;
  FCsvProfilerThreadData *pFVar3;
  ulonglong uVar4;
  LARGE_INTEGER local_38 [4];
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    pFVar3 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar3 == (FCsvProfilerThreadData *)0x0) {
      pFVar3 = FCsvProfilerThreadData::CreateTLSData();
    }
    uVar1 = (pFVar3->CustomStats).Counter;
    uVar4 = uVar1 & 0xff;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvCustomStat,256>::AddTailBlock(&pFVar3->CustomStats);
    }
    pFVar2 = (pFVar3->CustomStats).TailBlock;
    QueryPerformanceCounter(local_38);
    FCsvProfilerTrace::OutputCustomStat(param_1,param_2,param_3,param_4,local_38[0].QuadPart);
    pFVar2->Entries[uVar4].Value.AsFloat = param_3;
    ((LARGE_INTEGER *)(pFVar2->Entries + uVar4))->QuadPart = (LONGLONG)local_38[0];
    pFVar2->Entries[uVar4]._padding_ = (longlong)param_1;
    *(uint *)&pFVar2->Entries[uVar4]._padding_ = param_2;
    *(ECsvCustomStatOp *)((longlong)&pFVar2->Entries[uVar4]._padding_ + 4) = param_4;
    *(undefined1 *)((longlong)&pFVar2->Entries[uVar4]._padding_ + 5) = 4;
    (pFVar3->CustomStats).Counter = (pFVar3->CustomStats).Counter + 1;
  }
  return;
}

// RecordCustomStatMinimal @ 141960180

void __cdecl
FCsvProfiler::RecordCustomStatMinimal
          (char *param_1,uint param_2,double param_3,ECsvCustomStatOp param_4)

{
  RecordCustomStatMinimal(param_1,param_2,(float)param_3,param_4);
  return;
}

// RecordEndOfPipeCustomStat @ 141960190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FCsvProfiler::RecordEndOfPipeCustomStat
          (FName *param_1,uint param_2,double param_3,ECsvCustomStatOp param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  undefined4 local_58;
  undefined1 local_54;
  FName *local_50;
  LARGE_INTEGER local_48 [4];
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_2] != false)) {
    if (param_1->Number != 0) {
      local_50 = param_1;
      `ValidateFName'::__l2::<lambda_1>::operator()(&local_50);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_TSharedPtr<FCsvProfilerThreadData,1>___cdecl_FCsvProfilerThreadData::GetEndOfPipe(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_TSharedPtr<FCsvProfilerThreadData,1>___cdecl_FCsvProfilerThreadData::GetEndOfPipe(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_TSharedPtr<FCsvProfilerThreadData,1>___cdecl_FCsvProfilerThreadData::GetEndOfPipe(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        pTVar6 = ::operator_new(200);
        if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
          _EndOfPipeData = ___xmm_00000000000000000000000000000010;
          DAT_154f0c1d8 = _UNK_150651568;
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar6->SharedReferenceCount = (atomic<int>)0x1;
          pTVar6->WeakReferenceCount = (atomic<int>)0x1;
          local_58 = 2;
          pTVar6->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFCsvProfilerThreadData___00_SharedPointerInternals__6B_
          ;
          local_54 = 1;
          FCsvProfilerThreadData::FCsvProfilerThreadData
                    ((FCsvProfilerThreadData *)(pTVar6 + 1),(TOptional<ECsvTimeline::Type>)&local_58
                    );
          if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          LOCK();
          _EndOfPipeData = pTVar6 + 1;
          DAT_154f0c1d8 = pTVar6;
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        atexit(`FCsvProfilerThreadData::GetEndOfPipe'::__l2::
               _dynamic_atexit_destructor_for__EndOfPipeData__);
        _Init_thread_footer(&`public:_static_class_TSharedPtr<FCsvProfilerThreadData,1>___cdecl_FCsvProfilerThreadData::GetEndOfPipe(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pTVar4 = DAT_154f0c1d8;
    pTVar6 = _EndOfPipeData;
    if (DAT_154f0c1d8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      DAT_154f0c1d8->SharedReferenceCount =
           (atomic<int>)((int)DAT_154f0c1d8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar1._0_4_ = pTVar6[3].SharedReferenceCount;
    uVar1._4_4_ = pTVar6[3].WeakReferenceCount;
    if ((char)(undefined4)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvCustomStat,256>::AddTailBlock
                ((TSingleProducerSingleConsumerList<FCsvCustomStat,256> *)
                 &pTVar6[2].SharedReferenceCount);
    }
    lVar2 = pTVar6[3]._padding_;
    lVar7 = (uVar1 & 0xff) * 0x20;
    QueryPerformanceCounter(local_48);
    FCsvProfilerTrace::OutputCustomStat(param_1,param_2,(float)param_3,param_4,local_48[0].QuadPart)
    ;
    *(FName *)(lVar7 + 8 + lVar2) = *param_1;
    *(float *)(lVar7 + 0x18 + lVar2) = (float)param_3;
    ((LARGE_INTEGER *)(lVar7 + lVar2))->QuadPart = (LONGLONG)local_48[0];
    *(uint *)(lVar7 + 0x10 + lVar2) = param_2;
    *(ECsvCustomStatOp *)(lVar7 + 0x14 + lVar2) = param_4;
    *(undefined1 *)(lVar7 + 0x15 + lVar2) = 5;
    *(longlong *)&pTVar6[3].SharedReferenceCount = *(longlong *)&pTVar6[3].SharedReferenceCount + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// RecordEvent @ 141960400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FCsvProfiler::RecordEvent(int param_1,FString *param_2)

{
  undefined1 *puVar1;
  wchar_t wVar2;
  void *_Src;
  longlong *plVar3;
  code *pcVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  TArray<FEventExecCmds,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  FCsvProfilerThreadData *pFVar14;
  FCsvCategoryData *lpCriticalSection;
  FCsvProfiler *pFVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FCsvEvent *this;
  ForAnyElementType FVar21;
  wchar_t *pwVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  longlong lVar25;
  undefined1 local_res18 [8];
  FLLMScope local_res20 [2];
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined8 local_80;
  LARGE_INTEGER local_78;
  FString local_70;
  FMemScope local_60;
  FDestructionSentinel local_58;
  
  lVar25 = (longlong)param_1;
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[lVar25] != false)) {
    FLLMScope::FLLMScope(local_res20,CsvProfiler,false,None,Default,true);
    FMemScope::FMemScope(&local_60,CsvProfiler,true);
    pFVar14 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar14 == (FCsvProfilerThreadData *)0x0) {
      pFVar14 = FCsvProfilerThreadData::CreateTLSData();
    }
    uVar16 = (pFVar14->Events).Counter;
    if ((uVar16 & 0x1f) == 0) {
      TSingleProducerSingleConsumerList<FCsvEvent,32>::AddTailBlock(&pFVar14->Events);
    }
    this = ((pFVar14->Events).TailBlock)->Entries + ((uint)uVar16 & 0x1f);
    QueryPerformanceCounter(&local_78);
    if ((param_2->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    uVar5 = CONCAT44(local_78.s.HighPart,local_78.s.LowPart);
    FCsvProfilerTrace::OutputEvent(pwVar22,param_1,uVar5);
    ::FString::operator=(&this->EventText,param_2);
    this->Timestamp = uVar5;
    this->CategoryIndex = param_1;
    (pFVar14->Events).Counter = (pFVar14->Events).Counter + 1;
    local_a0 = (param_2->Data).ArrayNum;
    lVar19 = (longlong)local_a0;
    pFVar20 = (param_2->Data).AllocatorInstance.Data;
    local_88 = (FScriptContainerElement *)0x0;
    local_80 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    if (local_a0 == 0) {
      local_9c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
      memcpy(local_a8.Data,pFVar20,lVar19 * 2);
    }
    if (param_1 != 0) {
      lpCriticalSection = FCsvCategoryData::Get();
      if ((lpCriticalSection == (FCsvCategoryData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar18 = 0;
      if (param_1 < (lpCriticalSection->CategoryNames).ArrayNum) {
        uVar18 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar20 = (lpCriticalSection->CategoryNames).AllocatorInstance.Data;
      local_98.Data = (FScriptContainerElement *)0x0;
      iVar24 = *(int *)(pFVar20 + lVar25 * 0x10 + 8);
      _Src = *(void **)(pFVar20 + lVar25 * 0x10);
      local_90 = CONCAT44(local_90._4_4_,iVar24);
      if (iVar24 == 0) {
        local_90 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar24,0,&local_98,iVar24,(int *)((longlong)&local_90 + 4));
        memcpy(local_98.Data,_Src,(longlong)iVar24 * 2);
      }
      if (lpCriticalSection != (FCsvCategoryData *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      if (local_88 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88);
      }
      local_88 = local_98.Data;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_80 = local_90;
      local_90 = 0;
      ::FString::PrintfImpl(&local_70,L"%s/%s");
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      local_a8.Data = local_70.Data.AllocatorInstance.Data;
      local_a0 = local_70.Data.ArrayNum;
      local_9c = local_70.Data.ArrayMax;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (3 < (byte)LogCsvProfiler._0_1_) {
      Get();
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
    pFVar15 = Get();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar15->OnCSVProfileEventDelegate,(FWriteAccessScope *)&local_58);
    puVar1 = &(pFVar15->OnCSVProfileEventDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar10 = false;
    uVar18 = *(int *)&(pFVar15->OnCSVProfileEventDelegate).field_0x10 - 1;
    if (-1 < (int)uVar18) {
      lVar25 = (longlong)(int)uVar18 << 4;
      bVar10 = false;
      do {
        uVar13 = 0;
        if ((int)uVar18 < *(int *)&(pFVar15->OnCSVProfileEventDelegate).field_0x10) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar19 = *(longlong *)&(pFVar15->OnCSVProfileEventDelegate).field_0x8;
        if (((*(int *)(lVar19 + 8 + lVar25) == 0) ||
            (plVar3 = *(longlong **)(lVar19 + lVar25), plVar3 == (longlong *)0x0)) ||
           (cVar12 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_88,param_2), cVar12 == '\0')) {
          bVar10 = true;
        }
        lVar25 = lVar25 + -0x10;
        uVar18 = uVar18 - 1;
      } while (-1 < (int)uVar18);
    }
    puVar1 = &(pFVar15->OnCSVProfileEventDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar10) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pFVar15->OnCSVProfileEventDelegate,false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    FVar8.Data = local_a8.Data;
    pTVar7 = GCsvEventExecCmds;
    if (GCsvEventExecCmds != (TArray<FEventExecCmds,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar20 = (GCsvEventExecCmds->AllocatorInstance).Data;
      iVar24 = local_a0 + -1;
      local_78.s.LowPart = GCsvEventExecCmds->ArrayNum;
      uVar16 = (ulonglong)(int)local_78.s.LowPart;
      if (local_a0 == 0) {
        iVar24 = 0;
      }
      pFVar23 = pFVar20 + uVar16 * 0x40;
      while( true ) {
        if (pTVar7->ArrayNum != (int)uVar16) {
          `TCheckedPointerIterator<FEventExecCmds,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar20 == pFVar23) break;
        if (*(int *)(pFVar20 + 0x10) == 0) {
          pwVar22 = L"";
LAB_141960876:
          if ((FVar8.Data != (FScriptContainerElement *)0x0) &&
             (pFVar9 = (FScriptContainerElement *)0x0, pwVar17 = pwVar22, FVar21.Data = FVar8.Data,
             FVar8.Data + (longlong)iVar24 * 2 != (FScriptContainerElement *)0x0)) {
            while (pFVar6 = pFVar9, FVar21.Data != FVar8.Data + (longlong)iVar24 * 2) {
              wVar2 = *pwVar17;
              if (wVar2 == L'*') {
                pwVar22 = pwVar17 + 1;
                if (*pwVar22 == L'\0') goto LAB_141960915;
                pFVar9 = FVar21.Data + 2;
                pwVar17 = pwVar22;
              }
              else if ((wVar2 == L'?') ||
                      ((wchar_t)((-(ushort)((ushort)wVar2 - 0x41 < 0x1a) & 0x20) + wVar2) ==
                       (wchar_t)((-(ushort)(*(ushort *)FVar21.Data - 0x41 < 0x1a) & 0x20) +
                                *(ushort *)FVar21.Data))) {
                pwVar17 = pwVar17 + 1;
                FVar21.Data = FVar21.Data + 2;
                pFVar9 = pFVar6;
              }
              else {
                if (pFVar6 == (FScriptContainerElement *)0x0) goto LAB_14196091c;
                pFVar9 = pFVar6 + 2;
                pwVar17 = pwVar22;
                FVar21.Data = pFVar6;
              }
            }
            wVar2 = *pwVar17;
            while (wVar2 == L'*') {
              pwVar22 = pwVar17 + 1;
              pwVar17 = pwVar17 + 1;
              wVar2 = *pwVar22;
            }
            if (wVar2 == L'\0') {
LAB_141960915:
              LOCK();
              *(undefined4 *)pFVar20 = 1;
              UNLOCK();
            }
          }
        }
        else {
          pwVar22 = *(wchar_t **)(pFVar20 + 8);
          if (pwVar22 != (wchar_t *)0x0) goto LAB_141960876;
        }
LAB_14196091c:
        uVar16 = (ulonglong)local_78.s.LowPart;
        pFVar20 = pFVar20 + 0x40;
      }
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
    FMemScope::~FMemScope(&local_60);
    FLLMScope::~FLLMScope(local_res20);
  }
  return;
}

// RecordEventAtFrameStart @ 1419609a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FCsvProfiler::RecordEventAtFrameStart(int param_1,FString *param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  FCsvProfiler *pFVar5;
  FCsvProfilerThreadData *pFVar6;
  longlong lVar7;
  FCsvEvent *this;
  wchar_t *pwVar8;
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  pFVar5 = Get();
  uVar1 = pFVar5->LastEndFrameTimestamp;
  if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[param_1] != false)) {
    FLLMScope::FLLMScope(local_res18,CsvProfiler,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,CsvProfiler,true);
    pwVar8 = L"";
    if (3 < (byte)LogCsvProfiler._0_1_) {
      Get();
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
    pFVar6 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar6 == (FCsvProfilerThreadData *)0x0) {
      pFVar6 = FCsvProfilerThreadData::CreateTLSData();
    }
    if ((param_2->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    FCsvProfilerTrace::OutputEvent(pwVar8,param_1,uVar1);
    uVar2 = (pFVar6->Events).Counter;
    if ((uVar2 & 0x1f) == 0) {
      TSingleProducerSingleConsumerList<FCsvEvent,32>::AddTailBlock(&pFVar6->Events);
    }
    this = ((pFVar6->Events).TailBlock)->Entries + ((uint)uVar2 & 0x1f);
    ::FString::operator=(&this->EventText,param_2);
    this->Timestamp = uVar1;
    this->CategoryIndex = param_1;
    (pFVar6->Events).Counter = (pFVar6->Events).Counter + 1;
    pTVar3 = CVarCsvContinuousWrites.Ref;
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    if ((0 < *(int *)((longlong)pTVar3->ShadowedValue + lVar7)) && (2 < (byte)LogCsvProfiler._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res18);
  }
  return;
}

// RecordEventAtTimestamp @ 141960b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FCsvProfiler::RecordEventAtTimestamp(int param_1,FString *param_2,ulong64 param_3)

{
  ulonglong uVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FCsvProfilerThreadData *pFVar4;
  longlong lVar5;
  FCsvEvent *this;
  wchar_t *pwVar6;
  FLLMScope local_res20 [2];
  FMemScope local_28 [2];
  
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_1] != false)) {
    FLLMScope::FLLMScope(local_res20,CsvProfiler,false,None,Default,true);
    FMemScope::FMemScope(local_28,CsvProfiler,true);
    pwVar6 = L"";
    if (3 < (byte)LogCsvProfiler._0_1_) {
      Get();
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
    pFVar4 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar4 == (FCsvProfilerThreadData *)0x0) {
      pFVar4 = FCsvProfilerThreadData::CreateTLSData();
    }
    if ((param_2->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    FCsvProfilerTrace::OutputEvent(pwVar6,param_1,param_3);
    uVar1 = (pFVar4->Events).Counter;
    if ((uVar1 & 0x1f) == 0) {
      TSingleProducerSingleConsumerList<FCsvEvent,32>::AddTailBlock(&pFVar4->Events);
    }
    this = ((pFVar4->Events).TailBlock)->Entries + ((uint)uVar1 & 0x1f);
    ::FString::operator=(&this->EventText,param_2);
    this->Timestamp = param_3;
    this->CategoryIndex = param_1;
    (pFVar4->Events).Counter = (pFVar4->Events).Counter + 1;
    pTVar2 = CVarCsvContinuousWrites.Ref;
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    if ((0 < *(int *)((longlong)pTVar2->ShadowedValue + lVar5)) && (2 < (byte)LogCsvProfiler._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
    FMemScope::~FMemScope(local_28);
    FLLMScope::~FLLMScope(local_res20);
  }
  return;
}

// RecordEventfInternal @ 141960ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfiler::RecordEventfInternal(int param_1,wchar_t *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  FCsvProfiler *pFVar3;
  FCsvProfiler *pFVar4;
  bool bVar5;
  undefined1 auStackY_2a8 [32];
  FLLMScope local_278 [2];
  FString local_270;
  FString local_260;
  undefined1 local_250 [8];
  TReferenceControllerBase<1> *local_248;
  FMemScope local_240;
  wchar_t local_238 [255];
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[param_1] != false)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    if (GStartOnEvent == (FString *)0x0) {
      return;
    }
  }
  FLLMScope::FLLMScope(local_278,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_240,CsvProfiler,true);
  puVar2 = __local_stdio_printf_options();
  __stdio_common_vswprintf(*puVar2,local_238,0x100,param_2);
  local_3a = 0;
  ::FString::FString(&local_260,local_238);
  if (!bVar5) {
    if (GStartOnEvent == (FString *)0x0) goto LAB_141960ed1;
    iVar1 = (GStartOnEvent->Data).ArrayNum;
    if (iVar1 == local_260.Data.ArrayNum) {
      if (1 < iVar1) {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(GStartOnEvent->Data).AllocatorInstance.Data,
                           (wchar_t *)local_260.Data.AllocatorInstance.Data);
        bVar5 = iVar1 == 0;
        goto LAB_141960e72;
      }
    }
    else {
      bVar5 = iVar1 + local_260.Data.ArrayNum == 1;
LAB_141960e72:
      if (!bVar5) goto LAB_141960ed1;
    }
    pFVar3 = Get();
    local_250 = (undefined1  [8])0x0;
    local_248 = (TReferenceControllerBase<1> *)0x0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    pFVar4 = Get();
    BeginCapture(pFVar3,pFVar4->CaptureOnEventFrameCount,&local_270,(FString *)local_250,None);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    if (local_250 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_250);
    }
    goto LAB_141960ed1;
  }
  RecordEvent(param_1,&local_260);
  if (GStopOnEvent == (FString *)0x0) goto LAB_141960ed1;
  iVar1 = (GStopOnEvent->Data).ArrayNum;
  if (iVar1 == local_260.Data.ArrayNum) {
    if (1 < iVar1) {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(GStopOnEvent->Data).AllocatorInstance.Data,
                         (wchar_t *)local_260.Data.AllocatorInstance.Data);
      bVar5 = iVar1 == 0;
      goto LAB_141960e05;
    }
  }
  else {
    bVar5 = iVar1 + local_260.Data.ArrayNum == 1;
LAB_141960e05:
    if (!bVar5) goto LAB_141960ed1;
  }
  pFVar3 = Get();
  local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  EndCapture(pFVar3,(TSharedFuture<FString> *)local_250,(FBaseGraphTask *)&local_270);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_248);
LAB_141960ed1:
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_240);
  FLLMScope::~FLLMScope(local_278);
  return;
}

// RegisterCategory @ 141962060

int __cdecl FCsvProfiler::RegisterCategory(FString *param_1,bool param_2,bool param_3)

{
  int iVar1;
  FCsvCategoryData *this;
  
  this = FCsvCategoryData::Get();
  iVar1 = FCsvCategoryData::RegisterCategory(this,param_1,param_2,param_3);
  return iVar1;
}

// SetDeviceProfileName @ 14196a770

void __thiscall FCsvProfiler::SetDeviceProfileName(FCsvProfiler *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FCsvProfiler *this_00;
  wchar_t *pwVar2;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this_00 = Get();
  SetMetadataInternal(this_00,L"DeviceProfile",pwVar2,true,Persistent);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetMetadata @ 14196c870

void __cdecl FCsvProfiler::SetMetadata(wchar_t *param_1,wchar_t *param_2)

{
  FCsvProfiler *this;
  
  this = Get();
  SetMetadataInternal(this,param_1,param_2,true,Persistent);
  return;
}

// SetMetadataInternal @ 14196c8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCsvProfiler::SetMetadataInternal
          (FCsvProfiler *this,wchar_t *param_1,wchar_t *param_2,bool param_3,
          EMetadataPersistenceType param_4)

{
  FWindowsRecursiveMutex *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *this_00;
  longlong lVar7;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *this_01;
  FLLMScope local_res18 [5];
  undefined3 in_stack_00000029;
  FString *local_68;
  FMemScope local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FLLMScope::FLLMScope(local_res18,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_60,CsvProfiler,true);
  this_00 = ::FString::FString(&local_38,param_1);
  ::FString::ToLower(this_00,&local_58);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  lVar7 = 0x78;
  if (param_4 != Persistent) {
    lVar7 = 200;
  }
  this_01 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)((longlong)&this->NumFramesToCapture + lVar7);
  if (param_2 == (wchar_t *)0x0) {
    pFVar1 = &this->MetadataCS;
    if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    iVar6 = local_58.Data.ArrayNum + -1;
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
    iVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(this_01,uVar5,&local_58);
    if (iVar6 != -1) {
      if (3 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
        iVar6 = local_58.Data.ArrayNum + -1;
        FVar3.Data = local_58.Data.AllocatorInstance.Data;
        if (local_58.Data.ArrayNum == 0) {
          iVar6 = 0;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>(this_01,uVar5,&local_58);
      }
    }
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
    goto LAB_14196ccd1;
  }
  FCsvProfilerTrace::OutputMetadata(param_1,param_2);
  ::FString::FString(&local_48,param_2);
  lVar7 = 0;
  if (param_3) {
    iVar6 = ::FString::Find(&local_58,L",",1,IgnoreCase,FromStart,-1);
    if ((iVar6 != -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!KeyLower.Contains(L\",\")",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                           ,0x1168,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = ::FString::ReplaceInline(&local_48,L",",L"&#44;",IgnoreCase);
    if ((0 < iVar6) && (2 < (byte)LogCsvProfiler._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
  }
  pFVar1 = &this->MetadataCS;
  if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  iVar6 = local_58.Data.ArrayNum + -1;
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(this_01,uVar5,&local_58);
  if (iVar6 == -1) {
LAB_14196cbf7:
    if (3 < (byte)LogCsvProfiler._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
  }
  else {
    iVar6 = local_58.Data.ArrayNum + -1;
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
    iVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(this_01,uVar5,&local_58);
    if (((iVar6 == -1) ||
        (lVar7 = *(longlong *)&this_01->Elements + (longlong)iVar6 * 0x28, lVar7 == 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = *(int *)(lVar7 + 0x18);
    if (iVar6 == local_48.Data.ArrayNum) {
      if (1 < iVar6) {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar7 + 0x10),
                           (wchar_t *)local_48.Data.AllocatorInstance.Data);
        bVar4 = iVar6 == 0;
        goto LAB_14196cbea;
      }
    }
    else {
      bVar4 = iVar6 + local_48.Data.ArrayNum == 1;
LAB_14196cbea:
      if (!bVar4) goto LAB_14196cbf7;
    }
  }
  iVar6 = local_58.Data.ArrayNum + -1;
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(this_01,uVar5,&local_58);
  if ((iVar6 == -1) ||
     (lVar7 = *(longlong *)&this_01->Elements + (longlong)iVar6 * 0x28, lVar7 == 0)) {
    local_68 = &local_58;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (this_01,(uint)&param_4,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar5,
               (bool *)&local_68);
    lVar7 = *(longlong *)&this_01->Elements + (longlong)_param_4 * 0x28;
  }
  iVar6 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange
            ((FString *)(lVar7 + 0x10),(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar6);
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14196ccd1:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// SetNonPersistentMetadata @ 14196cd30

void __cdecl FCsvProfiler::SetNonPersistentMetadata(wchar_t *param_1,wchar_t *param_2)

{
  FCsvProfiler *this;
  
  this = Get();
  SetMetadataInternal(this,param_1,param_2,true,NonPersistent);
  return;
}

// TryEndCaptureInternal @ 1419759b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCsvProfiler::TryEndCaptureInternal(FCsvProfiler *this,FCsvCaptureCommand *param_1)

{
  TPromise<FString> *pTVar1;
  TFutureState<FString> *pTVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  FThreadHeartBeat *pFVar7;
  FGameThreadHitchHeartBeatThreaded *pFVar8;
  wchar_t *pwVar9;
  FString local_28;
  FString local_18;
  
  if ((GCsvProfilerIsCapturing) || (GCsvProfilerIsWritingFile)) {
    if (param_1->FrameRequested == GCsvProfilerFrameNumber) {
      this->CaptureEndFrameCount = this->CaptureFrameNumber;
      return false;
    }
    if (3 < (byte)LogCsvProfiler._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnCSVProfileEndDelegate);
    GCsvProfilerIsWritingFile = true;
    GCsvProfilerIsCapturing = false;
    FCsvProfilerTrace::OutputEndCapture();
    pTVar4 = CVarCsvBlockOnCaptureEnd.Ref;
    if (this->ProcessingThread != (FCsvProfilerProcessingThread *)0x0) {
      bVar5 = IsInParallelGameThread();
      if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (pTVar4->ShadowedValue[0] == 1) {
        pFVar7 = FThreadHeartBeat::GetNoInit();
        if (pFVar7 != (FThreadHeartBeat *)0x0) {
          FThreadHeartBeat::SuspendHeartBeat(pFVar7,false);
        }
        pFVar8 = FGameThreadHitchHeartBeatThreaded::Get();
        FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(pFVar8);
        (**(code **)(this->FileWriteBlockingEvent->_padding_ + 0x20))
                  (this->FileWriteBlockingEvent,0xffffffff,0);
        pFVar8 = FGameThreadHitchHeartBeatThreaded::Get();
        FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(pFVar8);
        if ((pFVar7 != (FThreadHeartBeat *)0x0) &&
           (pFVar7 = FThreadHeartBeat::GetNoInit(), pFVar7 != (FThreadHeartBeat *)0x0)) {
          FThreadHeartBeat::ResumeHeartBeat(pFVar7,false);
        }
      }
      return false;
    }
    pFVar7 = FThreadHeartBeat::GetNoInit();
    if (pFVar7 == (FThreadHeartBeat *)0x0) {
      pFVar8 = FGameThreadHitchHeartBeatThreaded::Get();
      FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(pFVar8);
      FinalizeCsvFile(this);
      pFVar8 = FGameThreadHitchHeartBeatThreaded::Get();
      FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(pFVar8);
    }
    else {
      FThreadHeartBeat::SuspendHeartBeat(pFVar7,false);
      pFVar8 = FGameThreadHitchHeartBeatThreaded::Get();
      FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(pFVar8);
      FinalizeCsvFile(this);
      pFVar8 = FGameThreadHitchHeartBeatThreaded::Get();
      FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(pFVar8);
      pFVar7 = FThreadHeartBeat::GetNoInit();
      if (pFVar7 != (FThreadHeartBeat *)0x0) {
        FThreadHeartBeat::ResumeHeartBeat(pFVar7,false);
      }
    }
    if (((GCsvProfilerIsCapturing != false) || (GCsvProfilerIsWritingFile != false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GCsvProfilerIsCapturing && !GCsvProfilerIsWritingFile",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                           ,0xf3a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  pTVar1 = param_1->Completion;
  if (pTVar1 != (TPromise<FString> *)0x0) {
    if ((pTVar1->State).Object == (TFutureState<FString> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((pTVar1->State).Object == (TFutureState<FString> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pTVar2 = (pTVar1->State).Object;
    if ((*(TAtomic<bool> *)&pTVar2->_padding_ != (TAtomic<bool>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    ::FString::FString((FString *)&pTVar2->Result,&this->OutputFilename);
    FFutureState::MarkComplete((FFutureState *)pTVar2);
    pTVar1 = param_1->Completion;
    if (pTVar1 != (TPromise<FString> *)0x0) {
      pTVar2 = (pTVar1->State).Object;
      if (((pTVar2 != (TFutureState<FString> *)0x0) && ((char)pTVar2->_padding_ == '\0')) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar1->State).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar1,0x18);
    }
  }
  (**(code **)(this->FileWriteBlockingEvent->_padding_ + 0x18))();
  if ((this->OutputFilename).Data.ArrayNum < 2) {
    if (2 < (byte)LogCsvProfiler._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
  }
  else {
    ::FString::Reset(&this->OutputFilename,0);
    if ((GCsvRepeatCount != 0) && (0 < GCsvRepeatFrameCount)) {
      if (0 < GCsvRepeatCount) {
        GCsvRepeatCount = GCsvRepeatCount + -1;
      }
      if (GCsvRepeatCount != 0) {
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        BeginCapture(this,GCsvRepeatFrameCount,&local_28,&local_18,None);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return true;
      }
    }
  }
  if (GCsvExitOnCompletion == false) {
    pwVar9 = FCommandLine::Get();
    bVar5 = FParse::Param(pwVar9,L"ExitAfterCsvProfiling");
    if (!bVar5) {
      return true;
    }
  }
  pTVar4 = CVarCsvForceExit.Ref;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FWindowsPlatformMisc::RequestExit
            (pTVar4->ShadowedValue[0] != 0,L"CsvProfiler.ExitAfterCsvProfiling");
  return true;
}

