// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// AreNetworkRuntimeFeaturesCompatible @ 1418c9320

bool __cdecl
FNetworkVersion::AreNetworkRuntimeFeaturesCompatible
          (EEngineNetworkRuntimeFeatures param_1,EEngineNetworkRuntimeFeatures param_2)

{
  return param_1 == param_2;
}

// DescribeNetworkRuntimeFeaturesBitset @ 1418d6190

void __cdecl
FNetworkVersion::DescribeNetworkRuntimeFeaturesBitset
          (EEngineNetworkRuntimeFeatures param_1,TStringBuilderBase<wchar_t> *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  
  pwVar2 = L"IrisReplication";
  iVar1 = 0xf;
  if ((param_1 & IrisEnabled) == None) {
    pwVar2 = L"GenericReplication";
    iVar1 = 0x12;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar2,iVar1);
  if ((param_1 & UseRemoteObjectReferences) != None) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L", UseRemoteObjectReferences",0x1b);
  }
  return;
}

// GetCompatibleNetworkProtocolVersion @ 1418ddb30

uint __cdecl FNetworkVersion::GetCompatibleNetworkProtocolVersion(FGuid *param_1)

{
  FCustomVersionContainer *this;
  FCustomVersion *pFVar1;
  FGuid local_18;
  
  this = UE::Net::Private::GetCompatibleNetworkCustomVersions();
  local_18.A = param_1->A;
  local_18.B = param_1->B;
  local_18.C = param_1->C;
  local_18.D = param_1->D;
  pFVar1 = FCustomVersionContainer::GetVersion(this,&local_18);
  if (pFVar1 != (FCustomVersion *)0x0) {
    return pFVar1->Version;
  }
  return 0;
}

// GetEngineCompatibleNetworkProtocolVersion @ 1418df1c0

uint __cdecl FNetworkVersion::GetEngineCompatibleNetworkProtocolVersion(void)

{
  FCustomVersionContainer *this;
  FCustomVersion *pFVar1;
  FGuid local_18;
  
  this = UE::Net::Private::GetCompatibleNetworkCustomVersions();
  local_18 = FEngineNetworkCustomVersion::Guid;
  pFVar1 = FCustomVersionContainer::GetVersion(this,&local_18);
  if (pFVar1 != (FCustomVersion *)0x0) {
    return pFVar1->Version;
  }
  return 0;
}

// GetEngineNetworkProtocolVersion @ 1418df200

uint __cdecl FNetworkVersion::GetEngineNetworkProtocolVersion(void)

{
  FCustomVersionContainer *this;
  FCustomVersion *pFVar1;
  FGuid local_18;
  
  this = UE::Net::Private::GetNetworkCustomVersions();
  local_18 = FEngineNetworkCustomVersion::Guid;
  pFVar1 = FCustomVersionContainer::GetVersion(this,&local_18);
  if (pFVar1 != (FCustomVersion *)0x0) {
    return pFVar1->Version;
  }
  return 0;
}

// GetGameCompatibleNetworkProtocolVersion @ 1418df510

uint __cdecl FNetworkVersion::GetGameCompatibleNetworkProtocolVersion(void)

{
  FCustomVersionContainer *this;
  FCustomVersion *pFVar1;
  FGuid local_18;
  
  this = UE::Net::Private::GetCompatibleNetworkCustomVersions();
  local_18 = FGameNetworkCustomVersion::Guid;
  pFVar1 = FCustomVersionContainer::GetVersion(this,&local_18);
  if (pFVar1 != (FCustomVersion *)0x0) {
    return pFVar1->Version;
  }
  return 0;
}

// GetGameNetworkProtocolVersion @ 1418df550

uint __cdecl FNetworkVersion::GetGameNetworkProtocolVersion(void)

{
  FCustomVersionContainer *this;
  FCustomVersion *pFVar1;
  FGuid local_18;
  
  this = UE::Net::Private::GetNetworkCustomVersions();
  local_18 = FGameNetworkCustomVersion::Guid;
  pFVar1 = FCustomVersionContainer::GetVersion(this,&local_18);
  if (pFVar1 != (FCustomVersion *)0x0) {
    return pFVar1->Version;
  }
  return 0;
}

// GetLocalNetworkVersion @ 1418df890

/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl FNetworkVersion::GetLocalNetworkVersion(bool param_1)

