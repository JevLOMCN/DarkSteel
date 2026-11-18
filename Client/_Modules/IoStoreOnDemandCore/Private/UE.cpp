// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 106

// <lambda_invoker_cdecl> @ 1445857e0

void __cdecl
`UE::IoStore::Commands::MountUrl'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FOnDemandMountResult *param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::IoStore::FOnDemandMountResult::LogResult(param_1);
  FIoStatus::~FIoStatus(&param_1->Status);
  pFVar1 = (param_1->MountId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 144585820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UE::IoStore::Commands::VerifyCache'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FOnDemandVerifyCacheResult *param_1)

{
  FString local_18;
  
  if ((param_1->Error).bIsSet == false) {
    if (4 < (byte)LogIoStoreOnDemand._0_1_) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_Install_cache_v_150d76830,
                 (FLogCategoryBase *)&LogIoStoreOnDemand);
      return;
    }
  }
  else if (1 < (byte)LogIoStoreOnDemand._0_1_) {
    ::LexToString(&local_18,&(param_1->Error).TypedValue);
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_Verify_install__150d76888,
               (FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 1445858a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UE::IoStore::Commands::DefragInstallCache'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FOnDemandDefragResult *param_1)

{
  FString local_18;
  
  if ((param_1->Error).bIsSet == false) {
    if (3 < (byte)LogIoStoreOnDemand._0_1_) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Defragmented_on_150d76028,
                 (FLogCategoryBase *)&LogIoStoreOnDemand);
      return;
    }
  }
  else if (1 < (byte)LogIoStoreOnDemand._0_1_) {
    ::LexToString(&local_18,&(param_1->Error).TypedValue);
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_Failed_to_defra_150d760a0,
               (FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 144585920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UE::IoStore::Commands::PurgeInstallCache'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FOnDemandPurgeResult *param_1)

{
  FString local_18;
  
  if ((param_1->Error).bIsSet == false) {
    if (3 < (byte)LogIoStoreOnDemand._0_1_) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Purged_on_deman_150d75e10,
                 (FLogCategoryBase *)&LogIoStoreOnDemand);
      return;
    }
  }
  else if (1 < (byte)LogIoStoreOnDemand._0_1_) {
    ::LexToString(&local_18,&(param_1->Error).TypedValue);
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_Failed_Purged_o_150d75e70,
               (FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 1445859a0

void __cdecl
`UE::IoStore::Commands::MountFile'::__l118::<lambda_2>::<lambda_invoker_cdecl>
          (FOnDemandMountResult *param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::IoStore::FOnDemandMountResult::LogResult(param_1);
  FIoStatus::~FIoStatus(&param_1->Status);
  pFVar1 = (param_1->MountId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// DereferenceIfNecessary<UE::IoStore::FIoStoreOnDemandCoreModule,UE::IoStore::FIoStoreOnDemandCoreModule_*_&> @ 144586070

FIoStoreOnDemandCoreModule * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::IoStore::FIoStoreOnDemandCoreModule,UE::IoStore::FIoStoreOnDemandCoreModule_*_&>
          (FIoStoreOnDemandCoreModule **param_1)

{
  return *param_1;
}

// operator<< @ 144587e10

TStringBuilderBase<wchar_t> * __cdecl
UE::IoStore::operator<<(TStringBuilderBase<wchar_t> *param_1,FOnDemandInstallCacheUsage *param_2)

{
  TStringBuilderBase<wchar_t>::AppendfImpl
            (param_1,
             L"MaxSize=%.2lf MiB, TotalSize=%.2lf MiB, ReferencedBlockSize=%.2lf MiB, ReferencedSize=%.2lf MiB, FragmentedChunksSize=%.2lf MiB"
            );
  return param_1;
}

// operator<< @ 144587f40

TStringBuilderBase<wchar_t> * __cdecl
UE::IoStore::operator<<(TStringBuilderBase<wchar_t> *param_1,FOnDemandStreamingCacheUsage *param_2)

{
  TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"MaxSize=%.2lf MiB, TotalSize=%.2lf MiB");
  return param_1;
}

// operator<< @ 144587fe0

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FOnDemandToc *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong64 *puVar3;
  long64 *plVar4;
  ulonglong uVar5;
  FName *pFVar6;
  FName local_res8;
  
  if ((param_1->field_0x28 & 1) == 0) {
LAB_144588011:
    puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
    if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
      }
    }
    else {
      (param_2->Header).Magic = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    if ((param_2->Header).Magic == 0x6f6e64656d616e64) {
      ::operator<<(param_1,&(param_2->Header).Version);
      uVar2 = (param_2->Header).Version;
      if ((uVar2 != 0) && (uVar2 < 0xd)) {
        ::operator<<(param_1,&(param_2->Header).Flags);
        ::operator<<(param_1,&(param_2->Header).BlockSize);
        ::operator<<(param_1,&(param_2->Header).CompressionFormat);
        ::operator<<(param_1,&(param_2->Header).ChunksDirectory);
        if (((param_1->field_0x28 & 4) != 0) || (10 < (param_2->Header).Version)) {
          ::operator<<(param_1,&(param_2->Header).HostGroupName);
        }
        if (((param_1->field_0x28 & 1) != 0) && ((param_2->Header).Version < 10)) {
          (param_2->Header).Flags = 0;
        }
        goto LAB_1445880e0;
      }
    }
  }
  else {
    uVar5 = (**(code **)(*(longlong *)param_1 + 0x30))();
    if (0x47 < uVar5) goto LAB_144588011;
  }
  FArchiveState::SetError((FArchiveState *)param_1);
LAB_1445880e0:
  if ((param_1->field_0x29 & 2) == 0) {
    pFVar6 = ::FName::FName(&local_res8,L"OnDemandToc");
    puVar1 = &(param_2->Header).Version;
    FArchiveState::SetCustomVersion
              ((FArchiveState *)param_1,&FOnDemandToc::VersionGuid,(param_2->Header).Version,*pFVar6
              );
    if (4 < *puVar1) {
      plVar4 = (long64 *)**(longlong **)&param_1->field_0x8;
      if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Meta,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&param_2->Meta);
        }
      }
      else {
        (param_2->Meta).EpochTimestamp = *plVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
      }
      ::operator<<(param_1,&(param_2->Meta).BuildVersion);
      ::operator<<(param_1,&(param_2->Meta).TargetPlatform);
    }
    TArrayPrivateFriend::
    Serialize<UE::IoStore::FOnDemandTocContainerEntry,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->Containers);
    if (6 < *puVar1) {
      TArrayPrivateFriend::
      Serialize<UE::IoStore::FOnDemandTocAdditionalFile,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->AdditionalFiles);
    }
    if (7 < (param_2->Header).Version) {
      TArrayPrivateFriend::Serialize<UE::IoStore::FOnDemandTocTagSet,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->TagSets);
    }
  }
  return param_1;
}

// operator<< @ 1445881e0

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FOnDemandTocAdditionalFile *param_2)

{
  ulong64 *puVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x14);
  ::operator<<(param_1,&param_2->Filename);
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    param_2->FileSize = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FileSize,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&param_2->FileSize);
  return param_1;
}

// operator<< @ 144588280

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FOnDemandTocContainerEntry *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FCustomVersionContainer *this;
  FCustomVersion *pFVar4;
  FArchive *pFVar5;
  uint uVar6;
  FGuid local_18;
  
  uVar6 = 0xc;
  if ((param_1->field_0x28 & 1) != 0) {
    this = (FCustomVersionContainer *)(**(code **)(*(longlong *)param_1 + 0x60))();
    local_18 = FOnDemandToc::VersionGuid;
    pFVar4 = FCustomVersionContainer::GetVersion(this,&local_18);
    if ((pFVar4 == (FCustomVersion *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CustomVersion",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\OnDemandToc.cpp"
                           ,0xde,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar2)();
      return pFVar5;
    }
    uVar6 = pFVar4->Version;
    if (uVar6 < 6) goto LAB_144588300;
  }
  ::operator<<(param_1,&param_2->ContainerId);
LAB_144588300:
  ::operator<<(param_1,&param_2->ContainerName);
  ::operator<<(param_1,&param_2->EncryptionKeyGuid);
  TArrayPrivateFriend::Serialize<UE::IoStore::FOnDemandTocEntry,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Entries);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->BlockSizes);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->BlockHashes);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->UTocHash,0x14);
  if (((param_1->field_0x28 & 1) == 0) || (8 < uVar6)) {
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->ContainerFlags,1);
    }
    else {
      param_2->ContainerFlags = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  if (((param_1->field_0x28 & 1) == 0) || (0xb < uVar6)) {
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->Header);
  }
  return param_1;
}

// operator<< @ 1445883d0

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FOnDemandTocEntry *param_2)

{
  ulong64 *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  ulong64 *puVar4;
  uint *puVar5;
  
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x14);
  ::operator<<(param_1,&param_2->ChunkId);
  puVar1 = &param_2->RawSize;
  puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->EncodedSize;
  puVar3 = &param_1->field_0x2a;
  puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->BlockOffset;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->BlockCount;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar5 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar3 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<< @ 144588560

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FOnDemandTocHeader *param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  
  if ((param_1->field_0x28 & 1) != 0) {
    uVar2 = (**(code **)(*(longlong *)param_1 + 0x30))();
    if (uVar2 < 0x48) goto LAB_144588671;
  }
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Magic);
    }
  }
  else {
    param_2->Magic = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  if (param_2->Magic == 0x6f6e64656d616e64) {
    ::operator<<(param_1,&param_2->Version);
    if ((param_2->Version != 0) && (param_2->Version < 0xd)) {
      ::operator<<(param_1,&param_2->Flags);
      ::operator<<(param_1,&param_2->BlockSize);
      ::operator<<(param_1,&param_2->CompressionFormat);
      ::operator<<(param_1,&param_2->ChunksDirectory);
      if (((param_1->field_0x28 & 4) != 0) || (10 < param_2->Version)) {
        ::operator<<(param_1,&param_2->HostGroupName);
      }
      if (((param_1->field_0x28 & 1) != 0) && (param_2->Version < 10)) {
        param_2->Flags = 0;
      }
      return param_1;
    }
  }
LAB_144588671:
  FArchiveState::SetError((FArchiveState *)param_1);
  return param_1;
}

// operator<< @ 1445886a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FOnDemandTocSentinel *param_2)

{
  undefined1 auStack_48 [32];
  char local_28 [4];
  char acStack_24 [4];
  char acStack_20 [4];
  char acStack_1c [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((param_1->field_0x28 & 4) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x10);
  }
  else {
    local_28 = (char  [4])FOnDemandTocSentinel::SentinelImg._0_4_;
    acStack_24 = (char  [4])FOnDemandTocSentinel::SentinelImg._4_4_;
    acStack_20 = (char  [4])FOnDemandTocSentinel::SentinelImg._8_4_;
    acStack_1c = (char  [4])FOnDemandTocSentinel::SentinelImg._12_4_;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_28);
  }
  return param_1;
}

// operator<< @ 144588710

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FOnDemandTocTagSet *param_2)

{
  ::operator<<(param_1,&param_2->Tag);
  TArrayPrivateFriend::
  Serialize<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Packages);
  return param_1;
}

// operator<< @ 144588750

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FOnDemandTocTagSetPackageList *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->ContainerIndex);
    }
  }
  else {
    param_2->ContainerIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PackageIndicies);
  return param_1;
}

// operator<< @ 1445887c0

FArchive * __cdecl UE::IoStore::operator<<(FArchive *param_1,FTocMeta *param_2)

{
  long64 *plVar1;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    param_2->EpochTimestamp = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  ::operator<<(param_1,&param_2->BuildVersion);
  ::operator<<(param_1,&param_2->TargetPlatform);
  return param_1;
}

// operator<< @ 144588840

