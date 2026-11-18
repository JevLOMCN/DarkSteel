// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 16

// FindDir @ 142af66e0

FCachedDirScanDir * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::FindDir
          (FAssetDataDiscoveryCache *this,TStringView<wchar_t> *param_1,FCachedVolumeInfo **param_2)

{
  uint uVar1;
  FCachedVolumeInfo *this_00;
  FCachedDirScanDir *pFVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = FindVolume(this,&local_18);
  if (param_2 != (FCachedVolumeInfo **)0x0) {
    *param_2 = this_00;
  }
  if (this_00 == (FCachedVolumeInfo *)0x0) {
    return (FCachedDirScanDir *)0x0;
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pFVar2 = TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
                       *)this_00,uVar1,&local_18);
  return pFVar2;
}

// FindOrAddDir @ 142af7440

FCachedDirScanDir * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::FindOrAddDir
          (FAssetDataDiscoveryCache *this,TStringView<wchar_t> *param_1,FCachedVolumeInfo **param_2)

{
  FCachedVolumeInfo *this_00;
  FCachedDirScanDir *pFVar1;
  bool local_res10 [24];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = FindOrAddVolume(this,&local_18);
  if (param_2 != (FCachedVolumeInfo **)0x0) {
    *param_2 = this_00;
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res10[0] = false;
  pFVar1 = FCachedVolumeInfo::FindOrAddDir(this_00,&local_18,local_res10);
  return pFVar1;
}

// FindOrAddIsReparsePoint @ 142af75e0

bool __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::FindOrAddIsReparsePoint
          (FAssetDataDiscoveryCache *this,TStringView<wchar_t> *param_1,FCachedVolumeInfo *param_2)

{
  bool bVar1;
  bool local_res10 [24];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res10[0] = false;
  bVar1 = FindOrAddIsReparsePointRecursive(&local_18,param_2,local_res10);
  return bVar1;
}

// FindOrAddVolume @ 142af7d90

FCachedVolumeInfo * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::FindOrAddVolume
          (FAssetDataDiscoveryCache *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  FCachedVolumeInfo *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint uVar14;
  FString local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_68.DataPtr = (wchar_t *)0x0;
  uVar14 = 0;
  local_68.Size = 0;
  local_58.DataPtr = (wchar_t *)0x0;
  local_58.Size = 0;
  FPathViews::SplitVolumeSpecifier(&local_48,&local_68,&local_58);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar8 = ::FString::ConstructFromPtrSize(&local_38,local_68.DataPtr,local_68.Size);
  if (&local_78 != pFVar8) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_78.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.ArrayNum < 2) {
    ::FString::operator=(&local_78,L"<EmptyVolume>");
  }
  uVar13 = (this->CachedVolumes).Pairs.ArrayNum;
  pFVar2 = (this->CachedVolumes).Pairs.AllocatorInstance.Data;
  if (0 < (int)uVar13) {
    do {
      iVar7 = (uVar13 >> 1) + uVar14;
      lVar10 = (longlong)iVar7 * 0xc0;
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar11.Data = local_78.Data.AllocatorInstance.Data;
      }
      if (*(int *)(pFVar2 + lVar10 + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(pFVar2 + lVar10);
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar12,(wchar_t *)FVar11.Data);
      if (iVar6 < 0) {
        uVar14 = iVar7 + (uVar13 & 1);
      }
      uVar4 = uVar13 >> 1;
      uVar13 = uVar13 >> 1;
    } while (uVar4 != 0);
  }
  if ((int)uVar14 < (this->CachedVolumes).Pairs.ArrayNum) {
    pFVar2 = (this->CachedVolumes).Pairs.AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar14 * 0xc0;
    if (*(int *)(pFVar2 + lVar10 + 8) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = *(wchar_t **)(pFVar2 + lVar10);
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar11.Data = local_78.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,pwVar12);
    if ((-1 < iVar7) && (uVar14 != 0xffffffff)) {
      uVar13 = 0;
      if ((int)uVar14 < (this->CachedVolumes).Pairs.ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FCachedVolumeInfo *)(*pcVar3)();
        return pFVar9;
      }
      pFVar9 = (FCachedVolumeInfo *)
               ((this->CachedVolumes).Pairs.AllocatorInstance.Data + lVar10 + 0x10);
      if (pFVar9 != (FCachedVolumeInfo *)0x0) goto LAB_142af7f69;
    }
  }
  pFVar9 = TSortedMap<FString,UE::AssetDataGather::Private::FCachedVolumeInfo,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::Emplace<FString_const_&>(&this->CachedVolumes,&local_78);
LAB_142af7f69:
  FVar11.Data = local_78.Data.AllocatorInstance.Data;
  if ((pFVar9->VolumeName).Data.ArrayNum < 2) {
    pFVar8 = &pFVar9->VolumeName;
    if (pFVar8 != &local_78) {
      iVar6 = local_78.Data.ArrayNum;
      lVar10 = (longlong)local_78.Data.ArrayNum;
      piVar1 = &(pFVar9->VolumeName).Data.ArrayMax;
      iVar7 = *piVar1;
      (pFVar9->VolumeName).Data.ArrayNum = local_78.Data.ArrayNum;
      if ((local_78.Data.ArrayNum == 0) && (iVar7 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_78.Data.ArrayNum,iVar7,(ForAnyElementType *)pFVar8,
                   local_78.Data.ArrayNum,piVar1);
        if (iVar6 != 0) {
          memcpy((pFVar8->Data).AllocatorInstance.Data,FVar11.Data,lVar10 * 2);
        }
      }
    }
    FCachedVolumeInfo::InitializePlatformData(pFVar9);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return pFVar9;
}

// FindVolume @ 142af8770

FCachedVolumeInfo * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::FindVolume
          (FAssetDataDiscoveryCache *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FCachedVolumeInfo *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int local_res10;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48;
  
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar12 = (FScriptContainerElement *)0x0;
  local_88.DataPtr = (wchar_t *)0x0;
  uVar11 = 0;
  local_88.Size = 0;
  local_78.DataPtr = (wchar_t *)0x0;
  local_78.Size = 0;
  FPathViews::SplitVolumeSpecifier(&local_68,&local_88,&local_78);
  local_res10 = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_58,local_88.DataPtr,local_88.Size);
  if (&local_48 != pFVar6) {
    pFVar12 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res10 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  uVar14 = (this->CachedVolumes).Pairs.ArrayNum;
  pFVar13 = (this->CachedVolumes).Pairs.AllocatorInstance.Data;
  if (0 < (int)uVar14) {
    do {
      iVar5 = (uVar14 >> 1) + uVar11;
      lVar8 = (longlong)iVar5 * 0xc0;
      pFVar9 = (FScriptContainerElement *)L"";
      if (local_res10 != 0) {
        pFVar9 = pFVar12;
      }
      if (*(int *)(pFVar13 + lVar8 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(pFVar13 + lVar8);
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar10,(wchar_t *)pFVar9);
      if (iVar4 < 0) {
        uVar11 = (uVar14 & 1) + iVar5;
      }
      uVar2 = uVar14 >> 1;
      uVar14 = uVar14 >> 1;
    } while (uVar2 != 0);
  }
  pFVar7 = (FCachedVolumeInfo *)0x0;
  if ((int)uVar11 < (this->CachedVolumes).Pairs.ArrayNum) {
    pFVar13 = (this->CachedVolumes).Pairs.AllocatorInstance.Data;
    lVar8 = (longlong)(int)uVar11 * 0xc0;
    if (*(int *)(pFVar13 + lVar8 + 8) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)(pFVar13 + lVar8);
    }
    pFVar13 = (FScriptContainerElement *)L"";
    if (local_res10 != 0) {
      pFVar13 = pFVar12;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar13,pwVar10);
    if ((-1 < iVar5) && (uVar11 != 0xffffffff)) {
      uVar14 = 0;
      if ((int)uVar11 < (this->CachedVolumes).Pairs.ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FCachedVolumeInfo *)(*pcVar1)();
        return pFVar7;
      }
      pFVar7 = (FCachedVolumeInfo *)
               ((this->CachedVolumes).Pairs.AllocatorInstance.Data + lVar8 + 0x10);
    }
  }
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  return pFVar7;
}

// GetCacheFileName @ 142afd4e0

FString * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::GetCacheFileName
          (FAssetDataDiscoveryCache *this,FString *__return_storage_ptr__)

{
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  local_28.DataPtr =
       (wchar_t *)GGatherSettings.AssetRegistryCacheRootFolder.Data.AllocatorInstance.Data;
  local_10 = 0x20;
  local_28.Size = GGatherSettings.AssetRegistryCacheRootFolder.Data.ArrayNum + -1;
  if (GGatherSettings.AssetRegistryCacheRootFolder.Data.ArrayNum == 0) {
    local_28.Size = 0;
  }
  local_18 = L"CachedAssetRegistryDiscovery.bin";
  FPaths::CombineInternal(__return_storage_ptr__,&local_28,2);
  return __return_storage_ptr__;
}

// LoadAndUpdateCache @ 142b06d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::LoadAndUpdateCache
          (FAssetDataDiscoveryCache *this)