{
  FCustomVersion *pFVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  FCustomVersionContainer *pFVar6;
  FName this;
  FString *pFVar7;
  wchar_t *pwVar8;
  FCustomVersion *this_00;
  int iVar9;
  undefined1 local_res10 [16];
  FString local_68;
  FString local_58;
  FDestructionSentinel local_48;
  
  if (bHasCachedNetworkChecksum) {
    return CachedNetworkChecksum;
  }
  if (param_1) {
    local_48.AccessType = Reader;
    local_48.bDestroyed = false;
    local_48.Accessor = (FMRSWRecursiveAccessDetector *)&GetLocalNetworkVersionOverride;
    FMRSWRecursiveAccessDetector::AcquireReadAccess
              ((FMRSWRecursiveAccessDetector *)&GetLocalNetworkVersionOverride,&local_48);
    if (((GetLocalNetworkVersionOverride._16_4_ == 0) || (GetLocalNetworkVersionOverride._8_8_ == 0)
        ) || (cVar5 = (**(code **)(*(longlong *)GetLocalNetworkVersionOverride._8_8_ + 0x38))(),
             cVar5 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_48.Accessor,&local_48);
    }
    if (bVar3) {
      CachedNetworkChecksum =
           TDelegate<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                     (&GetLocalNetworkVersionOverride);
      if (4 < (byte)LogNetVersion._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetVersion);
      }
      bHasCachedNetworkChecksum = true;
      return CachedNetworkChecksum;
    }
  }
  GetNetworkCompatibleChangelist();
  GetProjectVersion_Internal();
  ::FString::PrintfImpl(&local_68,L"%s %s, NetCL: %d");
  pFVar6 = UE::Net::Private::GetNetworkCustomVersions();
  iVar2 = (pFVar6->Versions).ArrayNum;
  this_00 = (FCustomVersion *)(pFVar6->Versions).AllocatorInstance.Data;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((pFVar6->Versions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCustomVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == pFVar1) break;
    this = FCustomVersion::GetFriendlyName(this_00);
    ::FName::ToString((FName *)this,(FString *)&local_48);
    ::FString::PrintfImpl(&local_58,L", %s: %d");
    iVar9 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar9);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((void *)CONCAT44(local_48._4_4_,local_48.AccessType) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_48._4_4_,local_48.AccessType));
    }
    this_00 = this_00 + 1;
  }
  pFVar7 = ::FString::ToLower(&local_68,(FString *)&local_48);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  CachedNetworkChecksum = FCrc::StrCrc32<wchar_t>(pwVar8,0);
  if ((void *)CONCAT44(local_48._4_4_,local_48.AccessType) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_48._4_4_,local_48.AccessType));
  }
  if (4 < (byte)LogNetVersion._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetVersion);
  }
  uVar4 = CachedNetworkChecksum;
  bHasCachedNetworkChecksum = true;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return uVar4;
}

