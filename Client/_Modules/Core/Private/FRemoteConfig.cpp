// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FRemoteConfig @ 1419178c0

FRemoteConfig * __thiscall FRemoteConfig::FRemoteConfig(FRemoteConfig *this)

{
  *(undefined8 *)&this->ConfigBuffers = 0;
  *(undefined8 *)&(this->ConfigBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->ConfigBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->ConfigBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->ConfigBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigBuffers).field_0x34 = 0;
  *(undefined4 *)&(this->ConfigBuffers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConfigBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->ConfigBuffers).field_0x48 = 0;
  (this->CachedFileNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedFileNames).ArrayNum = 0;
  (this->CachedFileNames).ArrayMax = 0;
  this->Timeout = -1.0;
  this->bIsEnabled = true;
  this->bHasCachedFilenames = false;
  return this;
}

// FindConfig @ 14193d170

FRemoteConfigAsyncIOInfo * __thiscall
FRemoteConfig::FindConfig(FRemoteConfig *this,wchar_t *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRemoteConfigAsyncIOInfo *pFVar5;
  ushort uVar6;
  wchar_t *pwVar7;
  undefined1 *puVar8;
  FRemoteConfigAsyncIOInfo *pFVar9;
  longlong lVar10;
  FRemoteConfigAsyncIOInfo *pFVar11;
  uint uVar12;
  
  if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xb4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRemoteConfigAsyncIOInfo *)(*pcVar2)();
    return pFVar5;
  }
  pFVar11 = (FRemoteConfigAsyncIOInfo *)0x0;
  wVar1 = *param_1;
  pwVar7 = param_1;
  pFVar5 = pFVar11;
  while (wVar1 != L'\0') {
    pwVar7 = pwVar7 + 1;
    uVar6 = wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20);
    uVar12 = (uint)pFVar5 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)pFVar5 ^ (byte)uVar6)];
    pFVar5 = (FRemoteConfigAsyncIOInfo *)
             (ulonglong)(uVar12 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar6 >> 8 ^ uVar12) & 0xff]);
    wVar1 = *pwVar7;
  }
  pFVar9 = pFVar11;
  if (*(int *)&(this->ConfigBuffers).field_0x8 != *(int *)&(this->ConfigBuffers).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ConfigBuffers).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ConfigBuffers).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->ConfigBuffers).field_0x48 - 1) &
                              (ulonglong)pFVar5) * 4);
    while (iVar4 != -1) {
      lVar10 = (longlong)iVar4 * 0x848;
      if (*(int *)(lVar10 + 8 + *(longlong *)&this->ConfigBuffers) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(lVar10 + *(longlong *)&this->ConfigBuffers);
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,param_1);
      if (iVar4 == 0) {
        pFVar9 = (FRemoteConfigAsyncIOInfo *)(*(longlong *)&this->ConfigBuffers + lVar10);
        break;
      }
      iVar4 = *(int *)(*(longlong *)&this->ConfigBuffers + 0x840 + lVar10);
    }
  }
  pFVar5 = (FRemoteConfigAsyncIOInfo *)&pFVar9->TimeStamp;
  if (pFVar9 == (FRemoteConfigAsyncIOInfo *)0x0) {
    pFVar5 = pFVar11;
  }
  return pFVar5;
}

// FinishRead @ 14193efa0

