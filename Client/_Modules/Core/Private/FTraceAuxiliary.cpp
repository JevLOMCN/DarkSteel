// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 27

// DisableChannels @ 1419913f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FTraceAuxiliary::DisableChannels(wchar_t *param_1)

{
  undefined1 auStackY_178 [32];
  pmf_41f21a49 local_148;
  pmf_41f21a49 local_140;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (wchar_t *)0x0) {
    local_138.Base = local_118;
    local_138.bIsDynamic = false;
    local_138.bIsExternal = false;
    local_138.CurPos = local_118;
    local_138.End = (wchar_t *)local_18;
    UE::Trace::EnumerateChannels
              (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>,&local_138);
    local_148 = (pmf_41f21a49)FTraceAuxiliaryImpl::DisableChannel<wchar_t_const_*>;
    local_140 = (pmf_41f21a49)0x0;
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L'\0';
    FTraceAuxiliaryImpl::
    ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
              (&GTraceAuxiliary,local_138.Base,true,&local_148,(FLogCategoryBase *)&LogTrace,
               (void **)&local_140);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    local_140 = (pmf_41f21a49)FTraceAuxiliaryImpl::DisableChannel<wchar_t_const_*>;
    local_148 = (pmf_41f21a49)0x0;
    FTraceAuxiliaryImpl::
    ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
              (&GTraceAuxiliary,param_1,true,&local_140,(FLogCategoryBase *)&LogTrace,
               (void **)&local_148);
  }
  return;
}

// DisableChannels @ 141991520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FTraceAuxiliary::DisableChannels
          (TArrayView<unsigned_int_const_,int> *param_1,
          TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FString_const_&> local_res18;
  FString local_38;
  uint *local_28;
  FString *local_20;
  
  puVar2 = param_1->DataPtr;
  puVar1 = puVar2 + (int)*(undefined8 *)&param_1->ArrayNum;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    local_res8[0] = *puVar2;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FTraceAuxiliaryImpl::DisableChannel<unsigned_int>
              (&GTraceAuxiliary,local_res8[0],(FLogCategoryBase *)&LogTrace,&local_38);
    if ((param_2 !=
         (TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *)0x0) && (1 < local_38.Data.ArrayNum)) {
      local_28 = local_res8;
      local_20 = &local_38;
      TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FString_const_&>_>
                ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                  *)param_2,&local_res18,(bool *)&local_28);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EnableChannels @ 141992da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FTraceAuxiliary::EnableChannels(wchar_t *param_1)

{
  undefined8 local_res8;
  pmf_41f21a49 local_res10 [3];
  
  if (param_1 != (wchar_t *)0x0) {
    local_res8 = 0;
    local_res10[0] = (pmf_41f21a49)FTraceAuxiliaryImpl::EnableChannel<wchar_t_const_*>;
    FTraceAuxiliaryImpl::
    ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
              (&GTraceAuxiliary,param_1,true,local_res10,(FLogCategoryBase *)&LogTrace,
               (void **)&local_res8);
  }
  return;
}

// EnableChannels @ 141992e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FTraceAuxiliary::EnableChannels
          (TArrayView<unsigned_int_const_,int> *param_1,
          TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FString_const_&> local_res18;
  FString local_38;
  uint *local_28;
  FString *local_20;
  
  puVar2 = param_1->DataPtr;
  puVar1 = puVar2 + (int)*(undefined8 *)&param_1->ArrayNum;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    local_res8[0] = *puVar2;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FTraceAuxiliaryImpl::EnableChannel<unsigned_int>
              (&GTraceAuxiliary,local_res8[0],(FLogCategoryBase *)&LogTrace,&local_38);
    if ((param_2 !=
         (TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *)0x0) && (1 < local_38.Data.ArrayNum)) {
      local_28 = local_res8;
      local_20 = &local_38;
      TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FString_const_&>_>
                ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                  *)param_2,&local_res18,(bool *)&local_28);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EnableCommandlineChannels @ 141992fd0

void __cdecl FTraceAuxiliary::EnableCommandlineChannels(void)

{
  FTraceAuxiliaryImpl::EnableCommandlineChannels(&GTraceAuxiliary);
  return;
}

// EnumerateChannelPresetsFromSettings @ 1419938a0

void __cdecl
FTraceAuxiliary::EnumerateChannelPresetsFromSettings
          (TFunctionRef<FTraceAuxiliary::EEnumerateResult___cdecl(FTraceAuxiliary::FChannelPreset_const_&)>
           *param_1)

{
  int iVar1;
  char cVar2;
  ForAnyElementType this;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FScriptContainerElement *local_38;
  FScriptContainerElement *local_30;
  undefined1 local_28;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  FConfigCacheIni::GetSection(GConfig,L"Trace.ChannelPresets",&local_78,&GEngineIni);
  iVar1 = local_78.ArrayNum;
  pFVar3 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10;
  this.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if (local_78.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this.Data == pFVar3) goto LAB_1419939d3;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    ::FString::FString(&local_48,L"=");
    ::FString::Split((FString *)this.Data,&local_48,&local_58,&local_68);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_28 = 0;
    local_30 = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      local_30 = local_68.Data.AllocatorInstance.Data;
    }
    local_38 = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      local_38 = local_58.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    if (cVar2 == '\x01') break;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    this.Data = this.Data + 0x10;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_1419939d3:
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// EnumerateFixedChannelPresets @ 141993a10