// GetNetworkCompatibleChangelist @ 1418dfd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FNetworkVersion::GetNetworkCompatibleChangelist(void)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  undefined *puVar9;
  wchar_t *pwVar10;
  wchar_t wVar11;
  undefined1 auStackY_248 [32];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FAutoConsoleVariableRef::FAutoConsoleVariableRef
              (&CVarNetworkVersionOverride,L"networkversionoverride",&ReturnedVersion,
               L"Sets network version used for multiplayer ",0);
    atexit(`FNetworkVersion::GetNetworkCompatibleChangelist'::__l2::
           _dynamic_atexit_destructor_for__CVarNetworkVersionOverride__);
    _Init_thread_footer(&::_TSS0);
  }
  if (bStaticCheck == false) {
    bStaticCheck = true;
    pwVar6 = FCommandLine::Get();
    if (pwVar6 != (wchar_t *)0x0) {
      bVar3 = false;
      bVar2 = false;
      wVar1 = *pwVar6;
      while (wVar1 != L'\0') {
        pwVar7 = pwVar6 + 1;
        wVar11 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar11 = wVar1;
        }
        if ((((!bVar2) && (!bVar3)) && (wVar11 == L'N')) &&
           (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"etworkversionoverride=",0x16),
           iVar4 == 0)) {
          if (pwVar6 != (wchar_t *)0x0) {
            wVar1 = pwVar6[0x17];
            pwVar7 = pwVar6 + 0x17;
            pwVar10 = pwVar7;
            if (wVar1 == L'\"') {
              pwVar10 = pwVar6 + 0x18;
              pwVar7 = wcsstr(pwVar10,L"\"");
              if (pwVar7 == (wchar_t *)0x0) {
                sVar8 = wcslen(pwVar6);
                pwVar7 = pwVar6 + (int)sVar8;
              }
            }
            else {
              while (wVar1 != L'\0') {
                pwVar6 = L" \r\n\t";
                while( true ) {
                  if (*pwVar6 == L'\0') goto LAB_1418dff24;
                  if (*pwVar10 == *pwVar6) break;
                  pwVar6 = pwVar6 + 1;
                }
                wVar1 = pwVar10[1];
                pwVar10 = pwVar10 + 1;
              }
LAB_1418dff24:
              iVar4 = (int)((longlong)pwVar10 - (longlong)pwVar7 >> 1);
              pwVar10 = pwVar7 + iVar4;
              wVar1 = pwVar7[iVar4];
              pwVar6 = pwVar10;
              while (wVar1 != L'\0') {
                puVar9 = &u_______;
                wVar11 = L',';
                do {
                  if (wVar1 == wVar11) goto LAB_1418dff80;
                  wVar11 = *(wchar_t *)(puVar9 + 2);
                  puVar9 = puVar9 + 2;
                } while (wVar11 != L'\0');
                pwVar7 = pwVar6 + 1;
                pwVar6 = pwVar6 + 1;
                wVar1 = *pwVar7;
              }
LAB_1418dff80:
              pwVar7 = pwVar10 + (int)((longlong)pwVar6 - (longlong)pwVar10 >> 1);
            }
            iVar4 = (int)((longlong)pwVar7 - (longlong)pwVar10 >> 1);
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            memcpy(local_218,pwVar10,(longlong)iVar4 * 2);
            local_218[iVar4] = L'\0';
            ReturnedVersion = _wtoi(local_218);
          }
          break;
        }
        if (((ushort)(wVar11 + L'﾿') < 0x1a) || ((ushort)(wVar11 + L'￐') < 10)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (wVar11 == L'\"') {
          bVar2 = !bVar2;
        }
        pwVar6 = pwVar7;
        wVar1 = *pwVar7;
      }
    }
  }
  uVar5 = ReturnedVersion;
  if (ReturnedVersion == 0) {
    uVar5 = BuildSettings::GetCompatibleChangelist();
  }
  return uVar5;
}

// GetNetworkCustomVersions @ 1418e0040

FCustomVersionContainer * __cdecl FNetworkVersion::GetNetworkCustomVersions(void)

{
  FGuid FVar1;
  FGuid FVar2;
  FName *pFVar3;
  FName aFStackX_8 [4];
  FGuid aFStack_38 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Net::Private::GetNetworkCustomVersions'::__l2::
             _dynamic_atexit_destructor_for__NetworkCustomVersions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = Guid;
  FVar1 = Guid;
  if (::bInitialized == false) {
    pFVar3 = ::FName::FName(aFStackX_8,L"EngineNetworkVersion");
    aFStack_38[0] = FVar1;
    FCustomVersionContainer::SetVersion(&NetworkCustomVersions,aFStack_38,0x2b,*pFVar3);
    pFVar3 = ::FName::FName(aFStackX_8,L"GameNetworkVersion");
    aFStack_38[0] = FVar2;
    FCustomVersionContainer::SetVersion(&NetworkCustomVersions,aFStack_38,0,*pFVar3);
    ::bInitialized = true;
    return &NetworkCustomVersions;
  }
  return &NetworkCustomVersions;
}

// GetNetworkProtocolVersion @ 1418e0170

uint __cdecl FNetworkVersion::GetNetworkProtocolVersion(FGuid *param_1)

{
  FCustomVersionContainer *this;
  FCustomVersion *pFVar1;
  FGuid local_18;
  
  this = UE::Net::Private::GetNetworkCustomVersions();
  local_18.A = param_1->A;
  local_18.B = param_1->B;
  local_18.C = param_1->C;
  local_18.D = param_1->D;
  pFVar1 = FCustomVersionContainer::GetVersion(this,&local_18);
  if (pFVar1 != (FCustomVersion *)0x0) {
    return pFVar1->Version;
  }
  return 0;
}

// GetProjectVersion_Internal @ 1418e1220

FString * __cdecl FNetworkVersion::GetProjectVersion_Internal(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ProjectVersion,L"1.0.0");
      atexit(`FNetworkVersion::GetProjectVersion_Internal'::__l2::
             _dynamic_atexit_destructor_for__ProjectVersion__);
      _Init_thread_footer(&::_TSS0);
      return &ProjectVersion;
    }
  }
  return &ProjectVersion;
}