FCbWriter * __cdecl UE::IoStore::operator<<(FCbWriter *param_1,FOnDemandToc *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  FOnDemandTocContainerEntry *pFVar8;
  uint *puVar9;
  FOnDemandTocContainerEntry *pFVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FOnDemandToc *local_res10;
  uint local_res18;
  uint local_res20;
  TStringView<wchar_t> local_d8;
  FScriptContainerElement *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  char *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<char8_t> local_88;
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  char *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_res10 = param_2;
  FCbWriter::BeginObject(param_1);
  uStack_c0 = 6;
  local_c8 = (FScriptContainerElement *)0x150d77ae4;
  local_d8._12_4_ = uStack_bc;
  local_d8.Size = 6;
  local_d8.DataPtr = L"Header";
  FCbWriter::SetNameOrAddString(param_1,(TStringView<char8_t> *)&local_d8);
  operator<<(param_1,&param_2->Header);
  uStack_c0 = 10;
  local_c8 = (FScriptContainerElement *)0x150d77b38;
  local_d8._12_4_ = uStack_bc;
  local_d8.Size = 10;
  local_d8.DataPtr = L"Containers";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_d8);
  FCbWriter::BeginArray(param_1);
  iVar2 = (param_2->Containers).ArrayNum;
  pFVar8 = (FOnDemandTocContainerEntry *)(param_2->Containers).AllocatorInstance.Data;
  pFVar10 = pFVar8 + iVar2;
  while( true ) {
    if ((param_2->Containers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::IoStore::FOnDemandTocContainerEntry_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar10) break;
    operator<<(param_1,pFVar8);
    pFVar8 = pFVar8 + 1;
  }
  FCbWriter::EndArray(param_1);
  if (0 < (param_2->AdditionalFiles).ArrayNum) {
    uStack_c0 = 5;
    local_c8 = (FScriptContainerElement *)0x150d77b44;
    local_d8._12_4_ = uStack_bc;
    local_d8.Size = 5;
    local_d8.DataPtr = L"Files";
    FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_d8);
    FCbWriter::BeginArray(param_1);
    iVar2 = (param_2->AdditionalFiles).ArrayNum;
    pFVar11 = (param_2->AdditionalFiles).AllocatorInstance.Data;
    pFVar14 = pFVar11 + (longlong)iVar2 * 0x30;
    while( true ) {
      if ((param_2->AdditionalFiles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::IoStore::FOnDemandTocAdditionalFile_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar14) break;
      FCbWriter::BeginObject(param_1);
      local_c8 = (FScriptContainerElement *)0x15073d4cc;
      uStack_c0 = 4;
      local_d8._12_4_ = uStack_bc;
      local_d8.Size = 4;
      local_d8.DataPtr = L"Hash";
      FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_d8);
      FCbWriter::AddHash(param_1,(FIoHash *)pFVar11);
      local_98 = *(FScriptContainerElement **)(pFVar11 + 0x18);
      local_b8.DataPtr = L"Filename";
      local_b8.Size = 8;
      iStack_90 = *(int *)(pFVar11 + 0x20) + -1;
      local_d8.DataPtr = L"Filename";
      local_d8.Size = 8;
      local_d8._12_4_ = local_b8._12_4_;
      if (*(int *)(pFVar11 + 0x20) == 0) {
        iStack_90 = 0;
      }
      FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_d8);
      local_d8._12_4_ = uStack_8c;
      local_d8.Size = iStack_90;
      local_d8.DataPtr = (wchar_t *)local_98;
      FCbWriter::AddString(param_1,&local_d8);
      uVar4 = *(ulong64 *)&pFVar11[0x28].field_0x0;
      local_a8 = "Filename";
      uStack_a0 = 8;
      local_d8._12_4_ = uStack_9c;
      local_d8.Size = 8;
      local_d8.DataPtr = L"Filename";
      FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_d8);
      FCbWriter::AddInteger(param_1,uVar4);
      FCbWriter::EndObject(param_1);
      pFVar11 = pFVar11 + 0x30;
    }
    FCbWriter::EndArray(param_1);
  }
  if (0 < (param_2->TagSets).ArrayNum) {
    uStack_a0 = 7;
    local_a8 = "TagSets";
    local_d8._12_4_ = uStack_9c;
    local_d8.Size = 7;
    local_d8.DataPtr = L"TagSets";
    FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_d8);
    FCbWriter::BeginArray(param_1);
    local_res20 = (param_2->TagSets).ArrayNum;
    uVar7 = (ulonglong)(int)local_res20;
    pFVar14 = (param_2->TagSets).AllocatorInstance.Data;
    local_c8 = pFVar14 + uVar7 * 0x20;
    pFVar11 = pFVar14 + 0x18;
    while( true ) {
      pFVar5 = local_c8;
      local_98 = pFVar14;
      if ((param_2->TagSets).ArrayNum != (int)uVar7) {
        `TCheckedPointerIterator<UE::IoStore::FOnDemandTocTagSet_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar14 == pFVar5) break;
      FCbWriter::BeginObject(param_1);
      local_78 = *(wchar_t **)pFVar14;
      uStack_a0 = 3;
      iStack_70 = *(int *)(pFVar11 + -0x10) + -1;
      if (*(int *)(pFVar11 + -0x10) == 0) {
        iStack_70 = 0;
      }
      local_a8 = "Tag";
      local_b8._12_4_ = uStack_9c;
      local_b8.Size = 3;
      local_b8.DataPtr = L"Tag";
      FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_b8);
      local_b8._12_4_ = uStack_6c;
      local_b8.Size = iStack_70;
      local_b8.DataPtr = local_78;
      FCbWriter::AddString(param_1,&local_b8);
      uStack_60 = 8;
      local_68 = "Packages";
      local_b8._12_4_ = uStack_5c;
      local_b8.Size = 8;
      local_b8.DataPtr = L"Packages";
      FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_b8);
      FCbWriter::BeginArray(param_1);
      local_res18 = *(uint *)pFVar11;
      uVar7 = (ulonglong)(int)local_res18;
      pwVar13 = *(wchar_t **)(pFVar11 + -8);
      local_b8.DataPtr = pwVar13 + uVar7 * 0xc;
      pwVar12 = pwVar13 + 8;
      while( true ) {
        pwVar6 = local_b8.DataPtr;
        if (*(int *)pFVar11 != (int)uVar7) {
          `TCheckedPointerIterator<UE::IoStore::FOnDemandTocTagSetPackageList_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pwVar13 == pwVar6) break;
        FCbWriter::BeginObject(param_1);
        uVar3 = *(uint *)pwVar13;
        local_58 = "ContainerIndex";
        uStack_50 = 0xe;
        local_88._12_4_ = uStack_4c;
        local_88.Size = 0xe;
        local_88.DataPtr = "ContainerIndex";
        FCbWriter::SetName(param_1,&local_88);
        FCbWriter::AddInteger(param_1,uVar3);
        local_d8.Size = 0xf;
        local_d8.DataPtr = L"PackageIndicies";
        local_88.DataPtr = "PackageIndicies";
        local_88.Size = 0xf;
        local_88._12_4_ = local_d8._12_4_;
        FCbWriter::SetName(param_1,&local_88);
        FCbWriter::BeginArray(param_1);
        puVar9 = *(uint **)(pwVar12 + -4);
        uVar3 = *(uint *)pwVar12;
        puVar1 = puVar9 + (int)uVar3;
        while( true ) {
          if (*(uint *)pwVar12 != uVar3) {
            `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (puVar9 == puVar1) break;
          FCbWriter::AddInteger(param_1,*puVar9);
          puVar9 = puVar9 + 1;
        }
        FCbWriter::EndArray(param_1);
        FCbWriter::EndObject(param_1);
        uVar7 = (ulonglong)local_res18;
        pwVar13 = pwVar13 + 0xc;
        pwVar12 = pwVar12 + 0xc;
      }
      FCbWriter::EndArray(param_1);
      FCbWriter::EndObject(param_1);
      pFVar11 = pFVar11 + 0x20;
      pFVar14 = local_98 + 0x20;
      uVar7 = (ulonglong)local_res20;
      param_2 = local_res10;
    }
    FCbWriter::EndArray(param_1);
  }
  FCbWriter::EndObject(param_1);
  return param_1;
}

// operator<< @ 144588cd0

FCbWriter * __cdecl UE::IoStore::operator<<(FCbWriter *param_1,FOnDemandTocAdditionalFile *param_2)

{
  int iVar1;
  ulong64 uVar2;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 4;
  local_28.DataPtr = "Hash";
  local_18.DataPtr = L"Hash";
  local_18.Size = 4;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddHash(param_1,&param_2->Hash);
  local_18.DataPtr = (wchar_t *)(param_2->Filename).Data.AllocatorInstance.Data;
  local_28.Size = 8;
  iVar1 = (param_2->Filename).Data.ArrayNum;
  local_28.DataPtr = "Filename";
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,&local_18);
  uVar2 = param_2->FileSize;
  local_18.Size = 8;
  local_18.DataPtr = L"Filename";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,uVar2);
  FCbWriter::EndObject(param_1);
  return param_1;
}

// operator<< @ 144588de0

FCbWriter * __cdecl UE::IoStore::operator<<(FCbWriter *param_1,FOnDemandTocContainerEntry *param_2)

{
  int iVar1;
  uint uVar2;
  ulong64 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<char8_t> local_38;
  
  FCbWriter::BeginObject(param_1);
  local_48._12_4_ = uStack_8c;
  local_48.Size = 2;
  local_48.DataPtr = L"Id";
  FCbWriter::SetNameOrAddString(param_1,(TStringView<char8_t> *)&local_48);
  ::operator<<(param_1,&param_2->ContainerId);
  pFVar5 = (param_2->ContainerName).Data.AllocatorInstance.Data;
  iVar1 = (param_2->ContainerName).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  local_48.Size = 4;
  local_48.DataPtr = L"慎敭";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_48);
  local_48._12_4_ = uStack_7c;
  local_48.Size = iVar4;
  local_48.DataPtr = (wchar_t *)pFVar5;
  FCbWriter::AddString(param_1,&local_48);
  pFVar5 = (param_2->EncryptionKeyGuid).Data.AllocatorInstance.Data;
  iVar1 = (param_2->EncryptionKeyGuid).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  local_48.Size = 0x11;
  local_48.DataPtr = L"EncryptionKeyGuid";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_48);
  local_48._12_4_ = uStack_8c;
  local_48.Size = iVar4;
  local_48.DataPtr = (wchar_t *)pFVar5;
  FCbWriter::AddString(param_1,&local_48);
  local_48._12_4_ = uStack_7c;
  local_48.Size = 7;
  local_48.DataPtr = L"Entries";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_48);
  FCbWriter::BeginArray(param_1);
  iVar1 = (param_2->Entries).ArrayNum;
  pFVar5 = (param_2->Entries).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((param_2->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::IoStore::FOnDemandTocEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    FCbWriter::BeginObject(param_1);
    local_38._12_4_ = uStack_7c;
    local_38.Size = 4;
    local_38.DataPtr = "Hash";
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::AddHash(param_1,(FIoHash *)pFVar5);
    local_38._12_4_ = uStack_8c;
    local_38.Size = 7;
    local_38.DataPtr = "ChunkId";
    FCbWriter::SetNameOrAddString(param_1,&local_38);
    ::operator<<(param_1,(FIoChunkId *)(pFVar5 + 0x14));
    uVar3 = *(ulong64 *)(pFVar5 + 0x20);
    local_38._12_4_ = uStack_6c;
    local_38.Size = 7;
    local_38.DataPtr = "RawSize";
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::AddInteger(param_1,uVar3);
    uVar3 = *(ulong64 *)&pFVar5[0x28].field_0x0;
    local_38._12_4_ = uStack_5c;
    local_38.Size = 0xb;
    local_38.DataPtr = "EncodedSize";
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::AddInteger(param_1,uVar3);
    uVar2 = *(uint *)(pFVar5 + 0x30);
    local_38._12_4_ = uStack_4c;
    local_38.Size = 0xb;
    local_38.DataPtr = "BlockOffset";
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::AddInteger(param_1,uVar2);
    uVar2 = *(uint *)(pFVar5 + 0x34);
    local_48.DataPtr = L"BlockCount";
    local_48.Size = 10;
    local_38.DataPtr = "BlockCount";
    local_38.Size = 10;
    local_38._12_4_ = local_48._12_4_;
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::AddInteger(param_1,uVar2);
    FCbWriter::EndObject(param_1);
    pFVar5 = pFVar5 + 0x38;
  }
  FCbWriter::EndArray(param_1);
  local_48.Size = 10;
  local_48.DataPtr = L"BlockSizes";
  local_38.DataPtr = "BlockSizes";
  local_38.Size = 10;
  local_38._12_4_ = local_48._12_4_;
  FCbWriter::SetName(param_1,&local_38);
  FCbWriter::BeginArray(param_1);
  pFVar6 = (param_2->BlockSizes).AllocatorInstance.Data;
  iVar1 = (param_2->BlockSizes).ArrayNum;
  pFVar5 = pFVar6 + (longlong)iVar1 * 4;
  while( true ) {
    if ((param_2->BlockSizes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar5) break;
    FCbWriter::AddInteger(param_1,*(uint *)pFVar6);
    pFVar6 = pFVar6 + 4;
  }
  FCbWriter::EndArray(param_1);
  local_48.Size = 0xb;
  local_48.DataPtr = L"BlockHashes";
  local_38.DataPtr = "BlockHashes";
  local_38.Size = 0xb;
  local_38._12_4_ = local_48._12_4_;
  FCbWriter::SetName(param_1,&local_38);
  FCbWriter::BeginArray(param_1);
  pFVar6 = (param_2->BlockHashes).AllocatorInstance.Data;
  iVar1 = (param_2->BlockHashes).ArrayNum;
  pFVar5 = pFVar6 + (longlong)iVar1 * 4;
  while( true ) {
    if ((param_2->BlockHashes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar5) break;
    FCbWriter::AddInteger(param_1,*(uint *)pFVar6);
    pFVar6 = pFVar6 + 4;
  }
  FCbWriter::EndArray(param_1);
  local_48.Size = 8;
  local_48.DataPtr = L"UTocHash";
  local_38.DataPtr = "UTocHash";
  local_38.Size = 8;
  local_38._12_4_ = local_48._12_4_;
  FCbWriter::SetName(param_1,&local_38);
  FCbWriter::AddHash(param_1,&param_2->UTocHash);
  iVar1 = (param_2->Header).ArrayNum;
  if (iVar1 != 0) {
    pFVar5 = (param_2->Header).AllocatorInstance.Data;
    local_48.DataPtr = L"Header";
    local_48.Size = 6;
    local_38.DataPtr = "Header";
    local_38.Size = 6;
    local_38._12_4_ = local_48._12_4_;
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::AddBinary(param_1,pFVar5,(longlong)iVar1);
  }
  FCbWriter::EndObject(param_1);
  return param_1;
}

// operator<< @ 144589210

FCbWriter * __cdecl UE::IoStore::operator<<(FCbWriter *param_1,FOnDemandTocEntry *param_2)

{
  uint uVar1;
  ulong64 uVar2;
  TStringView<char8_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_18.Size = 4;
  local_18.DataPtr = "Hash";
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddHash(param_1,&param_2->Hash);
  local_18.Size = 7;
  local_18.DataPtr = "ChunkId";
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  ::operator<<(param_1,&param_2->ChunkId);
  uVar2 = param_2->RawSize;
  local_18.Size = 7;
  local_18.DataPtr = "RawSize";
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar2);
  uVar2 = param_2->EncodedSize;
  local_18.Size = 0xb;
  local_18.DataPtr = "EncodedSize";
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar2);
  uVar1 = param_2->BlockOffset;
  local_18.Size = 0xb;
  local_18.DataPtr = "BlockOffset";
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar1);
  uVar1 = param_2->BlockCount;
  local_18.Size = 10;
  local_18.DataPtr = "BlockCount";
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar1);
  FCbWriter::EndObject(param_1);
  return param_1;
}

// operator<< @ 1445893b0

FCbWriter * __cdecl UE::IoStore::operator<<(FCbWriter *param_1,FOnDemandTocHeader *param_2)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  int iVar4;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  uVar3 = param_2->Magic;
  local_28.DataPtr = "Magic";
  local_28.Size = 5;
  local_18.DataPtr = L"Magic";
  local_18.Size = 5;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,uVar3);
  uVar1 = param_2->Version;
  local_28.DataPtr = "Version";
  local_28.Size = 7;
  local_18.DataPtr = L"Version";
  local_18.Size = 7;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,uVar1);
  uVar1 = param_2->Flags;
  local_28.DataPtr = "Flags";
  local_28.Size = 5;
  local_18.DataPtr = L"Flags";
  local_18.Size = 5;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,uVar1);
  uVar1 = param_2->BlockSize;
  local_28.DataPtr = "BlockSize";
  local_28.Size = 9;
  local_18.DataPtr = L"BlockSize";
  local_18.Size = 9;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,uVar1);
  local_18.DataPtr = (wchar_t *)(param_2->CompressionFormat).Data.AllocatorInstance.Data;
  iVar4 = 0;
  iVar2 = (param_2->CompressionFormat).Data.ArrayNum;
  local_28.Size = 0x11;
  local_18.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_18.Size = iVar4;
  }
  local_28.DataPtr = "CompressionFormat";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,&local_18);
  local_28.DataPtr = (uchar *)(param_2->ChunksDirectory).Data.AllocatorInstance.Data;
  iVar2 = (param_2->ChunksDirectory).Data.ArrayNum;
  local_28.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_28.Size = iVar4;
  }
  local_18.Size = 0xf;
  local_18.DataPtr = L"ChunksDirectory";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  local_28.DataPtr = (uchar *)(param_2->HostGroupName).Data.AllocatorInstance.Data;
  iVar2 = (param_2->HostGroupName).Data.ArrayNum;
  local_18.Size = 0xd;
  local_28.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_28.Size = iVar4;
  }
  local_18.DataPtr = L"HostGroupName";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return param_1;
}

// operator<< @ 1445895d0

FCbWriter * __cdecl UE::IoStore::operator<<(FCbWriter *param_1,FOnDemandTocTagSet *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  TStringView<char8_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<char8_t> local_48;
  
  FCbWriter::BeginObject(param_1);
  local_58.DataPtr = (wchar_t *)(param_2->Tag).Data.AllocatorInstance.Data;
  iVar2 = (param_2->Tag).Data.ArrayNum;
  local_68.Size = 3;
  local_58.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_58.Size = 0;
  }
  local_68.DataPtr = "Tag";
  FCbWriter::SetName(param_1,&local_68);
  FCbWriter::AddString(param_1,&local_58);
  local_58.Size = 8;
  local_58.DataPtr = L"Packages";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_58);
  FCbWriter::BeginArray(param_1);
  iVar2 = (param_2->Packages).ArrayNum;
  pFVar7 = (param_2->Packages).AllocatorInstance.Data;
  pFVar6 = pFVar7 + 0x10;
  local_res10 = pFVar7 + (longlong)iVar2 * 0x18;
  while( true ) {
    pFVar4 = local_res10;
    if ((param_2->Packages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::IoStore::FOnDemandTocTagSetPackageList_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar4) break;
    FCbWriter::BeginObject(param_1);
    uVar3 = *(uint *)pFVar7;
    local_58.DataPtr = L"ContainerIndex";
    local_58.Size = 0xe;
    local_48.DataPtr = "ContainerIndex";
    local_48.Size = 0xe;
    local_48._12_4_ = local_58._12_4_;
    FCbWriter::SetName(param_1,&local_48);
    FCbWriter::AddInteger(param_1,uVar3);
    local_68.DataPtr = "PackageIndicies";
    local_68.Size = 0xf;
    local_48.DataPtr = "PackageIndicies";
    local_48.Size = 0xf;
    local_48._12_4_ = local_68._12_4_;
    FCbWriter::SetName(param_1,&local_48);
    FCbWriter::BeginArray(param_1);
    puVar5 = *(uint **)(pFVar6 + -8);
    uVar3 = *(uint *)pFVar6;
    puVar1 = puVar5 + (int)uVar3;
    while( true ) {
      if (*(uint *)pFVar6 != uVar3) {
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar5 == puVar1) break;
      FCbWriter::AddInteger(param_1,*puVar5);
      puVar5 = puVar5 + 1;
    }
    FCbWriter::EndArray(param_1);
    FCbWriter::EndObject(param_1);
    pFVar7 = pFVar7 + 0x18;
    pFVar6 = pFVar6 + 0x18;
  }
  FCbWriter::EndArray(param_1);
  FCbWriter::EndObject(param_1);
  return param_1;
}

// operator<< @ 1445897c0

FCbWriter * __cdecl
UE::IoStore::operator<<(FCbWriter *param_1,FOnDemandTocTagSetPackageList *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TStringView<char8_t> local_28;
  
  FCbWriter::BeginObject(param_1);
  uVar2 = param_2->ContainerIndex;
  local_28.Size = 0xe;
  local_28.DataPtr = "ContainerIndex";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddInteger(param_1,uVar2);
  local_28.Size = 0xf;
  local_28.DataPtr = "PackageIndicies";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::BeginArray(param_1);
  pFVar4 = (param_2->PackageIndicies).AllocatorInstance.Data;
  iVar3 = (param_2->PackageIndicies).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar3 * 4;
  while( true ) {
    if ((param_2->PackageIndicies).ArrayNum != iVar3) {
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FCbWriter::AddInteger(param_1,*(uint *)pFVar4);
    pFVar4 = pFVar4 + 4;
  }
  FCbWriter::EndArray(param_1);
  FCbWriter::EndObject(param_1);
  return param_1;
}

// operator<< @ 1445898b0

FCbWriter * __cdecl UE::IoStore::operator<<(FCbWriter *param_1,FTocMeta *param_2)

{
  int iVar1;
  long64 lVar2;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  lVar2 = param_2->EpochTimestamp;
  local_28.DataPtr = "EpochTimestamp";
  local_28.Size = 0xe;
  local_18.DataPtr = L"EpochTimestamp";
  local_18.Size = 0xe;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,lVar2);
  local_18.DataPtr = (wchar_t *)(param_2->BuildVersion).Data.AllocatorInstance.Data;
  iVar1 = (param_2->BuildVersion).Data.ArrayNum;
  local_28.Size = 0xc;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  local_28.DataPtr = "BuildVersion";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,&local_18);
  local_28.DataPtr = (uchar *)(param_2->TargetPlatform).Data.AllocatorInstance.Data;
  iVar1 = (param_2->TargetPlatform).Data.ArrayNum;
  local_18.Size = 0xe;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18.DataPtr = L"TargetPlatform";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return param_1;
}

// operator() @ 1445899e0

/* WARNING: Removing unreachable block (ram,0x000144589c8a) */

bool __thiscall
`UE::IoStore::Commands::MountFile'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  TStringView<wchar_t> *pTVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined8 uStack_30;
  
  bVar6 = false;
  if (param_2) {
    return true;
  }
  ::FString::FString(&local_98,param_1);
  local_78.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_78.Size = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    local_78.Size = 0;
  }
  pTVar10 = FPathViews::GetExtension(&local_48,&local_78,false);
  local_38 = pTVar10->DataPtr;
  uStack_30 = *(undefined8 *)&pTVar10->Size;
  iVar9 = (int)*(undefined8 *)&pTVar10->Size;
  if (iVar9 == 0) goto LAB_144589c9f;
  iVar8 = FGenericPlatformStricmp::Strnicmp(local_38,L"uondemandtoc",(longlong)iVar9);
  if ((iVar8 != 0) || (L"uondemandtoc"[iVar9] != L'\0')) goto LAB_144589c9f;
  local_68.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_68.Size = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    local_68.Size = 0;
  }
  FPathViews::GetBaseFilename(&local_88,&local_68);
  iVar4 = local_88.Size;
  iVar9 = *(int *)(*(undefined8 **)this + 1);
  iVar8 = 0;
  iVar14 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar14 = iVar8;
  }
  if (((local_88.Size == iVar14) &&
      (((local_88.Size == 0 || (iVar14 == 0)) ||
       (iVar9 = FGenericPlatformStricmp::Strnicmp
                          (local_88.DataPtr,(wchar_t *)**(undefined8 **)this,(longlong)iVar14),
       iVar9 == 0)))) && (iVar4 == iVar14)) {
LAB_144589b9f:
    bVar5 = true;
    if (bVar6) goto LAB_144589ba6;
  }
  else {
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    pFVar11 = ::FString::ConstructFromPtrSize(&local_58,local_88.DataPtr,local_88.Size);
    if (&local_a8 != pFVar11) {
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_a8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar9 = *(int *)(*(undefined8 **)this + 1);
    if (iVar9 == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)**(undefined8 **)this;
      iVar8 = iVar9 + -1;
    }
    bVar6 = true;
    bVar5 = ::FString::MatchesWildcard(&local_a8,pwVar12,iVar8,IgnoreCase);
    if (bVar5) goto LAB_144589b9f;
    bVar5 = false;
LAB_144589ba6:
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_144589c9f;
  }
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  ::FString::FString(&local_b8,param_1);
  if (((pFVar2->Data <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 <
       pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iVar9 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar9 + 1;
  pFVar13 = pFVar2->Data + (longlong)iVar9 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(FScriptContainerElement **)pFVar13 = local_b8.Data.AllocatorInstance.Data;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar13 + 8) = local_b8.Data.ArrayNum;
  *(int *)(pFVar13 + 0xc) = local_b8.Data.ArrayMax;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
LAB_144589c9f:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return true;
}

// DefragInstallCache @ 14458b960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::IoStore::Commands::DefragInstallCache(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  IOnDemandIoStore *pIVar2;
  bool bVar3;
  undefined ***pppuVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  TStringView<wchar_t> local_98;
  undefined4 local_88 [2];
  wchar_t *local_80;
  undefined1 local_78;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  pIVar2 = GOnDemandIoStore;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (GOnDemandIoStore == (IOnDemandIoStore *)0x0) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    return;
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  local_88[0] = 0;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  local_78 = 0;
  do {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (pFVar6 == pFVar7) goto LAB_14458ba3f;
    local_98.DataPtr = *(wchar_t **)pFVar6;
    iStack_60 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      iStack_60 = 0;
    }
    local_98._12_4_ = uStack_5c;
    local_98.Size = iStack_60;
    local_68 = local_98.DataPtr;
    bVar3 = String::IsNumericOnlyDigits(&local_98);
    if (bVar3) {
      local_98.DataPtr = (wchar_t *)0x0;
      if (*(int *)(pFVar6 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar6;
      }
      bVar3 = LexTryParseString<unsigned___int64>((ulong64 *)&local_98,pwVar5);
      if (bVar3) {
        local_80 = local_98.DataPtr;
        local_78 = 1;
LAB_14458ba3f:
        if (3 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        local_30 = (undefined ***)0x0;
        local_48 = &
                   ___7__TFunction_OwnedObject_P6AXAEBUFOnDemandDefragResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        local_40 = `UE::IoStore::Commands::DefragInstallCache'::__l5::<lambda_1>::
                   <lambda_invoker_cdecl>;
        local_58[0] = Core::Private::Function::
                      TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),void,UE::IoStore::FOnDemandDefragResult>
                      ::Call;
        (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,local_88,local_58);
        if (local_58[0] == (code *)0x0) {
          return;
        }
        pppuVar4 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
        return;
      }
    }
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// GetErrorCodeId @ 14458c770

int __cdecl UE::UnifiedError::IoStoreOnDemand::CasError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c780

int __cdecl UE::UnifiedError::IoStoreOnDemand::CasJournalError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c790

int __cdecl UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c7a0

int __cdecl UE::UnifiedError::IoStoreOnDemand::ChunkHashError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c7b0

int __cdecl UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c7c0

int __cdecl UE::UnifiedError::IoStoreOnDemand::HttpError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c7d0

int __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c7e0

int __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c7f0

int __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c800

int __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetErrorCodeId @ 14458c810

int __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetErrorCodeId(void)

{
  return ErrorCodeId;
}

// GetOnDemandIoStore @ 14458c8a0

IOnDemandIoStore * __cdecl UE::IoStore::GetOnDemandIoStore(void)

{
  code *pcVar1;
  bool bVar2;
  IOnDemandIoStore *pIVar3;
  
  if ((GOnDemandIoStore == (IOnDemandIoStore *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GOnDemandIoStore != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\IoStoreOnDemand.cpp"
                         ,0x22c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnDemandIoStore *)(*pcVar1)();
    return pIVar3;
  }
  return GOnDemandIoStore;
}

// GetStaticError @ 14458c8f0

FError * __cdecl UE::UnifiedError::IoStoreOnDemand::CasError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "CasError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("CasError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::CasError::GetStaticErrorDetails'::__l2::
                 _dynamic_atexit_destructor_for__StaticErrorDetails__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      (**(code **)(::StaticErrorDetails._padding_ + 0x10))(&::StaticErrorDetails);
      atexit(`UE::UnifiedError::IoStoreOnDemand::CasError::GetStaticError'::__l2::
             _dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458ca80

FError * __cdecl UE::UnifiedError::IoStoreOnDemand::CasJournalError::GetStaticError(void)

{
  IErrorDetails *pIVar1;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar2;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      TVar2 = GetStaticErrorDetails();
      pIVar1 = (IErrorDetails *)(TVar2.Reference)->_padding_;
      if (pIVar1 == (IErrorDetails *)0x0) {
        ::StaticError.ErrorCode = ErrorCodeId;
        ::StaticError.ModuleId = StaticModuleId;
        ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
      }
      else {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
        ::StaticError.ErrorCode = ErrorCodeId;
        ::StaticError.ModuleId = StaticModuleId;
        ::StaticError.ErrorDetails.Reference = pIVar1;
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
      atexit(`UE::UnifiedError::IoStoreOnDemand::CasJournalError::GetStaticError'::__l2::
             _dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458cb80

FError * __cdecl UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "CasSnapshotError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("CasSnapshotError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::GetStaticErrorDetails'::__l2
                 ::_dynamic_atexit_destructor_for__StaticErrorDetails__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      (**(code **)(::StaticErrorDetails._padding_ + 0x10))(&::StaticErrorDetails);
      atexit(`UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::GetStaticError'::__l2::
             _dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458cd10

FError * __cdecl UE::UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "ChunkHashError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("ChunkHashError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticErrorDetails'::__l2::
                 _dynamic_atexit_destructor_for__StaticErrorDetails__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      (**(code **)(::StaticErrorDetails._padding_ + 0x10))(&::StaticErrorDetails);
      atexit(`UE::UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticError'::__l2::
             _dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458cea0

FError * __cdecl UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "ChunkMissingError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("ChunkMissingError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::GetStaticErrorDetails'::__l2
                 ::_dynamic_atexit_destructor_for__StaticErrorDetails__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      (**(code **)(::StaticErrorDetails._padding_ + 0x10))(&::StaticErrorDetails);
      atexit(`UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::GetStaticError'::__l2::
             _dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458d030

FError * __cdecl UE::UnifiedError::IoStoreOnDemand::HttpError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined8 local_res8;
  FDynamicErrorDetails *local_res10;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "HttpError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("HttpError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::HttpError::GetStaticErrorDetails'::__l2::
                 _dynamic_atexit_destructor_for__StaticErrorDetails__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,&local_res8);
      local_res10 = ::operator_new(0x28);
      if (local_res10 == (FDynamicErrorDetails *)0x0) {
        local_res10 = (FDynamicErrorDetails *)0x0;
      }
      else {
        local_res8 = 0;
        FDynamicErrorDetails::FDynamicErrorDetails(local_res10,(IErrorDetails *)&local_res8);
        *(undefined4 *)&local_res10[1]._padding_ = 0;
        local_res10->_padding_ =
             (longlong)
             &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::
              _vftable__for__UE__UnifiedError__IErrorDetails__;
        *(undefined1 *)((longlong)&local_res10[1]._padding_ + 4) = 5;
        local_res10->_padding_ =
             (longlong)
             &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::
              _vftable__for__FRefCountBase__;
        (**(code **)(local_res10->_padding_ + 8))(local_res10,&local_res8);
      }
      FError::PushErrorDetails(&::StaticError,(IErrorDetails *)&local_res10);
      atexit(`UE::UnifiedError::IoStoreOnDemand::HttpError::GetStaticError'::__l2::
             _dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458d200

FError * __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "InstallCacheDefragError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("InstallCacheDefragError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetStaticErrorDetails'
                 ::__l2::_dynamic_atexit_destructor_for__StaticErrorDetails__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      (**(code **)(::StaticErrorDetails._padding_ + 0x10))(&::StaticErrorDetails);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetStaticError'::__l2::
             _dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458d390

FError * __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "InstallCacheFlushError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("InstallCacheFlushError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::GetStaticErrorDetails'
                 ::__l2::_dynamic_atexit_destructor_for__StaticErrorDetails__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      (**(code **)(::StaticErrorDetails._padding_ + 0x10))(&::StaticErrorDetails);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::GetStaticError'::__l2::
             _dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458d520

FError * __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "InstallCacheFlushLastAccessError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("InstallCacheFlushLastAccessError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::
                 GetStaticErrorDetails'::__l2::_dynamic_atexit_destructor_for__StaticErrorDetails__)
          ;
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      (**(code **)(::StaticErrorDetails._padding_ + 0x10))(&::StaticErrorDetails);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::GetStaticError'::
             __l2::_dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458d6b0

FError * __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "InstallCachePurgeError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("InstallCachePurgeError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticErrorDetails'
                 ::__l2::_dynamic_atexit_destructor_for__StaticErrorDetails__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      (**(code **)(::StaticErrorDetails._padding_ + 0x10))(&::StaticErrorDetails);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticError'::__l2::
             _dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticError @ 14458d840

FError * __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetStaticError(void)

{
  size_t sVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar2 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          sVar1 = strlen("IoStoreOnDemand");
          local_28._12_4_ = local_18._12_4_;
          local_28.Size = (int)sVar1;
          local_18.DataPtr = "InstallCacheVerificationError";
          local_28.DataPtr = "IoStoreOnDemand";
          sVar1 = strlen("InstallCacheVerificationError");
          local_18.Size = (int)sVar1;
          FStaticErrorDetails::FStaticErrorDetails
                    (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
          atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::
                 GetStaticErrorDetails'::__l2::_dynamic_atexit_destructor_for__StaticErrorDetails__)
          ;
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      ::StaticError.ErrorCode = ErrorCodeId;
      ::StaticError.ModuleId = StaticModuleId;
      ::StaticError.ErrorDetails.Reference = (IErrorDetails *)&::StaticErrorDetails;
      (**(code **)(::StaticErrorDetails._padding_ + 8))(&::StaticErrorDetails,local_res8);
      (**(code **)(::StaticErrorDetails._padding_ + 0x10))(&::StaticErrorDetails);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetStaticError'::
             __l2::_dynamic_atexit_destructor_for__StaticError__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticError;
    }
  }
  return &::StaticError;
}

// GetStaticErrorDetails @ 14458d9d0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::CasError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "CasError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("CasError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::CasError::GetStaticErrorDetails'::__l2::
             _dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458dad0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::CasJournalError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "CasJournalError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("CasJournalError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::CasJournalError::GetStaticErrorDetails'::__l2::
             _dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458dbd0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "CasSnapshotError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("CasSnapshotError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::GetStaticErrorDetails'::__l2::
             _dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458dcd0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "ChunkHashError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("ChunkHashError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticErrorDetails'::__l2::
             _dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458ddd0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "ChunkMissingError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("ChunkMissingError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::GetStaticErrorDetails'::__l2::
             _dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458ded0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::HttpError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "HttpError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("HttpError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::HttpError::GetStaticErrorDetails'::__l2::
             _dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458dfd0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "InstallCacheDefragError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("InstallCacheDefragError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetStaticErrorDetails'::
             __l2::_dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458e0d0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "InstallCacheFlushError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("InstallCacheFlushError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::GetStaticErrorDetails'::
             __l2::_dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458e1d0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "InstallCacheFlushLastAccessError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("InstallCacheFlushLastAccessError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::
             GetStaticErrorDetails'::__l2::_dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458e2d0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "InstallCachePurgeError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("InstallCachePurgeError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticErrorDetails'::
             __l2::_dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorDetails @ 14458e3d0

TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetStaticErrorDetails(void)

{
  size_t sVar1;
  FStaticErrorDetails *in_RCX;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      sVar1 = strlen("IoStoreOnDemand");
      local_28._12_4_ = local_18._12_4_;
      local_28.Size = (int)sVar1;
      local_18.DataPtr = "InstallCacheVerificationError";
      local_28.DataPtr = "IoStoreOnDemand";
      sVar1 = strlen("InstallCacheVerificationError");
      local_18.Size = (int)sVar1;
      FStaticErrorDetails::FStaticErrorDetails
                (&::StaticErrorDetails,&local_18,&local_28,&DeclaredFormatString);
      atexit(`UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::
             GetStaticErrorDetails'::__l2::_dynamic_atexit_destructor_for__StaticErrorDetails__);
      _Init_thread_footer(&::_TSS0);
      in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
      return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
    }
  }
  in_RCX->_padding_ = (longlong)&::StaticErrorDetails;
  return (TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_>)in_RCX;
}

// GetStaticErrorName @ 14458e4d0

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::CasError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "CasError";
  sVar1 = strlen("CasError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e500

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::CasJournalError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "CasJournalError";
  sVar1 = strlen("CasJournalError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e530

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "CasSnapshotError";
  sVar1 = strlen("CasSnapshotError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e560

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "ChunkHashError";
  sVar1 = strlen("ChunkHashError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e590

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "ChunkMissingError";
  sVar1 = strlen("ChunkMissingError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e5c0

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::HttpError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "HttpError";
  sVar1 = strlen("HttpError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e5f0

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "InstallCacheDefragError";
  sVar1 = strlen("InstallCacheDefragError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e620

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "InstallCacheFlushError";
  sVar1 = strlen("InstallCacheFlushError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e650

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "InstallCacheFlushLastAccessError";
  sVar1 = strlen("InstallCacheFlushLastAccessError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e680

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "InstallCachePurgeError";
  sVar1 = strlen("InstallCachePurgeError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticErrorName @ 14458e6b0

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetStaticErrorName
          (TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "InstallCacheVerificationError";
  sVar1 = strlen("InstallCacheVerificationError");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetStaticModuleId @ 14458e6e0

int __cdecl UE::UnifiedError::IoStoreOnDemand::GetStaticModuleId(void)

{
  return StaticModuleId;
}

// GetStaticModuleName @ 14458e6f0

TStringView<char> * __cdecl
UE::UnifiedError::IoStoreOnDemand::GetStaticModuleName(TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr = "IoStoreOnDemand";
  sVar1 = strlen("IoStoreOnDemand");
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// InstallPackage @ 14458ec80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::IoStore::Commands::InstallPackage(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  IOnDemandIoStore *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int iVar7;
  FPackageId FVar8;
  undefined4 *puVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  int *piVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_178 [32];
  FString local_138;
  FName local_128 [2];
  TStringView<wchar_t> local_118;
  void *local_108;
  undefined8 local_100;
  FString *local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FOnDemandInternalContentHandle *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined **local_b8 [2];
  longlong *local_a8;
  TReferenceControllerBase<1> *local_98;
  code *local_88 [2];
  undefined **local_78;
  FScriptContainerElement *local_70;
  int local_68;
  int local_64;
  undefined ***local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  pIVar4 = GOnDemandIoStore;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (GOnDemandIoStore == (IOnDemandIoStore *)0x0) {
    if ((byte)LogIoStoreOnDemand._0_1_ < 2) {
      return;
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    return;
  }
  if (param_1->ArrayNum < 1) {
    if ((byte)LogIoStoreOnDemand._0_1_ < 2) {
      return;
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = *(int *)(pFVar1 + 8);
  _Src = *(void **)pFVar1;
  local_138.Data.ArrayNum = iVar7;
  if (iVar7 == 0) {
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)&local_138,iVar7,&local_138.Data.ArrayMax);
    memcpy(local_138.Data.AllocatorInstance.Data,_Src,(longlong)iVar7 * 2);
  }
  ::FString::TrimQuotesInline(&local_138,(bool *)0x0);
  local_118.Size = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    local_118.Size = 0;
  }
  local_118.DataPtr = (wchar_t *)local_138.Data.AllocatorInstance.Data;
  bVar6 = FPackageName::IsValidLongPackageName(&local_118,false,(EErrorCode *)0x0);
  if (bVar6) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar13.Data = local_138.Data.AllocatorInstance.Data;
    }
    ::FName::FName(local_128,(wchar_t *)FVar13.Data);
    FVar8 = FPackageId::FromName((FName *)&local_118);
    lVar2 = *(longlong *)FVar8.Id;
    if (lVar2 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        puVar9 = FMemory::Malloc(0x26,0);
        *puVar9 = 1;
        local_128[0] = (FName)(puVar9 + 2);
        puVar9[1] = 0xe;
        uVar3 = u_ConsoleCommand._8_8_;
        *(undefined8 *)local_128[0] = u_ConsoleCommand._0_8_;
        *(undefined8 *)(puVar9 + 4) = uVar3;
        *(undefined8 *)(puVar9 + 6) = u_ConsoleCommand._16_8_;
        puVar9[8] = u_ConsoleCommand._24_4_;
        *(undefined2 *)(puVar9 + 9) = 0;
        FOnDemandContentHandle::Create(&DefaultContentHandle,(TSharedString<wchar_t>)local_128);
        atexit(`UE::IoStore::Commands::InstallPackage'::__l2::
               _dynamic_atexit_destructor_for__DefaultContentHandle__);
        _Init_thread_footer(&::_TSS0);
      }
      local_108 = (void *)0x0;
      local_d8 = (FOnDemandInternalContentHandle *)0x0;
      pTStack_d0 = (TReferenceControllerBase<1> *)0x0;
      local_100 = 0;
      local_f8 = (FString *)0x0;
      local_f0 = 0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_e8,(int *)((longlong)&local_e0 + 4));
      pTVar5 = pTStack_d0;
      local_e0 = CONCAT44(local_e0._4_4_,iVar7 + 1);
      *(longlong *)(local_e8.Data + (longlong)iVar7 * 8) = lVar2;
      pTStack_d0 = DefaultContentHandle.Handle.SharedReferenceCount.ReferenceController;
      local_d8 = DefaultContentHandle.Handle.Object;
      if (DefaultContentHandle.Handle.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (DefaultContentHandle.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             = (atomic<int>)
               ((int)(DefaultContentHandle.Handle.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      local_c8 = CONCAT44(local_c8._4_4_,2);
      local_78 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::IoStore::Commands::InstallPackage'::`2'::<lambda_1>,1,0>
                  ::_vftable_;
      local_70 = local_138.Data.AllocatorInstance.Data;
      local_64 = local_138.Data.ArrayMax;
      local_68 = local_138.Data.ArrayNum;
      local_88[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::IoStore::Commands::InstallPackage'::__l2::<lambda_1>,void,UE::IoStore::FOnDemandInstallResult>
                    ::Call;
      local_58 = 0;
      local_30 = (longlong *)0x0;
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
      local_60 = (undefined ***)0x0;
      (**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,local_b8,&local_108,local_88);
      local_b8[0] = &___7FOnDemandInstallRequest_IoStore_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        piVar12 = (int *)((longlong)local_a8 + 0xc);
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar10 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar10 = local_60;
        }
        (*(code *)(*pppuVar10)[2])();
      }
      if (local_58 != 0) {
        plVar11 = local_48;
        if (local_30 != (longlong *)0x0) {
          plVar11 = local_30;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_c0 != 0) {
        piVar12 = (int *)(local_c0 + -8);
        LOCK();
        iVar7 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FMemory::Free(piVar12);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_d0);
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      DestructItems<FString,int>(local_f8,(int)local_f0);
      if (local_f8 != (FString *)0x0) {
        FMemory::Free(local_f8);
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      goto LAB_14458eff9;
    }
  }
  if (1 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
LAB_14458eff9:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return;
}

// LexToString @ 14458f430

FString * __cdecl
UE::IoStore::LexToString(FString *__return_storage_ptr__,FOnDemandContentHandle *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = (param_1->Handle).Object == (FOnDemandInternalContentHandle *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_18,L"Invalid");
  }
  else {
    ::FString::PrintfImpl(&local_28,L"Id=0x%llX DebugName=\'%s\'");
    pFVar1 = &local_28;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((!bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LoadFromCompactBinary @ 14458f500

bool __cdecl UE::IoStore::LoadFromCompactBinary(FCbFieldView *param_1,FOnDemandToc *param_2)

{
  int *piVar1;
  TArray<UE::IoStore::FOnDemandTocAdditionalFile,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::IoStore::FOnDemandTocTagSet,TSizedDefaultAllocator<32>_> *pTVar3;
  uchar *puVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  FOnDemandTocContainerEntry *pFVar9;
  FOnDemandTocAdditionalFile *pFVar10;
  FOnDemandTocTagSet *pFVar11;
  FCbObjectView local_78;
  uchar *local_68;
  void *pvStack_60;
  FCbFieldView local_58;
  TCbFieldIterator<FCbFieldView> local_48;
  uchar *local_28;
  void *pvStack_20;
  
  FCbFieldView::AsObjectView(param_1,&local_78);
  bVar6 = FCbObjectView::operator_bool(&local_78);
  if (bVar6) {
    pvStack_60 = (void *)CONCAT44(pvStack_60._4_4_,6);
    local_68 = "Header";
    FCbObjectView::FindView(&local_78,(FCbFieldView *)&local_48,(TStringView<char8_t> *)&local_68);
    pvStack_20 = (void *)local_48._padding_;
    bVar6 = LoadFromCompactBinary((FCbFieldView *)&local_28,&param_2->Header);
    if (bVar6) {
      if (4 < (param_2->Header).Version) {
        pvStack_60 = (void *)CONCAT44(pvStack_60._4_4_,4);
        local_68 = "Meta";
        local_28 = "Meta";
        pvStack_20 = pvStack_60;
        FCbObjectView::FindView
                  (&local_78,(FCbFieldView *)&local_48,(TStringView<char8_t> *)&local_28);
        pvStack_60 = (void *)local_48._padding_;
        bVar6 = LoadFromCompactBinary((FCbFieldView *)&local_68,&param_2->Meta);
        if (!bVar6) {
          return false;
        }
      }
      pvStack_60 = (void *)CONCAT44(pvStack_60._4_4_,10);
      local_68 = "Containers";
      local_28 = "Containers";
      pvStack_20 = pvStack_60;
      FCbObjectView::FindView(&local_78,(FCbFieldView *)&local_48,(TStringView<char8_t> *)&local_28)
      ;
      FCbFieldView::AsArrayView((FCbFieldView *)&local_48,(FCbArrayView *)&local_58);
      uVar8 = FCbArrayView::Num((FCbArrayView *)&local_58);
      iVar7 = (int)uVar8;
      if (-1 < iVar7) {
        piVar1 = &(param_2->Containers).ArrayMax;
        if ((param_2->Containers).ArrayMax < iVar7) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,iVar7,&(param_2->Containers).AllocatorInstance,
                     (param_2->Containers).ArrayNum,piVar1);
        }
        FCbFieldView::CreateViewIterator(&local_58,(FCbFieldViewIterator *)&local_48);
        pvVar5 = (void *)local_48._padding_;
        while (local_48._padding_ = (longlong)pvVar5, ((byte)local_48._padding_ & 0x1f) != 0) {
          iVar7 = (param_2->Containers).ArrayNum;
          puVar4 = (uchar *)CONCAT71(local_48._padding_._1_7_,(byte)local_48._padding_);
          if (iVar7 == *piVar1) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x880,&(param_2->Containers).AllocatorInstance,piVar1);
          }
          (param_2->Containers).ArrayNum = iVar7 + 1;
          pFVar9 = (FOnDemandTocContainerEntry *)
                   ((param_2->Containers).AllocatorInstance.Data + (longlong)iVar7 * 0x80);
          DefaultConstructItems<UE::IoStore::FOnDemandTocContainerEntry,int>(pFVar9,1);
          local_28 = puVar4;
          pvStack_20 = pvVar5;
          bVar6 = LoadFromCompactBinary((FCbFieldView *)&local_28,pFVar9);
          if (!bVar6) {
            return false;
          }
          TCbFieldIterator<FCbFieldView>::operator++(&local_48);
          pvVar5 = (void *)local_48._padding_;
        }
        if (6 < (param_2->Header).Version) {
          pvStack_60._4_4_ = (undefined4)((ulonglong)pvStack_60 >> 0x20);
          pvStack_60 = (void *)CONCAT44(pvStack_60._4_4_,5);
          local_68 = "Files";
          local_28 = "Files";
          pvStack_20 = pvStack_60;
          FCbObjectView::FindView
                    (&local_78,(FCbFieldView *)&local_48,(TStringView<char8_t> *)&local_28);
          FCbFieldView::AsArrayView((FCbFieldView *)&local_48,(FCbArrayView *)&local_68);
          pTVar2 = &param_2->AdditionalFiles;
          uVar8 = FCbArrayView::Num((FCbArrayView *)&local_68);
          iVar7 = (int)uVar8;
          if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
          }
          piVar1 = &(param_2->AdditionalFiles).ArrayMax;
          if ((param_2->AdditionalFiles).ArrayMax < iVar7) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar7,&pTVar2->AllocatorInstance,(param_2->AdditionalFiles).ArrayNum,
                       piVar1);
          }
          FCbFieldView::CreateViewIterator
                    ((FCbFieldView *)&local_68,(FCbFieldViewIterator *)&local_48);
          pvVar5 = (void *)local_48._padding_;
          while (local_48._padding_ = (longlong)pvVar5, ((byte)local_48._padding_ & 0x1f) != 0) {
            iVar7 = (param_2->AdditionalFiles).ArrayNum;
            puVar4 = (uchar *)CONCAT71(local_48._padding_._1_7_,(byte)local_48._padding_);
            if (iVar7 == *piVar1) {
              iVar7 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x830,&pTVar2->AllocatorInstance,piVar1);
            }
            (param_2->AdditionalFiles).ArrayNum = iVar7 + 1;
            pFVar10 = (FOnDemandTocAdditionalFile *)
                      ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x30);
            DefaultConstructItems<UE::IoStore::FOnDemandTocAdditionalFile,int>(pFVar10,1);
            local_28 = puVar4;
            pvStack_20 = pvVar5;
            bVar6 = LoadFromCompactBinary((FCbFieldView *)&local_28,pFVar10);
            if (!bVar6) {
              return false;
            }
            TCbFieldIterator<FCbFieldView>::operator++(&local_48);
            pvVar5 = (void *)local_48._padding_;
          }
        }
        if (7 < (param_2->Header).Version) {
          pvStack_60 = (void *)CONCAT44(pvStack_60._4_4_,7);
          local_68 = "TagSets";
          local_28 = "TagSets";
          pvStack_20 = pvStack_60;
          FCbObjectView::FindView
                    (&local_78,(FCbFieldView *)&local_48,(TStringView<char8_t> *)&local_28);
          FCbFieldView::AsArrayView((FCbFieldView *)&local_48,(FCbArrayView *)&local_68);
          pTVar3 = &param_2->TagSets;
          uVar8 = FCbArrayView::Num((FCbArrayView *)&local_68);
          iVar7 = (int)uVar8;
          if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
          }
          piVar1 = &(param_2->TagSets).ArrayMax;
          if ((param_2->TagSets).ArrayMax < iVar7) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar7,&pTVar3->AllocatorInstance,(param_2->TagSets).ArrayNum,piVar1);
          }
          FCbFieldView::CreateViewIterator
                    ((FCbFieldView *)&local_68,(FCbFieldViewIterator *)&local_48);
          pvVar5 = (void *)local_48._padding_;
          while (((byte)local_48._padding_ & 0x1f) != 0) {
            iVar7 = (param_2->TagSets).ArrayNum;
            puVar4 = (uchar *)CONCAT71(local_48._padding_._1_7_,(byte)local_48._padding_);
            local_48._padding_ = (longlong)pvVar5;
            if (iVar7 == *piVar1) {
              iVar7 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&pTVar3->AllocatorInstance,piVar1);
            }
            (param_2->TagSets).ArrayNum = iVar7 + 1;
            pFVar11 = (FOnDemandTocTagSet *)
                      ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x20);
            DefaultConstructItems<UE::IoStore::FOnDemandTocTagSet,int>(pFVar11,1);
            local_28 = puVar4;
            pvStack_20 = pvVar5;
            bVar6 = LoadFromCompactBinary((FCbFieldView *)&local_28,pFVar11);
            if (!bVar6) {
              return false;
            }
            TCbFieldIterator<FCbFieldView>::operator++(&local_48);
            pvVar5 = (void *)local_48._padding_;
          }
        }
        return true;
      }
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
    }
  }
  return false;
}

// LoadFromCompactBinary @ 14458f920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::IoStore::LoadFromCompactBinary(FCbFieldView *param_1,FOnDemandTocAdditionalFile *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  FIoHash *pFVar4;
  TStringView<char8_t> *pTVar5;
  FString *pFVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  ForAnyElementType local_98;
  void *pvStack_90;
  FCbObjectView local_88;
  FString local_78;
  undefined1 local_68 [32];
  FIoHash local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FCbFieldView::AsObjectView(param_1,&local_88);
  bVar3 = FCbObjectView::operator_bool(&local_88);
  if (bVar3) {
    uStack_a0._0_4_ = 4;
    local_a8 = (undefined1  [8])0x15073d4cc;
    FCbObjectView::FindView(&local_88,(FCbFieldView *)&local_98,(TStringView<char8_t> *)local_a8);
    local_48.Hash[0x10] = '\0';
    local_48.Hash[0x11] = '\0';
    local_48.Hash[0x12] = '\0';
    local_48.Hash[0x13] = '\0';
    local_48.Hash._0_8_ = (uchar *)0x0;
    local_48.Hash._8_8_ = 0;
    pFVar4 = FCbFieldView::AsHash((FCbFieldView *)&local_98,(FIoHash *)local_68,&local_48);
    uStack_a0 = (void *)CONCAT44(uStack_a0._4_4_,8);
    uVar2 = *(undefined8 *)(pFVar4->Hash + 8);
    *(undefined8 *)(param_2->Hash).Hash = *(undefined8 *)pFVar4->Hash;
    *(undefined8 *)((param_2->Hash).Hash + 8) = uVar2;
    *(undefined4 *)((param_2->Hash).Hash + 0x10) = *(undefined4 *)(pFVar4->Hash + 0x10);
    local_a8 = (undefined1  [8])0x1506b6e90;
    local_98.Data = (FScriptContainerElement *)0x1506b6e90;
    pvStack_90 = uStack_a0;
    FCbObjectView::FindView(&local_88,(FCbFieldView *)local_68,(TStringView<char8_t> *)&local_98);
    pFVar8 = (FScriptContainerElement *)0x0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    local_a8 = (undefined1  [8])0x0;
    local_98.Data = (FScriptContainerElement *)0x0;
    pvStack_90 = (void *)0x0;
    pTVar5 = FCbFieldView::AsString
                       ((FCbFieldView *)local_68,(TStringView<char8_t> *)&local_48,
                        (TStringView<char8_t> *)&local_98);
    pFVar6 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_98,pTVar5->DataPtr,(int)*(undefined8 *)&pTVar5->Size);
    iVar9 = 0;
    iVar10 = iVar9;
    if (&local_78 != pFVar6) {
      pFVar8 = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = (pFVar6->Data).ArrayNum;
      iVar10 = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    pFVar6 = &param_2->Filename;
    if (pFVar6 == &local_78) {
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
    }
    else {
      pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar6->Data).AllocatorInstance.Data = pFVar8;
      (param_2->Filename).Data.ArrayNum = iVar9;
      (param_2->Filename).Data.ArrayMax = iVar10;
    }
    uStack_a0 = (void *)CONCAT44(uStack_a0._4_4_,8);
    local_a8 = (undefined1  [8])0x150a75460;
    local_68._0_8_ = "FileSize";
    local_68._8_8_ = uStack_a0;
    FCbObjectView::FindView(&local_88,(FCbFieldView *)&local_98,(TStringView<char8_t> *)local_68);
    uVar7 = FCbFieldView::AsInteger((FCbFieldView *)&local_98,0,(FIntegerParams)0x80);
    param_2->FileSize = uVar7;
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// LoadFromCompactBinary @ 14458fb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::IoStore::LoadFromCompactBinary(FCbFieldView *param_1,FOnDemandTocContainerEntry *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement aFVar8 [4];
  TStringView<char8_t> *pTVar9;
  FString *pFVar10;
  ulong64 uVar11;
  FIoHash *pFVar12;
  FOnDemandTocEntry *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  int iVar17;
  undefined1 auStackY_3e8 [32];
  undefined4 local_398;
  FScriptContainerElement local_394 [4];
  FCbObjectView local_390;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  TCbFieldIterator<FCbFieldView> local_358;
  TCbFieldIterator<FCbFieldView> local_340;
  TCbFieldIterator<FCbFieldView> local_328;
  undefined *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  char *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  char *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FCbFieldView local_2d8;
  char *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  FCbFieldView local_2b8;
  char *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  FCbFieldView local_298;
  FCbFieldView local_288;
  char *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  char *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  TMemoryView<void_const_> local_258;
  TMemoryView<void_const_> local_248;
  FString local_238;
  FString local_228;
  TStringView<char8_t> local_218;
  TStringView<char8_t> local_208;
  FCbFieldView local_1f8;
  FString local_1e8;
  FString local_1d8;
  TStringView<char8_t> local_1c8;
  FCbFieldView local_1b8;
  FCbFieldView local_1a8;
  TStringView<char8_t> local_198;
  FCbFieldView local_188;
  FCbFieldView local_178;
  TStringView<char8_t> local_168;
  FCbFieldView local_158;
  TStringView<char8_t> local_148;
  FCbFieldView local_138;
  TStringView<char8_t> local_128;
  FCbFieldView local_118;
  TStringView<char8_t> local_108;
  TStringView<char8_t> local_f8;
  FCbFieldView local_e8;
  uchar *local_d8;
  undefined8 uStack_d0;
  TStringView<char8_t> local_c8;
  uchar *local_b8;
  undefined8 uStack_b0;
  TStringView<char8_t> local_a8;
  FIoHash local_98;
  FIoHash local_84;
  FIoHash local_70;
  FIoHash local_5c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  FCbFieldView::AsObjectView(param_1,&local_390);
  bVar5 = FCbObjectView::operator_bool(&local_390);
  if (bVar5) {
    uStack_300 = 4;
    local_308 = &s_Name;
    local_128._12_4_ = uStack_2fc;
    local_128.Size = 4;
    local_128.DataPtr = "Name";
    FCbObjectView::FindView(&local_390,&local_e8,&local_128);
    pFVar15 = (FScriptContainerElement *)0x0;
    uStack_370 = 0;
    local_378 = 0;
    local_f8.DataPtr = (uchar *)0x0;
    local_f8.Size = 0;
    local_f8._12_4_ = 0;
    pTVar9 = FCbFieldView::AsString(&local_e8,&local_c8,&local_f8);
    local_b8 = pTVar9->DataPtr;
    uStack_b0 = *(undefined8 *)&pTVar9->Size;
    pFVar10 = ::FString::ConstructFromPtrSize
                        (&local_238,pTVar9->DataPtr,(int)*(undefined8 *)&pTVar9->Size);
    iVar7 = 0;
    iVar16 = 0;
    pFVar14 = pFVar15;
    iVar17 = iVar16;
    if (&local_228 != pFVar10) {
      pFVar14 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (pFVar10->Data).ArrayNum;
      iVar17 = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    pFVar10 = &param_2->ContainerName;
    if (pFVar10 == &local_228) {
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
    }
    else {
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar10->Data).AllocatorInstance.Data = pFVar14;
      (param_2->ContainerName).Data.ArrayNum = iVar7;
      (param_2->ContainerName).Data.ArrayMax = iVar17;
    }
    uStack_2f0 = 0x11;
    local_2f8 = "EncryptionKeyGuid";
    local_218._12_4_ = uStack_2ec;
    local_218.Size = 0x11;
    local_218.DataPtr = "EncryptionKeyGuid";
    FCbObjectView::FindView(&local_390,&local_1f8,&local_218);
    uStack_360 = 0;
    local_368 = 0;
    local_208.DataPtr = (uchar *)0x0;
    local_208.Size = 0;
    local_208._12_4_ = 0;
    pTVar9 = FCbFieldView::AsString(&local_1f8,&local_a8,&local_208);
    local_d8 = pTVar9->DataPtr;
    uStack_d0 = *(undefined8 *)&pTVar9->Size;
    pFVar10 = ::FString::ConstructFromPtrSize
                        (&local_1e8,pTVar9->DataPtr,(int)*(undefined8 *)&pTVar9->Size);
    iVar7 = iVar16;
    if (&local_1d8 != pFVar10) {
      pFVar15 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar16 = (pFVar10->Data).ArrayNum;
      iVar7 = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    pFVar10 = &param_2->EncryptionKeyGuid;
    if (pFVar10 == &local_1d8) {
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
    }
    else {
      pFVar14 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (pFVar10->Data).AllocatorInstance.Data = pFVar15;
      (param_2->EncryptionKeyGuid).Data.ArrayNum = iVar16;
      (param_2->EncryptionKeyGuid).Data.ArrayMax = iVar7;
    }
    uStack_2e0 = 7;
    local_2e8 = "Entries";
    local_1c8._12_4_ = uStack_2dc;
    local_1c8.Size = 7;
    local_1c8.DataPtr = "Entries";
    FCbObjectView::FindView(&local_390,&local_1b8,&local_1c8);
    FCbFieldView::AsArrayView(&local_1b8,(FCbArrayView *)&local_2d8);
    uVar11 = FCbArrayView::Num((FCbArrayView *)&local_2d8);
    iVar7 = (int)uVar11;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar11 & 0xffffffff);
    }
    piVar1 = &(param_2->Entries).ArrayMax;
    if ((param_2->Entries).ArrayMax < iVar7) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar7,&(param_2->Entries).AllocatorInstance,(param_2->Entries).ArrayNum,
                 piVar1);
    }
    FCbFieldView::CreateViewIterator(&local_2d8,(FCbFieldViewIterator *)&local_340);
    while (((byte)local_340._padding_ & 0x1f) != 0) {
      iVar7 = (param_2->Entries).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&(param_2->Entries).AllocatorInstance,piVar1);
      }
      (param_2->Entries).ArrayNum = iVar7 + 1;
      pFVar13 = (FOnDemandTocEntry *)
                ((param_2->Entries).AllocatorInstance.Data + (longlong)iVar7 * 0x38);
      DefaultConstructItems<UE::IoStore::FOnDemandTocEntry,int>(pFVar13,1);
      bVar5 = LoadFromCompactBinary(&local_1a8,pFVar13);
      if (!bVar5) goto LAB_1445903ef;
      TCbFieldIterator<FCbFieldView>::operator++(&local_340);
    }
    uStack_2c0 = 10;
    local_2c8 = "BlockSizes";
    local_198._12_4_ = uStack_2bc;
    local_198.Size = 10;
    local_198.DataPtr = "BlockSizes";
    FCbObjectView::FindView(&local_390,&local_188,&local_198);
    FCbFieldView::AsArrayView(&local_188,(FCbArrayView *)&local_2b8);
    uVar11 = FCbArrayView::Num((FCbArrayView *)&local_2b8);
    iVar7 = (int)uVar11;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar11 & 0xffffffff);
    }
    piVar1 = &(param_2->BlockSizes).ArrayMax;
    if ((param_2->BlockSizes).ArrayMax < iVar7) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,&(param_2->BlockSizes).AllocatorInstance,(param_2->BlockSizes).ArrayNum,
                 piVar1);
    }
    FCbFieldView::CreateViewIterator(&local_2b8,(FCbFieldViewIterator *)&local_328);
    while (((byte)local_328._padding_ & 0x1f) != 0) {
      uVar11 = FCbFieldView::AsInteger(&local_178,0,(FIntegerParams)0x40);
      pFVar14 = (param_2->BlockSizes).AllocatorInstance.Data;
      local_398 = (undefined4)uVar11;
      if (((pFVar14 <= (FScriptContainerElement *)&local_398) &&
          ((FScriptContainerElement *)&local_398 < pFVar14 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = (param_2->BlockSizes).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_2->BlockSizes).AllocatorInstance,piVar1);
        (param_2->BlockSizes).ArrayNum = iVar7;
      }
      (param_2->BlockSizes).ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_2->BlockSizes).AllocatorInstance.Data + (longlong)iVar7 * 4) =
           local_398;
      TCbFieldIterator<FCbFieldView>::operator++(&local_328);
    }
    uStack_2a0 = 0xb;
    local_2a8 = "BlockHashes";
    local_168._12_4_ = uStack_29c;
    local_168.Size = 0xb;
    local_168.DataPtr = "BlockHashes";
    FCbObjectView::FindView(&local_390,&local_158,&local_168);
    FCbFieldView::AsArrayView(&local_158,(FCbArrayView *)&local_298);
    uVar11 = FCbArrayView::Num((FCbArrayView *)&local_298);
    iVar7 = (int)uVar11;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar11 & 0xffffffff);
    }
    piVar1 = &(param_2->BlockHashes).ArrayMax;
    if ((param_2->BlockHashes).ArrayMax < iVar7) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,&(param_2->BlockHashes).AllocatorInstance,(param_2->BlockHashes).ArrayNum
                 ,piVar1);
    }
    FCbFieldView::CreateViewIterator(&local_298,(FCbFieldViewIterator *)&local_358);
    while (((byte)local_358._padding_ & 0x1f) != 0) {
      if ((((byte)local_358._padding_ & 0x1f) == 0x10) ||
         (((byte)local_358._padding_ & 0x1e) == 0xe)) {
        local_84.Hash[0x10] = '\0';
        local_84.Hash[0x11] = '\0';
        local_84.Hash[0x12] = '\0';
        local_84.Hash[0x13] = '\0';
        local_84.Hash[0] = '\0';
        local_84.Hash[1] = '\0';
        local_84.Hash[2] = '\0';
        local_84.Hash[3] = '\0';
        local_84.Hash[4] = '\0';
        local_84.Hash[5] = '\0';
        local_84.Hash[6] = '\0';
        local_84.Hash[7] = '\0';
        local_84.Hash[8] = '\0';
        local_84.Hash[9] = '\0';
        local_84.Hash[10] = '\0';
        local_84.Hash[0xb] = '\0';
        local_84.Hash[0xc] = '\0';
        local_84.Hash[0xd] = '\0';
        local_84.Hash[0xe] = '\0';
        local_84.Hash[0xf] = '\0';
        FCbFieldView::AsHash(&local_288,&local_98,&local_84);
        pFVar14 = (param_2->BlockHashes).AllocatorInstance.Data;
        if ((pFVar14 <= (FScriptContainerElement *)&local_98) &&
           (((FScriptContainerElement *)&local_98 <
             pFVar14 + (longlong)(param_2->BlockHashes).ArrayMax * 4 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar7 = (param_2->BlockHashes).ArrayNum;
        aFVar8 = (FScriptContainerElement  [4])local_98.Hash._0_4_;
        if (iVar7 == (param_2->BlockHashes).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_2->BlockHashes).AllocatorInstance,piVar1);
          aFVar8 = (FScriptContainerElement  [4])local_98.Hash._0_4_;
        }
      }
      else {
        uVar11 = FCbFieldView::AsInteger(&local_288,0,(FIntegerParams)0x40);
        pFVar14 = (param_2->BlockHashes).AllocatorInstance.Data;
        local_394 = SUB84(uVar11,0);
        if (((pFVar14 <= local_394) &&
            (local_394 < pFVar14 + (longlong)(param_2->BlockHashes).ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar7 = (param_2->BlockHashes).ArrayNum;
        aFVar8 = local_394;
        if (iVar7 == (param_2->BlockHashes).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_2->BlockHashes).AllocatorInstance,piVar1);
          aFVar8 = local_394;
        }
      }
      (param_2->BlockHashes).ArrayNum = iVar7 + 1;
      *(FScriptContainerElement (*) [4])
       ((param_2->BlockHashes).AllocatorInstance.Data + (longlong)iVar7 * 4) = aFVar8;
      TCbFieldIterator<FCbFieldView>::operator++(&local_358);
    }
    uStack_270 = 8;
    local_278 = "UTocHash";
    local_148._12_4_ = uStack_26c;
    local_148.Size = 8;
    local_148.DataPtr = "UTocHash";
    FCbObjectView::FindView(&local_390,&local_138,&local_148);
    local_70.Hash[0x10] = '\0';
    local_70.Hash[0x11] = '\0';
    local_70.Hash[0x12] = '\0';
    local_70.Hash[0x13] = '\0';
    local_70.Hash[0] = '\0';
    local_70.Hash[1] = '\0';
    local_70.Hash[2] = '\0';
    local_70.Hash[3] = '\0';
    local_70.Hash[4] = '\0';
    local_70.Hash[5] = '\0';
    local_70.Hash[6] = '\0';
    local_70.Hash[7] = '\0';
    local_70.Hash[8] = '\0';
    local_70.Hash[9] = '\0';
    local_70.Hash[10] = '\0';
    local_70.Hash[0xb] = '\0';
    local_70.Hash[0xc] = '\0';
    local_70.Hash[0xd] = '\0';
    local_70.Hash[0xe] = '\0';
    local_70.Hash[0xf] = '\0';
    pFVar12 = FCbFieldView::AsHash(&local_138,&local_5c,&local_70);
    uStack_260 = 6;
    uVar4 = *(undefined8 *)(pFVar12->Hash + 8);
    *(undefined8 *)(param_2->UTocHash).Hash = *(undefined8 *)pFVar12->Hash;
    *(undefined8 *)((param_2->UTocHash).Hash + 8) = uVar4;
    *(undefined4 *)((param_2->UTocHash).Hash + 0x10) = *(undefined4 *)(pFVar12->Hash + 0x10);
    local_268 = "Header";
    local_108._12_4_ = uStack_25c;
    local_108.Size = 6;
    local_108.DataPtr = "Header";
    FCbObjectView::FindView(&local_390,&local_118,&local_108);
    local_258.Data = (void *)0x0;
    local_258.Size = 0;
    FCbFieldView::AsBinaryView(&local_118,&local_248,&local_258);
    if (local_248.Size != 0) {
      iVar7 = (int)local_248.Size;
      if (((local_248.Size != (longlong)iVar7) || (iVar7 < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar5
         )) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      (param_2->Header).ArrayNum = iVar7;
      iVar17 = (param_2->Header).ArrayMax;
      piVar1 = &(param_2->Header).ArrayMax;
      if ((iVar7 == 0) && (iVar17 == 0)) {
        *piVar1 = 0;
        return true;
      }
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar7,iVar17,&(param_2->Header).AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((param_2->Header).AllocatorInstance.Data,local_248.Data,(longlong)iVar7);
      }
    }
    bVar5 = true;
  }
  else {
LAB_1445903ef:
    bVar5 = false;
  }
  return bVar5;
}