void __cdecl
FTraceAuxiliary::EnumerateFixedChannelPresets
          (TFunctionRef<FTraceAuxiliary::EEnumerateResult___cdecl(FTraceAuxiliary::FChannelPreset_const_&)>
           *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&GDefaultChannels);
  if (cVar1 != '\x01') {
    cVar1 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&GMemoryChannels);
    if (cVar1 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000141993a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&GMemoryLightChannels);
      return;
    }
  }
  return;
}

// GetActiveChannelsString @ 141994800

void __cdecl FTraceAuxiliary::GetActiveChannelsString(TStringBuilderBase<wchar_t> *param_1)

{
  UE::Trace::EnumerateChannels
            (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>,param_1);
  return;
}

// GetConnectionType @ 141994f80

EConnectionType __cdecl FTraceAuxiliary::GetConnectionType(void)

{
  EConnectionType EVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
  EVar1 = GTraceAuxiliary.CurrentTraceTarget.TraceType;
  ReleaseSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
  return EVar1;
}

// GetInitializeDesc @ 141995470

FInitializeDesc * __cdecl FTraceAuxiliary::GetInitializeDesc(void)

{
  return &GInitializeDesc;
}

// GetTraceDestinationString @ 141995c90

FString * __cdecl FTraceAuxiliary::GetTraceDestinationString(FString *__return_storage_ptr__)

{
  AcquireSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
  ::FString::FString(__return_storage_ptr__,&GTraceAuxiliary.CurrentTraceTarget.TraceDest);
  ReleaseSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
  return __return_storage_ptr__;
}

// GetTraceSystemStatus @ 141995ce0

ETraceSystemStatus __cdecl FTraceAuxiliary::GetTraceSystemStatus(void)

