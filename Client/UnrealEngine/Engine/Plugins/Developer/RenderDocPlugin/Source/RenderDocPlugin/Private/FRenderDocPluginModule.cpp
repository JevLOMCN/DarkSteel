// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 22

// CanSupportSubmissionThread @ 14e2c6a20

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

bool __thiscall FRenderDocPluginModule::CanSupportSubmissionThread(FRenderDocPluginModule *this)

{
  return false;
}

// CaptureFrame @ 14e2c6a30

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderDocPluginModule::CaptureFrame
          (FRenderDocPluginModule *this,FViewport *param_1,uint param_2,FString *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  LARGE_INTEGER local_res8;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                         ,0x1a6,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar5 = CVarRenderDocCaptureDelay.Ref;
  bVar6 = IsInParallelGameThread();
  lVar9 = 4;
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  pTVar4 = CVarRenderDocCaptureAllActivity.Ref;
  iVar1 = *(int *)((longlong)pTVar5->ShadowedValue + lVar7);
  if ((this->CaptureFrameCount & 8) != 0) {
    return;
  }
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  pTVar5 = CVarRenderDocCaptureFrameCount.Ref;
  if (*(int *)((longlong)pTVar4->ShadowedValue + lVar7) == 0) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    if (*(int *)((longlong)pTVar5->ShadowedValue + lVar7) < 2) {
      bVar8 = 0;
      goto LAB_14e2c6b0b;
    }
  }
  bVar8 = 2;
LAB_14e2c6b0b:
  *(byte *)&this->CaptureFrameCount = (byte)this->CaptureFrameCount & 0xfd | bVar8;
  if ((iVar1 == 0) && (bVar8 == 0)) {
    DoFrameCaptureCurrentViewport
              ((FRenderDocPluginModule *)&this[-1].CaptureFileName,param_1,param_2,param_3);
    return;
  }
  if ((((param_1 != (FViewport *)0x0) || (1 < (param_3->Data).ArrayNum)) || ((param_2 & 1) != 0)) &&
     (2 < (byte)RenderDocPlugin._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
  }
  pTVar5 = CVarRenderDocCaptureFrameCount.Ref;
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->DelayedCaptureTick = (longlong)*(int *)((longlong)pTVar5->ShadowedValue + lVar7);
  pTVar5 = CVarRenderDocCaptureDelayInSeconds.Ref;
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar9 = 0;
  }
  iVar2 = *(int *)((longlong)pTVar5->ShadowedValue + lVar9);
  *(byte *)&this->CaptureFrameCount = 0 < iVar2 | (byte)this->CaptureFrameCount & 0xfe;
  if (iVar2 < 1) {
    this->RenderDocAPI = (RENDERDOC_API_1_1_0 *)((longlong)iVar1 + GFrameCounter);
  }
  else {
    QueryPerformanceCounter(&local_res8);
    this->MainWindowHandle =
         (void *)((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                  (double)iVar1 + __real_4170000000000000);
  }
  *(byte *)&this->CaptureFrameCount = (byte)this->CaptureFrameCount | 4;
  return;
}

// BeginCapture @ 14e2c6c30

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRenderDocPluginModule::BeginCapture
          (FRenderDocPluginModule *this,FRHICommandListImmediate *param_1,uint param_2,
          FString *param_3)

{
  ulong64 *puVar1;
  uint *puVar2;
  FScriptContainerElement *_Src;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = &this->CaptureEndTick;
  *(uint *)((longlong)&this->CaptureFrameCount + 4) = param_2;
  if ((FString *)puVar1 != param_3) {
    iVar3 = (param_3->Data).ArrayNum;
    puVar2 = &this->CaptureFlags;
    _Src = (param_3->Data).AllocatorInstance.Data;
    *(int *)&this->field_0x58 = iVar3;
    if ((iVar3 == 0) && (*puVar2 == 0)) {
      *puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,*puVar2,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
      if (iVar3 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  iVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar3 == 4) {
    puVar4 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x3a8))();
    uVar5 = *puVar4;
  }
  else {
    uVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar4 = FRHICommandListBase::AllocCommand((FRHICommandListBase *)param_1,0x28,8);
    *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,`FRenderDocPluginModule::BeginCapture_RenderThread'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[1] = 0;
    puVar4[2] = &this[-1].CaptureFileName;
    puVar4[3] = uVar5;
    puVar4[4] = L"TRHILambdaCommand";
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)(this->Loader).RenderDocDLL + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00014e2c6d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5,(this->Loader).RenderDocAPI,UNRECOVERED_JUMPTABLE);
  return;
}

// EndCapture @ 14e2c6d80

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRenderDocPluginModule::EndCapture(FRenderDocPluginModule *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  FString local_20;
  
  uVar1 = *(uint *)((longlong)&this->CaptureFrameCount + 4);
  iVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar2 == 4) {
    puVar3 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x3a8))();
    uVar4 = *puVar3;
  }
  else {
    uVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  ::FString::FString(&local_20,(FString *)&this->CaptureEndTick);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar3 = FRHICommandListBase::AllocCommand((FRHICommandListBase *)param_1,0x40,8);
    puVar3[1] = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`FRenderDocPluginModule::EndCapture_RenderThread'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[2] = &this[-1].CaptureFileName;
    puVar3[3] = uVar4;
    puVar3[5] = 0;
    *(uint *)(puVar3 + 4) = uVar1;
    puVar3[5] = local_20.Data.AllocatorInstance.Data;
    local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar3 + 6) = local_20.Data.ArrayNum;
    *(int *)((longlong)puVar3 + 0x34) = local_20.Data.ArrayMax;
    local_20.Data.ArrayNum = 0;
    local_20.Data.ArrayMax = 0;
    puVar3[7] = L"TRHILambdaCommand";
  }
  else {
    iVar2 = (**(code **)((longlong)(this->Loader).RenderDocDLL + 0xa8))(uVar4);
    if (iVar2 == 1) {
      FRenderDocFrameCapturer::SaveAndLaunch
                ((FRenderDocPluginModule *)&this[-1].CaptureFileName,uVar1,&local_20);
    }
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)((longlong)&this->CaptureFrameCount + 4) = 0;
  ::FString::Reset((FString *)&this->CaptureEndTick,0);
  return;
}

