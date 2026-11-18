// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// BuildCachedStreamingManagerParams @ 14762b680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCachedAudioStreamingManagerParams * __cdecl
FPlatformCompressionUtilities::BuildCachedStreamingManagerParams
          (FCachedAudioStreamingManagerParams *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FPlatformAudioCookOverrides *pFVar7;
  FCachedAudioStreamingManagerParams *pFVar8;
  FPlatformAudioCookOverrides *pFVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_48 [32];
  bool local_28;
  bool local_27 [7];
  undefined4 local_20;
  int iStack_1c;
  longlong lStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar7 = GetCacheableOverridesByPlatform((wchar_t *)0x0,&local_28);
  if (local_28 != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
    CacheAudioCookOverrides(pFVar7,(wchar_t *)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
  }
  if (pFVar7 == (FPlatformAudioCookOverrides *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioCompressionSettingsUtils.cpp"
                       ,0x146,
                       L"Please only use this function if FPlatformCompressionUtilities::IsCurrentPlatformUsingLoadOnDemand() returns true."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FCachedAudioStreamingManagerParams *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar9 = GetCacheableOverridesByPlatform((wchar_t *)0x0,local_27);
  if (local_27[0] != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
    CacheAudioCookOverrides(pFVar9,(wchar_t *)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
  }
  if (pFVar9 == (FPlatformAudioCookOverrides *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCompressionOverrides",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioCompressionSettingsUtils.cpp"
                       ,0x16c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FCachedAudioStreamingManagerParams *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar11 = (pFVar9->StreamCachingSettings).CacheSizeKB;
  iVar5 = (pFVar9->StreamCachingSettings).MaxChunkSizeOverrideKB;
  iVar11 = (int)((iVar11 >> 0x1f & 0x1fU) + iVar11) >> 5;
  if (0x1fff < (pFVar9->StreamCachingSettings).CacheSizeKB) {
    iVar11 = 0;
  }
  if (iVar5 < 0x100) {
    iVar5 = 0x100;
  }
  if (iVar11 < iVar5) {
    iVar11 = iVar5;
  }
  iVar5 = (pFVar7->StreamCachingSettings).MaxChunkSizeOverrideKB;
  iVar6 = iVar5 << 10;
  iVar11 = iVar11 * 0x400;
  if ((0 < iVar5 << 10) && (iVar6 < iVar11)) {
    iVar11 = iVar6;
  }
  fVar13 = MinimumCacheUsageCvar;
  if (__real_3f7ff972 <= MinimumCacheUsageCvar) {
    fVar13 = __real_3f7ff972;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar12 = ChunkSlotNumScalarCvar;
  if (ChunkSlotNumScalarCvar <= __real_3f800000) {
    fVar12 = __real_3f800000;
  }
  lVar10 = 0;
  fVar12 = (float)(((pFVar7->StreamCachingSettings).CacheSizeKB << 10) /
                  (int)((__real_3f800000 - fVar13) * (float)iVar11)) * fVar12;
  if ((__real_5f000000 <= fVar12) && (fVar12 = fVar12 - __real_5f000000, fVar12 < __real_5f000000))
  {
    lVar10 = -0x8000000000000000;
  }
  piVar1 = &(__return_storage_ptr__->Caches).ArrayMax;
  (__return_storage_ptr__->Caches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Caches).ArrayNum = 0;
  *piVar1 = 0;
  local_20 = 0x40000;
  iVar11 = 0x7fffffff;
  if ((ulonglong)((longlong)fVar12 + lVar10) < 0x7fffffff) {
    iVar11 = (int)((longlong)fVar12 + lVar10);
  }
  iVar5 = (pFVar7->StreamCachingSettings).CacheSizeKB;
  if (iVar5 < 1) {
    lStack_18 = 0x4000000;
  }
  else {
    lStack_18 = (longlong)(iVar5 << 10);
  }
  iStack_1c = 1;
  if (1 < iVar11) {
    iStack_1c = iVar11;
  }
  iVar11 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,(ForAnyElementType *)__return_storage_ptr__,piVar1);
  (__return_storage_ptr__->Caches).ArrayNum = iVar11 + 1;
  pFVar2 = (__return_storage_ptr__->Caches).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(iStack_1c,local_20);
  *(longlong *)(pFVar2 + 8) = lStack_18;
  return __return_storage_ptr__;
}

// GetCompressionDurationForCurrentPlatform @ 14763bbe0

float __cdecl FPlatformCompressionUtilities::GetCompressionDurationForCurrentPlatform(void)

{
  return __real_bf800000;
}

// GetCookOverrides @ 14763bc00

FPlatformAudioCookOverrides * __cdecl
FPlatformCompressionUtilities::GetCookOverrides(wchar_t *param_1,bool param_2)

{
  FPlatformAudioCookOverrides *pFVar1;
  bool local_res18 [16];
  
  pFVar1 = GetCacheableOverridesByPlatform(param_1,local_res18);
  if (local_res18[0] != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
    CacheAudioCookOverrides(pFVar1,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
  }
  return pFVar1;
}

// GetMaxChunkSizeForCookOverrides @ 14763e6e0

uint __cdecl
FPlatformCompressionUtilities::GetMaxChunkSizeForCookOverrides(FPlatformAudioCookOverrides *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (FPlatformAudioCookOverrides *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCompressionOverrides",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioCompressionSettingsUtils.cpp"
                       ,0x16c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  iVar5 = (param_1->StreamCachingSettings).MaxChunkSizeOverrideKB;
  iVar4 = (param_1->StreamCachingSettings).CacheSizeKB;
  iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
  if (0x1fff < (param_1->StreamCachingSettings).CacheSizeKB) {
    iVar4 = 0;
  }
  if (iVar5 < 0x100) {
    iVar5 = 0x100;
  }
  if (iVar4 < iVar5) {
    iVar4 = iVar5;
  }
  return iVar4 << 10;
}

// GetMaxPreloadedBranchesForCurrentPlatform @ 14763ea30

int __cdecl FPlatformCompressionUtilities::GetMaxPreloadedBranchesForCurrentPlatform(void)

{
  return 0;
}

// GetQualityIndexOverrideForCurrentPlatform @ 14763f230

int __cdecl FPlatformCompressionUtilities::GetQualityIndexOverrideForCurrentPlatform(void)

{
  return -1;
}

// GetRuntimeCompressionOverridesForCurrentPlatform @ 14763f440

FPlatformRuntimeAudioCompressionOverrides * __cdecl
FPlatformCompressionUtilities::GetRuntimeCompressionOverridesForCurrentPlatform(void)

{
  return (FPlatformRuntimeAudioCompressionOverrides *)0x0;
}

// GetStreamCachingSettingsForCurrentPlatform @ 147640840

FAudioStreamCachingSettings * __cdecl
FPlatformCompressionUtilities::GetStreamCachingSettingsForCurrentPlatform(void)

{
  code *pcVar1;
  bool bVar2;
  FPlatformAudioCookOverrides *pFVar3;
  FAudioStreamCachingSettings *pFVar4;
  bool local_res8 [32];
  
  pFVar3 = GetCacheableOverridesByPlatform((wchar_t *)0x0,local_res8);
  if (local_res8[0] != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
    CacheAudioCookOverrides(pFVar3,(wchar_t *)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
  }
  if (pFVar3 == (FPlatformAudioCookOverrides *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioCompressionSettingsUtils.cpp"
                       ,0x146,
                       L"Please only use this function if FPlatformCompressionUtilities::IsCurrentPlatformUsingLoadOnDemand() returns true."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAudioStreamCachingSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  return &pFVar3->StreamCachingSettings;
}

// GetTargetSampleRateForPlatform @ 1476408c0

float __cdecl
FPlatformCompressionUtilities::GetTargetSampleRateForPlatform(ESoundwaveSampleRateSettings param_1)

{
  FPlatformAudioCookOverrides *pFVar1;
  float *pfVar2;
  bool local_res10 [24];
  
  pFVar1 = GetCacheableOverridesByPlatform((wchar_t *)0x0,local_res10);
  if (local_res10[0] != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
    CacheAudioCookOverrides(pFVar1,(wchar_t *)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
  }
  if ((pFVar1 != (FPlatformAudioCookOverrides *)0x0) && (pFVar1->bResampleForDevice != false)) {
    pfVar2 = TMapBase<enum_ESoundwaveSampleRateSettings,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>_>
             ::Find(&pFVar1->PlatformSampleRates,param_1);
    if (pfVar2 != (float *)0x0) {
      return *pfVar2;
    }
    `FPlatformCompressionUtilities::GetTargetSampleRateForPlatform'::__l10::<lambda_1>::operator()
              (local_res10);
  }
  return __real_bf800000;
}

// RecacheCookOverrides @ 14764f180

void __cdecl FPlatformCompressionUtilities::RecacheCookOverrides(void)

{
  int iVar1;
  FString *pFVar2;
  FDataDrivenPlatformInfo *pFVar3;
  FPlatformAudioCookOverrides *pFVar4;
  int iVar5;
  bool local_res8 [8];
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,"Windows");
  local_28.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar3 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo(&local_28);
  iVar1 = (pFVar3->TargetSettingsIniSectionName).Data.ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (0 < iVar5) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
    pFVar4 = GetCacheableOverridesByPlatform((wchar_t *)0x0,local_res8);
    CacheAudioCookOverrides(pFVar4,(wchar_t *)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&CookOverridesCriticalSection);
  }
  return;
}

// operator() @ 15050e080

bool __thiscall
`FPlatformCompressionUtilities::GetTargetSampleRateForPlatform'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3984255888494952037>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3984255888494952037>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