{
  EConnectionType EVar1;
  ETraceSystemStatus EVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
  EVar1 = GTraceAuxiliary.CurrentTraceTarget.TraceType;
  ReleaseSRWLockShared((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
  if (EVar1 == Network) {
    return TracingToServer;
  }
  if (EVar1 == File) {
    return TracingToFile;
  }
  EVar2 = Available;
  if (EVar1 == Relay) {
    EVar2 = TracingToCustomRelay;
  }
  return EVar2;
}

// Initialize @ 14199fb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMessageType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FTraceAuxiliary::Initialize(wchar_t *param_1)

{
  code *pcVar1;
  wchar_t wVar2;
  uchar *puVar3;
  bool bVar4;
  bool bVar5;
  EBuildConfiguration EVar6;
  EBuildTargetType EVar7;
  int iVar8;
  DWORD DVar9;
  FDelegateHandle FVar10;
  wchar_t *_Str;
  wchar_t *_Str_00;
  size_t sVar11;
  size_t sVar12;
  size_t sVar13;
  size_t sVar14;
  longlong lVar15;
  FUndestructed<FTraceMalloc> *pFVar16;
  FModuleManager *pFVar17;
  uint *puVar18;
  FUndestructed<FTraceMalloc> *pFVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  uint uVar22;
  wchar_t *pwVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  undefined1 auStackY_2c8 [32];
  uint local_294;
  int local_290;
  FScopedLogScope local_288 [4];
  undefined4 local_284;
  uint local_280;
  uint local_27c;
  uint local_278 [2];
  FImportantLogScope local_270;
  FGuid local_260;
  wchar_t *local_250;
  wchar_t *local_248;
  wchar_t *local_240;
  char *local_238;
  FGuid local_230;
  undefined8 local_220;
  pmf_41f21a49 local_218;
  size_t local_210;
  size_t local_208;
  undefined4 *local_200;
  longlong local_1f8;
  FStatistics local_1e8;
  <lambda_1> local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  <lambda_1> local_178 [8];
  undefined8 local_170;
  undefined8 uStack_168;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (::bInitialized) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                       ,0x7b3,L"FTraceAuxiliary may only be initialized once.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (::bInitialized != false) {
      return;
    }
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1977,"FTraceAux_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x7b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1977);
  }
  local_288[0].bActive = false;
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMemoryMemoryScopeFields>((TLogScope<0> *)&local_200)
    ;
    if (local_288[0].bActive == false) {
      local_288[0].bActive = true;
    }
    uVar20 = (ulonglong)_tls_index;
    *local_200 = 0x101;
    *(undefined8 *)(local_1f8 + 0x28) = *(undefined8 *)(local_1f8 + 0x20);
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
    local_284 = *(undefined4 *)(lVar15 + 0xbb0);
    *(undefined4 *)(lVar15 + 0xbb0) = 0x101;
  }
  bVar5 = FParse::Param(param_1,L"notraceserver");
  if ((!bVar5) && (bVar5 = FParse::Param(param_1,L"buildmachine"), !bVar5)) {
    if (CpuChannel->Enabled < 0) {
      LaunchTraceServerCommand(Fork,true);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1984,"FTraceAux_Launch_UTS",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x7c0);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1984);
      LaunchTraceServerCommand(Fork,true);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  UE::Trace::SetMessageCallback(TraceAuxiliaryOnMessageCallback);
  FParse::Bool(param_1,L"-traceautostart=",&GTraceAutoStart);
  if (5 < (byte)LogTrace._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
  }
  bVar5 = FForkProcessHelper::IsForkRequested();
  if ((bVar5) && (bVar5 = FForkProcessHelper::IsForkedChildProcess(), !bVar5)) {
    if (4 < (byte)LogTrace._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
    }
    local_158.Base = local_138;
    local_158.bIsDynamic = false;
    local_158.bIsExternal = false;
    local_158.CurPos = local_138;
    local_158.End = (wchar_t *)local_38;
    UE::Trace::EnumerateChannels
              (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>,&local_158);
    local_218 = (pmf_41f21a49)FTraceAuxiliaryImpl::DisableChannel<wchar_t_const_*>;
    local_220 = 0;
    if (local_158.End < local_158.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_158,1);
    }
    *local_158.CurPos = L'\0';
    FTraceAuxiliaryImpl::
    ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
              (&GTraceAuxiliary,local_158.Base,true,&local_218,(FLogCategoryBase *)&LogTrace,
               (void **)&local_220);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    if ((GTraceAutoStart != false) && (3 < (byte)LogTrace._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Trace_not_start_1506c5fd8,
                 (FLogCategoryBase *)&LogTrace);
    }
    if ((GOnPostForkHandle.ID != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GOnPostForkHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                           ,0x79b,L"TraceAuxiliaryAddPostForkCallback should only be called once."),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar10 = TMulticastDelegateRegistration<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>
             ::AddLambda<_TraceAuxiliaryAddPostForkCallback_::__l2::<lambda_1>_>
                       (&FCoreDelegates::OnPostFork,local_198);
                    /* WARNING: Load size is inaccurate */
    GOnPostForkHandle.ID = *FVar10.ID;
    goto LAB_1419a07f5;
  }
  ::bInitialized = true;
  if (4 < (byte)LogTrace._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
  }
  pwVar23 = GInternalProjectName;
  if ((GInternalProjectName[0] == L'\0') ||
     (iVar8 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None"), iVar8 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    pwVar23 = L"";
  }
  local_250 = pwVar23;
  _Str = BuildSettings::GetBranchName();
  local_248 = _Str;
  _Str_00 = BuildSettings::GetBuildVersion();
  local_240 = _Str_00;
  sVar11 = wcslen(pwVar23);
  sVar12 = wcslen(param_1);
  sVar13 = wcslen(_Str);
  sVar14 = wcslen(_Str_00);
  local_210 = sVar14;
  local_238 = BuildSettings::GetVfsPaths();
  local_208 = strlen(local_238);
  uVar24 = (uint)sVar13;
  uVar27 = (uint)sVar12;
  uVar22 = (uint)sVar11;
  iVar8 = (int)local_208;
  FApp::GetInstanceId(&local_230);
  puVar18 = (uint *)&local_170;
  pFVar19 = (FUndestructed<FTraceMalloc> *)0x0;
  uVar28 = 0;
  pFVar16 = pFVar19;
  do {
    while( true ) {
      while( true ) {
        while (iVar25 = (int)pFVar16, iVar25 == 0) {
          *puVar18 = local_230.A;
          puVar18 = puVar18 + 1;
          pFVar16 = (FUndestructed<FTraceMalloc> *)&DAT_00000001;
        }
        if (iVar25 != 1) break;
        pFVar16 = (FUndestructed<FTraceMalloc> *)&DAT_00000002;
        *puVar18 = local_230.B;
        puVar18 = puVar18 + 1;
      }
      if (iVar25 != 2) break;
      pFVar16 = (FUndestructed<FTraceMalloc> *)&DAT_00000003;
      *puVar18 = local_230.C;
      puVar18 = puVar18 + 1;
    }
    if (iVar25 == 3) {
      *puVar18 = local_230.D;
      break;
    }
    *puVar18 = local_230.A;
    pFVar16 = (FUndestructed<FTraceMalloc> *)(ulonglong)(iVar25 + 1U);
    puVar18 = puVar18 + 1;
  } while ((int)(iVar25 + 1U) < 4);
  if (-1 < UE::Trace::TraceLogChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FDiagnosticsSession2Fields>
              (&local_270,iVar8 + ((int)sVar14 + uVar24 + uVar27 + uVar22) * 2 + 0x1e);
    puVar3 = local_270.Ptr;
    lVar26 = 9;
    *(undefined4 *)((longlong)local_270.Ptr + (longlong)local_270.AuxCursor) = 0xa000;
    puVar21 = (undefined1 *)((longlong)local_270.Ptr + (longlong)local_270.AuxCursor);
    *puVar21 = 1;
    *(undefined4 *)(puVar21 + 4) = _s_Win64;
    puVar21[8] = DAT_1506c6408;
    pwVar23 = L"ProjectDS";
    lVar15 = (longlong)(local_270.AuxCursor + 9);
    puVar21 = (undefined1 *)((longlong)local_270.Ptr + lVar15 + 4);
    *(undefined4 *)(lVar15 + (longlong)local_270.Ptr) = 0x12100;
    *(undefined1 *)(lVar15 + (longlong)local_270.Ptr) = 1;
    do {
      wVar2 = *pwVar23;
      pwVar23 = pwVar23 + 1;
      *puVar21 = (char)wVar2;
      puVar21 = puVar21 + 1;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    iVar8 = local_270.AuxCursor + 0x12;
    local_290 = local_270.AuxCursor + 0x16;
    *(undefined1 *)((longlong)iVar8 + 4 + (longlong)local_270.Ptr) = 3;
    if ((int)uVar22 < 0) {
      wVar2 = *local_250;
      uVar22 = uVar28;
      pFVar16 = pFVar19;
      pwVar23 = local_250;
      while (wVar2 != L'\0') {
        pwVar23 = pwVar23 + 1;
        uVar22 = (int)pFVar16 + 1;
        pFVar16 = (FUndestructed<FTraceMalloc> *)(ulonglong)uVar22;
        wVar2 = *pwVar23;
      }
    }
    *(uint *)((longlong)local_270.Ptr + (longlong)iVar8 + 4) = uVar22 << 0xe | 0x200;
    *(undefined1 *)((longlong)local_270.Ptr + (longlong)iVar8 + 4) = 1;
    memcpy((void *)((longlong)local_270.Ptr + (longlong)iVar8 + 8),local_250,(ulonglong)(uVar22 * 2)
          );
    iVar8 = local_290 + uVar22 * 2;
    local_290 = iVar8 + 4;
    *(undefined1 *)((longlong)iVar8 + 4 + (longlong)puVar3) = 3;
    if ((int)uVar24 < 0) {
      wVar2 = *local_248;
      uVar24 = uVar28;
      pFVar16 = pFVar19;
      pwVar23 = local_248;
      while (wVar2 != L'\0') {
        pwVar23 = pwVar23 + 1;
        uVar24 = (int)pFVar16 + 1;
        pFVar16 = (FUndestructed<FTraceMalloc> *)(ulonglong)uVar24;
        wVar2 = *pwVar23;
      }
    }
    *(uint *)((longlong)puVar3 + (longlong)iVar8 + 4) = uVar24 << 0xe | 0x400;
    *(undefined1 *)((longlong)puVar3 + (longlong)iVar8 + 4) = 1;
    local_270.AuxCursor = local_290;
    memcpy((void *)((longlong)puVar3 + (longlong)iVar8 + 8),local_248,(ulonglong)(uVar24 * 2));
    iVar8 = local_290 + uVar24 * 2;
    *(undefined1 *)((longlong)iVar8 + 4 + (longlong)puVar3) = 3;
    uVar24 = (uint)local_210;
    if ((int)uVar24 < 0) {
      wVar2 = *local_240;
      uVar24 = uVar28;
      pFVar16 = pFVar19;
      pwVar23 = local_240;
      while (wVar2 != L'\0') {
        pwVar23 = pwVar23 + 1;
        uVar24 = (int)pFVar16 + 1;
        pFVar16 = (FUndestructed<FTraceMalloc> *)(ulonglong)uVar24;
        wVar2 = *pwVar23;
      }
    }
    *(uint *)((longlong)puVar3 + (longlong)iVar8 + 4) = uVar24 << 0xe | 0x500;
    *(undefined1 *)((longlong)puVar3 + (longlong)iVar8 + 4) = 1;
    local_270.AuxCursor = iVar8 + 4;
    memcpy((void *)((longlong)puVar3 + (longlong)iVar8 + 8),local_240,(ulonglong)(uVar24 * 2));
    iVar25 = iVar8 + 4 + uVar24 * 2;
    *(undefined1 *)((longlong)puVar3 + (longlong)iVar25 + 4) = 3;
    iVar8 = BuildSettings::GetCurrentChangelist();
    *(int *)puVar3 = iVar8;
    EVar6 = FApp::GetBuildConfiguration();
    *(EBuildConfiguration *)((longlong)puVar3 + 4) = EVar6;
    EVar7 = FApp::GetBuildTargetType();
    *(EBuildTargetType *)((longlong)puVar3 + 5) = EVar7;
    *(undefined4 *)((longlong)puVar3 + (longlong)iVar25 + 4) = 0x20900;
    *(undefined1 *)((longlong)puVar3 + (longlong)iVar25 + 4) = 1;
    puVar18 = (uint *)((longlong)(iVar25 + 0x18) + (longlong)puVar3);
    *(undefined8 *)((longlong)puVar3 + (longlong)iVar25 + 8) = local_170;
    *(undefined8 *)((longlong)puVar3 + (longlong)iVar25 + 0x10) = uStack_168;
    *(undefined1 *)puVar18 = 3;
    if ((int)uVar27 < 0) {
      wVar2 = *param_1;
      uVar27 = uVar28;
      pwVar23 = param_1;
      pFVar16 = pFVar19;
      while (wVar2 != L'\0') {
        pwVar23 = pwVar23 + 1;
        uVar27 = (int)pFVar16 + 1;
        pFVar16 = (FUndestructed<FTraceMalloc> *)(ulonglong)uVar27;
        wVar2 = *pwVar23;
      }
    }
    *puVar18 = uVar27 << 0xe | 0x300;
    *(undefined1 *)puVar18 = 1;
    memcpy(puVar18 + 1,param_1,(ulonglong)(uVar27 * 2));
    iVar8 = iVar25 + 0x18 + uVar27 * 2;
    local_270.AuxCursor = iVar8 + 4;
    *(undefined1 *)((longlong)puVar3 + (longlong)iVar8 + 4) = 3;
    iVar25 = (int)local_208;
    if (iVar25 < 0) {
      sVar11 = strlen(local_238);
      iVar25 = (int)sVar11;
    }
    *(uint *)((longlong)puVar3 + (longlong)iVar8 + 4) = iVar25 << 0xd | 0xa00;
    *(undefined1 *)((longlong)puVar3 + (longlong)iVar8 + 4) = 1;
    memcpy((void *)((longlong)puVar3 + (longlong)iVar8 + 8),local_238,(longlong)iVar25);
    local_270.AuxCursor = iVar8 + iVar25 + 8;
    *(undefined1 *)((longlong)(iVar8 + iVar25) + 8 + (longlong)puVar3) = 3;
    LOCK();
    *(int *)((longlong)local_270.BufferOffset + (longlong)local_270.Ptr) =
         *(int *)((longlong)local_270.BufferOffset + (longlong)local_270.Ptr) + 1;
    UNLOCK();
  }
  bVar5 = StartFromCommandlineArguments(param_1);
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2076,"FTraceAux_InitialStats",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x81c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2076);
  }
  local_1e8.BytesSent = 0;
  local_1e8.BytesTraced = 0;
  local_1e8.BytesEmitted = 0;
  local_1e8.MemoryUsed = 0;
  local_1e8.BlockPoolAllocated = 0;
  local_1e8.BlockPoolFreeBlocks = 0;
  local_1e8.BlockPoolAllocatedBlocks = 0;
  local_1e8.SharedBufferAllocated = 0;
  local_1e8.FixedBufferAllocated = 0;
  local_1e8.CacheAllocated = 0;
  local_1e8.CacheUsed = 0;
  local_1e8.CacheWaste = 0;
  TraceAuxiliaryEmitStats(&local_1e8);
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar29 = FParse::Param(param_1,L"tracescopes");
  if (bVar29) {
    GInitializeDesc.OnScopeBeginFunc = TraceAuxiliaryOnScopeBeginCallback;
    GInitializeDesc.OnScopeEndFunc = TraceAuxiliaryOnScopeEndCallback;
  }
  if (GConfig != (FConfigCacheIni *)0x0) {
    local_280 = 0;
    bVar29 = FConfigCacheIni::GetInt
                       (GConfig,GTraceConfigSection,L"SleepTimeInMS",(int *)&local_280,&GEngineIni);
    if ((bVar29) && (0 < (int)local_280)) {
      GInitializeDesc.ThreadSleepTimeInMS = local_280;
    }
    local_27c = 0;
    bVar29 = FConfigCacheIni::GetInt
                       (GConfig,GTraceConfigSection,L"TailSizeBytes",(int *)&local_27c,&GEngineIni);
    if (bVar29) {
      GInitializeDesc.TailSizeBytes = local_27c;
    }
  }
  bVar29 = FParse::Param(param_1,L"tracenocache");
  GInitializeDesc.bUseImportantCache = !bVar29;
  GInitializeDesc.OnConnectionFunc = TraceAuxiliaryOnConnectionCallback;
  GInitializeDesc.OnUpdateFunc = TraceAuxiliaryOnTraceUpdateCallback;
  bVar29 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar29) {
    pwVar23 = FCommandLine::Get();
    bVar29 = FParse::Param(pwVar23,L"notracethreading");
    if (bVar29) goto LAB_1419a0461;
    GWorkerThreadConfig = bVar5 + OnDemand;
    GInitializeDesc.bUseWorkerThread = bVar5;
    if (!bVar5) goto LAB_1419a046f;
  }
  else {
LAB_1419a0461:
    GInitializeDesc.bUseWorkerThread = false;
    GWorkerThreadConfig = Never;
LAB_1419a046f:
    FVar10 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
             AddStatic<>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                          *)&FCoreDelegates::OnEndFrame,(_func___cdecl_void *)local_190);
                    /* WARNING: Load size is inaccurate */
    GTraceAuxiliary.EndFrameUpdateHandle.ID = *FVar10.ID;
  }
  local_260 = (FGuid)ZEXT816(0);
  bVar5 = FParse::Value(param_1,L"-tracesessionguid=",&local_260);
  if (bVar5) {
    GInitializeDesc.SessionGuid[0] = local_260.A;
    GInitializeDesc.SessionGuid[1] = local_260.B;
    GInitializeDesc.SessionGuid[2] = local_260.C;
    GInitializeDesc.SessionGuid[3] = local_260.D;
  }
  else {
    local_260 = FApp::SessionId;
    GInitializeDesc.SessionGuid[0] = FApp::SessionId.A;
    GInitializeDesc.SessionGuid[1] = FApp::SessionId.B;
    GInitializeDesc.SessionGuid[2] = FApp::SessionId.C;
    GInitializeDesc.SessionGuid[3] = FApp::SessionId.D;
  }
  bVar5 = FParse::Value(param_1,L"-tracetailmb=",&GInitializeDesc.TailSizeBytes);
  if (bVar5) {
    GInitializeDesc.TailSizeBytes = GInitializeDesc.TailSizeBytes << 0x14;
  }
  bVar5 = FParse::Value(param_1,L"-tracethreadsleeptime=",&GInitializeDesc.ThreadSleepTimeInMS);
  uVar24 = GInitializeDesc.ThreadSleepTimeInMS;
  if ((!bVar5) && (GTraceAllowed != false)) {
    local_294 = 5;
    if (GConfig != (FConfigCacheIni *)0x0) {
      FConfigCacheIni::GetInt
                (GConfig,GTraceConfigSection,L"SleepTimeWhenMemoryTracingInMS",(int *)&local_294,
                 &GEngineIni);
    }
    uVar24 = local_294;
    if ((GInitializeDesc.ThreadSleepTimeInMS != 0) &&
       (uVar24 = local_294, GInitializeDesc.ThreadSleepTimeInMS < local_294)) {
      uVar24 = GInitializeDesc.ThreadSleepTimeInMS;
      local_294 = GInitializeDesc.ThreadSleepTimeInMS;
    }
  }
  GInitializeDesc.ThreadSleepTimeInMS = uVar24;
  if (CpuChannel->Enabled < 0) {
    UE::Trace::Initialize(&GInitializeDesc);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2152,"UE::Trace::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x868);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2152);
    UE::Trace::Initialize(&GInitializeDesc);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FTraceAuxiliaryImpl::EnableCommandlineChannelsPostInitialize(&GTraceAuxiliary);
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                         ,0x871,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DVar9 = GetCurrentThreadId();
  UE::Trace::ThreadRegister(L"GameThread",DVar9,-1);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             &OnConnection,(_func___cdecl_void *)local_188);
  FVar10 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
           AddStatic<>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnEndFrame,(_func___cdecl_void *)local_180);
                    /* WARNING: Load size is inaccurate */
  GEndFrameDelegateHandle.ID = *FVar10.ID;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2172,"FTraceAux_CallstackTrace_Create",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x87c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2172);
  }
  pFVar16 = &GTraceMalloc;
  if (GTraceMalloc.bIsConstructed == false) {
    pFVar16 = pFVar19;
  }
  pFVar19 = (FUndestructed<FTraceMalloc> *)UE::Private::GMalloc;
  if (pFVar16 != (FUndestructed<FTraceMalloc> *)0x0) {
    pFVar19 = pFVar16;
  }
  CallstackTrace_Create((FMalloc *)pFVar19);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    CallstackTrace_Initialize();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2180,"FTraceAux_CallstackTrace_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x884);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2180);
    CallstackTrace_Initialize();
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2187,"FTraceAux_PlatformEventsTrace_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x88b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2187);
  }
  local_278[0] = 0x7d;
  FParse::Value(param_1,L"-samplinginterval=",local_278);
  FPlatformEventsTrace::Init(local_278[0]);
  if (-1 < *(int *)&ContextSwitchChannel->field_0x20) {
    FPlatformEventsTrace::Enable(ContextSwitch);
  }
  if (-1 < *(int *)&StackSamplingChannel->field_0x20) {
    FPlatformEventsTrace::Enable(StackSampling);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (GTraceAutoStart != false) {
    pFVar17 = FModuleManager::Get();
    TMulticastDelegateRegistration<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
    ::AddLambda<_FTraceAuxiliary::Initialize_[::B]::<lambda_1>_>
              (&pFVar17->ModulesChangedEvent,local_178);
  }
  GTraceAuxiliary.bReadOnlyChannelsFrozen = true;
  if (4 < (byte)LogTrace._0_1_) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Finished_trace__1506c6298,
               (FLogCategoryBase *)&LogTrace);
  }