// LoadFromCompactBinary @ 144590440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UE::IoStore::LoadFromCompactBinary(FCbFieldView *param_1,FOnDemandTocEntry *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  FIoHash *pFVar3;
  ulong64 uVar4;
  undefined1 auStack_88 [32];
  uchar *local_68;
  void *pvStack_60;
  uchar *local_58;
  void *pvStack_50;
  FCbObjectView local_48;
  FIoHash local_38;
  FIoHash local_24;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  FCbFieldView::AsObjectView(param_1,&local_48);
  bVar2 = FCbObjectView::operator_bool(&local_48);
  if (bVar2) {
    pvStack_60 = (void *)CONCAT44(pvStack_60._4_4_,7);
    local_68 = "ChunkId";
    FCbObjectView::FindView(&local_48,(FCbFieldView *)&local_58,(TStringView<char8_t> *)&local_68);
    local_68 = local_58;
    pvStack_60 = pvStack_50;
    bVar2 = ::LoadFromCompactBinary((FCbFieldView *)&local_68,&param_2->ChunkId);
    if (bVar2) {
      pvStack_60._0_4_ = 4;
      local_68 = "Hash";
      local_58 = "Hash";
      pvStack_50._0_4_ = 4;
      pvStack_50._4_4_ = pvStack_60._4_4_;
      FCbObjectView::FindView(&local_48,(FCbFieldView *)&local_68,(TStringView<char8_t> *)&local_58)
      ;
      local_38.Hash[0x10] = '\0';
      local_38.Hash[0x11] = '\0';
      local_38.Hash[0x12] = '\0';
      local_38.Hash[0x13] = '\0';
      local_38.Hash[0] = '\0';
      local_38.Hash[1] = '\0';
      local_38.Hash[2] = '\0';
      local_38.Hash[3] = '\0';
      local_38.Hash[4] = '\0';
      local_38.Hash[5] = '\0';
      local_38.Hash[6] = '\0';
      local_38.Hash[7] = '\0';
      local_38.Hash[8] = '\0';
      local_38.Hash[9] = '\0';
      local_38.Hash[10] = '\0';
      local_38.Hash[0xb] = '\0';
      local_38.Hash[0xc] = '\0';
      local_38.Hash[0xd] = '\0';
      local_38.Hash[0xe] = '\0';
      local_38.Hash[0xf] = '\0';
      pFVar3 = FCbFieldView::AsHash((FCbFieldView *)&local_68,&local_24,&local_38);
      uVar1 = *(undefined8 *)(pFVar3->Hash + 8);
      *(undefined8 *)(param_2->Hash).Hash = *(undefined8 *)pFVar3->Hash;
      *(undefined8 *)((param_2->Hash).Hash + 8) = uVar1;
      *(undefined4 *)((param_2->Hash).Hash + 0x10) = *(undefined4 *)(pFVar3->Hash + 0x10);
      local_68 = "RawSize";
      pvStack_60._0_4_ = 7;
      local_58 = "RawSize";
      pvStack_50._0_4_ = 7;
      pvStack_50._4_4_ = pvStack_60._4_4_;
      FCbObjectView::FindView(&local_48,(FCbFieldView *)&local_68,(TStringView<char8_t> *)&local_58)
      ;
      uVar4 = FCbFieldView::AsInteger
                        ((FCbFieldView *)&local_68,0xffffffffffffffff,(FIntegerParams)0x80);
      param_2->RawSize = uVar4;
      pvStack_60._0_4_ = 0xb;
      local_68 = "EncodedSize";
      local_58 = "EncodedSize";
      pvStack_50._0_4_ = 0xb;
      pvStack_50._4_4_ = pvStack_60._4_4_;
      FCbObjectView::FindView(&local_48,(FCbFieldView *)&local_68,(TStringView<char8_t> *)&local_58)
      ;
      uVar4 = FCbFieldView::AsInteger
                        ((FCbFieldView *)&local_68,0xffffffffffffffff,(FIntegerParams)0x80);
      param_2->EncodedSize = uVar4;
      pvStack_60._0_4_ = 0xb;
      local_68 = "BlockOffset";
      local_58 = "BlockOffset";
      pvStack_50._0_4_ = 0xb;
      pvStack_50._4_4_ = pvStack_60._4_4_;
      FCbObjectView::FindView(&local_48,(FCbFieldView *)&local_68,(TStringView<char8_t> *)&local_58)
      ;
      uVar4 = FCbFieldView::AsInteger((FCbFieldView *)&local_68,0xffffffff,(FIntegerParams)0x40);
      param_2->BlockOffset = (uint)uVar4;
      pvStack_60 = (void *)CONCAT44(pvStack_60._4_4_,10);
      local_68 = "BlockCount";
      local_58 = "BlockCount";
      pvStack_50 = pvStack_60;
      FCbObjectView::FindView(&local_48,(FCbFieldView *)&local_68,(TStringView<char8_t> *)&local_58)
      ;
      uVar4 = FCbFieldView::AsInteger((FCbFieldView *)&local_68,0,(FIntegerParams)0x40);
      param_2->BlockCount = (uint)uVar4;
      if ((((*(longlong *)(param_2->Hash).Hash != FIoHash::Zero.Hash._0_8_) ||
           (*(longlong *)((param_2->Hash).Hash + 8) != FIoHash::Zero.Hash._8_8_)) ||
          (*(int *)((param_2->Hash).Hash + 0x10) != FIoHash::Zero.Hash._16_4_)) &&
         (((param_2->RawSize != 0xffffffffffffffff && (param_2->EncodedSize != 0xffffffffffffffff))
          && (param_2->BlockOffset != 0xffffffff)))) {
        return true;
      }
      return false;
    }
  }
  return false;
}