// GetReplayCompatibleChangelist @ 1418e1330

/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl FNetworkVersion::GetReplayCompatibleChangelist(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  FGlobalEngineVersions *pFVar4;
  longlong *plVar5;
  FDestructionSentinel local_28;
  
  local_28.AccessType = Reader;
  local_28.bDestroyed = false;
  local_28.Accessor = (FMRSWRecursiveAccessDetector *)&GetReplayCompatibleChangeListOverride;
  FMRSWRecursiveAccessDetector::AcquireReadAccess
            ((FMRSWRecursiveAccessDetector *)&GetReplayCompatibleChangeListOverride,&local_28);
  if ((GetReplayCompatibleChangeListOverride._16_4_ != 0) &&
     (GetReplayCompatibleChangeListOverride._8_8_ != 0)) {
    cVar2 = (**(code **)(*(longlong *)GetReplayCompatibleChangeListOverride._8_8_ + 0x38))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_1418e1388;
    }
  }
  bVar1 = false;
LAB_1418e1388:
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_28.Accessor,&local_28);
  }
  if (bVar1) {
    local_28.AccessType = Reader;
    local_28.bDestroyed = false;
    local_28.Accessor = (FMRSWRecursiveAccessDetector *)&GetReplayCompatibleChangeListOverride;
    FMRSWRecursiveAccessDetector::AcquireReadAccess
              ((FMRSWRecursiveAccessDetector *)&GetReplayCompatibleChangeListOverride,&local_28);
    plVar5 = (longlong *)0x0;
    if (GetReplayCompatibleChangeListOverride._16_4_ != 0) {
      plVar5 = (longlong *)GetReplayCompatibleChangeListOverride._8_8_;
    }
    uVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_28.Accessor,&local_28);
    }
    if (4 < (byte)LogNetVersion._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetVersion);
    }
    return uVar3;
  }
  pFVar4 = TLazySingleton<FGlobalEngineVersions>::Get();
  return (uint)(pFVar4->CompatibleWith)._padding_ & 0x7fffffff;
}

// GetReplayVersion @ 1418e1440

/* WARNING: Enum "Type": Some values do not have unique names */

FNetworkReplayVersion * __cdecl
FNetworkVersion::GetReplayVersion(FNetworkReplayVersion *__return_storage_ptr__)