LAB_1419a07f5:
  if (local_288[0].bActive != false) {
    *(undefined4 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xbb0) =
         local_284;
  }
  UE::Trace::Private::FScopedLogScope::Deinit(local_288);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitializePresets @ 1419a09b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FTraceAuxiliary::InitializePresets(wchar_t *param_1)

{
  bool bVar1;
  ForAnyElementType FVar2;
  pmf_54149989 local_res10 [3];
  FString local_18;
  
  bVar1 = FForkProcessHelper::IsForkRequested();
  if ((bVar1) && (bVar1 = FForkProcessHelper::IsForkedChildProcess(), !bVar1)) {
    return;
  }
  if (GTraceAutoStart != false) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    bVar1 = FParse::Value(param_1,L"-trace=",&local_18,false,(wchar_t **)0x0);
    if (bVar1) {
      local_res10[0] = (pmf_54149989)FTraceAuxiliaryImpl::AddCommandlineChannel;
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar2.Data = local_18.Data.AllocatorInstance.Data;
      }
      FTraceAuxiliaryImpl::
      ForEachChannel<void_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&),FLogCategoryLogTrace_&>
                (&GTraceAuxiliary,(wchar_t *)FVar2.Data,true,local_res10,&LogTrace);
      FTraceAuxiliaryImpl::EnableCommandlineChannels(&GTraceAuxiliary);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// IsConnected @ 1419a0a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FTraceAuxiliary::IsConnected(FGuid *param_1,FGuid *param_2)

