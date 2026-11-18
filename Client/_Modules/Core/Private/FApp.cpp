// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 33

// AllowUnattendedInput @ 14181c040

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FApp::AllowUnattendedInput(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (FCommandLine::bIsInitialized == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bUnattendedInput = FParse::Param(FCommandLine::CmdLine,L"UnattendedInput");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bUnattendedInput;
}

// GetBranchName @ 141825390

FString * __cdecl FApp::GetBranchName(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = BuildSettings::GetBranchName();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// GetBuildConfiguration @ 1418253c0

EBuildConfiguration __cdecl FApp::GetBuildConfiguration(void)

{
  return !bIsDebugGame + DebugGame;
}

// GetBuildDate @ 1418253e0

FString * __cdecl FApp::GetBuildDate(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = BuildSettings::GetBuildDate();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// GetBuildTargetType @ 141825410

EBuildTargetType __cdecl FApp::GetBuildTargetType(void)

{
  return Game;
}

// GetBuildURL @ 141825420

wchar_t * __cdecl FApp::GetBuildURL(void)

{
  bool bVar1;
  char cVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnGetBuildURL,&local_28);
  if ((FCoreDelegates::OnGetBuildURL._16_4_ != 0) && (FCoreDelegates::OnGetBuildURL._8_8_ != 0)) {
    cVar2 = (**(code **)(*(longlong *)FCoreDelegates::OnGetBuildURL._8_8_ + 0x38))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_14182545c;
    }
  }
  bVar1 = false;
LAB_14182545c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnGetBuildURL,&local_28);
    plVar4 = (longlong *)0x0;
    if (FCoreDelegates::OnGetBuildURL._16_4_ != 0) {
      plVar4 = (longlong *)FCoreDelegates::OnGetBuildURL._8_8_;
    }
    pwVar3 = (wchar_t *)(**(code **)(*plVar4 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return pwVar3;
  }
  pwVar3 = BuildSettings::GetBuildURL();
  return pwVar3;
}

// GetBuildVersion @ 1418254c0

wchar_t * __cdecl FApp::GetBuildVersion(void)

{
  return L"UE5-CL-0";
}

// GetEngineIsPromotedBuild @ 141825d30

int __cdecl FApp::GetEngineIsPromotedBuild(void)

{
  bool bVar1;
  
  bVar1 = BuildSettings::IsPromotedBuild();
  return (int)bVar1;
}

// GetEpicProductIdentifier @ 141825dd0

FString * __cdecl FApp::GetEpicProductIdentifier(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UnrealEngine");
  return __return_storage_ptr__;
}

// GetExecutingJobURL @ 141825e00

wchar_t * __cdecl FApp::GetExecutingJobURL(void)

{
  bool bVar1;
  char cVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  FString local_48;
  FString local_38;
  void *local_28;
  int local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnGetExecutingJobURL,(FReadAccessScope *)&local_28);
  if (((FCoreDelegates::OnGetExecutingJobURL._16_4_ == 0) ||
      (FCoreDelegates::OnGetExecutingJobURL._8_8_ == 0)) ||
     (cVar2 = (**(code **)(*(longlong *)FCoreDelegates::OnGetExecutingJobURL._8_8_ + 0x38))(),
     cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnGetExecutingJobURL,(FReadAccessScope *)&local_28);
    plVar4 = (longlong *)0x0;
    if (FCoreDelegates::OnGetExecutingJobURL._16_4_ != 0) {
      plVar4 = (longlong *)FCoreDelegates::OnGetExecutingJobURL._8_8_;
    }
    pwVar3 = (wchar_t *)(**(code **)(*plVar4 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28);
    return pwVar3;
  }
  pwVar3 = L"";
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FWindowsPlatformMisc::GetEnvironmentVariable(&local_48,L"UE_HORDE_URL");
    if (local_48.Data.ArrayNum < 2) {
      URL.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      URL.Data.ArrayNum = 0;
      URL.Data.ArrayMax = 0;
    }
    else {
      ::FString::RemoveFromEnd(&local_48,L"/",1,IgnoreCase);
      FWindowsPlatformMisc::GetEnvironmentVariable(&local_38,L"UE_HORDE_JOBID");
      if (local_38.Data.ArrayNum < 2) {
        URL.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        URL.Data.ArrayNum = 0;
        URL.Data.ArrayMax = 0;
      }
      else {
        FWindowsPlatformMisc::GetEnvironmentVariable((FString *)&local_28,L"UE_HORDE_STEPID");
        if (local_20 < 2) {
          ::FString::PrintfImpl(&URL,L"%s/job/%s");
        }
        else {
          ::FString::PrintfImpl(&URL,L"%s/job/%s?step=%s");
        }
        if (local_28 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28);
        }
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    atexit(`FApp::GetExecutingJobURL'::__l2::_dynamic_atexit_destructor_for__URL__);
    _Init_thread_footer(&::_TSS0);
  }
  if (URL.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)URL.Data.AllocatorInstance.Data;
  }
  return (wchar_t *)(FScriptContainerElement *)pwVar3;
}

// GetGraphicsRHI @ 141826320

FString * __cdecl FApp::GetGraphicsRHI(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = GraphicsRHI.Data.ArrayNum;
  _Src = GraphicsRHI.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar3 = (longlong)GraphicsRHI.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = GraphicsRHI.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// GetInstanceId @ 1418263b0

FGuid * __cdecl FApp::GetInstanceId(FGuid *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGuid::NewGuid(&InstanceId);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *__return_storage_ptr__ = InstanceId;
  return __return_storage_ptr__;
}

// GetIsWithDebugInfo @ 141826430

bool __cdecl FApp::GetIsWithDebugInfo(void)

{
  return true;
}

// GetSessionObjectId @ 141827250

FCbObjectId * __cdecl FApp::GetSessionObjectId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FCbObjectId::NewObjectId(&SessionObjectId);
      _Init_thread_footer(&::_TSS0);
      return &SessionObjectId;
    }
  }
  return &SessionObjectId;
}

// GetTimecode @ 141827ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTimecode * __cdecl FApp::GetTimecode(FTimecode *__return_storage_ptr__)

{
  bool bVar1;
  double dVar2;
  FFrameNumber local_res10 [6];
  
  if (!CurrentFrameTime.bIsSet) {
    __return_storage_ptr__->Hours = 0;
    __return_storage_ptr__->Minutes = 0;
    __return_storage_ptr__->Seconds = 0;
    __return_storage_ptr__->Frames = 0;
    __return_storage_ptr__->Subframe = 0.0;
    __return_storage_ptr__->bDropFrameFormat = false;
    return __return_storage_ptr__;
  }
  dVar2 = (double)CurrentFrameTime.TypedValue.Rate.Numerator /
          (double)CurrentFrameTime.TypedValue.Rate.Denominator - ___real_403df853e2556b29;
  if (((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee2308c3a) ||
     (dVar2 = (double)CurrentFrameTime.TypedValue.Rate.Numerator /
              (double)CurrentFrameTime.TypedValue.Rate.Denominator - ___real_404df853e2556b29,
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3e45798ee2308c3a)) {
    bVar1 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported();
    if (bVar1) {
      bVar1 = true;
      goto LAB_141827d18;
    }
  }
  bVar1 = false;
LAB_141827d18:
  local_res10[0].Value = CurrentFrameTime.TypedValue.Time.FrameNumber.Value;
  FTimecode::FromFrameNumber
            (__return_storage_ptr__,local_res10,&CurrentFrameTime.TypedValue.Rate,bVar1);
  __return_storage_ptr__->Subframe = CurrentFrameTime.TypedValue.Time.SubFrame;
  return __return_storage_ptr__;
}

// GetTimecodeFrameRate @ 141827d70

FFrameRate __cdecl FApp::GetTimecodeFrameRate(void)

{
  FFrameRate in_RCX;
  
  if (CurrentFrameTime.bIsSet) {
    *(FFrameRate *)in_RCX = CurrentFrameTime.TypedValue.Rate;
    return in_RCX;
  }
  *(undefined4 *)in_RCX = 60000;
  *(int *)((longlong)in_RCX + 4) = 1;
  return in_RCX;
}

// GetUnfocusedVolumeMultiplier @ 141827f00

float __cdecl FApp::GetUnfocusedVolumeMultiplier(void)

{
  if (!GUnfocusedVolumeMultiplierInitialised) {
    GUnfocusedVolumeMultiplierInitialised = true;
    FConfigCacheIni::GetFloat
              (GConfig,L"Audio",L"UnfocusedVolumeMultiplier",&UnfocusedVolumeMultiplier,&GEngineIni)
    ;
  }
  return UnfocusedVolumeMultiplier;
}

// GetZenStoreProjectId @ 141828550

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FApp::GetZenStoreProjectId(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (!FCommandLine::bIsInitialized) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  bVar2 = FParse::Value(FCommandLine::CmdLine,L"-ZenStoreProject=",&local_48,true,(wchar_t **)0x0);
  if (bVar2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
  }
  else {
    bVar2 = FPaths::IsProjectFilePathSet();
    if (bVar2) {
      pFVar4 = FPaths::GetProjectFilePath(&local_18);
      local_28.DataPtr = param_1->DataPtr;
      local_28.Size = param_1->Size;
      local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_38.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      iVar1 = (pFVar4->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      local_38.Size = iVar3;
      GetZenStoreProjectIdForProject(__return_storage_ptr__,&local_38,&local_28);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetZenStoreProjectIdForProject @ 141828670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FApp::GetZenStoreProjectIdForProject
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FString *pFVar4;
  IFileManager *pIVar5;
  size_t sVar6;
  int iVar7;
  wchar_t *_Str;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ForAnyElementType FVar11;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  FScriptContainerElement *local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FScriptContainerElement local_158 [128];
  ForAnyElementType local_d8;
  FScriptContainerElement *local_d0;
  int local_c8;
  FMD5 local_b8;
  uchar local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  lVar8 = 0;
  if (param_1->Size == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_178,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_1a8 != pFVar4) {
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    local_1a8.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_1a8.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pIVar5 = IFileManager::Get();
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1a8.Data.ArrayNum != 0) {
    FVar11.Data = local_1a8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x100))(pIVar5,&local_198,FVar11.Data);
  pFVar4 = FPaths::FindCorrectCase(&local_178,&local_198);
  if (&local_198 != pFVar4) {
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_198.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_198.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  if (local_198.Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)local_198.Data.AllocatorInstance.Data;
    if (local_198.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      local_d0 = (FScriptContainerElement *)0x0;
      local_c8 = 0;
      goto LAB_14182885d;
    }
  }
  sVar6 = wcslen(_Str);
  local_c8 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar6);
  uVar1 = local_c8 + 1;
  uVar9 = uVar1;
  if (uVar1 < 0x81) {
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      uVar9 = 0;
      goto LAB_141828819;
    }
  }
  else {
LAB_141828819:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,uVar9,1);
  }
  local_d0 = local_158;
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    local_d0 = local_d8.Data;
  }
  UE::Core::Private::Convert((uchar *)local_d0,uVar1,_Str,(int)sVar6 + 1);
LAB_14182885d:
  iVar10 = local_c8;
  pFVar2 = local_d0;
  FMD5::FMD5(&local_b8);
  FMD5::Update(&local_b8,(uchar *)pFVar2,(longlong)iVar10);
  FMD5::Final(&local_b8,local_58);
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  do {
    ::FString::PrintfImpl(&local_178,L"%02x");
    iVar10 = local_178.Data.ArrayNum + -1;
    if (local_178.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_188,(wchar_t *)local_178.Data.AllocatorInstance.Data,iVar10);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 < 0x10);
  FMD5::~FMD5(&local_b8);
  iVar10 = local_188.Data.ArrayNum + -1;
  if (local_188.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  iVar3 = iVar10;
  if (8 < iVar10) {
    iVar3 = 8;
  }
  iVar7 = 0;
  if (0 < iVar3) {
    iVar7 = iVar3;
  }
  ::FString::RemoveAt(&local_188,iVar7,iVar10 - iVar7,No);
  FVar11.Data = local_188.Data.AllocatorInstance.Data;
  iVar10 = local_188.Data.ArrayNum;
  FPaths::GetBaseFilename(&local_168,&local_1a8,true);
  if (param_2->Size == 0) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s.%.8s");
  }
  else {
    local_1b8 = param_2->DataPtr;
    local_1b0 = (FScriptContainerElement *)L"";
    if (iVar10 != 0) {
      local_1b0 = FVar11.Data;
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s.%.*s.%.8s");
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasFocus @ 141828a70

bool __cdecl FApp::HasFocus(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (bIsBenchmarking) {
    return true;
  }
  if (bUseVRFocus) {
    return bHasVRFocus;
  }
  if (HasFocusFunction == (_func___cdecl_bool *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasFocusFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\App.cpp"
                       ,0x186,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (HasFocusFunction == (_func___cdecl_bool *)0x0) {
      return true;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141828adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*HasFocusFunction)();
  return bVar2;
}

// InitializeSession @ 141828f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FApp::InitializeSession(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString local_38;
  FString local_28;
  FGuid local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FGuid::NewGuid(&InstanceId);
    _Init_thread_footer(&::_TSS0);
  }
  local_18 = InstanceId;
  if (FCommandLine::bIsInitialized == false) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  bVar1 = FParse::Value(FCommandLine::CmdLine,L"-InstanceId=",&local_28,true,(wchar_t **)0x0);
  if (((bVar1) && (bVar1 = FGuid::Parse(&local_28,&local_18), !bVar1)) && (2 < (byte)LogInit._0_1_))
  {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (FCommandLine::bIsInitialized == false) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  bVar1 = FParse::Value(FCommandLine::CmdLine,L"-SessionId=",&local_38,true,(wchar_t **)0x0);
  if (bVar1) {
    bVar1 = FGuid::Parse(&local_38,&SessionId);
    if (bVar1) {
      Standalone = false;
    }
    else if (2 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
  }
  if (FCommandLine::bIsInitialized == false) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  FParse::Value(FCommandLine::CmdLine,L"-SessionName=",&SessionName,true,(wchar_t **)0x0);
  if (FCommandLine::bIsInitialized == false) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  bVar1 = FParse::Value(FCommandLine::CmdLine,L"-SessionOwner=",&SessionOwner,true,(wchar_t **)0x0);
  if (!bVar1) {
    pwVar2 = FWindowsPlatformProcess::UserName(false);
    ::FString::operator=(&SessionOwner,pwVar2);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// IsEngineInstalled @ 14182a440

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FApp::IsEngineInstalled(void)

{
  char cVar1;
  bool bVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  IFileManager *pIVar4;
  ForAnyElementType FVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (EngineInstalledState == -1) {
    if (InstalledState == -1) {
      pTVar3 = &FPaths::RootDir(&local_18)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_38,pTVar3,0x28 - (uint)(pTVar3->ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_38,L"Engine/Build/InstalledProjectBuild.txt",0x26);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      FPaths::NormalizeFilename((FString *)&local_38);
      pIVar4 = IFileManager::Get();
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_38.ArrayNum != 0) {
        FVar5.Data = local_38.AllocatorInstance.Data;
      }
      cVar1 = (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,FVar5.Data);
      if (cVar1 == '\0') {
        if (FCommandLine::bIsInitialized == false) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        }
        bVar2 = FParse::Param(FCommandLine::CmdLine,L"Installed");
      }
      else {
        if (FCommandLine::bIsInitialized == false) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        }
        bVar2 = FParse::Param(FCommandLine::CmdLine,L"NotInstalled");
        bVar2 = !bVar2;
      }
      InstalledState = (int)bVar2;
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    bVar2 = InstalledState != 1;
    pTVar3 = &FPaths::RootDir(&local_18)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_28,pTVar3,0x21 - (uint)(pTVar3->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_28,L"Engine/Build/InstalledBuild.txt",0x1f);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeFilename((FString *)&local_28);
    pIVar4 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.ArrayNum != 0) {
      FVar5.Data = local_28.AllocatorInstance.Data;
    }
    cVar1 = (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,FVar5.Data);
    if (cVar1 == '\0' && bVar2) {
      if (FCommandLine::bIsInitialized == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bVar2 = FParse::Param(FCommandLine::CmdLine,L"InstalledEngine");
    }
    else {
      if (FCommandLine::bIsInitialized == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bVar2 = FParse::Param(FCommandLine::CmdLine,L"NotInstalledEngine");
      bVar2 = !bVar2;
    }
    EngineInstalledState = (int)bVar2;
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return EngineInstalledState == 1;
}

// IsInstalled @ 14182aad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FApp::IsInstalled(void)

{
  char cVar1;
  bool bVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  IFileManager *pIVar4;
  ForAnyElementType FVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (InstalledState == -1) {
    pTVar3 = &FPaths::RootDir(&local_18)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_28,pTVar3,0x28 - (uint)(pTVar3->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_28,L"Engine/Build/InstalledProjectBuild.txt",0x26);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeFilename((FString *)&local_28);
    pIVar4 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.ArrayNum != 0) {
      FVar5.Data = local_28.AllocatorInstance.Data;
    }
    cVar1 = (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,FVar5.Data);
    if (cVar1 == '\0') {
      if (FCommandLine::bIsInitialized == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bVar2 = FParse::Param(FCommandLine::CmdLine,L"Installed");
    }
    else {
      if (FCommandLine::bIsInitialized == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bVar2 = FParse::Param(FCommandLine::CmdLine,L"NotInstalled");
      bVar2 = !bVar2;
    }
    InstalledState = (int)bVar2;
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return InstalledState == 1;
}

// IsMultithreadServer @ 14182abf0

bool __cdecl FApp::IsMultithreadServer(void)

{
  return bIsMultithreadServer;
}

// IsUnattended @ 14182ad80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FApp::IsUnattended(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (FCommandLine::bIsInitialized == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bIsUnattended = FParse::Param(FCommandLine::CmdLine,L"UNATTENDED");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((bIsUnattended == false) && (GIsAutomationTesting == false)) {
    return false;
  }
  return true;
}

// PrintStartupLogMessages @ 14182d1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FApp::PrintStartupLogMessages(void)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FEngineVersion *pFVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_258 [32];
  FScriptContainerElement *local_238;
  FScriptContainerElement *local_230;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  wchar_t local_138 [128];
  void *local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (4 < (byte)LogInit._0_1_) {
    FWindowsPlatformProcess::ExecutableName(false);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (4 < (byte)LogInit._0_1_) {
      BuildSettings::GetBuildVersion();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
  }
  if (4 < (byte)LogInit._0_1_) {
    local_38 = (void *)0x0;
    local_30 = local_138;
    local_28 = 7;
    pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(local_138,8,"Windows",8);
    if ((pwVar3 == (wchar_t *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    if (4 < (byte)LogInit._0_1_) {
      FGenericPlatformMisc::GetLoginId(&local_1b8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogInit._0_1_) {
        FGenericPlatformMisc::GetDeviceId(&local_1a8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogInit._0_1_) {
          pFVar4 = FEngineVersion::Current();
          FEngineVersion::ToString(pFVar4,&local_198,Branch);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if (4 < (byte)LogInit._0_1_) {
            pFVar4 = FEngineVersion::CompatibleWith();
            FEngineVersion::ToString(pFVar4,&local_188,Branch);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (4 < (byte)LogInit._0_1_) {
              FNetworkVersion::GetNetworkCompatibleChangelist();
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)&PTR_u_Net_CL___u_15068df18,
                         (FLogCategoryBase *)&LogInit);
            }
          }
        }
      }
    }
  }
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetOSVersions(&local_218,&local_228);
  if (4 < (byte)LogInit._0_1_) {
    pFVar5 = FWindowsPlatformMisc::GetPrimaryGPUBrand(&local_168);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = FWindowsPlatformMisc::GetCPUBrand(&local_178);
    if ((pFVar5->Data).ArrayNum == 0) {
      local_238 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_238 = (pFVar5->Data).AllocatorInstance.Data;
    }
    local_230 = (FScriptContainerElement *)pwVar3;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogInit._0_1_) {
      FWindowsPlatformMisc::GetCPUMicrocodeRevision();
      FWindowsPlatformMisc::GetCPUModelID();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (4 < (byte)LogInit._0_1_) {
        BuildSettings::GetBuildTime();
        BuildSettings::GetBuildDate();
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if (4 < (byte)LogInit._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        }
      }
    }
  }
  ::FString::PrintfImpl(&local_208,L"%d");
  ::FString::PrintfImpl(&local_1e8,L"%02d");
  if (4 < (byte)LogInit._0_1_) {
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar6.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    ::FString::RightChop(&local_208,&local_1f8,4);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_1f8.Data.ArrayNum != 0) {
      FVar7.Data = local_1f8.Data.AllocatorInstance.Data;
    }
    ::FString::Mid(&local_208,&local_148,2,2);
    ::FString::Mid(&local_208,&local_158,0,2);
    local_238 = FVar7.Data;
    local_230 = FVar6.Data;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogInit._0_1_) {
    ::LexToString((bIsDebugGame == false) + DebugGame);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (4 < (byte)LogInit._0_1_) {
      pwVar3 = BuildSettings::GetBranchName();
      ::FString::FString(&local_1d8,pwVar3);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
  }
  ::FString::FString(&local_1c8,L"");
  if (4 < (byte)LogInit._0_1_) {
    if (FCommandLine::bIsInitialized == false) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (4 < (byte)LogInit._0_1_) {
      FWindowsPlatformProcess::BaseDir();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (4 < (byte)LogInit._0_1_) {
        (**(code **)((longlong)*UE::Private::GMalloc + 200))();
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if (4 < (byte)LogInit._0_1_) {
          IsEngineInstalled();
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if (4 < (byte)LogInit._0_1_) {
            bVar2 = FGenericPlatformMisc::IsPGICapableBinary();
            pwVar3 = L"no";
            if (bVar2) {
              pwVar3 = L"yes";
            }
            FGenericPlatformMisc::IsPGOEnabled();
            local_238 = (FScriptContainerElement *)pwVar3;
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          }
        }
      }
    }
  }
  FDevVersionRegistration::DumpVersionsToLog();
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDebugGame @ 141832780

void __cdecl FApp::SetDebugGame(bool param_1)

{
  bIsDebugGame = param_1;
  return;
}

// SetGraphicsRHI @ 141832890

void __cdecl FApp::SetGraphicsRHI(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange(&GraphicsRHI,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// SetHasFocusFunction @ 1418328e0

void __cdecl FApp::SetHasFocusFunction(_func___cdecl_bool *param_1)

{
  HasFocusFunction = param_1;
  return;
}

// SetHasVRFocus @ 1418328f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FApp::SetHasVRFocus(bool param_1)

{
  if ((5 < (byte)LogApp._0_1_) && (bHasVRFocus != param_1)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogApp);
  }
  bHasVRFocus = param_1;
  return;
}

// SetUnfocusedVolumeMultiplier @ 141832cd0

void __cdecl FApp::SetUnfocusedVolumeMultiplier(float param_1)

{
  UnfocusedVolumeMultiplier = param_1;
  FConfigCacheIni::SetFloat(GConfig,L"Audio",L"UnfocusedVolumeMultiplier",param_1,&GEngineIni);
  GUnfocusedVolumeMultiplierInitialised = true;
  return;
}

// SetUseVRFocus @ 141832d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FApp::SetUseVRFocus(bool param_1)

{
  if ((5 < (byte)LogApp._0_1_) && (bUseVRFocus != param_1)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogApp);
  }
  bUseVRFocus = param_1;
  return;
}

// ShouldUseThreadingForPerformance @ 141832ff0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FApp::ShouldUseThreadingForPerformance(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (::_TSS0 <= *piVar3) goto LAB_14183301b;
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) goto LAB_14183301b;
  if (FCommandLine::bIsInitialized == false) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  bVar1 = FParse::Param(FCommandLine::CmdLine,L"onethread");
  if (bVar1) {
LAB_1418330dc:
    OnlyOneThread = true;
  }
  else {
    if (FCommandLine::bIsInitialized == false) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    bVar1 = FParse::Param(FCommandLine::CmdLine,L"noperfthreads");
    if (bVar1) goto LAB_1418330dc;
    bVar1 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar1) goto LAB_1418330dc;
    iVar2 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
    if (iVar2 == 1) goto LAB_1418330dc;
    OnlyOneThread = false;
  }
  _Init_thread_footer(&::_TSS0);
LAB_14183301b:
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      if (FCommandLine::bIsInitialized == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bForceUsePerfThreads = FParse::Param(FCommandLine::CmdLine,L"useperfthreads");
      _Init_thread_footer(&::_TSS1);
    }
  }
  if ((OnlyOneThread != false) && (bForceUsePerfThreads == false)) {
    return false;
  }
  return true;
}