void __thiscall FRemoteConfig::FinishRead(FRemoteConfig *this,wchar_t *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  FConfigCacheIni *pFVar4;
  uint uVar5;
  int iVar6;
  FRemoteConfigAsyncIOInfo *this_00;
  FString *pFVar7;
  FAsyncTask<FRemoteConfigAsyncWorker> *this_01;
  wchar_t *pwVar8;
  FAsyncTaskBase *this_02;
  ForAnyElementType FVar9;
  bool bVar10;
  LARGE_INTEGER local_res18;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  this_00 = FindConfig(this,param_1);
  dVar3 = __real_4170000000000000;
  if ((this_00 != (FRemoteConfigAsyncIOInfo *)0x0) && (this_00->bWasProcessed == false)) {
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)&GRemoteConfigIOManager.SynchronizationObject);
      pFVar7 = ::FString::FString(&local_38,param_1);
      this_01 = TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
                ::FindRef((TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
                           *)&GRemoteConfigIOManager,pFVar7);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (this_01 == (FAsyncTask<FRemoteConfigAsyncWorker> *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&GRemoteConfigIOManager.SynchronizationObject);
        goto LAB_14193f0aa;
      }
      bVar10 = (int)this_01->_padding_ == 0;
      if (bVar10) {
        FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_01,false);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&GRemoteConfigIOManager.SynchronizationObject);
      if (bVar10) goto LAB_14193f0aa;
      QueryPerformanceCounter(&local_res18);
    } while (((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3) -
             this_00->StartReadTime <= (double)this->Timeout);
    this_00->bReadIOFailed = true;
LAB_14193f0aa:
    ::FString::FString(&local_48,param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)&GRemoteConfigIOManager.SynchronizationObject);
    this_02 = (FAsyncTaskBase *)0x0;
    bVar10 = FRemoteConfigAsyncTaskManager::IsFinished(&GRemoteConfigIOManager,param_1);
    if (bVar10) {
      pFVar7 = ::FString::FString(local_28,param_1);
      iVar1 = (pFVar7->Data).ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar8 = L"";
        iVar6 = 0;
      }
      else {
        pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
      iVar6 = TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
                          *)&GRemoteConfigIOManager,uVar5,pFVar7);
      if (iVar6 != -1) {
        this_02 = *(FAsyncTaskBase **)
                   ((longlong)iVar6 * 0x20 + 0x10 + GRemoteConfigIOManager.PendingTasks._0_8_);
        TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
                         *)&GRemoteConfigIOManager,iVar6);
      }
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      if ((this_02 == (FAsyncTaskBase *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("AsyncTask",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                              ,0xec,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FAsyncTaskBase::CheckIdle(this_02);
      FAsyncTaskBase::CheckIdle(this_02);
      FRemoteConfigAsyncIOInfo::operator=
                (this_00,(FRemoteConfigAsyncIOInfo *)&this_02[0x13]._padding_);
      if (this_02 != (FAsyncTaskBase *)0x0) {
        (**(code **)(this_02->_padding_ + 0x28))(this_02,1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRemoteConfigIOManager.SynchronizationObject);
    this_00->bWasProcessed = true;
    pFVar4 = GConfig;
    pwVar8 = FGenericPlatformMisc::GeneratedConfigDir();
    ::FString::FString(&local_58,pwVar8);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::LoadGlobalIniFile
              (&local_48,this_00->DefaultIniFile,(wchar_t *)0x0,false,false,true,true,
               (wchar_t *)FVar9.Data,pFVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Flush @ 14193f440

void __cdecl FRemoteConfig::Flush(void)

{
  double dVar1;
  bool bVar2;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  bVar2 = FRemoteConfigAsyncTaskManager::AreAllTasksFinished(&GRemoteConfigIOManager,true);
  while( true ) {
    if (bVar2) {
      return;
    }
    FRemoteConfigAsyncTaskManager::Tick(&GRemoteConfigIOManager);
    QueryPerformanceCounter(local_res8);
    if ((double)GRemoteConfig.Timeout <
        (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1) break;
    bVar2 = FRemoteConfigAsyncTaskManager::AreAllTasksFinished(&GRemoteConfigIOManager,true);
  }
  return;
}

// GenerateRemotePath @ 141944220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FRemoteConfig::GenerateRemotePath
          (FRemoteConfig *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_38,param_1);
  pFVar2 = FPaths::GetCleanFilename(&local_28,&local_38);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  lVar5 = (longlong)local_78.Data.ArrayNum;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar1 = ::FString::Find(&local_78,L".",1,CaseSensitive,FromEnd,-1);
  if (iVar1 != -1) {
    iVar6 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    iVar4 = iVar6;
    if (iVar1 < iVar6) {
      iVar4 = iVar1;
    }
    iVar1 = 0;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    ::FString::RemoveAt(&local_78,iVar1,iVar6 - iVar1,Default);
  }
  FConfigCacheIni::GetStr(GConfig,&local_48,L"RemoteConfiguration",L"ConfigPathPrefix",&GEngineIni);
  FConfigCacheIni::GetStr(GConfig,&local_58,L"RemoteConfiguration",L"ConfigPathSuffix",&GEngineIni);
  pwVar3 = FWindowsPlatformProcess::UserName(false);
  ::FString::FString(&local_68,pwVar3);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s/%s/%s/%s/%s.ini");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Get @ 141944b90

FRemoteConfig * __cdecl FRemoteConfig::Get(void)

{
  return &GRemoteConfig;
}

// IsFinished @ 141951a30

bool __thiscall FRemoteConfig::IsFinished(FRemoteConfig *this,wchar_t *param_1)

{
  bool bVar1;
  
  bVar1 = FRemoteConfigAsyncTaskManager::IsFinished(&GRemoteConfigIOManager,param_1);
  return bVar1;
}

// IsRemoteFile @ 1419525d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FRemoteConfig::IsRemoteFile(FRemoteConfig *this,wchar_t *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  FConfigFile *pFVar8;
  int iVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  FString local_38;
  FString local_28;
  FString local_18;
  
  uVar14 = 0;
  ::FString::FString(&local_28,param_1);
  pFVar7 = FPaths::GetCleanFilename(&local_18,&local_28);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  lVar13 = (longlong)local_38.Data.ArrayNum;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar1,lVar13 * 2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar5 = ::FString::Find(&local_38,L".",1,CaseSensitive,FromEnd,-1);
  if (iVar5 != -1) {
    iVar16 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    iVar9 = iVar16;
    if (iVar5 < iVar16) {
      iVar9 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar9) {
      iVar5 = iVar9;
    }
    ::FString::RemoveAt(&local_38,iVar5,iVar16 - iVar5,Default);
  }
  if ((this->bHasCachedFilenames == false) &&
     (pFVar8 = FConfigCacheIni::FindConfigFile(GConfig,&GEngineIni), pFVar8 != (FConfigFile *)0x0))
  {
    FConfigCacheIni::GetArray
              (GConfig,L"RemoteConfiguration",L"IniToLoad",&this->CachedFileNames,&GEngineIni);
    this->bHasCachedFilenames = true;
    FConfigCacheIni::GetBool
              (GConfig,L"RemoteConfiguration",L"Enabled",&this->bIsEnabled,&GEngineIni);
  }
  if ((this->bIsEnabled != false) && (uVar15 = uVar14, 0 < (this->CachedFileNames).ArrayNum)) {
    do {
      uVar12 = (uint)uVar14;
      uVar6 = 0;
      if ((int)uVar12 < (this->CachedFileNames).ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->CachedFileNames).AllocatorInstance.Data;
      if (*(int *)(pFVar1 + uVar15 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(pFVar1 + uVar15);
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,pwVar11);
      if (iVar5 == 0) {
        bVar3 = true;
        goto LAB_1419527db;
      }
      uVar14 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 0x10;
    } while ((int)(uVar12 + 1) < (this->CachedFileNames).ArrayNum);
  }
  bVar3 = false;
LAB_1419527db:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// Read @ 14195f700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FRemoteConfig::Read(FRemoteConfig *this,wchar_t *param_1,wchar_t *param_2)

{
  float *pfVar1;
  bool bVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  undefined1 auStackY_8c8 [32];
  LARGE_INTEGER local_898;
  FString local_890;
  FString *local_880;
  void **local_878;
  FString local_870;
  void *local_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined2 local_830;
  wchar_t local_82e [1027];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  GenerateRemotePath(this,&local_890,param_1);
  pfVar1 = &this->Timeout;
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    FConfigCacheIni::GetFloat(GConfig,L"RemoteConfiguration",L"Timeout",pfVar1,&GEngineIni);
  }
  local_858 = (void *)0x0;
  local_850 = 0;
  local_848 = 0;
  local_830 = 0;
  wcscpy(local_82e,param_2);
  local_880 = ::FString::FString(&local_870,param_1);
  local_878 = &local_858;
  TSet<TTuple<FString,FRemoteConfigAsyncIOInfo>,TDefaultMapHashableKeyFuncs<FString,FRemoteConfigAsyncIOInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FRemoteConfigAsyncIOInfo_&&>_>
            ((TSet<TTuple<FString,FRemoteConfigAsyncIOInfo>,TDefaultMapHashableKeyFuncs<FString,FRemoteConfigAsyncIOInfo,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FRemoteConfigAsyncIOInfo_&&> *)&local_898.s,
             (bool *)&local_880);
  lVar3 = *(longlong *)&this->ConfigBuffers + (longlong)(int)local_898.s.LowPart * 0x848;
  if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_870.Data.AllocatorInstance.Data);
  }
  if (local_858 != (void *)0x0) {
    FMemory::Free(local_858);
  }
  QueryPerformanceCounter(&local_898);
  *(double *)(lVar3 + 0x28) =
       (double)CONCAT44(local_898.s.HighPart,local_898.s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_890.Data.ArrayNum != 0) {
    FVar4.Data = local_890.Data.AllocatorInstance.Data;
  }
  bVar2 = FRemoteConfigAsyncTaskManager::StartTask
                    (&GRemoteConfigIOManager,param_1,(wchar_t *)FVar4.Data,
                     (FRemoteConfigAsyncIOInfo *)(lVar3 + 0x10),(FString *)0x0,true);
  if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// ReplaceIniCharWithSpecialChar @ 1419667e0

FString * __cdecl
FRemoteConfig::ReplaceIniCharWithSpecialChar(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[0][0],
                              SpecialCharMap[0][1],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[1][0],
                              SpecialCharMap[1][1],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[2][0],
                              SpecialCharMap[2][1],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[3][0],
                              SpecialCharMap[3][1],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[4][0],
                              SpecialCharMap[4][1],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[5][0],
                              SpecialCharMap[5][1],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReplaceIniSpecialCharWithChar @ 141966aa0

FString * __cdecl
FRemoteConfig::ReplaceIniSpecialCharWithChar(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[0][1],
                              SpecialCharMap[0][0],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[1][1],
                              SpecialCharMap[1][0],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[2][1],
                              SpecialCharMap[2][0],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[3][1],
                              SpecialCharMap[3][0],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[4][1],
                              SpecialCharMap[4][0],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,SpecialCharMap[5][1],
                              SpecialCharMap[5][0],IgnoreCase);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ShouldReadRemoteFile @ 14196d830

bool __thiscall FRemoteConfig::ShouldReadRemoteFile(FRemoteConfig *this,wchar_t *param_1)

{
  bool bVar1;
  FRemoteConfigAsyncIOInfo *pFVar2;
  
  bVar1 = IsRemoteFile(this,param_1);
  if (bVar1) {
    pFVar2 = FindConfig(this,param_1);
    if (pFVar2 == (FRemoteConfigAsyncIOInfo *)0x0) {
      return true;
    }
  }
  return false;
}

// Write @ 14197c8d0

bool __thiscall FRemoteConfig::Write(FRemoteConfig *this,wchar_t *param_1,FString *param_2)

{
  bool bVar1;
  FRemoteConfigAsyncIOInfo *pFVar2;
  ForAnyElementType FVar3;
  LARGE_INTEGER local_res20;
  FString local_18;
  
  pFVar2 = FindConfig(this,param_1);
  if (pFVar2 == (FRemoteConfigAsyncIOInfo *)0x0) {
    bVar1 = true;
  }
  else {
    GenerateRemotePath(this,&local_18,param_1);
    QueryPerformanceCounter(&local_res20);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar2->StartWriteTime =
         (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    bVar1 = FRemoteConfigAsyncTaskManager::StartTask
                      (&GRemoteConfigIOManager,param_1,(wchar_t *)FVar3.Data,pFVar2,param_2,false);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return bVar1;
}