{
  bool bVar1;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  uint auStack_30 [2];
  uint local_28 [2];
  uint auStack_20 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  bVar1 = UE::Trace::IsTracingTo((uint (*) [4])local_38,(uint (*) [4])local_28);
  if (bVar1) {
    param_1->A = local_38[0];
    param_1->B = local_38[1];
    param_1->C = auStack_30[0];
    param_1->D = auStack_30[1];
    param_2->A = local_28[0];
    param_2->B = local_28[1];
    param_2->C = auStack_20[0];
    param_2->D = auStack_20[1];
  }
  return bVar1;
}

// IsConnected @ 1419a0af0

bool __cdecl FTraceAuxiliary::IsConnected(void)

{
  if ((UE::Trace::Private::GDataHandle == 0) && (UE::Trace::Private::GPendingDataHandle == 0)) {
    return false;
  }
  return true;
}

// IsPaused @ 1419a0bd0

bool __cdecl FTraceAuxiliary::IsPaused(void)

{
  return 1 < GTraceAuxiliary.PausedPreset.Data.ArrayNum;
}

// Panic @ 1419a65e0

void __cdecl FTraceAuxiliary::Panic(void)

{
  longlong lVar1;
  FChannel **ppFVar2;
  FChannel *pFStack_18;
  FChannel *pFStack_10;
  longlong lStack_8;
  
  ppFVar2 = &pFStack_18;
  pFStack_18 = UE::Trace::GNewChannelList;
  pFStack_10 = UE::Trace::GHeadChannel;
  do {
    for (lVar1 = (longlong)*ppFVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
    }
    ppFVar2 = ppFVar2 + 1;
  } while (ppFVar2 != (FChannel **)&lStack_8);
  return;
}