{
  TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
  *this_00;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  EFeatureEnabled EVar7;
  bool bVar8;
  int iVar9;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar10;
  FString *pFVar11;
  FTelemetryRouter *pFVar12;
  byte bVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStackY_448 [32];
  undefined1 local_407;
  undefined1 local_406 [6];
  wchar_t *local_400;
  undefined8 local_3f8;
  FScriptContainerElement *local_3f0;
  uint local_3e8;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  wchar_t *local_390;
  int local_388;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  undefined8 local_330;
  TPairInitializer<FFileJournalFileHandle_const_&,FString_const_&> local_328;
  IPlatformFile *local_318;
  FScriptContainerElement *local_310;
  longlong *local_308;
  uint uStack_300;
  uint uStack_2fc;
  TBitArray<FDefaultBitArrayAllocator> *local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  uint local_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  undefined1 auStack_2d0 [16];
  uint uStack_2c0;
  uint uStack_2bc;
  longlong local_2b8;
  TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
  *pTStack_2b0;
  TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
  *local_2a8;
  undefined2 local_2a0;
  longlong *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  FScriptContainerElement *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  TMemoryView<void_const_> local_258;
  TMemoryView<void_const_> local_248;
  TMemoryView<void_const_> local_238;
  TMemoryView<void_const_> local_228;
  longlong local_218;
  longlong local_210;
  TMemoryView<void_const_> local_208;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  FString local_1e8;
  FGuid local_1d8;
  FString local_1c8;
  FString local_1b8;
  FGuid local_1a8;
  FGuid local_198;
  FGuid local_188;
  FGuid local_178;
  FScriptContainerElement *local_168;
  undefined8 uStack_160;
  FString local_158;
  undefined1 local_148 [32];
  longlong local_128;
  TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
  *pTStack_120;
  undefined4 local_fc;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  void *local_b8;
  undefined4 local_b0;
  TSet<TTuple<FFileJournalFileHandle,FString>,TDefaultMapHashableKeyFuncs<FFileJournalFileHandle,FString,0>,FDefaultSetAllocator>
  local_a8;
  undefined1 local_58 [28];
  byte local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_448;
  if (this->bInitialized == false) {
    bVar24 = -1 < CpuChannel->Enabled;
    if (bVar24) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId48,"AssetDataGatherLoadDiscoveryCache",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererDiscoveryCache.cpp"
                 ,0x30);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId48);
    }
    this->bInitialized = true;
    this->WriteEnabled = GGatherSettings.DiscoveryCacheWriteEnabled;
    DestructItems<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int>
              ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
               (this->CachedVolumes).Pairs.AllocatorInstance.Data,
               (this->CachedVolumes).Pairs.ArrayNum);
    bVar8 = false;
    piVar1 = &(this->CachedVolumes).Pairs.ArrayMax;
    (this->CachedVolumes).Pairs.ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,8,0,(ForAnyElementType *)this,0,piVar1);
    }
    if ((GGatherSettings.bDiscoveryCacheReadEnabled != false) || (this->WriteEnabled != Never)) {
      local_400 = (wchar_t *)0x0;
      local_3f8 = 0;
      FPaths::ProjectDir(&local_3e0);
      this_01 = FPlatformFileManager::Get();
      pIVar10 = FPlatformFileManager::GetPlatformFile(this_01);
      local_268 = local_3e0.Data.AllocatorInstance.Data;
      iStack_260 = local_3e0.Data.ArrayNum + -1;
      if (local_3e0.Data.ArrayNum == 0) {
        iStack_260 = 0;
      }
      uStack_160 = CONCAT44(uStack_25c,iStack_260);
      local_168 = local_3e0.Data.AllocatorInstance.Data;
      local_318 = pIVar10;
      (**(code **)((longlong)*pIVar10 + 0x188))(pIVar10,&local_390,&local_168);
      pwVar16 = L"";
      if (local_388 != 0) {
        pwVar16 = local_390;
      }
      iVar9 = (**(code **)((longlong)*pIVar10 + 0x168))(pIVar10,pwVar16,local_1f0,local_1f8);
      bVar25 = iVar9 == 0;
      if (iVar9 == 0) {
        pcVar2 = *(code **)((longlong)*pIVar10 + 0x178);
        pFVar11 = FPaths::ConvertRelativePathToFull(&local_158,&local_3e0);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        (*pcVar2)(pIVar10,local_58,pwVar16,&local_400);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if ((local_3c & 1) == 0) {
          local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3d0.Data.ArrayNum = 0;
          local_3d0.Data.ArrayMax = 0;
          bVar25 = false;
          local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3c0.Data.ArrayNum = 0;
          local_3c0.Data.ArrayMax = 0;
          pFVar11 = FPaths::ConvertRelativePathToFull(&local_1e8,&local_3e0);
          if (&local_3d0 != pFVar11) {
            if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
            }
            local_3d0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3d0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_3d0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          iVar9 = (int)local_3f8 + -1;
          if ((int)local_3f8 == 0) {
            iVar9 = 0;
          }
          ::FString::AssignRange(&local_3c0,local_400,iVar9);
          pFVar12 = FTelemetryRouter::Get();
          local_258.Data = &local_3d0;
          local_258.Size = 0x20;
          local_1d8 = Telemetry::AssetRegistry::FFileJournalErrorTelemetry::TelemetryID;
          FTelemetryRouter::ProvideTelemetryInternal(pFVar12,&local_1d8,&local_258);
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
          }
        }
      }
      bVar3 = GGatherSettings.bDiscoveryCacheInvalidateEnabled;
      if ((GGatherSettings.bDiscoveryCacheReadEnabled != false) &&
         ((bVar25 || (GGatherSettings.bDiscoveryCacheInvalidateEnabled == false)))) {
        bVar8 = true;
      }
      EVar7 = this->WriteEnabled;
      if ((EVar7 == IfPlatformSupported) && (!bVar25)) {
        this->WriteEnabled = Never;
        EVar7 = Never;
      }
      if (((!bVar8) && (GGatherSettings.bDiscoveryCacheReadEnabled != false)) ||
         ((EVar7 == Never && (GGatherSettings.DiscoveryCacheWriteEnabled != Never)))) {
        if (3 < (byte)LogAssetRegistry._0_1_) {
          FPaths::ConvertRelativePathToFull(&local_1c8,&local_3e0);
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
        local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b0.Data.ArrayNum = 0;
        local_3b0.Data.ArrayMax = 0;
        local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a0.Data.ArrayNum = 0;
        local_3a0.Data.ArrayMax = 0;
        pFVar11 = FPaths::ConvertRelativePathToFull(&local_1b8,&local_3e0);
        if (&local_3b0 != pFVar11) {
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
          local_3b0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3b0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
          local_3b0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        iVar9 = (int)local_3f8 + -1;
        if ((int)local_3f8 == 0) {
          iVar9 = 0;
        }
        ::FString::AssignRange(&local_3a0,local_400,iVar9);
        pFVar12 = FTelemetryRouter::Get();
        local_208.Data = &local_3b0;
        local_208.Size = 0x20;
        local_1a8 = Telemetry::AssetRegistry::FFileJournalErrorTelemetry::TelemetryID;
        FTelemetryRouter::ProvideTelemetryInternal(pFVar12,&local_1a8,&local_208);
        if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
        }
        if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
        }
      }
      if (((bVar8) && (bVar8 = TryReadCacheFile(this), bVar8)) && (bVar3 != false)) {
        local_3e8 = (this->CachedVolumes).Pairs.ArrayNum;
        uVar14 = (ulonglong)(int)local_3e8;
        pFVar22 = (this->CachedVolumes).Pairs.AllocatorInstance.Data;
        local_310 = pFVar22 + uVar14 * 0xc0;
        while( true ) {
          pFVar5 = local_310;
          local_3f0 = pFVar22;
          if ((this->CachedVolumes).Pairs.ArrayNum != (int)uVar14) {
            local_407 = 0;
            `TCheckedPointerIterator<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_407);
          }
          if (pFVar22 == pFVar5) break;
          this_00 = (TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
                     *)(pFVar22 + 0x10);
          local_a8.Elements._0_8_ = 0;
          local_a8.Elements._8_8_ = 0;
          local_a8.Elements._32_8_ = 0;
          uVar19 = 0;
          local_a8.Elements._40_4_ = 0;
          local_a8.Elements._44_4_ = 0x80;
          local_a8.Elements._48_4_ = 0xffffffff;
          local_a8.Elements._52_4_ = 0;
          local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_a8.HashSize = 0;
          local_f8._0_8_ = 0;
          local_f8._8_8_ = 0;
          local_d8 = (uint *)0x0;
          local_d0 = 0;
          local_cc = 0x80;
          local_c8 = 0xffffffff;
          local_c4 = 0;
          local_b8 = (void *)0x0;
          local_b0 = 0;
          TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
          ::TIterator::TIterator((TIterator *)local_148,this_00);
          local_2a0 = 0;
          stack0xfffffffffffffd38 = local_148._16_16_;
          local_2d8 = (longlong *)local_148._0_8_;
          auStack_2d0._0_8_ = local_148._8_8_;
          local_2b8 = local_128;
          pTStack_2b0 = pTStack_120;
          uVar14 = local_148._24_8_ >> 0x20;
          local_2a8 = this_00;
          if (local_148._28_4_ < *(int *)(local_148._16_8_ + 0x18)) {
            do {
              lVar20 = (longlong)(int)uVar14 * 0x58 + *local_2d8;
              if ((*(char *)(lVar20 + 0x44) != '\0') &&
                 (((*(longlong *)(lVar20 + 0x30) != FileJournalFileHandleInvalid.Bytes._0_8_ ||
                   (*(longlong *)(lVar20 + 0x38) != FileJournalFileHandleInvalid.Bytes._8_8_)) ||
                  (*(int *)(lVar20 + 0x40) != FileJournalFileHandleInvalid.Bytes._16_4_)))) {
                local_218 = lVar20 + 0x30;
                local_210 = lVar20;
                TSet<TTuple<FFileJournalFileHandle,FString>,TDefaultMapHashableKeyFuncs<FFileJournalFileHandle,FString,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FFileJournalFileHandle_const_&,FString_const_&>_>
                          (&local_a8,&local_328,(bool *)&local_218);
              }
              uStack_2c0 = uStack_2c0 & ~auStack_2d0._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2d0);
              uVar14 = (ulonglong)uStack_2bc;
            } while ((int)uStack_2bc < *(int *)(auStack_2d0._8_8_ + 0x18));
            if (((char)local_2a0 != '\0') && (local_2a0._1_1_ != '\0')) {
              uVar18 = *(int *)&(local_2a8->Elements).field_0x8 -
                       *(int *)&(local_2a8->Elements).field_0x34;
              if (uVar18 < 4) {
                iVar9 = 1;
              }
              else {
                uVar14 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
                lVar20 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                local_328.Key._4_4_ = (undefined4)lVar20;
                iVar9 = 1 << ((byte)lVar20 & 0x1f);
              }
              if (((0 < (int)uVar18) && (local_2a8->HashSize < iVar9)) ||
                 (iVar9 < local_2a8->HashSize)) {
                local_2a8->HashSize = iVar9;
                TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
                ::Rehash(local_2a8);
              }
            }
          }
          if (pFVar22[0xb8] == (FScriptContainerElement)0x0) {
            if (2 < (byte)LogAssetRegistry._0_1_) {
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            }
            local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_360.Data.ArrayNum = 0;
            local_360.Data.ArrayMax = 0;
            local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar18 = *(int *)(pFVar22 + 8) - 1;
            if (*(int *)(pFVar22 + 8) == 0) {
              uVar18 = uVar19;
            }
            local_350.Data.ArrayNum = 0;
            local_350.Data.ArrayMax = 0;
            ::FString::AssignRange(&local_360,*(wchar_t **)pFVar22,uVar18);
            uVar18 = *(int *)(pFVar22 + 0x98) - 1;
            if (*(int *)(pFVar22 + 0x98) == 0) {
              uVar18 = uVar19;
            }
            ::FString::AssignRange(&local_350,*(wchar_t **)(pFVar22 + 0x90),uVar18);
            pFVar12 = FTelemetryRouter::Get();
            local_228.Data = &local_360;
            local_228.Size = 0x20;
            local_198 = Telemetry::AssetRegistry::FFileJournalErrorTelemetry::TelemetryID;
            FTelemetryRouter::ProvideTelemetryInternal(pFVar12,&local_198,&local_228);
            FVar15.Data = local_360.Data.AllocatorInstance.Data;
            if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_350.Data.AllocatorInstance.Data);
              FVar15.Data = local_360.Data.AllocatorInstance.Data;
            }
LAB_142b07769:
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar15.Data);
            }
            *(undefined8 *)(pFVar22 + 0x70) = *(undefined8 *)(pFVar22 + 0xa0);
            *(undefined8 *)(pFVar22 + 0x78) = *(undefined8 *)(pFVar22 + 0xa8);
            iVar9 = *(int *)(pFVar22 + 0x58);
            if (1 >= iVar9) {
              TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
              ::UnhashElements(this_00);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)this_00,0,*(int *)(pFVar22 + 0x18));
            *(undefined4 *)(pFVar22 + 0x18) = 0;
            if (*(int *)(pFVar22 + 0x1c) != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x58,8,0,(ForAnyElementType *)this_00,0,(int *)(pFVar22 + 0x1c));
            }
            *(undefined4 *)(pFVar22 + 0x40) = 0xffffffff;
            *(undefined4 *)(pFVar22 + 0x44) = 0;
            *(undefined4 *)(pFVar22 + 0x38) = 0;
            if ((*(int *)(pFVar22 + 0x3c) < 0) || (0x80 < *(int *)(pFVar22 + 0x3c))) {
              *(undefined4 *)(pFVar22 + 0x3c) = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar22 + 0x20),0);
            }
            if (1 < iVar9) {
              *(undefined4 *)(pFVar22 + 0x58) = 1;
              TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
              ::Rehash(this_00);
            }
          }
          else {
            if (*(int *)(pFVar22 + 0x68) == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = *(wchar_t **)(pFVar22 + 0x60);
            }
            iVar9 = (**(code **)((longlong)*pIVar10 + 0x180))(pIVar10,pwVar16,pFVar22 + 0x70);
            uVar18 = local_d0;
            if (iVar9 != 0) {
              if (iVar9 == 4) {
                if (3 < (byte)LogAssetRegistry._0_1_) {
                  Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry)
                  ;
                }
                local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_340.Data.ArrayNum = 0;
                local_340.Data.ArrayMax = 0;
                uVar18 = *(int *)(pFVar22 + 8) - 1;
                if (*(int *)(pFVar22 + 8) == 0) {
                  uVar18 = uVar19;
                }
                ::FString::AssignRange(&local_340,*(wchar_t **)pFVar22,uVar18);
                local_330 = *(undefined8 *)(pFVar22 + 0xb0);
                pFVar12 = FTelemetryRouter::Get();
                local_248.Data = &local_340;
                local_248.Size = 0x18;
                local_178 = Telemetry::AssetRegistry::FFileJournalWrappedTelemetry::TelemetryID;
                FTelemetryRouter::ProvideTelemetryInternal(pFVar12,&local_178,&local_248);
                FVar15.Data = local_340.Data.AllocatorInstance.Data;
              }
              else {
                if (2 < (byte)LogAssetRegistry._0_1_) {
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry)
                  ;
                }
                local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_380.Data.ArrayNum = 0;
                local_380.Data.ArrayMax = 0;
                local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                uVar18 = *(int *)(pFVar22 + 8) - 1;
                if (*(int *)(pFVar22 + 8) == 0) {
                  uVar18 = uVar19;
                }
                local_370.Data.ArrayNum = 0;
                local_370.Data.ArrayMax = 0;
                ::FString::AssignRange(&local_380,*(wchar_t **)pFVar22,uVar18);
                uVar18 = *(int *)(pFVar22 + 0x98) - 1;
                if (*(int *)(pFVar22 + 0x98) == 0) {
                  uVar18 = uVar19;
                }
                ::FString::AssignRange(&local_370,*(wchar_t **)(pFVar22 + 0x90),uVar18);
                pFVar12 = FTelemetryRouter::Get();
                local_238.Data = &local_380;
                local_238.Size = 0x20;
                local_188 = Telemetry::AssetRegistry::FFileJournalErrorTelemetry::TelemetryID;
                FTelemetryRouter::ProvideTelemetryInternal(pFVar12,&local_188,&local_238);
                FVar15.Data = local_380.Data.AllocatorInstance.Data;
                if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_370.Data.AllocatorInstance.Data);
                  FVar15.Data = local_380.Data.AllocatorInstance.Data;
                }
              }
              goto LAB_142b07769;
            }
            uStack_2fc = 1;
            uStack_2ec = uVar19;
            local_2e8 = uVar19;
            if (local_d0 != 0) {
              puVar21 = (uint *)(local_f8 + 0x10);
              if (local_d8 != (uint *)0x0) {
                puVar21 = local_d8;
              }
              uVar23 = *puVar21;
              local_2e8 = 0;
              uVar19 = 0;
              while (uVar23 == 0) {
                lVar20 = (longlong)(int)uVar19;
                local_2e8 = local_2e8 + 0x20;
                uVar19 = uVar19 + 1;
                uStack_2ec = local_d0;
                if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19
                   ) goto LAB_142b078b0;
                uVar23 = puVar21[lVar20 + 1];
              }
              uStack_2fc = -uVar23 & uVar23;
              uVar14 = (ulonglong)uStack_2fc * 2 + 1;
              lVar20 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_328.Value._0_4_ = (int)lVar20;
              uStack_2ec = (local_2e8 - 1) + (int)local_328.Value;
              if ((int)local_d0 < (int)uStack_2ec) {
                uStack_2ec = local_d0;
              }
            }
LAB_142b078b0:
            local_308 = (longlong *)local_f8;
            uStack_2e4 = local_fc;
            local_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
            uVar23 = local_d0 & 0xffffffe0;
            iStack_2e0 = local_f8._8_4_ - local_c4;
            TStack_290._padding_ = CONCAT44(uStack_2fc,uVar19);
            uStack_2f0 = 0xffffffff;
            TStack_290.CurrentBitIndex = uStack_2ec;
            TStack_290.UnvisitedBitMask = 0xffffffff;
            iVar9 = (int)local_d0 >> 5;
            TStack_290._28_4_ = local_fc;
            TStack_290.BaseBitIndex = local_2e8;
            uStack_270 = CONCAT44(uStack_2dc,iStack_2e0);
            bVar13 = (byte)local_d0;
            uStack_300 = uVar19;
            local_298 = local_308;
            TStack_290.Array = local_2f8;
            if (((int)local_d0 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (uVar18 != local_d0) {
              puVar21 = (uint *)(local_f8 + 0x10);
              if (local_d8 != (uint *)0x0) {
                puVar21 = local_d8;
              }
              uVar19 = -1 << (bVar13 & 0x1f) & puVar21[iVar9];
              while (uVar19 == 0) {
                lVar20 = (longlong)iVar9;
                uVar23 = uVar23 + 0x20;
                iVar9 = iVar9 + 1;
                uVar18 = local_d0;
                if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
                goto LAB_142b079d6;
                uVar19 = puVar21[lVar20 + 1];
              }
              uVar14 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
              lVar20 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_328.Value._4_4_ = (int)lVar20;
              uVar18 = (uVar23 - 1) + local_328.Value._4_4_;
              if ((int)local_d0 < (int)uVar18) {
                uVar18 = local_d0;
              }
            }
LAB_142b079d6:
            while( true ) {
              plVar6 = local_298;
              if ((int)local_298[1] - *(int *)((longlong)local_298 + 0x34) != (int)uStack_270) {
                local_406[0] = 0;
                `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_406);
              }
              if (((TStack_290.CurrentBitIndex == uVar18) &&
                  (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10)))
                 && (pIVar10 = local_318, pFVar22 = local_3f0, plVar6 == (longlong *)local_f8))
              break;
              lVar20 = *plVar6;
              pFVar11 = (FString *)(lVar20 + (longlong)TStack_290.CurrentBitIndex * 0x18);
              iVar9 = *(int *)(lVar20 + 8 + (longlong)TStack_290.CurrentBitIndex * 0x18);
              if (iVar9 == 0) {
                pwVar16 = L"";
                iVar9 = 0;
              }
              else {
                pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
                iVar9 = iVar9 + -1;
              }
              uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar16);
              iVar9 = TSet<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<FString>(this_00,uVar19,pFVar11);
              if (iVar9 != -1) {
                lVar17 = (longlong)iVar9 * 0x58 + *(longlong *)&this_00->Elements;
                lVar20 = lVar17 + 0x10;
                if (lVar17 == 0) {
                  lVar20 = 0;
                }
                if (lVar20 != 0) {
                  *(undefined1 *)(lVar20 + 0x34) = 0;
                  uVar4 = FileJournalFileHandleInvalid.Bytes._8_8_;
                  *(undefined8 *)(lVar20 + 0x20) = FileJournalFileHandleInvalid.Bytes._0_8_;
                  *(undefined8 *)(lVar20 + 0x28) = uVar4;
                  *(undefined4 *)(lVar20 + 0x30) = FileJournalFileHandleInvalid.Bytes._16_4_;
                }
              }
              TStack_290.UnvisitedBitMask =
                   TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
            }
          }
          local_b0 = 0;
          if (local_b8 != (void *)0x0) {
            FMemory::Free(local_b8);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_f8);
          local_a8.HashSize = 0;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_a8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FFileJournalFileHandle,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FFileJournalFileHandle,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_a8.Elements);
          uVar14 = (ulonglong)local_3e8;
          pFVar22 = pFVar22 + 0xc0;
        }
      }
      if (local_390 != (wchar_t *)0x0) {
        FMemory::Free(local_390);
      }
      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
      if (local_400 != (wchar_t *)0x0) {
        FMemory::Free(local_400);
      }
    }
    if (bVar24) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// QueueAdd @ 142b0e780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::QueueAdd
          (FAssetDataDiscoveryCache *this,FString *param_1,FCachedDirScanDir *param_2)