// StartupModule @ 14e2c6ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRenderDocPluginModule::StartupModule(FRenderDocPluginModule *this)

{
  undefined1 *puVar1;
  int iVar2;
  RENDERDOC_API_1_1_0 *pRVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  _func___cdecl_void_char_ptr *p_Var5;
  _func___cdecl_int_RENDERDOC_CaptureOption_uint *p_Var6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  char cVar10;
  FName *pFVar11;
  IModularFeatures *pIVar12;
  FString *pFVar13;
  IFileManager *pIVar14;
  FDateTime this_00;
  size_t sVar15;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar16;
  FRenderDocPluginLoader *pFVar17;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar18;
  ForAnyElementType FVar19;
  FRenderDocPluginLoader *pFVar20;
  wchar_t *_Str;
  uint uVar21;
  int iVar22;
  FRenderDocPluginLoader *pFVar23;
  undefined1 auStackY_1f8 [32];
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  undefined1 local_188 [8];
  ForAnyElementType local_180;
  int local_178;
  FDestructionSentinel local_170;
  TStringView<wchar_t> local_158;
  FScriptContainerElement *local_148;
  int local_140;
  FName local_138 [2];
  undefined1 local_128 [24];
  FString local_110;
  code *local_f8;
  ulong64 uStack_f0;
  code *local_e8;
  ulong64 uStack_e0;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  FRenderDocPluginLoader::Initialize(&this->Loader);
  pFVar23 = (FRenderDocPluginLoader *)0x0;
  this->RenderDocAPI = (RENDERDOC_API_1_1_0 *)0x0;
  if ((this->Loader).RenderDocAPI == (RENDERDOC_API_1_1_0 *)0x0) {
    return;
  }
  ::FString::FString(&local_198,L"(Key=F12,Command=\"RenderDoc.CaptureFrame\", Alt=true)");
  pFVar11 = ::FName::FName(local_138,L"DebugExecBindings");
  FConfigCacheIni::AddUniqueToSection
            (GConfig,L"/Script/Engine.PlayerInput",*pFVar11,&local_198,&GInputIni);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (GRHIGlobals.UsingNullRHI != false) {
    if ((byte)RenderDocPlugin._0_1_ < 4) {
      return;
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
    return;
  }
  pRVar3 = (this->Loader).RenderDocAPI;
  this->RenderDocAPI = pRVar3;
  if ((pRVar3 == (RENDERDOC_API_1_1_0 *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderDocAPI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                         ,0x110,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar12 = IModularFeatures::Get();
  pcVar7 = *(code **)((longlong)*pIVar12 + 0x28);
  pFVar17 = (FRenderDocPluginLoader *)&this->_padding_;
  if (this == (FRenderDocPluginModule *)0x0) {
    pFVar17 = pFVar23;
  }
  pFVar20 = (FRenderDocPluginLoader *)&pFVar17->RenderDocAPI;
  if (pFVar17 == (FRenderDocPluginLoader *)0x0) {
    pFVar20 = pFVar23;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"RenderCaptureProvider");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  (*pcVar7)(pIVar12,`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                    ::__l2::FeatureName,pFVar20);
  pIVar12 = IModularFeatures::Get();
  pFVar17 = (FRenderDocPluginLoader *)&this->_padding_;
  if (this == (FRenderDocPluginModule *)0x0) {
    pFVar17 = pFVar23;
  }
  pcVar7 = *(code **)((longlong)*pIVar12 + 0x28);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"InputDevice");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  (*pcVar7)(pIVar12,`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,pFVar17);
  this->bCaptureDelayInSeconds = false;
  this->bCaptureInProgress = false;
  this->bPendingCapture = false;
  this->bShouldCaptureAllActivity = false;
  this->DelayedCaptureTick = 0;
  this->DelayedCaptureSeconds = 0.0;
  this->CaptureFrameCount = 0;
  this->CaptureEndTick = 0;
  iVar22 = 0;
  this->CaptureFlags = 0;
  pFVar13 = FPaths::ProjectSavedDir();
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (pFVar13->Data).ArrayNum;
  _Src = (pFVar13->Data).AllocatorInstance.Data;
  uVar21 = (0x13 - (uint)((pFVar13->Data).ArrayNum != 0)) + iVar2;
  local_1b8.Data.ArrayNum = iVar2;
  if ((int)uVar21 < iVar2) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar21,0,(ForAnyElementType *)&local_1b8,iVar2,&local_1b8.Data.ArrayMax);
  if (iVar2 != 0) {
    memcpy(local_1b8.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  ::FString::PathAppend(&local_1b8,L"RenderDocCaptures",0x11);
  pIVar14 = IFileManager::Get();
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_1b8.Data.ArrayNum != 0) {
    FVar19.Data = local_1b8.Data.AllocatorInstance.Data;
  }
  cVar10 = (**(code **)((longlong)*pIVar14 + 0x58))(pIVar14,FVar19.Data);
  if (cVar10 == '\0') {
    pIVar14 = IFileManager::Get();
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar19.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar14 + 0x60))(pIVar14,FVar19.Data,1);
  }
  this_00 = FDateTime::Now();
  pFVar13 = FDateTime::ToString((FDateTime *)this_00.Ticks,(FString *)(local_128 + 8));
  if ((pFVar13->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  local_158.DataPtr = L"";
  if (local_1b8.Data.ArrayNum != 0) {
    local_158.DataPtr = (wchar_t *)local_1b8.Data.AllocatorInstance.Data;
  }
  local_158.Size = iVar22;
  if ((FScriptContainerElement *)local_158.DataPtr != (FScriptContainerElement *)0x0) {
    sVar15 = wcslen(local_158.DataPtr);
    local_158.Size = (int)sVar15;
  }
  local_148 = (FScriptContainerElement *)_Str;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar15 = wcslen(_Str);
    iVar22 = (int)sVar15;
  }
  local_140 = iVar22;
  FPaths::CombineInternal(&local_1a8,&local_158,2);
  if ((void *)local_128._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_128._8_8_);
  }
  pFVar13 = FPaths::ConvertRelativePathToFull(&local_110,&local_1a8);
  if (&local_1a8 != pFVar13) {
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    local_1a8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
    local_1a8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeDirectoryName(&local_1a8);
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_1a8.Data.ArrayNum != 0) {
    FVar19.Data = local_1a8.Data.AllocatorInstance.Data;
  }
  p_Var5 = this->RenderDocAPI->SetLogFilePathTemplate;
  pTVar16 = StringCast<char,128,wchar_t>(&local_d8,(wchar_t *)FVar19.Data);
  (*p_Var5)(pTVar16->Ptr);
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  (*this->RenderDocAPI->SetFocusToggleKeys)((RENDERDOC_InputButton *)0x0,0);
  (*this->RenderDocAPI->SetCaptureKeys)((RENDERDOC_InputButton *)0x0,0);
  pTVar8 = CVarRenderDocCaptureCallstacks.Ref;
  p_Var6 = this->RenderDocAPI->SetCaptureOptionU32;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_14e2c72f6:
    pFVar17 = pFVar23;
  }
  else {
    bVar9 = IsInGameThread();
    pFVar17 = (FRenderDocPluginLoader *)&DAT_00000004;
    if (bVar9) goto LAB_14e2c72f6;
  }
  (*p_Var6)(eRENDERDOC_Option_CaptureCallstacks,
            SUB14(*(int *)((longlong)&pFVar17->RenderDocDLL + (longlong)pTVar8->ShadowedValue) != 0,
                  0));
  pTVar8 = CVarRenderDocReferenceAllResources.Ref;
  p_Var6 = this->RenderDocAPI->SetCaptureOptionU32;
  bVar9 = IsInParallelGameThread();
  if (!bVar9) {
    bVar9 = IsInGameThread();
    pFVar17 = (FRenderDocPluginLoader *)&DAT_00000004;
    if (!bVar9) goto LAB_14e2c7331;
  }
  pFVar17 = pFVar23;
LAB_14e2c7331:
  (*p_Var6)(eRENDERDOC_Option_RefAllResources,
            SUB14(*(int *)((longlong)&pFVar17->RenderDocDLL + (longlong)pTVar8->ShadowedValue) != 0,
                  0));
  pTVar8 = CVarRenderDocSaveAllInitials.Ref;
  p_Var6 = this->RenderDocAPI->SetCaptureOptionU32;
  bVar9 = IsInParallelGameThread();
  if ((bVar9) ||
     (bVar9 = IsInGameThread(), pFVar17 = (FRenderDocPluginLoader *)&DAT_00000004, bVar9)) {
    pFVar17 = pFVar23;
  }
  (*p_Var6)(eRENDERDOC_Option_SaveAllInitials,
            SUB14(*(int *)((longlong)&pFVar17->RenderDocDLL + (longlong)pTVar8->ShadowedValue) != 0,
                  0));
  (*this->RenderDocAPI->MaskOverlayBits)(0,0);
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_198.Data.ArrayNum = 0;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)CaptureFrame;
    uStack_f0 = (ulonglong)(uint)local_198.Data.ArrayMax << 0x20;
    local_f8 = CaptureFrame;
    pTVar18 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateRaw<FRenderDocPluginModule>
                        ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_188,this,
                         (pmf_582f4921 *)&local_f8);
    FAutoConsoleCommand::FAutoConsoleCommand
              (&CCmdRenderDocCaptureFrame,L"renderdoc.CaptureFrame",
               L"Captures the rendering commands of the next frame and launches RenderDoc",pTVar18,0
              );
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    if ((local_178 != 0) && (local_180.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_180.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_180,0,0,0x10);
      local_178 = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
    atexit(`FRenderDocPluginModule::StartupModule'::__l2::
           _dynamic_atexit_destructor_for__CCmdRenderDocCaptureFrame__);
    _Init_thread_footer(&::_TSS0);
  }
  local_198.Data.ArrayNum = 0;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnPostEngineInit;
  uStack_e0 = (ulonglong)(uint)local_198.Data.ArrayMax << 0x20;
  local_e8 = OnPostEngineInit;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FRenderDocPluginModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(FRenderDocPluginModule *)local_128,
             (pmf_582f4921 *)this);
  if (4 < (byte)RenderDocPlugin._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14e2c75d0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRenderDocPluginModule::ShutdownModule(FRenderDocPluginModule *this)

{
  code *pcVar1;
  HMODULE hLibModule;
  IModularFeatures *pIVar2;
  FRenderDocPluginLoader *pFVar3;
  FRenderDocPluginLoader *pFVar4;
  
  if (!GRHIGlobals.UsingNullRHI) {
    pIVar2 = IModularFeatures::Get();
    pFVar3 = (FRenderDocPluginLoader *)&this->_padding_;
    if (this == (FRenderDocPluginModule *)0x0) {
      pFVar3 = (FRenderDocPluginLoader *)0x0;
    }
    pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
    pFVar4 = (FRenderDocPluginLoader *)&pFVar3->RenderDocAPI;
    if (pFVar3 == (FRenderDocPluginLoader *)0x0) {
      pFVar4 = (FRenderDocPluginLoader *)0x0;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::
          __l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"RenderCaptureProvider");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                     ::__l2::FeatureName,pFVar4);
    if (GRHIGlobals.UsingNullRHI == false) {
      hLibModule = (this->Loader).RenderDocDLL;
      if (hLibModule != (HMODULE)0x0) {
        FWindowsPlatformProcess::FreeDllHandle(hLibModule);
        (this->Loader).RenderDocDLL = (void *)0x0;
      }
      if (4 < (byte)RenderDocPlugin._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      }
    }
    this->RenderDocAPI = (RENDERDOC_API_1_1_0 *)0x0;
  }
  return;
}

// CreateInputDevice @ 14e2c76f0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IInputDevice,1> * __thiscall
FRenderDocPluginModule::CreateInputDevice
          (FRenderDocPluginModule *this,TSharedPtr<IInputDevice,1> *__return_storage_ptr__,
          TSharedRef<FGenericApplicationMessageHandler,1> *param_1)

{
  IInputDevice *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  if (4 < (byte)RenderDocPlugin._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
  }
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 == (IInputDevice *)0x0) {
    pIVar1 = (IInputDevice *)0x0;
  }
  else {
    pIVar1[1] = (IInputDevice)this;
    *pIVar1 = (IInputDevice)&___7FRenderDocDummyInputDevice__6B_;
  }
  __return_storage_ptr__->Object = pIVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VIInputDevice__U__DefaultDeleter_VIInputDevice___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pIVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// operator() @ 14e2c8a10

void __thiscall
`FRenderDocPluginModule::BeginFrameCapture'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar2 = *(undefined8 *)((longlong)this + 8);
  FRenderDocFrameCapturer::UE_GEmitDrawEvents_BeforeCapture = GetEmitDrawEvents();
  SetEmitDrawEvents(true);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar1 + 0x98);
  iVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar3 == 4) {
    puVar4 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x3a8))();
                    /* WARNING: Could not recover jumptable at 0x00014e2c8a73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*puVar4,uVar2);
    return;
  }
  uVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
                    /* WARNING: Could not recover jumptable at 0x00014e2c8a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar5,uVar2);
  return;
}

// operator() @ 14e2c8aa0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FRenderDocPluginModule::EndFrameCapture'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(undefined8 *)this;
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(&GRHICommandList.CommandListImmediate);
  pcVar3 = *(code **)(lVar1 + 0xa8);
  iVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar4 == 4) {
    puVar5 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x3a8))();
    uVar6 = *puVar5;
  }
  else {
    uVar6 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
  }
  (*pcVar3)(uVar6,uVar2);
  SetEmitDrawEvents(FRenderDocFrameCapturer::UE_GEmitDrawEvents_BeforeCapture);
  FRenderDocFrameCapturer::SaveAndLaunch
            (*(FRenderDocPluginModule **)((longlong)this + 0x10),*(uint *)((longlong)this + 0x18),
             (FString *)((longlong)this + 0x20));
  return;
}

// BeginCapture_RenderThread @ 14e2c8da0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRenderDocPluginModule::BeginCapture_RenderThread
          (FRenderDocPluginModule *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  iVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar1 == 4) {
    puVar2 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x3a8))();
    pvVar3 = (void *)*puVar2;
  }
  else {
    pvVar3 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar2 = FRHICommandListBase::AllocCommand((FRHICommandListBase *)param_1,0x28,8);
    *puVar2 = &TRHILambdaCommand<FRHICommandListImmediate,`FRenderDocPluginModule::BeginCapture_RenderThread'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[1] = 0;
    puVar2[2] = this;
    puVar2[3] = pvVar3;
    puVar2[4] = L"TRHILambdaCommand";
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014e2c8e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->RenderDocAPI->StartFrameCapture)(pvVar3,this->MainWindowHandle);
  return;
}

// BeginFrameCapture @ 14e2c8e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FRenderDocPluginModule::BeginFrameCapture(FRenderDocPluginModule *this)

{
  _func___cdecl_int_RENDERDOC_CaptureOption_uint *p_Var1;
  RENDERDOC_API_1_1_0 *pRVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  FText *this_00;
  FString *pFVar7;
  longlong lVar8;
  HWND pHVar9;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStackY_e8 [32];
  FText local_a8;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (4 < (byte)RenderDocPlugin._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
  }
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_a8,L"RenderDocPlugin",L"RenderDocBeginCaptureNotification",
                       L"RenderDoc capture started");
  pFVar7 = FText::ToString(this_00);
  UEngine::AddOnScreenDebugMessage
            (GEngine,0xffffffffffffffff,__real_40000000,FColor::Emerald,pFVar7,true,
             &UE::Math::TVector2<double>::UnitVector);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  pTVar4 = CVarRenderDocCaptureCallstacks.Ref;
  p_Var1 = ((this->Loader).RenderDocAPI)->SetCaptureOptionU32;
  bVar5 = IsInParallelGameThread();
  lVar12 = 4;
  if (bVar5) {
LAB_14e2c8f5e:
    lVar8 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    if (bVar5) goto LAB_14e2c8f5e;
    lVar8 = 4;
  }
  iVar6 = (*p_Var1)(eRENDERDOC_Option_CaptureCallstacks,
                    SUB14(*(int *)((longlong)pTVar4->ShadowedValue + lVar8) != 0,0));
  if (iVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ok",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                       ,0x169,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar4 = CVarRenderDocReferenceAllResources.Ref;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_14e2c8fb7:
    lVar8 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    if (bVar5) goto LAB_14e2c8fb7;
    lVar8 = 4;
  }
  iVar6 = (*p_Var1)(eRENDERDOC_Option_RefAllResources,
                    SUB14(*(int *)((longlong)pTVar4->ShadowedValue + lVar8) != 0,0));
  if (iVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ok",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                       ,0x16a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar4 = CVarRenderDocSaveAllInitials.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) goto LAB_14e2c900d;
  }
  lVar12 = 0;
LAB_14e2c900d:
  iVar6 = (*p_Var1)(eRENDERDOC_Option_SaveAllInitials,
                    SUB14(*(int *)((longlong)pTVar4->ShadowedValue + lVar12) != 0,0));
  if (iVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ok",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                       ,0x16b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pHVar9 = GetActiveWindow();
  pRVar2 = this->RenderDocAPI;
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x20,8);
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRenderDocPluginModule::BeginFrameCapture'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_70[1] = (code *)this;
  local_70[2] = (code *)pHVar9;
  local_70[3] = (code *)pRVar2;
  if (local_70 + 1 != (code **)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRenderDocPluginModule::BeginFrameCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderDocPluginModule::BeginFrameCapture_::__l2::TSTR_StartRenderDocCapture370>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`FRenderDocPluginModule::BeginFrameCapture'::__l2::TSTR_StartRenderDocCapture370>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar10);
    uVar13 = (ulonglong)local_38;
    if (2 < uVar13) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar11 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar11 = local_40;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar11 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar11 = local_70;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  return;
}

// CaptureFrame @ 14e2c9240

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall FRenderDocPluginModule::CaptureFrame(FRenderDocPluginModule *this)

{
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 8))(&this->_padding_,0,1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// DoFrameCaptureCurrentViewport @ 14e2c95b0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRenderDocPluginModule::DoFrameCaptureCurrentViewport
          (FRenderDocPluginModule *this,FViewport *param_1,uint param_2,FString *param_3)

{
  UGameViewportClient *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  
  BeginFrameCapture(this);
  if (GEngine == (UEngine *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GEngine",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                       ,0x1fb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 == (FViewport *)0x0) {
    pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if (pUVar1 != (UGameViewportClient *)0x0) {
      if (pUVar1->Viewport == (FViewport *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GEngine->GameViewport->Viewport",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                           ,0x1fe,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      cVar4 = (**(code **)(((GEngine->GameViewport).field0_0x0.DebugPtr)->Viewport->_padding_ + 0xa0
                          ))();
      if ((cVar4 != '\0') &&
         (param_1 = ((GEngine->GameViewport).field0_0x0.DebugPtr)->Viewport,
         param_1 != (FViewport *)0x0)) goto LAB_14e2c96b2;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Viewport",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                       ,0x210,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_14e2c96b2:
  FViewport::Draw(param_1,true);
  pvVar5 = (void *)(**(code **)(param_1->_padding_ + 0x80))(param_1);
  EndFrameCapture(this,pvVar5,param_2,param_3);
  return;
}

// EndCapture_RenderThread @ 14e2c9720

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRenderDocPluginModule::EndCapture_RenderThread
          (FRenderDocPluginModule *this,FRHICommandListImmediate *param_1,uint param_2,
          FString *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  FString local_20;
  
  iVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar1 == 4) {
    puVar3 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x3a8))();
    pvVar4 = (void *)*puVar3;
  }
  else {
    pvVar4 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  ::FString::FString(&local_20,param_3);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar3 = FRHICommandListBase::AllocCommand((FRHICommandListBase *)param_1,0x40,8);
    puVar3[1] = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`FRenderDocPluginModule::EndCapture_RenderThread'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[2] = this;
    puVar3[3] = pvVar4;
    puVar3[5] = 0;
    *(uint *)(puVar3 + 4) = param_2;
    puVar3[5] = local_20.Data.AllocatorInstance.Data;
    local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar3 + 6) = local_20.Data.ArrayNum;
    *(int *)((longlong)puVar3 + 0x34) = local_20.Data.ArrayMax;
    local_20.Data.ArrayNum = 0;
    local_20.Data.ArrayMax = 0;
    puVar3[7] = L"TRHILambdaCommand";
  }
  else {
    uVar2 = (*this->RenderDocAPI->EndFrameCapture)(pvVar4,this->MainWindowHandle);
    if (uVar2 == 1) {
      FRenderDocFrameCapturer::SaveAndLaunch(this,param_2,&local_20);
    }
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// EndFrameCapture @ 14e2c9890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall
FRenderDocPluginModule::EndFrameCapture
          (FRenderDocPluginModule *this,void *param_1,uint param_2,FString *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  HWND local_c8;
  RENDERDOC_API_1_1_0 *local_c0;
  FRenderDocPluginModule *local_b8;
  uint local_b0;
  FString local_a8;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1 == (void *)0x0) {
    param_1 = GetActiveWindow();
  }
  local_c0 = this->RenderDocAPI;
  local_c8 = param_1;
  local_b8 = this;
  local_b0 = param_2;
  ::FString::FString(&local_a8,param_3);
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x38,8);
  ppcVar5 = local_70 + 1;
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRenderDocPluginModule::EndFrameCapture'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *ppcVar5 = (code *)local_c8;
  local_70[2] = (code *)local_c0;
  local_70[3] = (code *)local_b8;
  *(uint *)(local_70 + 4) = local_b0;
  ::FString::FString((FString *)(local_70 + 5),&local_a8);
  if (ppcVar5 != (code **)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRenderDocPluginModule::EndFrameCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderDocPluginModule::EndFrameCapture_::__l2::TSTR_EndRenderDocCapture405>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FRenderDocPluginModule::EndFrameCapture'::__l2::TSTR_EndRenderDocCapture405>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar5 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar5 = local_40;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar5 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar5 = local_70;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  this->bPendingCapture = false;
  this->bCaptureInProgress = false;
  this->DelayedCaptureTick = 0;
  this->DelayedCaptureSeconds = 0.0;
  this->CaptureFrameCount = 0;
  this->CaptureEndTick = 0;
  return;
}

// GetNewestCapture @ 14e2ca300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

FString * __thiscall
FRenderDocPluginModule::GetNewestCapture
          (FRenderDocPluginModule *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  FString *pFVar4;
  uint uVar5;
  undefined1 auStack_3a8 [32];
  uint local_388 [2];
  FString local_380;
  ulong64 local_370;
  FString local_368;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_358;
  char local_238 [512];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  uVar5 = 0;
  local_388[0] = 0x200;
  local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.Data.ArrayNum = 0;
  local_380.Data.ArrayMax = 0;
  uVar2 = (*this->RenderDocAPI->GetCapture)(0,local_238,local_388,&local_370);
  uVar1 = local_388[0];
  while (local_388[0] = uVar1, uVar2 != 0) {
    local_358._padding_ = 0;
    sVar3 = strlen(local_238);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_358,local_238,(int)sVar3,Yes);
    pFVar4 = ::FString::ConstructFromPtrSize(&local_368,local_358.Ptr,uVar1);
    if (&local_380 != pFVar4) {
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
      local_380.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_380.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if ((void *)local_358._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_358._padding_);
    }
    uVar5 = uVar5 + 1;
    uVar2 = (*this->RenderDocAPI->GetCapture)(uVar5,local_238,local_388,&local_370);
    uVar1 = local_388[0];
  }
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,&local_380);
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InjectDebugExecKeybind @ 14e2caf70

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall FRenderDocPluginModule::InjectDebugExecKeybind(FRenderDocPluginModule *this)

{
  FName *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  ::FString::FString(&local_18,L"(Key=F12,Command=\"RenderDoc.CaptureFrame\", Alt=true)");
  pFVar1 = ::FName::FName(local_res10,L"DebugExecBindings");
  FConfigCacheIni::AddUniqueToSection
            (GConfig,L"/Script/Engine.PlayerInput",*pFVar1,&local_18,&GInputIni);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnPostEngineInit @ 14e2cb620

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall FRenderDocPluginModule::OnPostEngineInit(FRenderDocPluginModule *this)

{
  return;
}

// ShouldCaptureAllActivity @ 14e2cbb60

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

bool __thiscall FRenderDocPluginModule::ShouldCaptureAllActivity(FRenderDocPluginModule *this)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  pTVar1 = CVarRenderDocCaptureAllActivity.Ref;
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar2 = CVarRenderDocCaptureFrameCount.Ref;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 0) {
    return true;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar5 = 0;
  }
  if (1 < *(int *)((longlong)pTVar2->ShadowedValue + lVar5)) {
    return true;
  }
  return false;
}

// ShowNotification @ 14e2cbbe0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRenderDocPluginModule::ShowNotification(FRenderDocPluginModule *this,FText *param_1,bool param_2)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_1);
  UEngine::AddOnScreenDebugMessage
            (GEngine,0xffffffffffffffff,__real_40000000,FColor::Emerald,pFVar1,true,
             &UE::Math::TVector2<double>::UnitVector);
  return;
}

// StartRenderDoc @ 14e2cbc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRenderDocPluginModule::StartRenderDoc(FRenderDocPluginModule *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  _func___cdecl_uint_uint_char_ptr *p_Var2;
  uint uVar3;
  FText *pFVar4;
  FString *pFVar5;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_128 [32];
  FText local_e8;
  FString local_d8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_e8,L"RenderDocPlugin",L"RenderDocLaunchRenderDocNotification",
                      L"Launching RenderDoc GUI");
  pFVar5 = FText::ToString(pFVar4);
  UEngine::AddOnScreenDebugMessage
            (GEngine,0xffffffffffffffff,__real_40000000,FColor::Emerald,pFVar5,true,
             &UE::Math::TVector2<double>::UnitVector);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if ((param_1->Data).ArrayNum < 2) {
    pFVar5 = GetNewestCapture(this,(FString *)&local_e8);
    if (param_1 != pFVar5) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_e8.TextData.Reference);
    }
  }
  ::FString::PrintfImpl(&local_d8,L"\"%s\"");
  if ((1 < (param_1->Data).ArrayNum) &&
     (uVar3 = (*this->RenderDocAPI->IsRemoteAccessConnected)(), uVar3 == 0)) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar7.Data = local_d8.Data.AllocatorInstance.Data;
    }
    p_Var2 = this->RenderDocAPI->LaunchReplayUI;
    pTVar6 = StringCast<char,128,wchar_t>(&local_c8,(wchar_t *)FVar7.Data);
    uVar3 = (*p_Var2)(1,pTVar6->Ptr);
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    if (uVar3 == 0) {
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_e8,L"RenderDocPlugin",
                          L"RenderDocLaunchRenderDocNotificationFailure",
                          L"Failed to launch RenderDoc GUI");
      ShowNotification(this,pFVar4,true);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
    }
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_e8,L"RenderDocPlugin",L"RenderDocLaunchRenderDocNotificationCompleted",
                      L"RenderDoc GUI Launched!");
  pFVar5 = FText::ToString(pFVar4);
  UEngine::AddOnScreenDebugMessage
            (GEngine,0xffffffffffffffff,__real_40000000,FColor::Emerald,pFVar5,true,
             &UE::Math::TVector2<double>::UnitVector);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Tick @ 14e2cbf50

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FRenderDocPluginModule::Tick(FRenderDocPluginModule *this,float param_1)

{
  uint uVar1;
  ITextData *pIVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  code *pcVar5;
  double dVar6;
  float fVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  FString *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  double dVar21;
  float fVar22;
  undefined4 local_res8 [2];
  undefined1 local_res18 [8];
  LARGE_INTEGER local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  FString local_f8;
  LARGE_INTEGER local_e8;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FTextFormat local_80;
  FTextFormat local_70 [3];
  
  fVar7 = __real_40000000;
  local_res8[0] = 0;
  if (this->bPendingCapture) {
    if ((this->bCaptureInProgress) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bCaptureInProgress",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                           ,0x22d,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar6 = __real_4170000000000000;
    if (this->bCaptureDelayInSeconds) {
      QueryPerformanceCounter(&local_res20);
      dVar21 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
      bVar9 = this->DelayedCaptureSeconds <= dVar21 && dVar21 != this->DelayedCaptureSeconds;
    }
    else {
      bVar9 = GFrameCounter - this->DelayedCaptureTick == 1;
    }
    if (bVar9) {
      if (this->bShouldCaptureAllActivity) {
        BeginFrameCapture(this);
        this->CaptureEndTick = this->CaptureFrameCount + GFrameCounter + 1;
        this->bPendingCapture = false;
        this->bCaptureInProgress = true;
      }
      else {
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        DoFrameCaptureCurrentViewport(this,(FViewport *)0x0,1,&local_108);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (((bool)this->bPendingCapture || (bool)this->bCaptureInProgress) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bCaptureInProgress && !bPendingCapture",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                               ,0x240,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    else {
      if (this->bCaptureDelayInSeconds) {
        QueryPerformanceCounter(&local_e8);
        fVar22 = (float)(this->DelayedCaptureSeconds -
                        ((double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6))
        ;
      }
      else {
        uVar15 = this->DelayedCaptureTick - GFrameCounter;
        if ((longlong)uVar15 < 0) {
          fVar22 = (float)uVar15;
        }
        else {
          fVar22 = (float)(longlong)uVar15;
        }
      }
      pwVar20 = L"seconds";
      bVar9 = this->bCaptureDelayInSeconds;
      pwVar19 = L"RenderDocSeconds";
      bVar18 = (bVar9 ^ 1U) + 1;
      pFVar12 = &local_b0;
      if (bVar9 == false) {
        pwVar20 = L"frames";
        pwVar19 = L"RenderDocFrames";
        pFVar12 = &local_c0;
      }
      pFVar12 = FText::AsLocalizable_Advanced_LocText(pFVar12,L"RenderDocPlugin",pwVar19,pwVar20);
      pIVar2 = (pFVar12->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      uVar1 = pFVar12->Flags;
      if (((bVar18 & 2) != 0) &&
         (bVar18 = bVar18 & 0xfd, local_c0.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
      if (((bVar18 & 1) != 0) && (local_b0.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_a0,L"RenderDocPlugin",L"RenderDocPendingCaptureNotification",
                           L"RenderDoc capture starting in {0} {1}");
      pFVar13 = FTextFormat::FTextFormat(&local_80,pFVar12,Default);
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&local_128.AllocatorInstance,0,&local_128.ArrayMax);
      iVar11 = local_128.ArrayNum;
      if (local_128.ArrayNum == local_128.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
      }
      iVar10 = iVar11 + 1;
      lVar17 = (longlong)iVar11 * 0x20;
      *(undefined4 *)&local_128.AllocatorInstance.Data[lVar17].field_0x0 = 2;
      *(undefined8 *)(local_128.AllocatorInstance.Data + lVar17 + 0x10) = 0;
      *(undefined4 *)(local_128.AllocatorInstance.Data + lVar17 + 0x18) = 0;
      *(float *)(local_128.AllocatorInstance.Data + lVar17 + 8) = fVar22;
      if (iVar10 == local_128.ArrayMax) {
        local_128.ArrayNum = iVar10;
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
      }
      FVar8.Data = local_128.AllocatorInstance.Data;
      local_128.ArrayNum = iVar10 + 1;
      lVar17 = (longlong)iVar10 * 0x20;
      *(undefined4 *)&local_128.AllocatorInstance.Data[lVar17].field_0x0 = 4;
      *(ITextData **)(local_128.AllocatorInstance.Data + lVar17 + 0x10) = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      *(uint *)(FVar8.Data + lVar17 + 0x18) = uVar1;
      if ((*(longlong *)(FVar8.Data + lVar17 + 0x10) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FText::FormatOrderedImpl(&local_e0,pFVar13,&local_128);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
      if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
      pFVar14 = FText::ToString(&local_e0);
      UEngine::AddOnScreenDebugMessage
                (GEngine,0xffffffffffffffff,fVar7,FColor::Emerald,pFVar14,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
  }
  else if (!this->bCaptureInProgress) {
    return;
  }
  if (this->bCaptureInProgress) {
    if ((this->bPendingCapture) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bPendingCapture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                           ,599,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = this->CaptureEndTick;
    if (GFrameCounter == uVar3) {
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      EndFrameCapture(this,(void *)0x0,1,&local_f8);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    else {
      uVar4 = this->CaptureFrameCount;
      lVar17 = GFrameCounter + 1;
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_90,L"RenderDocPlugin",L"RenderDocCaptureInProgressNotification",
                           L"RenderDoc capturing frame #{0}");
      pFVar13 = FTextFormat::FTextFormat(local_70,pFVar12,Default);
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&local_118.AllocatorInstance,0,&local_118.ArrayMax);
      iVar11 = local_118.ArrayNum;
      if (local_118.ArrayNum == local_118.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_118.AllocatorInstance,&local_118.ArrayMax);
      }
      local_118.ArrayNum = iVar11 + 1;
      lVar16 = (longlong)iVar11 * 0x20;
      *(undefined4 *)&local_118.AllocatorInstance.Data[lVar16].field_0x0 = 1;
      *(undefined8 *)(local_118.AllocatorInstance.Data + lVar16 + 0x10) = 0;
      *(undefined4 *)(local_118.AllocatorInstance.Data + lVar16 + 0x18) = 0;
      *(ulong64 *)(local_118.AllocatorInstance.Data + lVar16 + 8) = (uVar4 - uVar3) + lVar17;
      FText::FormatOrderedImpl(&local_d0,pFVar13,&local_118);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
      if ((FFormatArgumentValue *)local_118.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
      pFVar14 = FText::ToString(&local_d0);
      UEngine::AddOnScreenDebugMessage
                (GEngine,0xffffffffffffffff,fVar7,FColor::Emerald,pFVar14,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