// Pause @ 1419a6680

bool __cdecl FTraceAuxiliary::Pause(void)

{
  FTraceAuxiliaryImpl::PauseChannels(&GTraceAuxiliary);
  return true;
}

// Relay @ 1419a7fd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FTraceAuxiliary::Relay
          (ulong64 param_1,_func___cdecl_bool_ulong64_void_ptr_uint *param_2,
          _func___cdecl_void_ulong64 *param_3,wchar_t *param_4,FOptions *param_5)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1863,"FTraceAux_Relay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x747);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1863);
  }
  bVar1 = TraceAuxiliaryStartShared(param_4,param_5,(FLogCategoryBase *)&LogTrace);
  if (bVar1) {
    if ((param_5 == (FOptions *)0x0) || (param_5->bExcludeTail == false)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    bVar1 = UE::Trace::IsTracing();
    if (bVar1) {
      if (2 < (byte)LogTrace._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
      bVar1 = true;
    }
    else {
      bVar1 = UE::Trace::RelayTo(param_1,param_2,param_3,uVar2);
      if (bVar1) {
        if (3 < (byte)LogTrace._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
        }
        ::FString::PrintfImpl(&local_28,L"Relay endpoint (Handle: 0x%llx)");
        AcquireSRWLockExclusive((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
        GTraceAuxiliary.CurrentTraceTarget.TraceType = Relay;
        iVar3 = local_28.Data.ArrayNum + -1;
        if (local_28.Data.ArrayNum == 0) {
          iVar3 = 0;
        }
        ::FString::AssignRange
                  (&GTraceAuxiliary.CurrentTraceTarget.TraceDest,
                   (wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
        ReleaseSRWLockExclusive((PSRWLOCK)&GTraceAuxiliary.CurrentTargetLock);
        if (CpuChannel->Enabled < 0) {
          TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
          ::Broadcast(&OnTraceStarted,Relay,&local_28);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId673,"FTraceAux_OnTraceStarted",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                     ,0x2a1);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId673);
          TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
          ::Broadcast(&OnTraceStarted,Relay,&local_28);
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      else if (1 < (byte)LogTrace._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// Resume @ 1419a8da0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FTraceAuxiliary::Resume(void)

{
  wchar_t *pwVar1;
  undefined8 local_res8;
  pmf_41f21a49 local_res10 [3];
  
  local_res10[0] = (pmf_41f21a49)FTraceAuxiliaryImpl::EnableChannel<wchar_t_const_*>;
  pwVar1 = L"";
  if (GTraceAuxiliary.PausedPreset.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GTraceAuxiliary.PausedPreset.Data.AllocatorInstance.Data;
  }
  local_res8 = 0;
  FTraceAuxiliaryImpl::
  ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryLogTrace_&,std::nullptr_t>
            (&GTraceAuxiliary,pwVar1,false,local_res10,&LogTrace,(void **)&local_res8);
  ::FString::Empty(&GTraceAuxiliary.PausedPreset);
  return true;
}

// SendSnapshot @ 1419a90e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FTraceAuxiliary::SendSnapshot(wchar_t *param_1,uint param_2)

{
  bool bVar1;
  
  if (CpuChannel->Enabled < 0) {
    bVar1 = FTraceAuxiliaryImpl::SendSnapshot
                      (&GTraceAuxiliary,param_1,param_2,(FLogCategoryBase *)&LogTrace);
    return bVar1;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1931,"FTraceAux_SendSnapshot",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
             ,0x78b);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1931);
  bVar1 = FTraceAuxiliaryImpl::SendSnapshot
                    (&GTraceAuxiliary,param_1,param_2,(FLogCategoryBase *)&LogTrace);
  FCpuProfilerTrace::OutputEndEvent();
  return bVar1;
}

// Shutdown @ 1419ab6b0

void __cdecl FTraceAuxiliary::Shutdown(void)

{
  bool bVar1;
  
  bVar1 = FForkProcessHelper::IsForkRequested();
  if ((bVar1) && (bVar1 = FForkProcessHelper::IsForkedChildProcess(), !bVar1)) {
    return;
  }
  if (GPlatformEvents != (FPlatformEvents *)0x0) {
    (**(code **)(GPlatformEvents->_padding_ + 0x28))(GPlatformEvents,1);
    GPlatformEvents = (FPlatformEvents *)0x0;
  }
  return;
}

// Start @ 1419ab700

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FTraceAuxiliary::Start
          (EConnectionType param_1,wchar_t *param_2,wchar_t *param_3,FOptions *param_4,
          FLogCategoryBase *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  ushort uVar5;
  
  if ((param_1 == Relay) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != EConnectionType::Relay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                         ,0x729,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1835,"FTraceAux_Start",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x72b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1835);
  }
  bVar4 = TraceAuxiliaryStartShared(param_3,param_4,param_5);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_1419ab7f9;
  }
  if (param_4 == (FOptions *)0x0) {
LAB_1419ab7d7:
    uVar5 = 0;
  }
  else {
    if (((param_4->bTruncateFile != false) && (param_1 == File)) && (param_2 != (wchar_t *)0x0)) {
      GTraceAuxiliary.bTruncateFile = param_4->bTruncateFile;
    }
    if (param_4->bExcludeTail == false) goto LAB_1419ab7d7;
    uVar5 = 1;
  }
  bVar4 = FTraceAuxiliaryImpl::Connect(&GTraceAuxiliary,param_1,param_2,param_5,uVar5);
LAB_1419ab7f9:
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// Stop @ 1419ac400

bool __cdecl FTraceAuxiliary::Stop(void)

{
  bool bVar1;
  
  bVar1 = FTraceAuxiliaryImpl::Stop(&GTraceAuxiliary);
  return bVar1;
}

// TryAutoConnect @ 1419b0260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FTraceAuxiliary::TryAutoConnect(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  HANDLE hObject;
  wchar_t *pwVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2409,"FTraceAux_TryAutoConnect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x969);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2409);
  }
  if ((((GTraceAutoStart != false) && (bVar3 = UE::Trace::IsTracing(), !bVar3)) &&
      ((bVar3 = FForkProcessHelper::IsForkRequested(), !bVar3 ||
       (bVar3 = FForkProcessHelper::IsForkedChildProcess(), bVar3)))) &&
     (hObject = OpenEventW(0x1f0003,0,L"Local\\UnrealInsightsAutoConnect"), hObject != (HANDLE)0x0))
  {
    if (3 < (byte)LogTrace._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
    }
    FTraceAuxiliaryImpl::StartWorkerThread(&GTraceAuxiliary);
    uVar2 = GTraceAuxiliary.CommandlineChannels._5172_4_;
    uVar1 = GTraceAuxiliary.CommandlineChannels._5128_4_;
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1835,"FTraceAux_Start",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x72b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1835);
    }
    pwVar5 = L"default";
    if (uVar1 != uVar2) {
      pwVar5 = (wchar_t *)0x0;
    }
    bVar4 = TraceAuxiliaryStartShared(pwVar5,(FOptions *)0x0,(FLogCategoryBase *)&LogCore);
    if (bVar4) {
      FTraceAuxiliaryImpl::Connect
                (&GTraceAuxiliary,Network,L"127.0.0.1",(FLogCategoryBase *)&LogCore,0);
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    CloseHandle(hObject);
  }
  if (!bVar6) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// WriteSnapshot @ 1419b15f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FTraceAuxiliary::WriteSnapshot(wchar_t *param_1)

{
  bool bVar1;
  
  if (CpuChannel->Enabled < 0) {
    bVar1 = FTraceAuxiliaryImpl::WriteSnapshot
                      (&GTraceAuxiliary,param_1,(FLogCategoryBase *)&LogTrace);
    return bVar1;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1920,"FTraceAux_WriteSnapshot",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
             ,0x780);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1920);
  bVar1 = FTraceAuxiliaryImpl::WriteSnapshot(&GTraceAuxiliary,param_1,(FLogCategoryBase *)&LogTrace)
  ;
  FCpuProfilerTrace::OutputEndEvent();
  return bVar1;
}