// LoadFromCompactBinary @ 1445906b0

bool __cdecl UE::IoStore::LoadFromCompactBinary(FCbFieldView *param_1,FOnDemandTocHeader *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ulong64 uVar3;
  TStringView<char8_t> *pTVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  FCbObjectView local_98;
  uchar *local_88;
  undefined8 uStack_80;
  ForAnyElementType local_78;
  undefined8 uStack_70;
  ForAnyElementType local_68;
  void *pvStack_60;
  FString local_58;
  FString local_48;
  FString local_38;
  TStringView<char8_t> local_28;
  
  FCbFieldView::AsObjectView(param_1,&local_98);
  bVar2 = FCbObjectView::operator_bool(&local_98);
  if (bVar2) {
    uStack_80._0_4_ = 5;
    local_88 = "Magic";
    FCbObjectView::FindView(&local_98,(FCbFieldView *)&local_78,(TStringView<char8_t> *)&local_88);
    uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_78,0,(FIntegerParams)0x80);
    param_2->Magic = uVar3;
    uStack_80._0_4_ = 7;
    local_88 = "Version";
    local_78.Data = (FScriptContainerElement *)0x150617b10;
    uStack_70._0_4_ = 7;
    uStack_70._4_4_ = uStack_80._4_4_;
    FCbObjectView::FindView(&local_98,(FCbFieldView *)&local_88,(TStringView<char8_t> *)&local_78);
    uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_88,0,(FIntegerParams)0x40);
    param_2->Version = (uint)uVar3;
    uStack_80._0_4_ = 5;
    local_88 = "Flags";
    local_78.Data = (FScriptContainerElement *)0x1506c3a04;
    uStack_70._0_4_ = 5;
    uStack_70._4_4_ = uStack_80._4_4_;
    FCbObjectView::FindView(&local_98,(FCbFieldView *)&local_88,(TStringView<char8_t> *)&local_78);
    uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_88,0,(FIntegerParams)0x40);
    param_2->Flags = (uint)uVar3;
    uStack_80._0_4_ = 9;
    local_88 = "BlockSize";
    local_78.Data = (FScriptContainerElement *)0x150d779b8;
    uStack_70._0_4_ = 9;
    uStack_70._4_4_ = uStack_80._4_4_;
    FCbObjectView::FindView(&local_98,(FCbFieldView *)&local_88,(TStringView<char8_t> *)&local_78);
    uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_88,0,(FIntegerParams)0x40);
    param_2->BlockSize = (uint)uVar3;
    uStack_80 = (void *)CONCAT44(uStack_80._4_4_,0x11);
    local_88 = "CompressionFormat";
    local_78.Data = (FScriptContainerElement *)0x150622e78;
    uStack_70 = uStack_80;
    FCbObjectView::FindView(&local_98,(FCbFieldView *)&local_68,(TStringView<char8_t> *)&local_78);
    pFVar6 = (FScriptContainerElement *)0x0;
    uStack_80 = (void *)0x0;
    local_88 = (uchar *)0x0;
    local_78.Data = (FScriptContainerElement *)0x0;
    uStack_70 = (void *)0x0;
    pTVar4 = FCbFieldView::AsString
                       ((FCbFieldView *)&local_68,&local_28,(TStringView<char8_t> *)&local_78);
    pFVar5 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_78,pTVar4->DataPtr,(int)*(undefined8 *)&pTVar4->Size);
    iVar9 = 0;
    pFVar8 = pFVar6;
    iVar7 = iVar9;
    if (&local_58 != pFVar5) {
      pFVar8 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = (pFVar5->Data).ArrayNum;
      iVar7 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    pFVar5 = &param_2->CompressionFormat;
    if (pFVar5 == &local_58) {
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
    }
    else {
      pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar5->Data).AllocatorInstance.Data = pFVar8;
      (param_2->CompressionFormat).Data.ArrayNum = iVar9;
      (param_2->CompressionFormat).Data.ArrayMax = iVar7;
    }
    uStack_80 = (void *)CONCAT44(uStack_80._4_4_,0xf);
    local_88 = "ChunksDirectory";
    local_68.Data = (FScriptContainerElement *)0x150d779c8;
    pvStack_60 = uStack_80;
    FCbObjectView::FindView(&local_98,(FCbFieldView *)&local_78,(TStringView<char8_t> *)&local_68);
    uStack_80 = (void *)0x0;
    local_88 = (uchar *)0x0;
    local_68.Data = (FScriptContainerElement *)0x0;
    pvStack_60 = (void *)0x0;
    pTVar4 = FCbFieldView::AsString
                       ((FCbFieldView *)&local_78,&local_28,(TStringView<char8_t> *)&local_68);
    pFVar5 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_68,pTVar4->DataPtr,(int)*(undefined8 *)&pTVar4->Size);
    iVar10 = 0;
    pFVar8 = pFVar6;
    iVar9 = iVar10;
    iVar7 = iVar10;
    if (&local_48 != pFVar5) {
      pFVar8 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = (pFVar5->Data).ArrayNum;
      iVar7 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar5 = &param_2->ChunksDirectory;
    if (pFVar5 == &local_48) {
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
    }
    else {
      pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar5->Data).AllocatorInstance.Data = pFVar8;
      (param_2->ChunksDirectory).Data.ArrayNum = iVar9;
      (param_2->ChunksDirectory).Data.ArrayMax = iVar7;
    }
    uStack_80 = (void *)CONCAT44(uStack_80._4_4_,0xd);
    local_88 = "HostGroupName";
    local_68.Data = (FScriptContainerElement *)0x150d779d8;
    pvStack_60 = uStack_80;
    FCbObjectView::FindView(&local_98,(FCbFieldView *)&local_78,(TStringView<char8_t> *)&local_68);
    uStack_80 = (void *)0x0;
    local_88 = (uchar *)0x0;
    local_68.Data = (FScriptContainerElement *)0x0;
    pvStack_60 = (void *)0x0;
    pTVar4 = FCbFieldView::AsString
                       ((FCbFieldView *)&local_78,&local_28,(TStringView<char8_t> *)&local_68);
    pFVar5 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_68,pTVar4->DataPtr,(int)*(undefined8 *)&pTVar4->Size);
    iVar9 = iVar10;
    if (&local_38 != pFVar5) {
      pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar10 = (pFVar5->Data).ArrayNum;
      iVar9 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar5 = &param_2->HostGroupName;
    if (pFVar5 == &local_38) {
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
    }
    else {
      pFVar8 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pFVar5->Data).AllocatorInstance.Data = pFVar6;
      (param_2->HostGroupName).Data.ArrayNum = iVar10;
      (param_2->HostGroupName).Data.ArrayMax = iVar9;
    }
    if ((param_2->Magic == 0x6f6e64656d616e64) && (param_2->Version != 0)) {
      return true;
    }
  }
  return false;
}

