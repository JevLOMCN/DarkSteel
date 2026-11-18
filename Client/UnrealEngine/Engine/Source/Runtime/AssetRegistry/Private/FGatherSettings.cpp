// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FindShardedCacheFiles @ 142af8380

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::AssetDataGather::Private::FGatherSettings::FindShardedCacheFiles
          (FGatherSettings *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  IFileManager *pIVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffff98;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pIVar6 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar6 + 0x80);
  ::FString::ConcatFC(&local_38,&this->CacheBaseFilename,L"_*.bin");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar6,__return_storage_ptr__,FVar8.Data,1,
            in_stack_ffffffffffffff98 & 0xffffffffffffff00);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->ArrayNum != 0) {
    FPaths::GetPath(&local_38,&this->CacheBaseFilename);
    iVar1 = __return_storage_ptr__->ArrayNum;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar9 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (__return_storage_ptr__->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      iVar3 = local_38.Data.ArrayNum;
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
      if (pFVar7 == pFVar9) break;
      iVar10 = *(int *)(pFVar7 + 8) + -1;
      if (*(int *)(pFVar7 + 8) == 0) {
        iVar10 = 0;
      }
      iVar4 = iVar10 + 1;
      if ((local_38.Data.ArrayNum == 0) && (iVar4 != 0)) {
        iVar4 = iVar10 + 2;
LAB_142af848c:
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar4 != 0) goto LAB_142af8495;
        local_48.Data.ArrayMax = 0;
        local_48.Data.ArrayNum = local_38.Data.ArrayNum;
      }
      else {
        if (local_38.Data.ArrayNum == 0) goto LAB_142af848c;
LAB_142af8495:
        local_48.Data.ArrayNum = local_38.Data.ArrayNum;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar5 = local_38.Data.ArrayNum + iVar4;
        if ((int)uVar5 < local_38.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar5,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                   &local_48.Data.ArrayMax);
        if (iVar3 != 0) {
          memcpy(local_48.Data.AllocatorInstance.Data,FVar8.Data,(longlong)iVar3 * 2);
        }
      }
      ::FString::PathAppend(&local_48,*(wchar_t **)pFVar7,iVar10);
      if (pFVar7 != (FScriptContainerElement *)&local_48) {
        if (*(void **)pFVar7 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar7);
        }
        *(FScriptContainerElement **)pFVar7 = local_48.Data.AllocatorInstance.Data;
        *(int *)(pFVar7 + 8) = local_48.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pFVar7 = pFVar7 + 0x10;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// Initialize @ 142b01040

/* WARNING: Removing unreachable block (ram,0x000142b01549) */
/* WARNING: Removing unreachable block (ram,0x000142b01359) */
/* WARNING: Removing unreachable block (ram,0x000142b01363) */
/* WARNING: Removing unreachable block (ram,0x000142b0136d) */
/* WARNING: Removing unreachable block (ram,0x000142b01392) */
/* WARNING: Removing unreachable block (ram,0x000142b01552) */
/* WARNING: Enum "EFeatureEnabledReadWrite": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::AssetDataGather::Private::FGatherSettings::Initialize(FGatherSettings *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar10;
  FGatherSettings *pFVar11;
  EFeatureEnabledReadWrite EVar12;
  EFeatureEnabledReadWrite EVar13;
  bool local_res8 [8];
  EFeatureEnabledReadWrite local_res10 [2];
  FString local_78;
  FScriptContainerElement *local_68;
  EFeatureEnabledReadWrite EStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  if (this->bInitialized != false) {
    return;
  }
  pFVar1 = &this->AssetRegistryCacheRootFolder;
  this->bInitialized = true;
  pwVar8 = FCommandLine::Get();
  EVar13 = NeverRead;
  bVar3 = FParse::Value(pwVar8,L"AssetRegistryCacheRootFolder=",pFVar1,true,(wchar_t **)0x0);
  if (!bVar3) {
    pFVar9 = FPaths::ProjectIntermediateDir(&local_58);
    if (pFVar1 != pFVar9) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->AssetRegistryCacheRootFolder).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (this->AssetRegistryCacheRootFolder).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pwVar8 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar8,L"ForceDependsGathering");
  this->bForceDependsGathering = bVar3;
  this->bGatherDependsData = bVar3;
  pwVar8 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar8,L"NoAssetRegistryCache");
  if (!bVar3) {
    pwVar8 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar8,L"NoAssetRegistryDiscoveryCache");
    if (!bVar4) {
      bVar4 = false;
      goto LAB_142b01136;
    }
  }
  bVar4 = true;
LAB_142b01136:
  pwVar8 = FCommandLine::Get();
  bVar5 = FParse::Param(pwVar8,L"NoAssetRegistryCacheRead");
  iVar7 = GetMultiprocessId();
  if (iVar7 == 0) {
    pwVar8 = FCommandLine::Get();
    FParse::Param(pwVar8,L"multiprocess");
  }
  pwVar8 = FCommandLine::Get();
  FParse::Param(pwVar8,L"NoAssetRegistryCacheWrite");
  if ((bVar3) || (bVar5)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bGatherCacheReadEnabled = bVar3;
  this->bGatherCacheWriteEnabled = false;
  bVar3 = IsInGameThread();
  if (bVar3) {
    FTelemetryRouter::Get();
  }
  this_00 = FPlatformFileManager::Get();
  pIVar10 = FPlatformFileManager::GetPlatformPhysical(this_00);
  cVar6 = (**(code **)((longlong)*pIVar10 + 0x158))(pIVar10,0,0,0);
  pwVar8 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar8,L"AssetRegistryCacheSkipInvalidate");
  local_res10[0] = Invalid;
  ::FString::FString(&local_78,L"Default");
  FConfigCacheIni::GetString
            (GConfig,L"AssetRegistry",L"AssetRegistryDiscoveryCache",&local_78,&GEngineIni);
  pwVar8 = FCommandLine::Get();
  FParse::Value(pwVar8,L"AssetRegistryDiscoveryCache=",&local_78,true,(wchar_t **)0x0);
  local_68 = local_78.Data.AllocatorInstance.Data;
  EStack_60 = local_78.Data.ArrayNum - DefaultRead;
  if (local_78.Data.ArrayNum == 0) {
    EStack_60 = EVar13;
  }
  local_48._12_4_ = uStack_5c;
  local_48.Size = EStack_60;
  local_48.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
  Private::LexFromString(local_res10,&local_48);
  if (local_res10[0] == Invalid) {
    if (1 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    local_res10[0] = DefaultWriteDefaultRead;
  }
  if (bVar4) {
    local_res10[0] = EVar13;
  }
  if (bVar5) {
    local_res10[0] = local_res10[0] & ~ReadMask;
  }
  EVar12 = local_res10[0] & ~WriteMask;
  if (bVar3) {
    if ((char)EVar12 == '\x01') {
      EVar12 = local_res10[0] & 0xffffff02 | AlwaysRead;
      local_res10[0] = EVar12;
    }
  }
  else if ((cVar6 == '\0') && ((char)EVar12 == '\x01')) {
    EVar12 = local_res10[0] & ~(WriteMask|ReadMask);
    local_res10[0] = EVar12;
  }
  this->bDiscoveryCacheReadEnabled = (EVar12 & ReadMask) != NeverRead;
  this->bDiscoveryCacheInvalidateEnabled = (EVar12 & ReadMask) != AlwaysRead;
  this->DiscoveryCacheWriteEnabled = Never;
  this->EditorGameScanMode = None;
  this->bAsyncEnabled = false;
  pwVar8 = FCommandLine::Get();
  bVar3 = FParse::Bool(pwVar8,L"AssetGatherSync=",local_res8);
  if (bVar3) {
    this->bAsyncEnabled = local_res8[0] == false;
  }
  if ((this->bAsyncEnabled != false) &&
     (((bVar3 = FGenericPlatformProcess::SupportsMultithreading(), !bVar3 ||
       (bVar3 = FTaskGraphInterface::IsRunning(), !bVar3)) &&
      (this->bAsyncEnabled = false, 2 < (byte)LogAssetRegistry._0_1_)))) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  pwVar8 = L"CachedAssetRegistryNoDeps";
  if (this->bGatherDependsData != false) {
    pwVar8 = L"CachedAssetRegistry";
  }
  pFVar11 = (FGatherSettings *)::operator/(&local_38,&this->AssetRegistryCacheRootFolder,pwVar8);
  if (this != pFVar11) {
    pFVar2 = (this->CacheBaseFilename).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->CacheBaseFilename).Data.AllocatorInstance.Data =
         (pFVar11->CacheBaseFilename).Data.AllocatorInstance.Data;
    (pFVar11->CacheBaseFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CacheBaseFilename).Data.ArrayNum = (pFVar11->CacheBaseFilename).Data.ArrayNum;
    (this->CacheBaseFilename).Data.ArrayMax = (pFVar11->CacheBaseFilename).Data.ArrayMax;
    (pFVar11->CacheBaseFilename).Data.ArrayNum = 0;
    (pFVar11->CacheBaseFilename).Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->bPreloadGatherCache = false;
  pwVar8 = FCommandLine::Get();
  FParse::Value(pwVar8,L"-ARDiscoverThreads=",&GARDiscoverThreads);
  pwVar8 = FCommandLine::Get();
  FParse::Value(pwVar8,L"-ARDiscoverMinBatchSize=",&GARDiscoverMinBatchSize);
  pwVar8 = FCommandLine::Get();
  FParse::Value(pwVar8,L"-ARGatherThreads=",&GARGatherThreads);
  pwVar8 = FCommandLine::Get();
  FParse::Value(pwVar8,L"-ARGatherCacheParallelism=",&GARGatherCacheParallelism);
  if (GARDiscoverThreads < 0) {
    GARDiscoverThreads = 0;
  }
  if (GARDiscoverMinBatchSize < 1) {
    GARDiscoverMinBatchSize = 1;
  }
  if (GARGatherThreads < 0) {
    GARGatherThreads = EVar13;
  }
  if (GARGatherCacheParallelism < 1) {
    GARGatherCacheParallelism = 1;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