{
  atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
  aVar1;
  atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
  aVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_a8 [32];
  FScriptContainerElement *local_88;
  undefined8 local_80;
  FCachedDirScanDir local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->WriteEnabled == Never) {
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
  }
  else {
    local_88 = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80._0_4_ = (param_1->Data).ArrayNum;
    local_80._4_4_ = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    FCachedDirScanDir::FCachedDirScanDir(&local_78,param_2);
    aVar2 = (atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
             )FMemory::Malloc(0x58,8);
    pFVar3 = local_88;
    local_88 = (void *)0x0;
    *(FScriptContainerElement **)((longlong)aVar2 + 8) = pFVar3;
    *(undefined8 *)aVar2 = 0;
    *(int *)((longlong)aVar2 + 0x10) = (int)local_80;
    *(int *)((longlong)aVar2 + 0x14) = local_80._4_4_;
    local_80 = 0;
    FCachedDirScanDir::FCachedDirScanDir((FCachedDirScanDir *)((longlong)aVar2 + 0x18),&local_78);
    LOCK();
    aVar1 = (this->ScanQueueDirFullDatas).Head;
    (this->ScanQueueDirFullDatas).Head = aVar2;
    UNLOCK();
    *(atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
      *)aVar1 = aVar2;
    DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
              ((FCachedDirScanFile *)local_78.Files.AllocatorInstance.Data,local_78.Files.ArrayNum);
    if ((FCachedDirScanFile *)local_78.Files.AllocatorInstance.Data != (FCachedDirScanFile *)0x0) {
      FMemory::Free(local_78.Files.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_78.SubDirRelPaths.AllocatorInstance.Data,
               local_78.SubDirRelPaths.ArrayNum);
    if (local_78.SubDirRelPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.SubDirRelPaths.AllocatorInstance.Data);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
  }
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
            ((FCachedDirScanFile *)(param_2->Files).AllocatorInstance.Data,(param_2->Files).ArrayNum
            );
  pFVar3 = (param_2->Files).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)(param_2->SubDirRelPaths).AllocatorInstance.Data,
             (param_2->SubDirRelPaths).ArrayNum);
  pFVar3 = (param_2->SubDirRelPaths).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// QueueAdd @ 142b0e900

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::QueueAdd
          (FAssetDataDiscoveryCache *this,FString *param_1,FFileJournalFileHandle *param_2,
          bool param_3)