// LoadFromCompactBinary @ 144590ab0

bool __cdecl UE::IoStore::LoadFromCompactBinary(FCbFieldView *param_1,FOnDemandTocTagSet *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uchar *puVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  TStringView<char8_t> *pTVar7;
  FString *pFVar8;
  ulong64 uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  ForAnyElementType local_98;
  void *pvStack_90;
  FCbObjectView local_88;
  FCbFieldView local_78;
  uchar *local_68;
  void *pvStack_60;
  undefined1 local_58 [17];
  undefined7 uStack_47;
  void *pvStack_40;
  
  FCbFieldView::AsObjectView(param_1,&local_88);
  bVar5 = FCbObjectView::operator_bool(&local_88);
  if (bVar5) {
    pvStack_90 = (void *)CONCAT44(pvStack_90._4_4_,3);
    local_98.Data = (FScriptContainerElement *)0x1506c3224;
    FCbObjectView::FindView(&local_88,(FCbFieldView *)&local_68,(TStringView<char8_t> *)&local_98);
    pFVar11 = (FScriptContainerElement *)0x0;
    local_98.Data = (FScriptContainerElement *)0x0;
    pvStack_90 = (void *)0x0;
    pTVar7 = FCbFieldView::AsString
                       ((FCbFieldView *)&local_68,(TStringView<char8_t> *)(local_58 + 0x10),
                        (TStringView<char8_t> *)&local_98);
    pFVar8 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_98,pTVar7->DataPtr,(int)*(undefined8 *)&pTVar7->Size);
    iVar6 = 0;
    iVar12 = iVar6;
    if ((FString *)local_58 != pFVar8) {
      pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = (pFVar8->Data).ArrayNum;
      iVar12 = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    if (param_2 == (FOnDemandTocTagSet *)local_58) {
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
    }
    else {
      pFVar2 = (param_2->Tag).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Tag).Data.AllocatorInstance.Data = pFVar11;
      (param_2->Tag).Data.ArrayNum = iVar6;
      (param_2->Tag).Data.ArrayMax = iVar12;
    }
    pvStack_90 = (void *)CONCAT44(pvStack_90._4_4_,8);
    local_98.Data = (FScriptContainerElement *)0x150d77b10;
    local_68 = "Packages";
    pvStack_60 = pvStack_90;
    FCbObjectView::FindView(&local_88,(FCbFieldView *)&local_98,(TStringView<char8_t> *)&local_68);
    FCbFieldView::AsArrayView((FCbFieldView *)&local_98,(FCbArrayView *)&local_78);
    uVar9 = FCbArrayView::Num((FCbArrayView *)&local_78);
    iVar6 = (int)uVar9;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
    }
    piVar1 = &(param_2->Packages).ArrayMax;
    if ((param_2->Packages).ArrayMax < iVar6) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar6,&(param_2->Packages).AllocatorInstance,(param_2->Packages).ArrayNum,
                 piVar1);
    }
    FCbFieldView::CreateViewIterator(&local_78,(FCbFieldViewIterator *)(local_58 + 0x10));
    pvVar4 = pvStack_40;
    while ((local_58[0x10] & 0x1f) != 0) {
      iVar6 = (param_2->Packages).ArrayNum;
      puVar3 = (uchar *)CONCAT71(uStack_47,local_58[0x10]);
      pvStack_40 = pvVar4;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(param_2->Packages).AllocatorInstance,piVar1);
        (param_2->Packages).ArrayNum = iVar6;
      }
      lVar10 = (longlong)iVar6;
      (param_2->Packages).ArrayNum = iVar6 + 1;
      pFVar11 = (param_2->Packages).AllocatorInstance.Data;
      *(undefined8 *)(pFVar11 + lVar10 * 0x18) = 0;
      *(undefined8 *)(pFVar11 + lVar10 * 0x18 + 8) = 0;
      *(undefined8 *)(pFVar11 + lVar10 * 0x18 + 0x10) = 0;
      local_68 = puVar3;
      pvStack_60 = pvVar4;
      bVar5 = LoadFromCompactBinary
                        ((FCbFieldView *)&local_68,
                         (FOnDemandTocTagSetPackageList *)(pFVar11 + lVar10 * 0x18));
      if (!bVar5) goto LAB_144590cab;
      TCbFieldIterator<FCbFieldView>::operator++
                ((TCbFieldIterator<FCbFieldView> *)(local_58 + 0x10));
      pvVar4 = pvStack_40;
    }
    bVar5 = true;
  }
  else {
LAB_144590cab:
    bVar5 = false;
  }
  return bVar5;
}

