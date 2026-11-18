// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 4

// CleanUp @ 145ac4450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPreLoadScreenBase::CleanUp(FPreLoadScreenBase *this)

{
  return;
}

// InitSettingsFromConfig @ 145acb5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPreLoadScreenBase::InitSettingsFromConfig(FPreLoadScreenBase *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  IPlugin *pIVar4;
  FName FVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  IPluginManager *pIVar9;
  undefined8 *puVar10;
  void **ppvVar11;
  FPreLoadSettingsContainerBase *pFVar12;
  FName *pFVar13;
  FConfigFile *this_00;
  FConfigSection *pFVar14;
  FPreLoadSettingsContainerBase *pFVar15;
  ulonglong uVar16;
  FCustomBrushLoadingGroup *pFVar17;
  FString *pFVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  wchar_t *pwVar21;
  FScriptContainerElement *pFVar22;
  TSharedRef<IPlugin,1> *pTVar23;
  FScriptContainerElement *pFVar24;
  bool bVar25;
  bool bVar26;
  FName local_res10;
  float local_res18 [2];
  float local_res20 [2];
  FString local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  float local_e8;
  float local_e4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e0;
  FName local_d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  void *local_88;
  void *local_80;
  FName local_78;
  FString local_70;
  FScopedBootTiming local_60;
  
  bVar25 = -1 < CpuChannel->Enabled;
  local_res10 = (FName)param_1;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId12,"FPreLoadScreenBase::InitSettingsFromConfig",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenBase.cpp"
               ,0xc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId12);
  }
  FScopedBootTiming::FScopedBootTiming(&local_60,"FPreLoadScreenBase::InitSettingsFromConfig");
  ::FString::FString(&local_118,L"PreLoadScreen.UISettings");
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  pIVar9 = IPluginManager::Get();
  (**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,&local_108);
  iVar2 = local_108.ArrayNum;
  pTVar23 = (TSharedRef<IPlugin,1> *)
            (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10);
  FVar20.Data = local_108.AllocatorInstance.Data;
  do {
    if (local_108.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<IPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((TSharedRef<IPlugin,1> *)FVar20.Data == pTVar23) goto LAB_145acb796;
    pTVar3 = (((TSharedRef<IPlugin,1> *)FVar20.Data)->SharedReferenceCount).ReferenceController;
    pIVar4 = ((TSharedRef<IPlugin,1> *)FVar20.Data)->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar7 = (**(code **)(*(longlong *)pIVar4 + 0x68))(pIVar4);
    if (cVar7 != '\0') {
      puVar10 = (undefined8 *)(**(code **)(*(longlong *)pIVar4 + 8))(pIVar4);
      iVar8 = (this->PluginName).Data.ArrayNum;
      iVar1 = *(int *)(puVar10 + 1);
      if (iVar1 == iVar8) {
        if (iVar1 < 2) break;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar10,
                           (wchar_t *)(this->PluginName).Data.AllocatorInstance.Data);
        bVar26 = iVar8 == 0;
      }
      else {
        bVar26 = iVar8 + iVar1 == 1;
      }
      if (bVar26) break;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FVar20.Data = FVar20.Data + 0x10;
  } while( true );
  ppvVar11 = (void **)(**(code **)(*(longlong *)pIVar4 + 0x30))(pIVar4,&local_e0);
  if (&local_88 != ppvVar11) {
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    local_88 = *ppvVar11;
    *ppvVar11 = (void *)0x0;
    local_80 = ppvVar11[1];
    ppvVar11[1] = (void *)0x0;
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_145acb796:
  DestructItems<TSharedRef<IPlugin,1>,int>
            ((TSharedRef<IPlugin,1> *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((TSharedRef<IPlugin,1> *)local_108.AllocatorInstance.Data != (TSharedRef<IPlugin,1> *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  pFVar12 = FPreLoadSettingsContainerBase::Get();
  (**(code **)(pFVar12->_padding_ + 0xa0))(pFVar12,&local_88);
  FVar5 = local_res10;
  pwVar21 = L"";
  if ((((FName *)((longlong)local_res10 + 8))->ComparisonIndex).Value == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = *(wchar_t **)local_res10;
  }
  pFVar13 = ::FName::FName(&local_d0,pwVar19);
  this_00 = FConfigCacheIni::FindConfigFileWithBaseName(GConfig,*pFVar13);
  if ((this_00 == (FConfigFile *)0x0) &&
     (local_res10 = FVar5,
     bVar26 = `FPreLoadScreenBase::InitSettingsFromConfig'::__l10::<lambda_1>::operator()
                        (&local_res10), !bVar26)) goto LAB_145acbe2b;
  pFVar12 = FPreLoadSettingsContainerBase::Get();
  local_res18[0] = 5.0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_f8,(wchar_t *)FVar20.Data);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar14 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
            ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                    *)this_00,&local_f8);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((FName)local_f8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (pFVar14 != (FConfigSection *)0x0) {
    FConfigSection::GetFloat(pFVar14,L"TimeToDisplayEachBackground",local_res18);
  }
  fVar6 = local_res18[0];
  pFVar15 = FPreLoadSettingsContainerBase::Get();
  pFVar15->TimeToDisplayEachBackground = fVar6;
  local_res20[0] = 0.0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_f8,(wchar_t *)FVar20.Data);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar14 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
            ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                    *)this_00,&local_f8);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((FName)local_f8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (pFVar14 != (FConfigSection *)0x0) {
    FConfigSection::GetFloat(pFVar14,L"TimeToUpdateDownloadedDataSize",local_res20);
  }
  fVar6 = local_res20[0];
  pFVar15 = FPreLoadSettingsContainerBase::Get();
  pFVar15->TimeToUpdateDownloadedDataSize = fVar6;
  local_e8 = 1.0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_f8,(wchar_t *)FVar20.Data);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar14 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
            ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                    *)this_00,&local_f8);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((FName)local_f8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (pFVar14 != (FConfigSection *)0x0) {
    FConfigSection::GetFloat(pFVar14,L"TimeToRecheckNotificationsPermission",&local_e8);
  }
  fVar6 = local_e8;
  pFVar15 = FPreLoadSettingsContainerBase::Get();
  pFVar15->TimeToRecheckNotificationsPermission = fVar6;
  local_e4 = 2.0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_f8,(wchar_t *)FVar20.Data);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar14 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
            ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                    *)this_00,&local_f8);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((FName)local_f8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (pFVar14 != (FConfigSection *)0x0) {
    FConfigSection::GetFloat(pFVar14,L"TimeToShowNotificationsPermissionModal",&local_e4);
  }
  fVar6 = local_e4;
  pFVar15 = FPreLoadSettingsContainerBase::Get();
  pFVar15->TimeToShowNotificationsPermissionModal = fVar6;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  FConfigFile::GetArray(this_00,(wchar_t *)FVar20.Data,L"LoadingGroups",&local_108);
  (**(code **)(pFVar12->_padding_ + 0x88))(pFVar12,&local_108);
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  FConfigFile::GetArray(this_00,(wchar_t *)FVar20.Data,L"CustomImageBrushes",&local_e0);
  iVar2 = local_e0.ArrayNum;
  uVar16 = (ulonglong)local_e0.ArrayNum;
  pFVar24 = local_e0.AllocatorInstance.Data + uVar16 * 0x10;
  FVar20.Data = local_e0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar16 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar20.Data == pFVar24) break;
    (**(code **)(pFVar12->_padding_ + 0x68))(pFVar12,FVar20.Data);
    uVar16 = local_e0._8_8_ & 0xffffffff;
    FVar20.Data = FVar20.Data + 0x10;
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  FConfigFile::GetArray(this_00,(wchar_t *)FVar20.Data,L"LocalizedText",&local_98);
  iVar2 = local_98.ArrayNum;
  uVar16 = (ulonglong)local_98.ArrayNum;
  pFVar24 = local_98.AllocatorInstance.Data + uVar16 * 0x10;
  FVar20.Data = local_98.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar16 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar20.Data == pFVar24) break;
    (**(code **)(pFVar12->_padding_ + 0x78))(pFVar12,FVar20.Data);
    uVar16 = local_98._8_8_ & 0xffffffff;
    FVar20.Data = FVar20.Data + 0x10;
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  FConfigFile::GetArray(this_00,(wchar_t *)FVar20.Data,L"ScreenGroupings",&local_a8);
  iVar2 = local_a8.ArrayNum;
  uVar16 = (ulonglong)local_a8.ArrayNum;
  pFVar24 = local_a8.AllocatorInstance.Data + uVar16 * 0x10;
  FVar20.Data = local_a8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar16 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar20.Data == pFVar24) break;
    (**(code **)(pFVar12->_padding_ + 0x80))(pFVar12,FVar20.Data);
    uVar16 = local_a8._8_8_ & 0xffffffff;
    FVar20.Data = FVar20.Data + 0x10;
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  FConfigFile::GetArray(this_00,(wchar_t *)FVar20.Data,L"CustomFont",&local_b8);
  iVar2 = local_b8.ArrayNum;
  uVar16 = (ulonglong)local_b8.ArrayNum;
  pFVar24 = local_b8.AllocatorInstance.Data + uVar16 * 0x10;
  FVar20.Data = local_b8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar16 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar20.Data == pFVar24) break;
    (**(code **)(pFVar12->_padding_ + 0x70))(pFVar12,FVar20.Data);
    uVar16 = local_b8._8_8_ & 0xffffffff;
    FVar20.Data = FVar20.Data + 0x10;
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar20.Data = local_118.Data.AllocatorInstance.Data;
  }
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  FConfigFile::GetArray(this_00,(wchar_t *)FVar20.Data,L"ScreenOrders",&local_c8);
  if (local_c8.ArrayNum == 0) {
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar20.Data = local_118.Data.AllocatorInstance.Data;
    }
    FConfigFile::GetArray(this_00,(wchar_t *)FVar20.Data,L"ScreenDisplayOrder",&local_c8);
  }
  (**(code **)(pFVar12->_padding_ + 0x90))(pFVar12,&local_108,&local_c8);
  pwVar19 = L"";
  if (FPreLoadSettingsContainerBase::DefaultInitialLoadingGroupIdentifier.Data.ArrayNum != 0) {
    pwVar19 = (wchar_t *)
              FPreLoadSettingsContainerBase::DefaultInitialLoadingGroupIdentifier.Data.
              AllocatorInstance;
  }
  pFVar13 = ::FName::FName(&local_res10,pwVar19);
  pFVar17 = TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
            ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
                    *)&pFVar12->BrushLoadingGroups,*pFVar13);
  if (pFVar17 != (FCustomBrushLoadingGroup *)0x0) {
    pwVar19 = L"";
    if (FPreLoadSettingsContainerBase::DefaultInitialLoadingGroupIdentifier.Data.ArrayNum != 0) {
      pwVar19 = (wchar_t *)
                FPreLoadSettingsContainerBase::DefaultInitialLoadingGroupIdentifier.Data.
                AllocatorInstance;
    }
    pFVar13 = ::FName::FName(&local_78,pwVar19);
    local_d0 = *pFVar13;
    pFVar18 = ::FName::ToString(&local_d0,&local_70);
    if ((pFVar18->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
    pFVar13 = ::FName::FName((FName *)&local_f8,pwVar21);
    pFVar17 = TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
              ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
                      *)&pFVar12->BrushLoadingGroups,*pFVar13);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (pFVar17 == (FCustomBrushLoadingGroup *)0x0) {
      local_res10 = (FName)&local_d0;
      bVar26 = `FPreLoadSettingsContainerBase::LoadGrouping'::__l3::<lambda_1>::operator()
                         (&local_res10);
      if (!bVar26) goto LAB_145acbd86;
    }
    pFVar12->CurrentLoadGroup = local_d0;
    iVar2 = (pFVar17->CustomBrushDefinesToLoad).ArrayNum;
    pFVar24 = (pFVar17->CustomBrushDefinesToLoad).AllocatorInstance.Data;
    pFVar22 = pFVar24 + (longlong)iVar2 * 0x30;
    while( true ) {
      if ((pFVar17->CustomBrushDefinesToLoad).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPreLoadSettingsContainerBase::FCustomBrushDefine,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_res10);
      }
      if (pFVar24 == pFVar22) break;
      (**(code **)(pFVar12->_padding_ + 0x38))(pFVar12,pFVar24,pFVar24 + 0x10,pFVar24 + 0x20);
      pFVar24 = pFVar24 + 0x30;
    }
  }
LAB_145acbd86:
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((TSharedRef<IPlugin,1> *)local_108.AllocatorInstance.Data != (TSharedRef<IPlugin,1> *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
LAB_145acbe2b:
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_60);
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsDone @ 145acc870

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPreLoadScreenBase::IsDone(FPreLoadScreenBase *this)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  cVar2 = (**(code **)(this->_padding_ + 0x50))();
  if (cVar2 == '\x02') {
    return (bool)this->bIsEngineLoadingFinished;
  }
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x70))(this,local_18);
  lVar1 = *plVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return lVar1 == 0;
}

// operator() @ 1504d7630

bool __thiscall
`FPreLoadScreenBase::InitSettingsFromConfig'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5291161741713997795>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_5291161741713997795>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