{
  atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*> aVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*> aVar7;
  FScriptContainerElement *pFVar8;
  
  if (this->WriteEnabled == Never) {
    pFVar8 = (param_1->Data).AllocatorInstance.Data;
  }
  else {
    pFVar8 = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = (param_1->Data).ArrayNum;
    iVar3 = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    aVar7 = (atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*>
             )FMemory::Malloc(0x30,8);
    uVar4 = *(undefined4 *)(param_2->Bytes + 0x10);
    uVar5 = *(undefined8 *)param_2->Bytes;
    uVar6 = *(undefined8 *)(param_2->Bytes + 8);
    *(undefined8 *)aVar7 = 0;
    *(FScriptContainerElement **)((longlong)aVar7 + 8) = pFVar8;
    *(int *)((longlong)aVar7 + 0x10) = iVar2;
    *(int *)((longlong)aVar7 + 0x14) = iVar3;
    *(undefined8 *)((longlong)aVar7 + 0x18) = uVar5;
    *(undefined8 *)((longlong)aVar7 + 0x20) = uVar6;
    *(undefined4 *)((longlong)aVar7 + 0x28) = uVar4;
    *(undefined1 *)((longlong)aVar7 + 0x2d) = 1;
    *(bool *)((longlong)aVar7 + 0x2c) = param_3;
    LOCK();
    aVar1 = (this->ScanQueueDirHandles).Head;
    (this->ScanQueueDirHandles).Head = aVar7;
    UNLOCK();
    *(atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*> *)
     aVar1 = aVar7;
    pFVar8 = (param_1->Data).AllocatorInstance.Data;
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// QueueConsume @ 142b0e9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b0f3a4) */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::QueueConsume(FAssetDataDiscoveryCache *this)

{
  int *piVar1;
  TOptional<bool> *pTVar2;
  TOptional<bool> *pTVar3;
  TArray<UE::AssetDataGather::Private::FCachedDirScanFile,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 *puVar5;
  atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*> aVar6;
  atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
  aVar7;
  code *pcVar8;
  uchar *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FCachedVolumeInfo *pFVar15;
  FCachedDirScanDir *pFVar16;
  ulonglong uVar17;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  FScriptContainerElement *pFVar22;
  undefined1 uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  ForAnyElementType FVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ForElementType<unsigned_int> FVar31;
  uchar uVar32;
  undefined4 uVar33;
  wchar_t *pwVar34;
  undefined1 uVar35;
  char cVar36;
  ulong64 uVar37;
  char cVar38;
  int iVar39;
  uchar auVar40 [4];
  uchar auVar41 [4];
  uchar auVar42 [4];
  uchar auVar43 [4];
  undefined1 auStack_3f8 [32];
  FString *local_3d8;
  FScriptContainerElement *local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  bool local_3a8;
  bool local_3a7;
  bool local_3a6;
  undefined1 local_3a5 [5];
  FString local_3a0;
  FAssetDataDiscoveryCache *local_390;
  wchar_t *local_388;
  wchar_t *local_380;
  int local_378;
  uint uStack_374;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_370;
  undefined4 local_368;
  int iStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  int local_354;
  undefined1 local_350 [16];
  longlong *local_340;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_338;
  wchar_t *local_318;
  undefined8 local_310;
  FCachedDirScanDir local_308;
  char local_2c8;
  wchar_t *local_2b8;
  undefined8 local_2b0;
  FCachedDirScanDir local_2a8;
  char local_268;
  wchar_t *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  TStringView<wchar_t> local_208;
  undefined8 local_1f8;
  int local_1f0;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8 [3];
  uchar local_174 [40];
  undefined1 local_14c;
  undefined1 local_11c;
  wchar_t *local_108;
  undefined8 local_100;
  FCachedDirScanDir local_f8;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  undefined1 local_68 [8];
  uchar local_60 [4];
  uchar auStack_5c [4];
  uchar auStack_58 [4];
  uchar auStack_54 [4];
  uchar local_50 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  if (this->WriteEnabled != Never) {
    local_380 = (wchar_t *)0x0;
    uVar32 = local_174[0];
    local_390 = this;
    while( true ) {
      aVar6 = ((this->ScanQueueDirHandles).Tail)->Next;
      if (aVar6 == (atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*>
                    )0x0) break;
      pwVar34 = *(wchar_t **)((longlong)aVar6 + 8);
      *(undefined8 *)((longlong)aVar6 + 8) = 0;
      iVar14 = *(int *)((longlong)aVar6 + 0x10);
      *(undefined8 *)((longlong)aVar6 + 0x10) = 0;
      cVar36 = *(char *)((longlong)aVar6 + 0x2d);
      uVar33 = *(undefined4 *)((longlong)aVar6 + 0x28);
      uVar10 = *(undefined8 *)((longlong)aVar6 + 0x18);
      uVar11 = *(undefined8 *)((longlong)aVar6 + 0x20);
      uVar35 = local_14c;
      if (cVar36 != '\0') {
        uVar35 = *(undefined1 *)((longlong)aVar6 + 0x2c);
      }
      if (*(void **)((longlong)aVar6 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)aVar6 + 8));
      }
      FMemory::Free((local_390->ScanQueueDirHandles).Tail);
      (local_390->ScanQueueDirHandles).Tail = (FNode *)aVar6;
      uVar23 = local_11c;
      if (cVar36 != '\0') {
        uVar23 = uVar35;
      }
      if (local_380 != (wchar_t *)0x0) {
        FMemory::Free(local_380);
      }
      this = local_390;
      if (cVar36 != '\0') {
        uVar32 = uVar23;
      }
      iStack_250 = iVar14 + -1;
      if (iVar14 == 0) {
        iStack_250 = 0;
      }
      local_1e8._12_4_ = uStack_24c;
      local_1e8.Size = iStack_250;
      local_380 = pwVar34;
      local_258 = pwVar34;
      local_1e8.DataPtr = pwVar34;
      pFVar15 = FindOrAddVolume(local_390,&local_1e8);
      if ((pFVar15->bJournalAvailable != false) || (this->WriteEnabled == Always)) {
        local_3a8 = false;
        iStack_220 = iVar14 + -1;
        if (iVar14 == 0) {
          iStack_220 = 0;
        }
        local_1d8._12_4_ = uStack_21c;
        local_1d8.Size = iStack_220;
        local_228 = pwVar34;
        local_1d8.DataPtr = pwVar34;
        pFVar16 = FCachedVolumeInfo::FindOrAddDir(pFVar15,&local_1d8,&local_3a8);
        *(undefined8 *)(pFVar16->JournalHandle).Bytes = uVar10;
        *(undefined8 *)((pFVar16->JournalHandle).Bytes + 8) = uVar11;
        *(undefined4 *)((pFVar16->JournalHandle).Bytes + 0x10) = uVar33;
        if ((TOptional<bool> *)local_174 != &pFVar16->bIsReparsePoint) {
          if (cVar36 == '\0') {
            if ((pFVar16->bIsReparsePoint).bIsSet != false) {
              (pFVar16->bIsReparsePoint).bIsSet = false;
            }
          }
          else {
            (pFVar16->bIsReparsePoint).TypedValue = (bool)uVar32;
            (pFVar16->bIsReparsePoint).bIsSet = true;
          }
        }
      }
    }
    local_100 = 0;
    local_f8.SubDirRelPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.SubDirRelPaths.ArrayNum = 0;
    local_f8.SubDirRelPaths.ArrayMax = 0;
    local_f8.Files.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Files.ArrayNum = 0;
    local_f8.Files.ArrayMax = 0;
    local_f8.JournalHandle.Bytes[0] = FileJournalFileHandleInvalid.Bytes[0];
    local_f8.JournalHandle.Bytes[1] = FileJournalFileHandleInvalid.Bytes[1];
    local_f8.JournalHandle.Bytes[2] = FileJournalFileHandleInvalid.Bytes[2];
    local_f8.JournalHandle.Bytes[3] = FileJournalFileHandleInvalid.Bytes[3];
    local_f8.JournalHandle.Bytes[4] = FileJournalFileHandleInvalid.Bytes[4];
    local_f8.JournalHandle.Bytes[5] = FileJournalFileHandleInvalid.Bytes[5];
    local_f8.JournalHandle.Bytes[6] = FileJournalFileHandleInvalid.Bytes[6];
    local_f8.JournalHandle.Bytes[7] = FileJournalFileHandleInvalid.Bytes[7];
    local_f8.JournalHandle.Bytes[8] = FileJournalFileHandleInvalid.Bytes[8];
    local_f8.JournalHandle.Bytes[9] = FileJournalFileHandleInvalid.Bytes[9];
    local_f8.JournalHandle.Bytes[10] = FileJournalFileHandleInvalid.Bytes[10];
    local_f8.JournalHandle.Bytes[0xb] = FileJournalFileHandleInvalid.Bytes[0xb];
    local_f8.JournalHandle.Bytes[0xc] = FileJournalFileHandleInvalid.Bytes[0xc];
    local_f8.JournalHandle.Bytes[0xd] = FileJournalFileHandleInvalid.Bytes[0xd];
    local_f8.JournalHandle.Bytes[0xe] = FileJournalFileHandleInvalid.Bytes[0xe];
    local_f8.JournalHandle.Bytes[0xf] = FileJournalFileHandleInvalid.Bytes[0xf];
    local_f8.bCacheValid = false;
    local_f8.bIsReparsePoint.TypedValue = false;
    local_f8.bIsReparsePoint.bIsSet = false;
    local_f8.bIsInsideReparsePoint.TypedValue = false;
    local_f8.JournalHandle.Bytes[0x10] = FileJournalFileHandleInvalid.Bytes[0x10];
    local_f8.JournalHandle.Bytes[0x11] = FileJournalFileHandleInvalid.Bytes[0x11];
    local_f8.JournalHandle.Bytes[0x12] = FileJournalFileHandleInvalid.Bytes[0x12];
    local_f8.JournalHandle.Bytes[0x13] = FileJournalFileHandleInvalid.Bytes[0x13];
    local_f8._56_8_ = 0;
    pwVar34 = (wchar_t *)0x0;
    while (aVar7 = ((this->ScanQueueDirFullDatas).Tail)->Next,
          aVar7 != (atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
                    )0x0) {
      local_2b8 = *(wchar_t **)((longlong)aVar7 + 8);
      *(undefined8 *)((longlong)aVar7 + 8) = 0;
      local_2b0 = *(undefined8 *)((longlong)aVar7 + 0x10);
      *(undefined8 *)((longlong)aVar7 + 0x10) = 0;
      FCachedDirScanDir::FCachedDirScanDir(&local_2a8,(FCachedDirScanDir *)((longlong)aVar7 + 0x18))
      ;
      local_268 = '\x01';
      DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
                (*(FCachedDirScanFile **)((longlong)aVar7 + 0x28),*(int *)((longlong)aVar7 + 0x30));
      if (*(void **)((longlong)aVar7 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)aVar7 + 0x28));
      }
      DestructItems<FString,int>
                (*(FString **)((longlong)aVar7 + 0x18),*(int *)((longlong)aVar7 + 0x20));
      if (*(void **)((longlong)aVar7 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)aVar7 + 0x18));
      }
      if (*(void **)((longlong)aVar7 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)aVar7 + 8));
      }
      FMemory::Free((this->ScanQueueDirFullDatas).Tail);
      local_318 = local_2b8;
      local_310 = local_2b0;
      local_2b0 = 0;
      (this->ScanQueueDirFullDatas).Tail = (FNode *)aVar7;
      local_2c8 = '\x01';
      local_2b8 = (void *)0x0;
      FCachedDirScanDir::FCachedDirScanDir(&local_308,&local_2a8);
      FVar26.Data = local_2a8.Files.AllocatorInstance.Data;
      if (local_268 != '\0') {
        DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
                  ((FCachedDirScanFile *)local_2a8.Files.AllocatorInstance.Data,
                   local_2a8.Files.ArrayNum);
        if ((FCachedDirScanFile *)FVar26.Data != (FCachedDirScanFile *)0x0) {
          FMemory::Free(FVar26.Data);
        }
        FVar26.Data = local_2a8.SubDirRelPaths.AllocatorInstance.Data;
        DestructItems<FString,int>
                  ((FString *)local_2a8.SubDirRelPaths.AllocatorInstance.Data,
                   local_2a8.SubDirRelPaths.ArrayNum);
        if (FVar26.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar26.Data);
        }
        if (local_2b8 != (void *)0x0) {
          FMemory::Free(local_2b8);
        }
      }
      if (local_2c8 == '\0') break;
      if (pwVar34 != (wchar_t *)0x0) {
        FMemory::Free(pwVar34);
      }
      local_108 = local_318;
      local_100 = local_310;
      local_310 = 0;
      local_318 = (wchar_t *)0x0;
      FCachedDirScanDir::operator=(&local_f8,&local_308);
      FVar26.Data = local_308.Files.AllocatorInstance.Data;
      if (local_2c8 != '\0') {
        DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
                  ((FCachedDirScanFile *)local_308.Files.AllocatorInstance.Data,
                   local_308.Files.ArrayNum);
        if ((FCachedDirScanFile *)FVar26.Data != (FCachedDirScanFile *)0x0) {
          FMemory::Free(FVar26.Data);
        }
        FVar26.Data = local_308.SubDirRelPaths.AllocatorInstance.Data;
        DestructItems<FString,int>
                  ((FString *)local_308.SubDirRelPaths.AllocatorInstance.Data,
                   local_308.SubDirRelPaths.ArrayNum);
        if (FVar26.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar26.Data);
        }
        if (local_318 != (wchar_t *)0x0) {
          FMemory::Free(local_318);
        }
      }
      pwVar34 = local_108;
      iVar39 = (int)local_100;
      local_238 = local_108;
      local_388 = local_108;
      iVar14 = (int)local_100 + -1;
      iVar13 = iVar14;
      if ((int)local_100 == 0) {
        iVar13 = 0;
      }
      local_1c8._12_4_ = uStack_22c;
      local_1c8.Size = iVar13;
      local_1c8.DataPtr = local_108;
      iStack_230 = iVar13;
      pFVar15 = FindOrAddVolume(this,&local_1c8);
      local_248 = pwVar34;
      local_1b8._12_4_ = uStack_23c;
      local_1b8.Size = iVar13;
      local_1b8.DataPtr = pwVar34;
      local_3a7 = false;
      local_350._8_8_ = pFVar15;
      iStack_240 = iVar13;
      bVar12 = FindOrAddIsReparsePointRecursive(&local_1b8,pFVar15,&local_3a7);
      if ((!bVar12) && ((pFVar15->bJournalAvailable != false || (this->WriteEnabled == Always)))) {
        local_218 = pwVar34;
        local_3a6 = false;
        iStack_210 = 0;
        if (iVar39 != 0) {
          iStack_210 = iVar14;
        }
        local_1a8[0]._12_4_ = uStack_20c;
        local_1a8[0].Size = iStack_210;
        local_1a8[0].DataPtr = pwVar34;
        pFVar16 = FCachedVolumeInfo::FindOrAddDir(pFVar15,local_1a8,&local_3a6);
        FVar26.Data = local_f8.SubDirRelPaths.AllocatorInstance.Data;
        if ((pFVar16->SubDirRelPaths).ArrayNum != 0) {
          iVar14 = local_f8.SubDirRelPaths.ArrayNum;
          uVar37 = (ulong64)local_f8.SubDirRelPaths.ArrayNum;
          if ((local_f8.SubDirRelPaths.ArrayNum < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_b8._0_8_ = (FScriptContainerElement *)0x0;
          local_b8._8_8_ = 0;
          local_98 = (ForElementType<unsigned_int>)0x0;
          local_90 = 0;
          local_8c = 0x80;
          local_88 = -1;
          local_84 = 0;
          local_78.Data = (FScriptContainerElement *)0x0;
          local_70 = 0;
          if (iVar14 != 0) {
            if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidSetNum(uVar37);
            }
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_b8,iVar14);
            uVar24 = 1;
            if (3 < (uint)iVar14) {
              uVar29 = (ulonglong)(((uint)iVar14 >> 1) + 7) * 2 + 1;
              lVar20 = 0x3f;
              if (uVar29 != 0) {
                for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_358 = (undefined4)lVar20;
              uVar24 = 1 << ((byte)lVar20 & 0x1f);
            }
            if ((local_70 == 0) || ((int)local_70 < (int)uVar24)) {
              local_70 = uVar24;
              if (local_78.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_78,0,0,4);
              }
              if (uVar24 != 0) {
                uVar28 = uVar24;
                if (uVar24 < 2) {
                  if (local_78.Data != (FScriptContainerElement *)0x0) {
                    uVar28 = 0;
                    goto LAB_142b0eff4;
                  }
                }
                else {
LAB_142b0eff4:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_78,0,uVar28,4);
                }
                if (0 < (int)uVar24) {
                  uVar30 = (ulonglong)uVar24;
                  uVar29 = 0;
                  do {
                    FVar19.Data = local_80;
                    if (local_78.Data != (FScriptContainerElement *)0x0) {
                      FVar19.Data = local_78.Data;
                    }
                    uVar17 = uVar29 & (longlong)(int)uVar24 - 1U;
                    uVar29 = uVar29 + 1;
                    *(undefined4 *)(FVar19.Data + uVar17 * 4) = 0xffffffff;
                    uVar30 = uVar30 - 1;
                  } while (uVar30 != 0);
                }
              }
              if (local_70 != 0) {
                pTStack_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
                local_378 = 0;
                uStack_374 = 1;
                iStack_364 = 0;
                iStack_360 = 0;
                if (local_90 != 0) {
                  FVar31 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
                  if (local_98 != (ForElementType<unsigned_int>)0x0) {
                    FVar31 = local_98;
                  }
                  uVar24 = *(uint *)FVar31;
                  while (uVar24 == 0) {
                    iStack_360 = iStack_360 + 0x20;
                    lVar20 = (longlong)local_378;
                    local_378 = local_378 + 1;
                    if ((int)(local_90 + -1 + (local_90 + -1 >> 0x1f & 0x1fU)) >> 5 < local_378)
                    goto LAB_142b0f10c;
                    uVar24 = ((uint *)((longlong)FVar31 + 4))[lVar20];
                  }
                  uStack_374 = -uVar24 & uVar24;
                  uVar29 = (ulonglong)uStack_374 * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar29 != 0) {
                    for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  local_354 = (int)lVar20;
                  iStack_364 = local_354 + -1 + iStack_360;
                  if (local_90 < iStack_364) {
LAB_142b0f10c:
                    iStack_364 = local_90;
                  }
                }
                local_368 = 0xffffffff;
                local_340 = (longlong *)local_b8;
                local_338._padding_ = CONCAT44(uStack_374,local_378);
                local_338.CurrentBitIndex = iStack_364;
                local_338.UnvisitedBitMask = 0xffffffff;
                local_338._28_4_ = uStack_35c;
                local_338.BaseBitIndex = iStack_360;
                local_338.Array = pTStack_370;
                if (iStack_364 < local_90) {
                  iVar14 = iStack_364;
                  do {
                    puVar5 = (undefined8 *)(*local_340 + (longlong)iVar14 * 0x18);
                    iVar39 = *(int *)(*local_340 + 8 + (longlong)iVar14 * 0x18);
                    if (iVar39 == 0) {
                      pwVar21 = L"";
                      iVar39 = 0;
                    }
                    else {
                      pwVar21 = (wchar_t *)*puVar5;
                      iVar39 = iVar39 + -1;
                    }
                    uVar24 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar39,pwVar21);
                    uVar24 = local_70 - 1 & uVar24;
                    *(uint *)((longlong)puVar5 + 0x14) = uVar24;
                    FVar19.Data = local_80;
                    if (local_78.Data != (FScriptContainerElement *)0x0) {
                      FVar19.Data = local_78.Data;
                    }
                    uVar29 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar24;
                    *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(FVar19.Data + uVar29 * 4);
                    *(int *)(FVar19.Data + uVar29 * 4) = iVar14;
                    local_338.UnvisitedBitMask =
                         local_338.UnvisitedBitMask & ~local_338._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_338);
                    iVar14 = local_338.CurrentBitIndex;
                  } while (local_338.CurrentBitIndex < (local_338.Array)->NumBits);
                  iVar39 = (int)local_100;
                }
              }
            }
          }
          pFVar25 = FVar26.Data + uVar37 * 0x10;
          for (; FVar26.Data != pFVar25; FVar26.Data = FVar26.Data + 0x10) {
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_b8,
                       (FString *)local_350,(bool *)FVar26.Data);
          }
          iVar14 = (pFVar16->SubDirRelPaths).ArrayNum;
          pFVar25 = (pFVar16->SubDirRelPaths).AllocatorInstance.Data;
          pFVar27 = pFVar25 + (longlong)iVar14 * 0x10;
          while( true ) {
            if ((pFVar16->SubDirRelPaths).ArrayNum != iVar14) {
              local_3a5[0] = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_3a5);
            }
            iVar13 = 0;
            if (pFVar25 == pFVar27) break;
            if (*(int *)(pFVar25 + 8) == 0) {
              pwVar21 = L"";
            }
            else {
              pwVar21 = *(wchar_t **)&pFVar25->field_0x0;
              iVar13 = *(int *)(pFVar25 + 8) + -1;
            }
            uVar24 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar21);
            iVar13 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                     FindIndexByHash<FString>
                               ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                                local_b8,uVar24,(FString *)pFVar25);
            uVar10 = local_350._8_8_;
            if (iVar13 == -1) {
              local_208.Size = iVar39 + -1;
              local_208.DataPtr = pwVar34;
              if (iVar39 == 0) {
                local_208.Size = 0;
              }
              local_1f8 = *(undefined8 *)&pFVar25->field_0x0;
              local_1f0 = *(int *)(pFVar25 + 8) + -1;
              if (*(int *)(pFVar25 + 8) == 0) {
                local_1f0 = 0;
              }
              FPaths::CombineInternal(&local_3a0,&local_208,2);
              pFVar22 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x70))->
                        AllocatorInstance).Data;
              if ((pFVar22 <= (FScriptContainerElement *)&local_3a0) &&
                 (lVar20 = (longlong)
                           ((TArray<FString,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x70))->
                           ArrayMax, (FScriptContainerElement *)&local_3a0 < pFVar22 + lVar20 * 0x10
                 )) {
                local_3c0 = (longlong)
                            ((TArray<FString,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x70))->
                            ArrayNum;
                local_3b8 = 0x10;
                local_3d8 = &local_3a0;
                local_3d0 = pFVar22;
                local_3c8 = lVar20;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              iVar13 = ((TArray<FString,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x70))->ArrayNum;
              piVar1 = &((TArray<FString,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x70))->ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)(uVar10 + 0x70),piVar1);
              }
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x70))->ArrayNum =
                   iVar13 + 1;
              pFVar22 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x70))->
                        AllocatorInstance).Data + (longlong)iVar13 * 0x10;
              *(undefined8 *)pFVar22 = 0;
              *(FScriptContainerElement **)pFVar22 = local_3a0.Data.AllocatorInstance.Data;
              local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar22 + 8) = local_3a0.Data.ArrayNum;
              *(int *)(pFVar22 + 0xc) = local_3a0.Data.ArrayMax;
              local_3a0.Data.ArrayNum = 0;
              local_3a0.Data.ArrayMax = 0;
            }
            pFVar25 = pFVar25 + 0x10;
          }
          local_388 = pwVar34;
          local_70 = 0;
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_b8);
        }
        iVar14 = memcmp(&local_f8.JournalHandle,&FileJournalFileHandleInvalid,0x14);
        if (iVar14 == 0) {
          if (((*(longlong *)(pFVar16->JournalHandle).Bytes ==
                FileJournalFileHandleInvalid.Bytes._0_8_) &&
              (*(longlong *)((pFVar16->JournalHandle).Bytes + 8) ==
               FileJournalFileHandleInvalid.Bytes._8_8_)) &&
             (*(int *)((pFVar16->JournalHandle).Bytes + 0x10) ==
              FileJournalFileHandleInvalid.Bytes._16_4_)) {
            this_00 = FPlatformFileManager::Get();
            pIVar18 = FPlatformFileManager::GetPlatformFile(this_00);
            pwVar21 = L"";
            if (iVar39 != 0) {
              pwVar21 = pwVar34;
            }
            (**(code **)((longlong)*pIVar18 + 0x178))(pIVar18,local_68,pwVar21,0);
            local_f8.JournalHandle.Bytes[0x10] = local_50[0];
            local_f8.JournalHandle.Bytes[0x11] = local_50[1];
            local_f8.JournalHandle.Bytes[0x12] = local_50[2];
            local_f8.JournalHandle.Bytes[0x13] = local_50[3];
            local_f8.JournalHandle.Bytes[4] = auStack_5c[0];
            local_f8.JournalHandle.Bytes[5] = auStack_5c[1];
            local_f8.JournalHandle.Bytes[6] = auStack_5c[2];
            local_f8.JournalHandle.Bytes[7] = auStack_5c[3];
            local_f8.JournalHandle.Bytes[0] = local_60[0];
            local_f8.JournalHandle.Bytes[1] = local_60[1];
            local_f8.JournalHandle.Bytes[2] = local_60[2];
            local_f8.JournalHandle.Bytes[3] = local_60[3];
            local_f8.JournalHandle.Bytes[0xc] = auStack_54[0];
            local_f8.JournalHandle.Bytes[0xd] = auStack_54[1];
            local_f8.JournalHandle.Bytes[0xe] = auStack_54[2];
            local_f8.JournalHandle.Bytes[0xf] = auStack_54[3];
            local_f8.JournalHandle.Bytes[8] = auStack_58[0];
            local_f8.JournalHandle.Bytes[9] = auStack_58[1];
            local_f8.JournalHandle.Bytes[10] = auStack_58[2];
            local_f8.JournalHandle.Bytes[0xb] = auStack_58[3];
            auVar40 = local_60;
            auVar41 = auStack_5c;
            auVar42 = auStack_58;
            auVar43 = auStack_54;
            uVar33 = local_50._0_4_;
          }
          else {
            auVar40 = *(uchar (*) [4])(pFVar16->JournalHandle).Bytes;
            auVar41 = *(uchar (*) [4])((pFVar16->JournalHandle).Bytes + 4);
            local_f8.JournalHandle.Bytes._0_8_ = *(undefined8 *)(pFVar16->JournalHandle).Bytes;
            puVar9 = (pFVar16->JournalHandle).Bytes + 8;
            auVar42 = *(uchar (*) [4])puVar9;
            auVar43 = *(uchar (*) [4])((pFVar16->JournalHandle).Bytes + 0xc);
            local_f8.JournalHandle.Bytes._8_8_ = *(undefined8 *)puVar9;
            uVar33 = *(undefined4 *)((pFVar16->JournalHandle).Bytes + 0x10);
            local_f8.JournalHandle.Bytes[0x10] = (uchar)uVar33;
            local_f8.JournalHandle.Bytes[0x11] = SUB41(uVar33,1);
            local_f8.JournalHandle.Bytes[0x12] = SUB41(uVar33,2);
            local_f8.JournalHandle.Bytes[0x13] = SUB41(uVar33,3);
          }
        }
        else {
          auVar40 = (uchar  [4])local_f8.JournalHandle.Bytes._0_4_;
          auVar41 = (uchar  [4])local_f8.JournalHandle.Bytes._4_4_;
          auVar42 = (uchar  [4])local_f8.JournalHandle.Bytes._8_4_;
          auVar43 = (uchar  [4])local_f8.JournalHandle.Bytes._12_4_;
          uVar33 = local_f8.JournalHandle.Bytes._16_4_;
        }
        pTVar2 = &pFVar16->bIsReparsePoint;
        if (pTVar2 == &local_f8.bIsReparsePoint) {
          cVar36 = local_f8.bIsReparsePoint.bIsSet;
        }
        else if ((pFVar16->bIsReparsePoint).bIsSet == false) {
          local_f8.bIsReparsePoint.bIsSet = false;
          cVar36 = '\0';
        }
        else {
          local_f8.bIsReparsePoint.TypedValue = pTVar2->TypedValue;
          local_f8.bIsReparsePoint.bIsSet = true;
          cVar36 = '\x01';
        }
        pTVar3 = &pFVar16->bIsInsideReparsePoint;
        if (pTVar3 == &local_f8.bIsInsideReparsePoint) {
          cVar38 = local_f8.bIsInsideReparsePoint.bIsSet;
        }
        else if ((pFVar16->bIsInsideReparsePoint).bIsSet == false) {
          local_f8._56_8_ = (ulonglong)(uint7)local_f8._57_7_ << 8;
          cVar38 = '\0';
        }
        else {
          local_f8.bIsInsideReparsePoint.TypedValue = pTVar3->TypedValue;
          local_f8.bIsInsideReparsePoint.bIsSet = true;
          cVar38 = '\x01';
        }
        if (pFVar16 != &local_f8) {
          DestructItems<FString,int>
                    ((FString *)(pFVar16->SubDirRelPaths).AllocatorInstance.Data,
                     (pFVar16->SubDirRelPaths).ArrayNum);
          pFVar25 = (pFVar16->SubDirRelPaths).AllocatorInstance.Data;
          if (pFVar25 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar25);
          }
          (pFVar16->SubDirRelPaths).AllocatorInstance.Data =
               local_f8.SubDirRelPaths.AllocatorInstance.Data;
          (pFVar16->SubDirRelPaths).ArrayNum = local_f8.SubDirRelPaths.ArrayNum;
          (pFVar16->SubDirRelPaths).ArrayMax = local_f8.SubDirRelPaths.ArrayMax;
          local_f8.SubDirRelPaths.ArrayNum = 0;
          local_f8.SubDirRelPaths.ArrayMax = 0;
          local_f8.SubDirRelPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        pTVar4 = &pFVar16->Files;
        if (pTVar4 != &local_f8.Files) {
          DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
                    ((FCachedDirScanFile *)(pTVar4->AllocatorInstance).Data,
                     (pFVar16->Files).ArrayNum);
          pFVar25 = (pTVar4->AllocatorInstance).Data;
          if (pFVar25 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar25);
          }
          (pTVar4->AllocatorInstance).Data = local_f8.Files.AllocatorInstance.Data;
          (pFVar16->Files).ArrayNum = local_f8.Files.ArrayNum;
          (pFVar16->Files).ArrayMax = local_f8.Files.ArrayMax;
          local_f8.Files.ArrayNum = 0;
          local_f8.Files.ArrayMax = 0;
          local_f8.Files.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        pFVar16->bCacheValid = local_f8.bCacheValid;
        *(uchar (*) [4])(pFVar16->JournalHandle).Bytes = auVar40;
        *(uchar (*) [4])((pFVar16->JournalHandle).Bytes + 4) = auVar41;
        *(uchar (*) [4])((pFVar16->JournalHandle).Bytes + 8) = auVar42;
        *(uchar (*) [4])((pFVar16->JournalHandle).Bytes + 0xc) = auVar43;
        *(undefined4 *)((pFVar16->JournalHandle).Bytes + 0x10) = uVar33;
        if (&local_f8.bIsReparsePoint != pTVar2) {
          if (cVar36 == '\0') {
            if ((pFVar16->bIsReparsePoint).bIsSet != false) {
              (pFVar16->bIsReparsePoint).bIsSet = false;
            }
          }
          else {
            pTVar2->TypedValue = local_f8.bIsReparsePoint.TypedValue;
            (pFVar16->bIsReparsePoint).bIsSet = true;
          }
        }
        if (&local_f8.bIsInsideReparsePoint != pTVar3) {
          if (cVar38 == '\0') {
            if ((pFVar16->bIsInsideReparsePoint).bIsSet != false) {
              (pFVar16->bIsInsideReparsePoint).bIsSet = false;
            }
          }
          else {
            pTVar3->TypedValue = local_f8.bIsInsideReparsePoint.TypedValue;
            (pFVar16->bIsInsideReparsePoint).bIsSet = true;
          }
        }
        pFVar16->bCacheValid = true;
        pwVar34 = local_388;
        this = local_390;
      }
    }
    FVar26.Data = local_f8.Files.AllocatorInstance.Data;
    DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
              ((FCachedDirScanFile *)local_f8.Files.AllocatorInstance.Data,local_f8.Files.ArrayNum);
    if ((FCachedDirScanFile *)FVar26.Data != (FCachedDirScanFile *)0x0) {
      FMemory::Free(FVar26.Data);
    }
    FVar26.Data = local_f8.SubDirRelPaths.AllocatorInstance.Data;
    DestructItems<FString,int>
              ((FString *)local_f8.SubDirRelPaths.AllocatorInstance.Data,
               local_f8.SubDirRelPaths.ArrayNum);
    if (FVar26.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar26.Data);
    }
    if (pwVar34 != (wchar_t *)0x0) {
      FMemory::Free(pwVar34);
    }
    if (local_380 != (wchar_t *)0x0) {
      FMemory::Free(local_380);
    }
  }
  return;
}