{
  int *piVar1;
  FCustomVersion *pFVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ForAnyElementType _Src;
  char cVar6;
  uint uVar7;
  FCustomVersionContainer *pFVar8;
  FName this;
  FString *pFVar9;
  FGlobalEngineVersions *pFVar10;
  longlong *plVar11;
  FCustomVersion *this_00;
  wchar_t *pwVar12;
  int iVar13;
  undefined1 local_res8 [16];
  FString local_78;
  FString local_68;
  FDestructionSentinel local_58;
  
  if (!bHasCachedReplayChecksum) {
    ::FString::FString(&local_68,GInternalProjectName);
    pFVar8 = UE::Net::Private::GetCompatibleNetworkCustomVersions();
    pwVar12 = L"";
    iVar3 = (pFVar8->Versions).ArrayNum;
    this_00 = (FCustomVersion *)(pFVar8->Versions).AllocatorInstance.Data;
    pFVar2 = this_00 + iVar3;
    while( true ) {
      if ((pFVar8->Versions).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FCustomVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar2) break;
      this = FCustomVersion::GetFriendlyName(this_00);
      ::FName::ToString((FName *)this,(FString *)&local_58);
      ::FString::PrintfImpl(&local_78,L", %s: %d");
      iVar13 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars(&local_68,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar13);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((void *)CONCAT44(local_58._4_4_,local_58.AccessType) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58.AccessType));
      }
      this_00 = this_00 + 1;
    }
    pFVar9 = ::FString::ToLower(&local_68,(FString *)&local_58);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    CachedReplayChecksum = FCrc::StrCrc32<wchar_t>(pwVar12,0);
    if ((void *)CONCAT44(local_58._4_4_,local_58.AccessType) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58.AccessType));
    }
    bHasCachedReplayChecksum = true;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  local_58.AccessType = Reader;
  local_58.bDestroyed = false;
  local_58.Accessor = (FMRSWRecursiveAccessDetector *)&GetReplayCompatibleChangeListOverride;
  FMRSWRecursiveAccessDetector::AcquireReadAccess
            ((FMRSWRecursiveAccessDetector *)&GetReplayCompatibleChangeListOverride,&local_58);
  if (((GetReplayCompatibleChangeListOverride._16_4_ == 0) ||
      (GetReplayCompatibleChangeListOverride._8_8_ == 0)) ||
     (cVar6 = (**(code **)(*(longlong *)GetReplayCompatibleChangeListOverride._8_8_ + 0x38))(),
     cVar6 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_58.Accessor,&local_58);
  }
  if (bVar4) {
    local_58.AccessType = Reader;
    local_58.bDestroyed = false;
    local_58.Accessor = (FMRSWRecursiveAccessDetector *)&GetReplayCompatibleChangeListOverride;
    FMRSWRecursiveAccessDetector::AcquireReadAccess
              ((FMRSWRecursiveAccessDetector *)&GetReplayCompatibleChangeListOverride,&local_58);
    plVar11 = (longlong *)0x0;
    if (GetReplayCompatibleChangeListOverride._16_4_ != 0) {
      plVar11 = (longlong *)GetReplayCompatibleChangeListOverride._8_8_;
    }
    uVar7 = (**(code **)(*plVar11 + 0x60))();
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_58.Accessor,&local_58);
    }
    if (4 < (byte)LogNetVersion._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetVersion);
    }
  }
  else {
    pFVar10 = TLazySingleton<FGlobalEngineVersions>::Get();
    uVar7 = (uint)(pFVar10->CompatibleWith)._padding_ & 0x7fffffff;
  }
  uVar5 = CachedReplayChecksum;
  ::FString::FString(&local_68,GInternalProjectName);
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  piVar1 = &(__return_storage_ptr__->AppString).Data.ArrayMax;
  (__return_storage_ptr__->AppString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AppString).Data.ArrayNum = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_68.Data.ArrayNum,piVar1);
    memcpy((__return_storage_ptr__->AppString).Data.AllocatorInstance.Data,_Src.Data,
           (longlong)local_68.Data.ArrayNum * 2);
  }
  __return_storage_ptr__->NetworkVersion = uVar5;
  __return_storage_ptr__->Changelist = uVar7;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsNetworkCompatible @ 1418e3310

bool __cdecl FNetworkVersion::IsNetworkCompatible(uint param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FDestructionSentinel local_28;
  
  local_28.Accessor = (FMRSWRecursiveAccessDetector *)&IsNetworkCompatibleOverride;
  local_28.AccessType = Reader;
  local_28.bDestroyed = false;
  FMRSWRecursiveAccessDetector::AcquireReadAccess
            ((FMRSWRecursiveAccessDetector *)&IsNetworkCompatibleOverride,&local_28);
  if (((IsNetworkCompatibleOverride._16_4_ == 0) || (IsNetworkCompatibleOverride._8_8_ == 0)) ||
     (cVar2 = (**(code **)(*(longlong *)IsNetworkCompatibleOverride._8_8_ + 0x38))(), cVar2 == '\0')
     ) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_28.Accessor,&local_28);
  }
  if (bVar1) {
    local_28.AccessType = Reader;
    local_28.bDestroyed = false;
    local_28.Accessor = (FMRSWRecursiveAccessDetector *)&IsNetworkCompatibleOverride;
    FMRSWRecursiveAccessDetector::AcquireReadAccess
              ((FMRSWRecursiveAccessDetector *)&IsNetworkCompatibleOverride,&local_28);
    plVar4 = (longlong *)0x0;
    if (IsNetworkCompatibleOverride._16_4_ != 0) {
      plVar4 = (longlong *)IsNetworkCompatibleOverride._8_8_;
    }
    uVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,param_1,param_2);
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseReadAccess(local_28.Accessor,&local_28);
    }
  }
  else {
    uVar3 = param_1 == param_2;
  }
  return (bool)uVar3;
}

// RegisterNetworkCustomVersion @ 1418f1420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FNetworkVersion::RegisterNetworkCustomVersion(FGuid *param_1,int param_2,int param_3,FName *param_4)