// LoadFromCompactBinary @ 144590ce0

bool __cdecl
UE::IoStore::LoadFromCompactBinary(FCbFieldView *param_1,FOnDemandTocTagSetPackageList *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FCbObjectView local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FCbFieldView local_48;
  FCbFieldView local_38;
  TCbFieldIterator<FCbFieldView> local_28;
  
  FCbFieldView::AsObjectView(param_1,&local_78);
  bVar2 = FCbObjectView::operator_bool(&local_78);
  if (bVar2) {
    uStack_60 = 0xe;
    local_68 = "ContainerIndex";
    iStack_50 = 0xe;
    uStack_4c = uStack_5c;
    local_58 = "ContainerIndex";
    FCbObjectView::FindView(&local_78,(FCbFieldView *)&local_68,(TStringView<char8_t> *)&local_58);
    uVar4 = FCbFieldView::AsInteger((FCbFieldView *)&local_68,0,(FIntegerParams)0x40);
    param_2->ContainerIndex = (uint)uVar4;
    if (local_68._1_1_ == None) {
      _iStack_50 = (void *)CONCAT44(uStack_4c,0xf);
      local_58 = "PackageIndicies";
      FCbObjectView::FindView(&local_78,&local_48,(TStringView<char8_t> *)&local_58);
      FCbFieldView::AsArrayView(&local_48,(FCbArrayView *)&local_38);
      if (local_48.Error == None) {
        uVar4 = FCbArrayView::Num((FCbArrayView *)&local_38);
        iVar3 = (int)uVar4;
        if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(uVar4 & 0xffffffff);
        }
        piVar1 = &(param_2->PackageIndicies).ArrayMax;
        if ((param_2->PackageIndicies).ArrayMax < iVar3) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(param_2->PackageIndicies).AllocatorInstance,
                     (param_2->PackageIndicies).ArrayNum,piVar1);
        }
        FCbFieldView::CreateViewIterator(&local_38,(FCbFieldViewIterator *)&local_28);
        while( true ) {
          if (((byte)local_28._padding_ & 0x1f) == 0) {
            return true;
          }
          local_58._1_1_ = (ECbFieldError)local_28._padding_._1_7_;
          uVar4 = FCbFieldView::AsInteger((FCbFieldView *)&local_58,0,(FIntegerParams)0x40);
          if (local_58._1_1_ != None) break;
          iVar3 = (param_2->PackageIndicies).ArrayNum;
          if (iVar3 == *piVar1) {
            iVar3 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(param_2->PackageIndicies).AllocatorInstance,piVar1);
          }
          (param_2->PackageIndicies).ArrayNum = iVar3 + 1;
          *(int *)((param_2->PackageIndicies).AllocatorInstance.Data + (longlong)iVar3 * 4) =
               (int)uVar4;
          TCbFieldIterator<FCbFieldView>::operator++(&local_28);
        }
      }
    }
  }
  return false;
}