// RemoveDir @ 142b15a90

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::RemoveDir
          (FAssetDataDiscoveryCache *this,TStringView<wchar_t> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar12;
  longlong lVar13;
  FCachedVolumeInfo *this_00;
  int iVar14;
  FScriptContainerElement *pFVar15;
  int local_res18;
  FString local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FScriptContainerElement *pFVar11;
  
  local_88.DataPtr = param_1->DataPtr;
  local_88.Size = param_1->Size;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar11 = (FScriptContainerElement *)0x0;
  uVar10 = 0;
  local_a8.DataPtr = (wchar_t *)0x0;
  local_a8.Size = 0;
  local_98.DataPtr = (wchar_t *)0x0;
  local_98.Size = 0;
  FPathViews::SplitVolumeSpecifier(&local_88,&local_a8,&local_98);
  local_res18 = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_78,local_a8.DataPtr,local_a8.Size);
  pFVar15 = pFVar11;
  if (&local_58 != pFVar6) {
    pFVar15 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res18 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = (this->CachedVolumes).Pairs.AllocatorInstance.Data;
  uVar5 = (this->CachedVolumes).Pairs.ArrayNum;
  if (0 < (int)uVar5) {
    do {
      uVar12 = uVar5 >> 1;
      iVar14 = uVar12 + (int)pFVar11;
      pFVar7 = pFVar1 + (longlong)iVar14 * 0xc0;
      pFVar8 = (FScriptContainerElement *)L"";
      if (local_res18 != 0) {
        pFVar8 = pFVar15;
      }
      if (*(int *)(pFVar7 + 8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)pFVar7;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar9,(wchar_t *)pFVar8);
      if (iVar4 < 0) {
        pFVar11 = (FScriptContainerElement *)(ulonglong)((uVar5 & 1) + iVar14);
      }
      uVar10 = (uint)pFVar11;
      uVar5 = uVar12;
    } while (uVar12 != 0);
  }
  if ((int)uVar10 < (this->CachedVolumes).Pairs.ArrayNum) {
    pFVar11 = (this->CachedVolumes).Pairs.AllocatorInstance.Data;
    lVar13 = (longlong)(int)uVar10 * 0xc0;
    if (*(int *)(pFVar11 + lVar13 + 8) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)(pFVar11 + lVar13);
    }
    pFVar11 = (FScriptContainerElement *)L"";
    if (local_res18 != 0) {
      pFVar11 = pFVar15;
    }
    iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar11,pwVar9);
    if ((-1 < iVar14) && (uVar10 != 0xffffffff)) {
      uVar5 = 0;
      if ((int)uVar10 < (this->CachedVolumes).Pairs.ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FCachedVolumeInfo *)
                ((this->CachedVolumes).Pairs.AllocatorInstance.Data + lVar13 + 0x10);
      if (this_00 != (FCachedVolumeInfo *)0x0) {
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
        pFVar6 = ::FString::ConstructFromPtrSize
                           (&local_68,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
        if (&local_c8 != pFVar6) {
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          local_c8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_c8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.ArrayNum = 1;
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
        ConstructItems<FString,FString,int>(local_b8.AllocatorInstance.Data,&local_c8,1);
        FCachedVolumeInfo::RemoveDirs(this_00,&local_b8);
        DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
        if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  return;
}

// SaveCache @ 142b1aa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::SaveCache(FAssetDataDiscoveryCache *this)

{
  FSharedBuffer FVar1;
  IFileManager *pIVar2;
  FArchive *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 auStack_168 [32];
  FKeyForward local_148 [8];
  FString local_140;
  FGuid local_128;
  wchar_t *local_118;
  undefined4 local_110;
  TMemoryView<void_const_> local_108;
  FLargeMemoryWriter local_f8;
  FCompressedBuffer local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (this->WriteEnabled != Never) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId243,"AssetDataGatherSaveDiscoveryCache",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererDiscoveryCache.cpp"
                 ,0xf3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId243);
    }
    iVar4 = (this->CachedVolumes).Pairs.ArrayNum;
    pFVar6 = (this->CachedVolumes).Pairs.AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar4 * 0xc0;
    while( true ) {
      if ((this->CachedVolumes).Pairs.ArrayNum != iVar4) {
        `TCheckedPointerIterator<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_148);
      }
      if (pFVar6 == pFVar7) break;
      FCachedVolumeInfo::RemoveDirs
                ((FCachedVolumeInfo *)(pFVar6 + 0x10),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar6 + 0x80));
      pFVar6 = pFVar6 + 0xc0;
    }
    local_110 = 0x20;
    iVar4 = GGatherSettings.AssetRegistryCacheRootFolder.Data.ArrayNum + -1;
    if (GGatherSettings.AssetRegistryCacheRootFolder.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    local_128.C = iVar4;
    local_128._0_8_ = GGatherSettings.AssetRegistryCacheRootFolder.Data.AllocatorInstance.Data;
    local_118 = L"CachedAssetRegistryDiscovery.bin";
    FPaths::CombineInternal(&local_140,(TStringView<wchar_t> *)&local_128,2);
    FLargeMemoryWriter::FLargeMemoryWriter(&local_f8,0,false,(wchar_t *)0x0);
    local_128 = AssetDataGathererConstants::DiscoveryCacheVersion;
    ::operator<<((FArchive *)&local_f8,&local_128);
    TArrayPrivateFriend::
    Serialize<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_f8,
               (TArray<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
                *)this);
    if (((byte)local_f8._padding_ & 1) != 0) {
      AlgoImpl::
      IntroSortInternal<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int,TSortedMap<FString,UE::AssetDataGather::Private::FCachedVolumeInfo,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
                 (this->CachedVolumes).Pairs.AllocatorInstance.Data,
                 (this->CachedVolumes).Pairs.ArrayNum,local_148[0],
                 (TLess<FString_const_&>)local_148[0]);
    }
    local_128._0_8_ = FLargeMemoryWriter::GetData(&local_f8);
    local_128.C = (undefined4)local_f8.Data.NumBytes;
    local_128.D = local_f8.Data.NumBytes._4_4_;
    FVar1 = FSharedBuffer::MakeView(&local_108);
    FCompressedBuffer::Compress(&local_38,(FSharedBuffer *)FVar1.Owner.Owner);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_108);
    pIVar2 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar5.Data = local_140.Data.AllocatorInstance.Data;
    }
    pFVar3 = (FArchive *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,FVar5.Data,0);
    if (pFVar3 == (FArchive *)0x0) {
      if (2 < (byte)LogAssetRegistry._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
    }
    else {
      FCompressedBuffer::Save(&local_38,pFVar3);
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
    FCompositeBuffer::~FCompositeBuffer(&local_38.CompressedData);
    FLargeMemoryWriter::~FLargeMemoryWriter(&local_f8);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// SerializeReadCacheFile @ 142b1d820

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::SerializeReadCacheFile
          (FAssetDataDiscoveryCache *this,FArchive *param_1,bool *param_2)

{
  int *piVar1;
  FKeyForward local_res18;
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  ::operator<<(param_1,&local_18);
  *param_2 = (((local_18.C ^ 0x97f7e0f0) != 0 || (local_18.B ^ 0x1bc44658) != 0) ||
             (local_18.A ^ 0x18a13604) != 0) || (local_18.D ^ 0x47a84ca2) != 0;
  if ((((local_18.C ^ 0x97f7e0f0) == 0 && (local_18.B ^ 0x1bc44658) == 0) &&
      (local_18.A ^ 0x18a13604) == 0) && (local_18.D ^ 0x47a84ca2) == 0) {
    DestructItems<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int>
              ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
               (this->CachedVolumes).Pairs.AllocatorInstance.Data,
               (this->CachedVolumes).Pairs.ArrayNum);
    piVar1 = &(this->CachedVolumes).Pairs.ArrayMax;
    (this->CachedVolumes).Pairs.ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,8,0,(ForAnyElementType *)this,0,piVar1);
    }
    TArrayPrivateFriend::
    Serialize<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
                        *)this);
    if ((param_1->field_0x28 & 1) != 0) {
      AlgoImpl::
      IntroSortInternal<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int,TSortedMap<FString,UE::AssetDataGather::Private::FCachedVolumeInfo,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
                 (this->CachedVolumes).Pairs.AllocatorInstance.Data,
                 (this->CachedVolumes).Pairs.ArrayNum,local_res18,
                 (TLess<FString_const_&>)local_res18);
    }
  }
  else {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// SerializeWriteCacheFile @ 142b1de20

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::SerializeWriteCacheFile
          (FAssetDataDiscoveryCache *this,FArchive *param_1)

{
  FKeyForward local_res8;
  FGuid local_18;
  
  local_18 = AssetDataGathererConstants::DiscoveryCacheVersion;
  ::operator<<(param_1,&local_18);
  TArrayPrivateFriend::
  Serialize<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
                      *)this);
  if ((param_1->field_0x28 & 1) != 0) {
    AlgoImpl::
    IntroSortInternal<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int,TSortedMap<FString,UE::AssetDataGather::Private::FCachedVolumeInfo,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
              ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
               (this->CachedVolumes).Pairs.AllocatorInstance.Data,
               (this->CachedVolumes).Pairs.ArrayNum,local_res8,(TLess<FString_const_&>)local_res8);
  }
  return;
}

// Shutdown @ 142b225e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b22859) */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::Shutdown(FAssetDataDiscoveryCache *this)

{
  int *piVar1;
  atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
  aVar2;
  atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*> aVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  FCachedDirScanFile *pFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FCachedDirScanFile *pFVar12;
  ForAnyElementType FVar13;
  FCachedDirScanFile *pFVar14;
  ForAnyElementType FVar15;
  undefined1 auStackY_178 [32];
  FCachedDirScanDir local_138;
  char local_f8;
  FCachedDirScanFile *local_e8;
  undefined8 local_e0;
  FCachedDirScanDir local_d8;
  char local_98;
  FCachedDirScanFile *local_88;
  undefined8 local_80;
  FCachedDirScanDir local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this->WriteEnabled = Never;
  DestructItems<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int>
            ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
             (this->CachedVolumes).Pairs.AllocatorInstance.Data,(this->CachedVolumes).Pairs.ArrayNum
            );
  pFVar14 = (FCachedDirScanFile *)0x0;
  piVar1 = &(this->CachedVolumes).Pairs.ArrayMax;
  (this->CachedVolumes).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  aVar2 = ((this->ScanQueueDirFullDatas).Tail)->Next;
  uVar10 = FileJournalFileHandleInvalid.Bytes._0_8_;
  uVar11 = FileJournalFileHandleInvalid.Bytes._8_8_;
  uVar4 = local_78.JournalHandle.Bytes._0_8_;
  uVar5 = local_78.JournalHandle.Bytes._8_8_;
  while (local_78.JournalHandle.Bytes._8_8_ = uVar11, local_78.JournalHandle.Bytes._0_8_ = uVar10,
        FileJournalFileHandleInvalid.Bytes._0_8_ = local_78.JournalHandle.Bytes._0_8_,
        FileJournalFileHandleInvalid.Bytes._8_8_ = local_78.JournalHandle.Bytes._8_8_,
        aVar2 != (atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
                  )0x0) {
    local_80 = 0;
    aVar2 = ((this->ScanQueueDirFullDatas).Tail)->Next;
    local_78.SubDirRelPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.SubDirRelPaths.ArrayNum = 0;
    local_78.SubDirRelPaths.ArrayMax = 0;
    local_78.Files.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Files.ArrayNum = 0;
    local_78.Files.ArrayMax = 0;
    local_78.bCacheValid = false;
    local_78.bIsReparsePoint.TypedValue = false;
    local_78.bIsReparsePoint.bIsSet = false;
    local_78.bIsInsideReparsePoint.TypedValue = false;
    local_78.JournalHandle.Bytes[0x10] = (char)FileJournalFileHandleInvalid.Bytes._16_4_;
    local_78.JournalHandle.Bytes[0x11] =
         (char)((uint)FileJournalFileHandleInvalid.Bytes._16_4_ >> 8);
    local_78.JournalHandle.Bytes[0x12] =
         (char)((uint)FileJournalFileHandleInvalid.Bytes._16_4_ >> 0x10);
    local_78.JournalHandle.Bytes[0x13] =
         (char)((uint)FileJournalFileHandleInvalid.Bytes._16_4_ >> 0x18);
    local_78.bIsInsideReparsePoint.bIsSet = false;
    local_78._57_7_ = 0;
    pFVar12 = pFVar14;
    FVar13.Data = (FScriptContainerElement *)pFVar14;
    FVar15.Data = (FScriptContainerElement *)pFVar14;
    if (aVar2 != (atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
                  )0x0) {
      local_e8 = *(FCachedDirScanFile **)((longlong)aVar2 + 8);
      *(undefined8 *)((longlong)aVar2 + 8) = 0;
      local_e0 = *(undefined8 *)((longlong)aVar2 + 0x10);
      *(undefined8 *)((longlong)aVar2 + 0x10) = 0;
      FCachedDirScanDir::FCachedDirScanDir(&local_d8,(FCachedDirScanDir *)((longlong)aVar2 + 0x18));
      local_98 = '\x01';
      DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
                (*(FCachedDirScanFile **)((longlong)aVar2 + 0x28),*(int *)((longlong)aVar2 + 0x30));
      if (*(void **)((longlong)aVar2 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)aVar2 + 0x28));
      }
      DestructItems<FString,int>
                (*(FString **)((longlong)aVar2 + 0x18),*(int *)((longlong)aVar2 + 0x20));
      if (*(void **)((longlong)aVar2 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)aVar2 + 0x18));
      }
      if (*(void **)((longlong)aVar2 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)aVar2 + 8));
      }
      FMemory::Free((this->ScanQueueDirFullDatas).Tail);
      uVar4 = local_e0;
      pFVar9 = local_e8;
      local_e0 = 0;
      (this->ScanQueueDirFullDatas).Tail = (FNode *)aVar2;
      local_f8 = '\x01';
      local_e8 = (void *)0x0;
      FCachedDirScanDir::FCachedDirScanDir(&local_138,&local_d8);
      FVar8.Data = local_d8.Files.AllocatorInstance.Data;
      if (local_98 != '\0') {
        DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
                  ((FCachedDirScanFile *)local_d8.Files.AllocatorInstance.Data,
                   local_d8.Files.ArrayNum);
        if ((FCachedDirScanFile *)FVar8.Data != (FCachedDirScanFile *)0x0) {
          FMemory::Free(FVar8.Data);
        }
        FVar8.Data = local_d8.SubDirRelPaths.AllocatorInstance.Data;
        DestructItems<FString,int>
                  ((FString *)local_d8.SubDirRelPaths.AllocatorInstance.Data,
                   local_d8.SubDirRelPaths.ArrayNum);
        if (FVar8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar8.Data);
        }
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
      }
      if (local_f8 != '\0') {
        local_88 = pFVar9;
        local_80 = uVar4;
        FCachedDirScanDir::operator=(&local_78,&local_138);
        FVar8.Data = local_138.Files.AllocatorInstance.Data;
        pFVar12 = local_88;
        FVar13.Data = local_78.SubDirRelPaths.AllocatorInstance.Data;
        FVar15.Data = local_78.Files.AllocatorInstance.Data;
        if (local_f8 != '\0') {
          DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
                    ((FCachedDirScanFile *)local_138.Files.AllocatorInstance.Data,
                     local_138.Files.ArrayNum);
          if ((FCachedDirScanFile *)FVar8.Data != (FCachedDirScanFile *)0x0) {
            FMemory::Free(FVar8.Data);
          }
          FVar8.Data = local_138.SubDirRelPaths.AllocatorInstance.Data;
          DestructItems<FString,int>
                    ((FString *)local_138.SubDirRelPaths.AllocatorInstance.Data,
                     local_138.SubDirRelPaths.ArrayNum);
          pFVar12 = local_88;
          FVar13.Data = local_78.SubDirRelPaths.AllocatorInstance.Data;
          FVar15.Data = local_78.Files.AllocatorInstance.Data;
          if (FVar8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar8.Data);
            pFVar12 = local_88;
            FVar13.Data = local_78.SubDirRelPaths.AllocatorInstance.Data;
            FVar15.Data = local_78.Files.AllocatorInstance.Data;
          }
        }
      }
    }
    DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
              ((FCachedDirScanFile *)FVar15.Data,local_78.Files.ArrayNum);
    if ((FCachedDirScanFile *)FVar15.Data != (FCachedDirScanFile *)0x0) {
      FMemory::Free(FVar15.Data);
    }
    DestructItems<FString,int>((FString *)FVar13.Data,local_78.SubDirRelPaths.ArrayNum);
    if ((FCachedDirScanFile *)FVar13.Data != (FCachedDirScanFile *)0x0) {
      FMemory::Free(FVar13.Data);
    }
    if (pFVar12 != (FCachedDirScanFile *)0x0) {
      FMemory::Free(pFVar12);
    }
    uVar10 = FileJournalFileHandleInvalid.Bytes._0_8_;
    uVar11 = FileJournalFileHandleInvalid.Bytes._8_8_;
    uVar4 = local_78.JournalHandle.Bytes._0_8_;
    uVar5 = local_78.JournalHandle.Bytes._8_8_;
    aVar2 = ((this->ScanQueueDirFullDatas).Tail)->Next;
  }
  aVar3 = ((this->ScanQueueDirHandles).Tail)->Next;
  local_78.JournalHandle.Bytes._0_8_ = uVar4;
  local_78.JournalHandle.Bytes._8_8_ = uVar5;
  while (aVar3 != (atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*>
                   )0x0) {
    aVar3 = ((this->ScanQueueDirHandles).Tail)->Next;
    pFVar12 = pFVar14;
    if (aVar3 != (atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*>
                  )0x0) {
      pFVar12 = *(FCachedDirScanFile **)((longlong)aVar3 + 8);
      *(undefined8 *)((longlong)aVar3 + 8) = 0;
      *(undefined8 *)((longlong)aVar3 + 0x10) = 0;
      if (*(void **)((longlong)aVar3 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)aVar3 + 8));
      }
      FMemory::Free((this->ScanQueueDirHandles).Tail);
      (this->ScanQueueDirHandles).Tail = (FNode *)aVar3;
    }
    if (pFVar12 != (FCachedDirScanFile *)0x0) {
      FMemory::Free(pFVar12);
    }
    aVar3 = ((this->ScanQueueDirHandles).Tail)->Next;
  }
  FileJournalFileHandleInvalid.Bytes[0] = FileJournalFileHandleInvalid.Bytes[0];
  FileJournalFileHandleInvalid.Bytes[1] = FileJournalFileHandleInvalid.Bytes[1];
  FileJournalFileHandleInvalid.Bytes[2] = FileJournalFileHandleInvalid.Bytes[2];
  FileJournalFileHandleInvalid.Bytes[3] = FileJournalFileHandleInvalid.Bytes[3];
  FileJournalFileHandleInvalid.Bytes[4] = FileJournalFileHandleInvalid.Bytes[4];
  FileJournalFileHandleInvalid.Bytes[5] = FileJournalFileHandleInvalid.Bytes[5];
  FileJournalFileHandleInvalid.Bytes[6] = FileJournalFileHandleInvalid.Bytes[6];
  FileJournalFileHandleInvalid.Bytes[7] = FileJournalFileHandleInvalid.Bytes[7];
  FileJournalFileHandleInvalid.Bytes[8] = FileJournalFileHandleInvalid.Bytes[8];
  FileJournalFileHandleInvalid.Bytes[9] = FileJournalFileHandleInvalid.Bytes[9];
  FileJournalFileHandleInvalid.Bytes[10] = FileJournalFileHandleInvalid.Bytes[10];
  FileJournalFileHandleInvalid.Bytes[0xb] = FileJournalFileHandleInvalid.Bytes[0xb];
  FileJournalFileHandleInvalid.Bytes[0xc] = FileJournalFileHandleInvalid.Bytes[0xc];
  FileJournalFileHandleInvalid.Bytes[0xd] = FileJournalFileHandleInvalid.Bytes[0xd];
  FileJournalFileHandleInvalid.Bytes[0xe] = FileJournalFileHandleInvalid.Bytes[0xe];
  FileJournalFileHandleInvalid.Bytes[0xf] = FileJournalFileHandleInvalid.Bytes[0xf];
  uVar6 = (uint)FileJournalFileHandleInvalid.Bytes._16_4_ >> 0x10;
  uVar7 = (uint)FileJournalFileHandleInvalid.Bytes._16_4_ >> 0x18;
  FileJournalFileHandleInvalid.Bytes[0x10] = (char)FileJournalFileHandleInvalid.Bytes._16_4_;
  FileJournalFileHandleInvalid.Bytes[0x11] =
       (char)((uint)FileJournalFileHandleInvalid.Bytes._16_4_ >> 8);
  FileJournalFileHandleInvalid.Bytes[0x12] = (char)uVar6;
  FileJournalFileHandleInvalid.Bytes[0x13] = (char)uVar7;
  return;
}

// TryReadCacheFile @ 142b27c10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::AssetDataGather::Private::FAssetDataDiscoveryCache::TryReadCacheFile
          (FAssetDataDiscoveryCache *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  IFileManager *pIVar4;
  FArchive *pFVar5;
  longlong lVar6;
  ulong64 uVar7;
  FSharedBuffer FVar8;
  FBufferOwner *pFVar9;
  FStaticBasicLogRecord *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  uint uVar14;
  void *pvVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FBufferOwner *pFVar18;
  FBufferOwner *pFVar19;
  int *piVar20;
  bool bVar21;
  void *pvVar22;
  bool bVar23;
  FKeyForward local_res10 [8];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res18 [2];
  FString local_138;
  FCompressedBufferReader local_128;
  FArchiveState local_e8;
  undefined8 local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  
  pFVar19 = (FBufferOwner *)0x0;
  local_128.SourceArchive =
       (FArchive *)GGatherSettings.AssetRegistryCacheRootFolder.Data.AllocatorInstance.Data;
  bVar13 = false;
  local_res18[0].Owner = (FBufferOwner *)0x0;
  local_128.Context.HeaderSize._0_4_ = 0x20;
  iVar11 = GGatherSettings.AssetRegistryCacheRootFolder.Data.ArrayNum + -1;
  if (GGatherSettings.AssetRegistryCacheRootFolder.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  local_128.SourceBuffer = (FCompressedBuffer *)CONCAT44(local_128.SourceBuffer._4_4_,iVar11);
  local_128.Context.HeaderOffset = 0x150992770;
  FPaths::CombineInternal(&local_138,(TStringView<wchar_t> *)&local_128,2);
  pIVar4 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar12.Data = local_138.Data.AllocatorInstance.Data;
  }
  pFVar5 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,FVar12.Data);
  if ((pFVar5 == (FArchive *)0x0) ||
     (lVar6 = (**(code **)(*(longlong *)pFVar5 + 0x30))(pFVar5), lVar6 == 0)) {
    bVar23 = false;
    bVar21 = false;
    if (pFVar5 != (FArchive *)0x0) goto LAB_142b27d83;
  }
  else {
    FCompressedBufferReader::FCompressedBufferReader(&local_128,pFVar5);
    uVar7 = FCompressedBufferReader::GetRawSize(&local_128);
    if (uVar7 == 0) {
      bVar23 = false;
      bVar21 = true;
      pFVar18 = pFVar19;
    }
    else {
      FVar8 = FCompressedBufferReader::Decompress(&local_128,(ulong64)local_res10,0);
      pFVar18 = *(FBufferOwner **)FVar8.Owner.Owner;
      *(undefined8 *)FVar8.Owner.Owner = 0;
      local_res18[0].Owner = pFVar18;
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_res10);
      if (pFVar18 != (FBufferOwner *)0x0) {
        if (((ulonglong)pFVar18->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)(pFVar18->_padding_ + 8))(pFVar18);
        }
        pFVar19 = (FBufferOwner *)pFVar18->Size;
      }
      pFVar9 = (FBufferOwner *)FCompressedBufferReader::GetRawSize(&local_128);
      bVar23 = pFVar19 == pFVar9;
      bVar21 = !bVar23;
    }
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              (&local_128.Context.CompressedBlock.Owner);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_128.Context.RawBlock.Owner);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_128.Context.Header.Owner);
    pFVar19 = pFVar18;
LAB_142b27d83:
    bVar13 = bVar21;
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  pvVar15 = (void *)0x0;
  if (bVar23) {
    pvVar22 = pvVar15;
    if (pFVar19 != (FBufferOwner *)0x0) {
      if (((ulonglong)pFVar19->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar19->_padding_ + 8))(pFVar19);
      }
      pvVar22 = (void *)pFVar19->Size;
    }
    if (pFVar19 != (FBufferOwner *)0x0) {
      if (((ulonglong)pFVar19->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar19->_padding_ + 8))(pFVar19);
      }
      pvVar15 = pFVar19->Data;
    }
    local_e8._padding_ = 0;
    local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_e8._40_8_ = 0;
    local_e8.ArSerializingDefaults = 0;
    local_e8.ArPortFlags = 0;
    local_e8.ArMaxSerializeSize = 0;
    local_e8.ArUEVer.FileVersionUE4 = 0;
    local_e8.ArUEVer.FileVersionUE5 = 0;
    local_e8.ArLicenseeUEVer = 0;
    local_e8.ArEngineVer.Major = 0;
    local_e8.ArEngineVer.Minor = 0;
    local_e8.ArEngineVer.Patch = 0;
    local_e8.ArEngineVer._6_2_ = 0;
    local_e8.ArEngineVer.Changelist = 0;
    local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_e8.SerializedProperty = (FProperty *)0x0;
    local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_e8.bCustomVersionsAreReset = false;
    local_e8._129_7_ = 0;
    local_e8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_e8);
    local_58 = 0;
    local_e8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_40 = 0x7fffffffffffffff;
    local_50 = pvVar15;
    local_48 = pvVar22;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_128.SourceArchive = (FArchive *)0x0;
    local_128.SourceBuffer = (FCompressedBuffer *)0x0;
    ::operator<<((FArchive *)&local_e8,(FGuid *)&local_128);
    uVar1 = local_128.SourceBuffer._4_4_ ^ 0x47a84ca2;
    uVar14 = (uint)local_128.SourceArchive ^ 0x18a13604;
    uVar2 = (uint)local_128.SourceBuffer ^ 0x97f7e0f0;
    uVar3 = local_128.SourceArchive._4_4_ ^ 0x1bc44658;
    if (((uVar14 == 0 && uVar1 == 0) && uVar2 == 0) && uVar3 == 0) {
      piVar20 = &(this->CachedVolumes).Pairs.ArrayNum;
      DestructItems<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int>
                ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
                 (this->CachedVolumes).Pairs.AllocatorInstance.Data,
                 (this->CachedVolumes).Pairs.ArrayNum);
      iVar11 = (this->CachedVolumes).Pairs.ArrayMax;
      *piVar20 = 0;
      if (iVar11 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,8,0,(ForAnyElementType *)this,0,&(this->CachedVolumes).Pairs.ArrayMax);
      }
      TArrayPrivateFriend::
      Serialize<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
                ((FArchive *)&local_e8,
                 (TArray<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
                  *)this);
      if (local_e8.ArIsLoading != 0) {
        AlgoImpl::
        IntroSortInternal<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int,TSortedMap<FString,UE::AssetDataGather::Private::FCachedVolumeInfo,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                  ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
                   (this->CachedVolumes).Pairs.AllocatorInstance.Data,*piVar20,local_res10[0],
                   (TLess<FString_const_&>)local_res10[0]);
      }
    }
    else {
      FArchiveState::SetError(&local_e8);
    }
    piVar20 = &(this->CachedVolumes).Pairs.ArrayNum;
    if (local_e8.ArIsError == 0) {
      FArchive::~FArchive((FArchive *)&local_e8);
      pFVar16 = (this->CachedVolumes).Pairs.AllocatorInstance.Data;
      iVar11 = *piVar20;
      pFVar17 = pFVar16 + (longlong)iVar11 * 0xc0;
      while( true ) {
        if (*piVar20 != iVar11) {
          `TCheckedPointerIterator<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar16 == pFVar17) break;
        FCachedVolumeInfo::InitializePlatformData((FCachedVolumeInfo *)(pFVar16 + 0x10));
        pFVar16 = pFVar16 + 0xc0;
      }
      bVar13 = true;
      goto LAB_142b28016;
    }
    FArchive::~FArchive((FArchive *)&local_e8);
    if (((uVar14 == 0 && uVar1 == 0) && uVar2 == 0) && uVar3 == 0) goto LAB_142b27f86;
    if (3 < (byte)LogAssetRegistry._0_1_) {
      pFVar10 = &::LOG_Static;
      goto LAB_142b27fc2;
    }
  }
  else if (bVar13) {
LAB_142b27f86:
    if (2 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  else if (3 < (byte)LogAssetRegistry._0_1_) {
    pFVar10 = &::LOG_Static;
LAB_142b27fc2:
    Logging::Private::BasicLog<4>(pFVar10,(FLogCategoryBase *)&LogAssetRegistry);
  }
  DestructItems<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int>
            ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
             (this->CachedVolumes).Pairs.AllocatorInstance.Data,(this->CachedVolumes).Pairs.ArrayNum
            );
  iVar11 = (this->CachedVolumes).Pairs.ArrayMax;
  (this->CachedVolumes).Pairs.ArrayNum = 0;
  if (iVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,0,(ForAnyElementType *)this,0,&(this->CachedVolumes).Pairs.ArrayMax);
  }
  bVar13 = false;
LAB_142b28016:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_res18);
  return bVar13;
}