{
  FCustomVersionContainer *this;
  FCustomVersionContainer *this_00;
  FCustomVersion *pFVar1;
  ForAnyElementType local_38;
  undefined8 uStack_30;
  
  this = UE::Net::Private::GetNetworkCustomVersions();
  this_00 = UE::Net::Private::GetCompatibleNetworkCustomVersions();
  local_38.Data = *(FScriptContainerElement **)param_1;
  uStack_30._0_4_ = param_1->C;
  uStack_30._4_4_ = param_1->D;
  pFVar1 = FCustomVersionContainer::GetVersion(this,(FGuid *)&local_38);
  if (((pFVar1 != (FCustomVersion *)0x0) && (pFVar1->Version != param_2)) &&
     (2 < (byte)LogNetVersion._0_1_)) {
    ::FName::ToString(param_4,(FString *)&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetVersion);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  local_38.Data = *(FScriptContainerElement **)param_1;
  uStack_30._0_4_ = param_1->C;
  uStack_30._4_4_ = param_1->D;
  FCustomVersionContainer::SetVersion(this,(FGuid *)&local_38,param_2,*param_4);
  local_38.Data = *(FScriptContainerElement **)param_1;
  uStack_30._0_4_ = param_1->C;
  uStack_30._4_4_ = param_1->D;
  pFVar1 = FCustomVersionContainer::GetVersion(this_00,(FGuid *)&local_38);
  if (((pFVar1 != (FCustomVersion *)0x0) && (pFVar1->Version != param_3)) &&
     (2 < (byte)LogNetVersion._0_1_)) {
    ::FName::ToString(param_4,(FString *)&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetVersion);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  local_38.Data = *(FScriptContainerElement **)param_1;
  uStack_30._0_4_ = param_1->C;
  uStack_30._4_4_ = param_1->D;
  FCustomVersionContainer::SetVersion(this_00,(FGuid *)&local_38,param_3,*param_4);
  bHasCachedNetworkChecksum = false;
  bHasCachedReplayChecksum = false;
  return;
}

// SetGameCompatibleNetworkProtocolVersion @ 1418f8de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FNetworkVersion::SetGameCompatibleNetworkProtocolVersion(uint param_1)

{
  FCustomVersionContainer *this;
  FName *pFVar1;
  FName local_res10 [3];
  FGuid local_18;
  
  this = UE::Net::Private::GetCompatibleNetworkCustomVersions();
  GameCompatibleNetworkProtocolVersion = param_1;
  pFVar1 = ::FName::FName(local_res10,L"GameNetworkVersion");
  local_18 = FGameNetworkCustomVersion::Guid;
  FCustomVersionContainer::SetVersion(this,&local_18,param_1,*pFVar1);
  bHasCachedNetworkChecksum = false;
  bHasCachedReplayChecksum = false;
  if (4 < (byte)LogNetVersion._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetVersion);
  }
  return;
}

// SetGameNetworkProtocolVersion @ 1418f8e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FNetworkVersion::SetGameNetworkProtocolVersion(uint param_1)

{
  FCustomVersionContainer *this;
  FName *pFVar1;
  FName local_res10 [3];
  FGuid local_18;
  
  this = UE::Net::Private::GetNetworkCustomVersions();
  GameNetworkProtocolVersion = param_1;
  pFVar1 = ::FName::FName(local_res10,L"GameNetworkVersion");
  local_18 = FGameNetworkCustomVersion::Guid;
  FCustomVersionContainer::SetVersion(this,&local_18,param_1,*pFVar1);
  bHasCachedNetworkChecksum = false;
  if (4 < (byte)LogNetVersion._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetVersion);
  }
  return;
}

// SetProjectVersion @ 1418f8f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FNetworkVersion::SetProjectVersion(wchar_t *param_1)

{
  bool bVar1;
  size_t sVar2;
  FString *this;
  undefined1 local_res8 [8];
  
  if (((param_1 != (wchar_t *)0x0) && (sVar2 = wcslen(param_1), (int)sVar2 != 0)) ||
     (bVar1 = `FNetworkVersion::SetProjectVersion'::__l3::<lambda_1>::operator()(local_res8), bVar1)
     ) {
    this = GetProjectVersion_Internal();
    ::FString::operator=(this,param_1);
    bHasCachedNetworkChecksum = false;
    if (4 < (byte)LogNetVersion._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetVersion);
    }
  }
  return;
}

// operator() @ 15047e560

bool __thiscall `FNetworkVersion::SetProjectVersion'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3066797251402661780>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3066797251402661780>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