// LoadFromCompactBinary @ 144590e90

bool __cdecl UE::IoStore::LoadFromCompactBinary(FCbFieldView *param_1,FTocMeta *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ulong64 uVar3;
  TStringView<char8_t> *pTVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  FCbObjectView local_88;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  ForAnyElementType local_68;
  void *pvStack_60;
  ForAnyElementType local_58;
  void *pvStack_50;
  FString local_48;
  FString local_38;
  TStringView<char8_t> local_28;
  
  FCbFieldView::AsObjectView(param_1,&local_88);
  bVar2 = FCbObjectView::operator_bool(&local_88);
  if (bVar2) {
    uStack_70._0_4_ = 0xe;
    local_78 = (undefined1  [8])0x150d77990;
    FCbObjectView::FindView(&local_88,(FCbFieldView *)&local_68,(TStringView<char8_t> *)local_78);
    uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_68,0,(FIntegerParams)0x7f);
    param_2->EpochTimestamp = uVar3;
    uStack_70 = (void *)CONCAT44(uStack_70._4_4_,0xc);
    local_78 = (undefined1  [8])0x1506c5cb0;
    local_68.Data = (FScriptContainerElement *)0x1506c5cb0;
    pvStack_60 = uStack_70;
    FCbObjectView::FindView(&local_88,(FCbFieldView *)&local_58,(TStringView<char8_t> *)&local_68);
    pFVar6 = (FScriptContainerElement *)0x0;
    uStack_70._0_4_ = 0;
    uStack_70._4_4_ = 0;
    local_78 = (undefined1  [8])0x0;
    local_68.Data = (FScriptContainerElement *)0x0;
    pvStack_60 = (void *)0x0;
    pTVar4 = FCbFieldView::AsString
                       ((FCbFieldView *)&local_58,&local_28,(TStringView<char8_t> *)&local_68);
    pFVar5 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_68,pTVar4->DataPtr,(int)*(undefined8 *)&pTVar4->Size);
    iVar9 = 0;
    pFVar7 = pFVar6;
    iVar8 = iVar9;
    if (&local_48 != pFVar5) {
      pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = (pFVar5->Data).ArrayNum;
      iVar8 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar5 = &param_2->BuildVersion;
    if (pFVar5 == &local_48) {
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
    }
    else {
      pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar5->Data).AllocatorInstance.Data = pFVar7;
      (param_2->BuildVersion).Data.ArrayNum = iVar9;
      (param_2->BuildVersion).Data.ArrayMax = iVar8;
    }
    uStack_70 = (void *)CONCAT44(uStack_70._4_4_,0xe);
    local_78 = (undefined1  [8])0x150d779a0;
    local_58.Data = (FScriptContainerElement *)0x150d779a0;
    pvStack_50 = uStack_70;
    FCbObjectView::FindView(&local_88,(FCbFieldView *)&local_68,(TStringView<char8_t> *)&local_58);
    uStack_70._0_4_ = 0;
    uStack_70._4_4_ = 0;
    local_78 = (undefined1  [8])0x0;
    local_58.Data = (FScriptContainerElement *)0x0;
    pvStack_50 = (void *)0x0;
    pTVar4 = FCbFieldView::AsString
                       ((FCbFieldView *)&local_68,&local_28,(TStringView<char8_t> *)&local_58);
    pFVar5 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_58,pTVar4->DataPtr,(int)*(undefined8 *)&pTVar4->Size);
    iVar9 = 0;
    iVar8 = iVar9;
    if (&local_38 != pFVar5) {
      pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = (pFVar5->Data).ArrayNum;
      iVar8 = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    pFVar5 = &param_2->TargetPlatform;
    if (pFVar5 == &local_38) {
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
    }
    else {
      pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar5->Data).AllocatorInstance.Data = pFVar6;
      (param_2->TargetPlatform).Data.ArrayNum = iVar9;
      (param_2->TargetPlatform).Data.ArrayMax = iVar8;
    }
    return true;
  }
  return false;
}

// MountFile @ 144591790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::IoStore::Commands::MountFile(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  void *_Src;
  code *pcVar1;
  IOnDemandIoStore *pIVar2;
  EOnDemandMountOptions EVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  IFileManager *pIVar8;
  FString *this;
  ulonglong uVar9;
  undefined ***pppuVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FOnDemandMountArgs *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_1c8 [32];
  undefined1 local_188;
  undefined1 local_187 [7];
  ForAnyElementType local_180;
  undefined8 local_178;
  FScriptContainerElement *local_170;
  undefined8 local_168;
  FString local_160;
  EOnDemandMountOptions local_150;
  TStringView<wchar_t> local_148;
  FString local_138;
  FString local_128;
  code *local_118;
  FString **local_110;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FString *local_f8;
  FScriptContainerElement **local_f0;
  FString *local_e8;
  FString local_e0;
  FString local_d0;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  undefined8 local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined1 local_88 [32];
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  pIVar2 = GOnDemandIoStore;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (GOnDemandIoStore == (IOnDemandIoStore *)0x0) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
  }
  else if (param_1->ArrayNum < 3) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
  }
  else {
    pFVar16 = (param_1->AllocatorInstance).Data;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = 0;
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Data.ArrayNum = *(int *)(pFVar16 + 8);
    lVar12 = (longlong)local_160.Data.ArrayNum;
    _Src = *(void **)pFVar16;
    if (local_160.Data.ArrayNum == 0) {
      local_160.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_160.Data.ArrayNum,0,(ForAnyElementType *)&local_160,
                 local_160.Data.ArrayNum,&local_160.Data.ArrayMax);
      memcpy(local_160.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
    }
    ::FString::TrimQuotesInline(&local_160,(bool *)0x0);
    local_170 = (FScriptContainerElement *)0x0;
    local_168 = 0;
    FPaths::ProjectContentDir(&local_e0);
    ::FString::PrintfImpl(&local_128,L"%sPaks/");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    pIVar8 = IFileManager::Get();
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar11.Data = local_128.Data.AllocatorInstance.Data;
    }
    local_f8 = &local_160;
    local_f0 = &local_170;
    local_e8 = &local_128;
    local_110 = &local_f8;
    local_118 = Core::Private::Function::
                TFunctionRefCaller<`UE::IoStore::Commands::MountFile'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
                ::Call;
    (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FVar11.Data,&local_118);
    if ((int)local_168 == 0) {
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
    }
    else {
      if ((param_1->ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = ::FString::ToLower((FString *)((param_1->AllocatorInstance).Data + 0x10),&local_d0);
      iVar6 = ::FString::Find(this,L"install",7,IgnoreCase,FromStart,-1);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      local_150 = (iVar6 != -1) + StreamOnDemand;
      if ((param_1->ArrayNum < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::FString(&local_138,(FString *)((param_1->AllocatorInstance).Data + 0x20));
      ::FString::TrimQuotesInline(&local_138,(bool *)0x0);
      local_108 = local_138.Data.AllocatorInstance.Data;
      local_148.DataPtr = (wchar_t *)0x0;
      local_148.Size = 0;
      iStack_100 = local_138.Data.ArrayNum + -1;
      if (local_138.Data.ArrayNum == 0) {
        iStack_100 = 0;
      }
      local_b8._12_4_ = uStack_fc;
      local_b8.Size = iStack_100;
      local_b8.DataPtr = (wchar_t *)local_138.Data.AllocatorInstance.Data;
      SplitHostAndTocUrl((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_88,&local_b8,
                         &local_148);
      if (local_88._8_4_ == Ok) {
        if (param_1->ArrayNum < 4) {
          pFVar16 = local_170;
          if (((int)local_168 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             pFVar16 = local_170, bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          pFVar16 = (param_1->AllocatorInstance).Data + 0x30;
        }
        iVar6 = (int)local_168;
        pFVar17 = local_170 + (longlong)(int)local_168 * 0x10;
        pFVar13 = local_170;
        while( true ) {
          if ((int)local_168 != iVar6) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_188);
          }
          EVar3 = local_150;
          iVar7 = (int)local_178;
          if (pFVar13 == pFVar17) break;
          if ((int)local_178 == local_178._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x858,&local_180,(int *)((longlong)&local_178 + 4));
          }
          local_178 = CONCAT44(local_178._4_4_,iVar7 + 1);
          pFVar14 = local_180.Data + (longlong)iVar7 * 0x58;
          DefaultConstructItems<UE::IoStore::FOnDemandMountArgs,int>(pFVar14,1);
          ::FString::operator=((FString *)(pFVar14 + 0x28),(FString *)pFVar13);
          if (local_88._8_4_ != Ok) {
            StatusOrCrash((FIoStatus *)local_88);
          }
          FIoStatus::operator=((FIoStatus *)local_88,&FIoStatus::Unknown);
          uVar4 = local_88._24_8_;
          if ((TReferenceControllerBase<1> *)local_88._24_8_ != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            *(atomic<int> *)(local_88._24_8_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_88._24_8_ + 8) + 1);
            UNLOCK();
            LOCK();
            *(atomic<int> *)(local_88._24_8_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_88._24_8_ + 8) + 1);
            UNLOCK();
          }
          local_98 = *(undefined8 *)(pFVar14 + 0x40);
          pTStack_90 = *(TReferenceControllerBase<1> **)(pFVar14 + 0x48);
          *(undefined8 *)(pFVar14 + 0x40) = local_88._16_8_;
          *(undefined8 *)(pFVar14 + 0x48) = local_88._24_8_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_90);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)uVar4);
          ::FString::AssignRange((FString *)(pFVar14 + 0x18),local_148.DataPtr,local_148.Size);
          ::FString::operator=((FString *)(pFVar14 + 8),(FString *)pFVar16);
          pFVar13 = pFVar13 + 0x10;
        }
        uVar9 = (ulonglong)(int)local_178;
        if ((int)local_178 == 0) {
          if (1 < (byte)LogIoStoreOnDemand._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          }
        }
        else {
          pFVar15 = (FOnDemandMountArgs *)(local_180.Data + uVar9 * 0x58);
          FVar11.Data = local_180.Data;
          while( true ) {
            if ((int)uVar9 != iVar7) {
              `TCheckedPointerIterator<UE::IoStore::FOnDemandMountArgs,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_187);
            }
            if ((FOnDemandMountArgs *)FVar11.Data == pFVar15) break;
            ((FOnDemandMountArgs *)FVar11.Data)->Options = EVar3;
            local_50 = `UE::IoStore::Commands::MountFile'::__l118::<lambda_2>::
                       <lambda_invoker_cdecl>;
            local_68[0] = Core::Private::Function::
                          TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),void,UE::IoStore::FOnDemandMountResult>
                          ::Call;
            local_40 = (undefined ***)0x0;
            local_58 = &
                       ___7__TFunction_OwnedObject_P6AXUFOnDemandMountResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
            ;
            (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,FVar11.Data,local_68);
            if (local_68[0] != (code *)0x0) {
              pppuVar10 = &local_58;
              if (local_40 != (undefined ***)0x0) {
                pppuVar10 = local_40;
              }
              (*(code *)(*pppuVar10)[2])();
            }
            uVar9 = local_178 & 0xffffffff;
            FVar11.Data = FVar11.Data + 0x58;
          }
        }
      }
      else if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        FIoStatus::ToString((FIoStatus *)local_88,&local_a8);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      FIoStatus::operator=((FIoStatus *)local_88,Unknown);
      if (local_88._8_4_ == Ok) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_88._24_8_);
      }
      FIoStatus::~FIoStatus((FIoStatus *)local_88);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_170,(int)local_168);
    if (local_170 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    DestructItems<UE::IoStore::FOnDemandMountArgs,int>
              ((FOnDemandMountArgs *)local_180.Data,(int)local_178);
    if ((FOnDemandMountArgs *)local_180.Data != (FOnDemandMountArgs *)0x0) {
      FMemory::Free(local_180.Data);
    }
  }
  return;
}

// MountUrl @ 144591df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::IoStore::Commands::MountUrl(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  void *_Src;
  code *pcVar1;
  IOnDemandIoStore *pIVar2;
  FOnDemandToc *pFVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  undefined ***pppuVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 auStackY_188 [32];
  FString local_148;
  TStringView<wchar_t> local_138;
  FOnDemandToc *local_128;
  FString local_120;
  FString local_110;
  void *local_100;
  undefined8 uStack_f8;
  FName local_f0;
  uchar local_e8 [8];
  TReferenceControllerBase<1> *local_e0;
  int local_d8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined1 local_78 [32];
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  pIVar2 = GOnDemandIoStore;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (GOnDemandIoStore == (IOnDemandIoStore *)0x0) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
  }
  else if (param_1->ArrayNum < 2) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
  }
  else {
    pFVar8 = (param_1->AllocatorInstance).Data;
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = *(int *)(pFVar8 + 8);
    lVar9 = (longlong)local_148.Data.ArrayNum;
    _Src = *(void **)pFVar8;
    if (local_148.Data.ArrayNum == 0) {
      local_148.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_148,
                 local_148.Data.ArrayNum,&local_148.Data.ArrayMax);
      memcpy(local_148.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
    }
    ::FString::TrimQuotesInline(&local_148,(bool *)0x0);
    local_c8 = local_148.Data.AllocatorInstance.Data;
    local_138.DataPtr = (wchar_t *)0x0;
    local_138.Size = 0;
    iStack_c0 = local_148.Data.ArrayNum + -1;
    if (local_148.Data.ArrayNum == 0) {
      iStack_c0 = 0;
    }
    local_b8._12_4_ = uStack_bc;
    local_b8.Size = iStack_c0;
    local_b8.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
    SplitHostAndTocUrl((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_78,&local_b8,&local_138
                      );
    if (local_78._8_4_ == Ok) {
      if ((param_1->ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = ::FString::ToLower((FString *)((param_1->AllocatorInstance).Data + 0x10),&local_98);
      iVar5 = ::FString::Find(pFVar6,L"install",7,IgnoreCase,FromStart,-1);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (param_1->ArrayNum < 3) {
        pFVar8 = (FScriptContainerElement *)&local_148;
      }
      else {
        pFVar8 = (param_1->AllocatorInstance).Data + 0x20;
      }
      local_30 = (undefined ***)0x0;
      local_128 = (FOnDemandToc *)0x0;
      pcVar1 = *(code **)((longlong)*pIVar2 + 0x18);
      local_48 = &
                 ___7__TFunction_OwnedObject_P6AXUFOnDemandMountResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
      ;
      local_40 = `UE::IoStore::Commands::MountUrl'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
      local_58[0] = Core::Private::Function::
                    TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),void,UE::IoStore::FOnDemandMountResult>
                    ::Call;
      ::FString::FString(&local_120,(FString *)pFVar8);
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      pFVar6 = ::FString::ConstructFromPtrSize(&local_88,local_138.DataPtr,local_138.Size);
      if (&local_110 != pFVar6) {
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        local_110.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_110.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_100 = (void *)0x0;
      uStack_f8 = 0;
      local_f0 = FOnDemandHostGroup::DefaultName;
      if (local_78._8_4_ != Ok) {
        StatusOrCrash((FIoStatus *)local_78);
      }
      FIoStatus::operator=((FIoStatus *)local_78,&FIoStatus::Unknown);
      local_e8[0] = local_78[0x10];
      local_e8[1] = local_78[0x11];
      local_e8[2] = local_78[0x12];
      local_e8[3] = local_78[0x13];
      local_e8[4] = local_78[0x14];
      local_e8[5] = local_78[0x15];
      local_e8[6] = local_78[0x16];
      local_e8[7] = local_78[0x17];
      local_e0 = (TReferenceControllerBase<1> *)local_78._24_8_;
      if ((TReferenceControllerBase<1> *)local_78._24_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_78._24_8_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_78._24_8_ + 8) + 1);
        UNLOCK();
      }
      local_d8 = (iVar5 != -1) + 1;
      (*pcVar1)(pIVar2,&local_128,local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      if (local_100 != (void *)0x0) {
        FMemory::Free(local_100);
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      pFVar3 = local_128;
      if (local_128 != (FOnDemandToc *)0x0) {
        FOnDemandToc::~FOnDemandToc(local_128);
        ::operator_delete(pFVar3,0xa0);
      }
      if (local_58[0] != (code *)0x0) {
        pppuVar7 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar7 = local_30;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      FIoStatus::ToString((FIoStatus *)local_78,&local_a8);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    FIoStatus::operator=((FIoStatus *)local_78,Unknown);
    if (local_78._8_4_ == Ok) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_78._24_8_);
    }
    FIoStatus::~FIoStatus((FIoStatus *)local_78);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OfType @ 144592270

bool __cdecl UE::UnifiedError::IoStoreOnDemand::CasError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 1445922b0

bool __cdecl UE::UnifiedError::IoStoreOnDemand::CasJournalError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 1445922f0

bool __cdecl UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 144592330

bool __cdecl UE::UnifiedError::IoStoreOnDemand::ChunkHashError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 144592370

bool __cdecl UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 1445923b0

bool __cdecl UE::UnifiedError::IoStoreOnDemand::HttpError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 1445923f0

bool __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 144592430

bool __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 144592470

bool __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 1445924b0

bool __cdecl UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// OfType @ 1445924f0

bool __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::OfType(FError *param_1)

{
  int iVar1;
  
  iVar1 = FError::GetModuleId(param_1);
  if (StaticModuleId == iVar1) {
    iVar1 = FError::GetErrorCode(param_1);
    if (ErrorCodeId == iVar1) {
      return true;
    }
  }
  return false;
}

// PrintCacheUsage @ 144592830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445929b8) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::IoStore::Commands::PrintCacheUsage(void)

{
  IOnDemandIoStore *pIVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  FOnDemandInstallHandleCacheUsage *pFVar5;
  undefined8 *puVar6;
  void *pvVar7;
  TStringBuilderBase<wchar_t> *pTVar8;
  EIoErrorCode EVar9;
  undefined1 auStack_578 [32];
  double local_558;
  double local_550;
  double local_548;
  undefined4 local_538;
  int local_534;
  TStringView<wchar_t> local_530;
  undefined1 local_520 [40];
  FOnDemandInstallHandleCacheUsage *local_4f8;
  int local_4f0;
  FIoStatus local_4d8;
  undefined8 local_4c8;
  undefined8 local_4c0;
  ulonglong local_4b8;
  ulonglong local_4b0;
  ulonglong local_4a8;
  FOnDemandInstallHandleCacheUsage *local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458 [512];
  ulonglong local_58 [6];
  
  pIVar1 = GOnDemandIoStore;
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_578;
  if (GOnDemandIoStore == (IOnDemandIoStore *)0x0) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
  }
  else {
    local_538 = 1;
    puVar6 = (undefined8 *)
             (**(code **)((longlong)*GOnDemandIoStore + 0x58))
                       (GOnDemandIoStore,local_520,&local_538);
    FIoStatus::FIoStatus(&local_4d8);
    FIoStatus::operator=(&local_4d8,&FIoStatus::Ok);
    local_4c8 = *puVar6;
    local_4c0 = puVar6[1];
    local_4b8 = puVar6[2];
    local_4b0 = puVar6[3];
    local_4a8 = puVar6[4];
    local_4a0 = (FOnDemandInstallHandleCacheUsage *)puVar6[5];
    puVar6[5] = 0;
    local_498 = puVar6[6];
    puVar6[6] = 0;
    local_490 = puVar6[7];
    uStack_488 = puVar6[8];
    DestructItems<UE::IoStore::FOnDemandInstallHandleCacheUsage,int>(local_4f8,local_4f0);
    if (local_4f8 != (FOnDemandInstallHandleCacheUsage *)0x0) {
      FMemory::Free(local_4f8);
    }
    if (local_4d8.ErrorCode == Ok) {
      FIoStatus::operator=(&local_4d8,&FIoStatus::Unknown);
      pFVar5 = local_4a0;
      uVar4 = local_4a8;
      uVar3 = local_4b0;
      uVar2 = local_4b8;
      local_4a0 = (FOnDemandInstallHandleCacheUsage *)0x0;
      local_534 = (int)local_498;
      local_498 = 0;
      if (3 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      local_478.Base = local_458;
      local_478.bIsDynamic = false;
      local_478.bIsExternal = false;
      local_478.CurPos = local_458;
      local_478.End = (wchar_t *)local_58;
      pvVar7 = FGenericPlatformString::Memcpy(local_458,L"InstallCache: ",0x1c);
      local_478.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1c);
      local_548 = (double)uVar4 * __real_3eb0000000000000;
      local_550 = (double)uVar3 * __real_3eb0000000000000;
      local_558 = (double)uVar2 * __real_3eb0000000000000;
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_478,
                 L"MaxSize=%.2lf MiB, TotalSize=%.2lf MiB, ReferencedBlockSize=%.2lf MiB, ReferencedSize=%.2lf MiB, FragmentedChunksSize=%.2lf MiB"
                );
      local_530.Size = 0x12;
      local_530.DataPtr = L", StreamingCache: ";
      pTVar8 = operator<<<wchar_t,TStringView<wchar_t>_>(&local_478,&local_530);
      TStringBuilderBase<wchar_t>::AppendfImpl(pTVar8,L"MaxSize=%.2lf MiB, TotalSize=%.2lf MiB");
      if (3 < (byte)LogIoStoreOnDemand._0_1_) {
        if (local_478.End < local_478.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_478,1);
        }
        *local_478.CurPos = L'\0';
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      (**(code **)((longlong)*pIVar1 + 0x60))(pIVar1);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
      DestructItems<UE::IoStore::FOnDemandInstallHandleCacheUsage,int>(pFVar5,local_534);
      if (pFVar5 != (FOnDemandInstallHandleCacheUsage *)0x0) {
        FMemory::Free(pFVar5);
      }
      FIoStatus::operator=(&local_4d8,Unknown);
    }
    else {
      EVar9 = local_4d8.ErrorCode;
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        FIoStatus::ToString(&local_4d8,(FString *)&local_530);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        EVar9 = local_4d8.ErrorCode;
        if (local_530.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_530.DataPtr);
          EVar9 = local_4d8.ErrorCode;
        }
      }
      FIoStatus::operator=(&local_4d8,Unknown);
      local_4d8.ErrorCode = EVar9;
    }
    if (local_4d8.ErrorCode == Ok) {
      DestructItems<UE::IoStore::FOnDemandInstallHandleCacheUsage,int>(local_4a0,(int)local_498);
      if (local_4a0 != (FOnDemandInstallHandleCacheUsage *)0x0) {
        FMemory::Free(local_4a0);
      }
    }
    FIoStatus::~FIoStatus(&local_4d8);
  }
  return;
}

// PurgeInstallCache @ 144592d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::IoStore::Commands::PurgeInstallCache(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  IOnDemandIoStore *pIVar2;
  bool bVar3;
  int iVar4;
  undefined ***pppuVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  uint local_90 [2];
  wchar_t *local_88;
  char local_80;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  pIVar2 = GOnDemandIoStore;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (GOnDemandIoStore == (IOnDemandIoStore *)0x0) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
  }
  else {
    pFVar7 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    local_90[0] = 0;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    local_80 = '\0';
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_98);
      }
      if (pFVar7 == pFVar8) break;
      iVar4 = *(int *)(pFVar7 + 8) + -1;
      if (*(int *)(pFVar7 + 8) == 0) {
        iVar4 = 0;
      }
      if ((iVar4 == 6) &&
         (iVar4 = FGenericPlatformStricmp::Strnicmp(L"defrag",*(wchar_t **)pFVar7,6), iVar4 == 0)) {
        local_90[0] = local_90[0] | 2;
        pFVar7 = pFVar7 + 0x10;
      }
      else {
        if (local_80 == '\0') {
          local_78.DataPtr = *(wchar_t **)pFVar7;
          iStack_60 = *(int *)(pFVar7 + 8) + -1;
          if (*(int *)(pFVar7 + 8) == 0) {
            iStack_60 = 0;
          }
          local_78._12_4_ = uStack_5c;
          local_78.Size = iStack_60;
          local_68 = local_78.DataPtr;
          bVar3 = String::IsNumericOnlyDigits(&local_78);
          if (bVar3) {
            local_78.DataPtr = (wchar_t *)0x0;
            if (*(int *)(pFVar7 + 8) == 0) {
              pwVar6 = L"";
            }
            else {
              pwVar6 = *(wchar_t **)pFVar7;
            }
            bVar3 = LexTryParseString<unsigned___int64>((ulong64 *)&local_78,pwVar6);
            if (bVar3) {
              local_88 = local_78.DataPtr;
              local_80 = '\x01';
            }
          }
        }
        pFVar7 = pFVar7 + 0x10;
      }
    }
    if (3 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    local_30 = (undefined ***)0x0;
    local_48 = &
               ___7__TFunction_OwnedObject_P6AXAEBUFOnDemandPurgeResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_40 = `UE::IoStore::Commands::PurgeInstallCache'::__l5::<lambda_1>::<lambda_invoker_cdecl>;
    local_58[0] = Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),void,UE::IoStore::FOnDemandPurgeResult>
                  ::Call;
    (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,local_90,local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar5 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar5 = local_30;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return;
}

// ShouldSkipUrl @ 144593490

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl UE::IoStore::Private::ShouldSkipUrl(FString *param_1)

{
  undefined8 *puVar1;
  FDevCDNCheck FVar2;
  FDevCDNCheck FVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FRegexPattern *this;
  TUniquePtr<FRegexPattern,TDefaultDelete<FRegexPattern>_> TVar6;
  FRegexMatcher local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar5 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar5,L"Ias.SkipDevCDNs");
    if (bVar4) {
      TVar6.Ptr = (FRegexPattern *)0x0;
      local_28.Pattern.Implementation.Object = (FRegexPatternImplementation *)0x0;
      local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      FConfigCacheIni::GetString
                (GConfig,L"Ias",L"DevelopmentCDNPattern",(FString *)&local_28,&GEngineIni);
      FVar3 = DevCDNCheck;
      if (1 < (int)local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController) {
        this = ::operator_new(0x10);
        if (this != (FRegexPattern *)0x0) {
          TVar6.Ptr = FRegexPattern::FRegexPattern(this,(FString *)&local_28,None);
        }
        FVar2.Pattern.Ptr = DevCDNCheck.Pattern.Ptr;
        FVar3.Pattern.Ptr =
             (TUniquePtr<FRegexPattern,TDefaultDelete<FRegexPattern>_>)
             (TUniquePtr<FRegexPattern,TDefaultDelete<FRegexPattern>_>)TVar6.Ptr;
        if (DevCDNCheck.Pattern.Ptr != (FRegexPattern *)0x0) {
          puVar1 = (undefined8 *)((longlong)DevCDNCheck.Pattern.Ptr + 8);
          DevCDNCheck.Pattern.Ptr =
               (TUniquePtr<FRegexPattern,TDefaultDelete<FRegexPattern>_>)
               (TUniquePtr<FRegexPattern,TDefaultDelete<FRegexPattern>_>)TVar6.Ptr;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)*puVar1);
          ::operator_delete((void *)FVar2.Pattern.Ptr,0x10);
          FVar3 = DevCDNCheck;
        }
      }
      DevCDNCheck.Pattern.Ptr = FVar3.Pattern.Ptr;
      if (local_28.Pattern.Implementation.Object != (FRegexPatternImplementation *)0x0) {
        FMemory::Free(local_28.Pattern.Implementation.Object);
      }
    }
    atexit(`UE::IoStore::Private::ShouldSkipUrl'::__l2::
           _dynamic_atexit_destructor_for__DevCDNCheck__);
    _Init_thread_footer(&::_TSS0);
  }
  if (DevCDNCheck.Pattern.Ptr != (FRegexPattern *)0x0) {
    FRegexMatcher::FRegexMatcher(&local_28,(FRegexPattern *)DevCDNCheck.Pattern.Ptr,param_1);
    bVar4 = FRegexMatcher::FindNext(&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
    return bVar4;
  }
  return false;
}

// SplitHostAndTocUrl @ 144593720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<UE::IoStore::FOnDemandHostGroup> * __cdecl
UE::IoStore::Commands::SplitHostAndTocUrl
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FIoStatus *pFVar5;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar6;
  FAnsiString *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_138 [32];
  TStringView<wchar_t> local_118;
  FIoStatus local_108;
  FAnsiString local_f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  iVar8 = param_1->Size;
  pwVar1 = param_1->DataPtr;
  iVar2 = iVar8;
  if (4 < iVar8) {
    iVar2 = 4;
  }
  pFVar9 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  if (0 < iVar2) {
    iVar4 = iVar2;
  }
  if ((iVar4 == 4) && (iVar2 = FGenericPlatformStricmp::Strnicmp(L"http",pwVar1,4), iVar2 == 0)) {
    local_118.DataPtr = param_1->DataPtr;
    local_118.Size = param_1->Size;
    local_118._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar2 = String::FindFirstChar(&local_118,L':',CaseSensitive);
    if (iVar2 != -1) {
      iVar3 = iVar8 - (iVar2 + 3);
      iVar4 = iVar8;
      if (iVar3 < iVar8) {
        iVar4 = iVar3;
      }
      local_118.Size = 0;
      if (0 < iVar4) {
        local_118.Size = iVar4;
      }
      local_118.DataPtr = pwVar1 + ((longlong)iVar8 - (longlong)local_118.Size);
      iVar4 = String::FindFirstChar(&local_118,L'/',CaseSensitive);
      if (iVar4 == -1) {
        local_118.Size = 0x2a;
        local_118.DataPtr = L"Failed to find host and TOC path delimiter";
        pFVar5 = FIoStatus::FIoStatus(&local_108,InvalidParameter,&local_118);
        TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::TIoStatusOr<UE::IoStore::FOnDemandHostGroup>
                  (__return_storage_ptr__,pFVar5);
        return __return_storage_ptr__;
      }
      iVar4 = iVar4 + iVar2 + 3;
      iVar3 = 0;
      iVar2 = iVar8;
      if (iVar4 < iVar8) {
        iVar2 = iVar4;
      }
      iVar4 = iVar3;
      if (0 < iVar2) {
        iVar4 = iVar2;
      }
      iVar2 = iVar8;
      if (iVar8 - iVar4 < iVar8) {
        iVar2 = iVar8 - iVar4;
      }
      local_118.Size = iVar3;
      if (0 < iVar2) {
        local_118.Size = iVar2;
      }
      local_118.DataPtr = pwVar1 + ((longlong)iVar8 - (longlong)local_118.Size);
      param_2->DataPtr = local_118.DataPtr;
      param_2->Size = local_118.Size;
      *(undefined4 *)&param_2->field_0xc = local_118._12_4_;
      pTVar6 = StringCast<char,128,wchar_t>(&local_e8,pwVar1,iVar4);
      pFVar7 = FAnsiString::ConstructFromPtrSize
                         ((FAnsiString *)&local_118,pTVar6->Ptr,pTVar6->StringLength);
      iVar8 = iVar3;
      if (&local_f8 != pFVar7) {
        pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar8 = (pFVar7->Data).ArrayNum;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_118.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_118.DataPtr);
      }
      iVar2 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar2 = iVar3;
      }
      local_118.Size = iVar2;
      local_118.DataPtr = (wchar_t *)pFVar9;
      FOnDemandHostGroup::Create(__return_storage_ptr__,(TStringView<char> *)&local_118);
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      if ((void *)local_e8._padding_ == (void *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free((void *)local_e8._padding_);
      return __return_storage_ptr__;
    }
    local_118.DataPtr = L"Invalid URL";
    local_118.Size = 0xb;
  }
  else {
    local_118.DataPtr = L"Invalid URL protocol";
    local_118.Size = 0x14;
  }
  pFVar5 = FIoStatus::FIoStatus(&local_108,InvalidParameter,&local_118);
  TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::TIoStatusOr<UE::IoStore::FOnDemandHostGroup>
            (__return_storage_ptr__,pFVar5);
  return __return_storage_ptr__;
}

// TryGetOnDemandIoStore @ 144593a70

IOnDemandIoStore * __cdecl UE::IoStore::TryGetOnDemandIoStore(void)

{
  return GOnDemandIoStore;
}

// VerifyCache @ 144593b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::IoStore::Commands::VerifyCache(void)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (GOnDemandIoStore == (IOnDemandIoStore *)0x0) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      return;
    }
  }
  else {
    local_20 = (undefined ***)0x0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6AX__QEAUFOnDemandVerifyCacheResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_30 = `UE::IoStore::Commands::VerifyCache'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),void,UE::IoStore::FOnDemandVerifyCacheResult>
                  ::Call;
    (**(code **)((longlong)*GOnDemandIoStore + 0x40))(GOnDemandIoStore,local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar1 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar1 = local_20;
      }
      (*(code *)(*pppuVar1)[2])();
    }
  }
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&> @ 1504c0410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,TStringView<char> *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<TStringView<char>_>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<wchar_t>_&> @ 1504c0450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<wchar_t>_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,TStringView<wchar_t> *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<TStringView<wchar_t>_>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_&,FIoStatus_&> @ 1504c0490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_&,FIoStatus_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3,FIoStatus *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  FIoStatus *local_18;
  code *local_10;
  
  local_38.WriteValue = FLogField::Write<FString>;
  local_38.Name = (char *)0x0;
  local_10 = FLogField::Write<FIoStatus>;
  local_20 = 0;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

