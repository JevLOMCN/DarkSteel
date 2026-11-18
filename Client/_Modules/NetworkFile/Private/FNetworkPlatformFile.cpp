// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 59

// FNetworkPlatformFile @ 148bdfee0

FNetworkPlatformFile * __thiscall
FNetworkPlatformFile::FNetworkPlatformFile(FNetworkPlatformFile *this)

{
  atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*> aVar1;
  
  IPlatformFile::IPlatformFile((IPlatformFile *)this);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->bHasLoadedDDCDirectories = false;
  this->_padding_ = (longlong)&_vftable__for__IPlatformFile__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->InnerPlatformFile = (IPlatformFile *)0x0;
  *(undefined8 *)&(this->CachedLocalFiles).Elements = 0;
  *(undefined8 *)&(this->CachedLocalFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedLocalFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedLocalFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedLocalFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedLocalFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedLocalFiles).Elements.field_0x34 = 0;
  (this->CachedLocalFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedLocalFiles).HashSize = 0;
  (this->ServerEngineDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerEngineDir).Data.ArrayNum = 0;
  (this->ServerEngineDir).Data.ArrayMax = 0;
  (this->ServerProjectDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerProjectDir).Data.ArrayNum = 0;
  (this->ServerProjectDir).Data.ArrayMax = 0;
  (this->ServerEnginePlatformExtensionsDir).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ServerEnginePlatformExtensionsDir).Data.ArrayNum = 0;
  (this->ServerEnginePlatformExtensionsDir).Data.ArrayMax = 0;
  (this->ServerProjectPlatformExtensionsDir).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ServerProjectPlatformExtensionsDir).Data.ArrayNum = 0;
  (this->ServerProjectPlatformExtensionsDir).Data.ArrayMax = 0;
  *(undefined8 *)&(this->ServerFiles).Directories = 0;
  *(undefined8 *)&(this->ServerFiles).Directories.field_0x8 = 0;
  *(undefined8 *)&(this->ServerFiles).Directories.field_0x20 = 0;
  *(undefined4 *)&(this->ServerFiles).Directories.field_0x28 = 0;
  *(undefined4 *)&(this->ServerFiles).Directories.field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerFiles).Directories.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ServerFiles).Directories.field_0x34 = 0;
  *(undefined8 *)&(this->ServerFiles).Directories.field_0x40 = 0;
  *(undefined4 *)&(this->ServerFiles).Directories.field_0x48 = 0;
  (this->LocalDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalDirectories).ArrayNum = 0;
  (this->LocalDirectories).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SynchronizationObject,4000);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->LocalDirectoriesCriticalSection,4000);
  this->bIsUsable = false;
  this->FileServerPort = 0;
  this->ConnectionFlags = None;
  this->HeartbeatFrequency = 5.0;
  this->FinishedAsyncNetworkReadUnsolicitedFiles = (FScopedEvent *)0x0;
  this->FinishedAsyncWriteUnsolicitedFiles = (FScopedEvent *)0x0;
  (this->Connection).Object = (ICookOnTheFlyServerConnection *)0x0;
  (this->Connection).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PendingPayloads).Tail =
       (atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>)0x0;
  (this->PendingPayloads).NumElems = (atomic<int>)0x0;
  aVar1 = (atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>)
          FMemory::Malloc(0x18,8);
  *(undefined8 *)aVar1 = 0;
  (this->PendingPayloads).Tail = aVar1;
  (this->PendingPayloads).TailCopy = (FNode *)aVar1;
  (this->PendingPayloads).First = (FNode *)aVar1;
  (this->PendingPayloads).Head = (FNode *)aVar1;
  LOCK();
  (this->PendingPayloads).NumElems = (atomic<int>)0x0;
  UNLOCK();
  FEventRef::FEventRef(&this->NewPayloadEvent,AutoReset);
  this->TotalWriteTime = 0.0;
  this->TotalNetworkSyncTime = 0.0;
  this->TotalTimeSpentInUnsolicitedPackages = 0.0;
  this->TotalWaitForAsyncUnsolicitedPackages = 0.0;
  this->TotalFilesSynced = 0;
  this->TotalUnsolicitedPackages = 0;
  this->TotalFilesFoundLocally = 0;
  this->UnsolicitedPackagesHits = 0;
  this->UnsolicitedPackageWaits = 0;
  return this;
}

// ~FNetworkPlatformFile @ 148be0250

void __thiscall FNetworkPlatformFile::~FNetworkPlatformFile(FNetworkPlatformFile *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScopedEvent *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&_vftable__for__IPlatformFile__;
  lpCriticalSection = &this->SynchronizationObject;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  if (GIsRequestingExit == false) {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = this->FinishedAsyncNetworkReadUnsolicitedFiles;
    if (pFVar1 != (FScopedEvent *)0x0) {
      FScopedEvent::~FScopedEvent(pFVar1);
      ::operator_delete(pFVar1,8);
      this->FinishedAsyncNetworkReadUnsolicitedFiles = (FScopedEvent *)0x0;
    }
    pFVar1 = this->FinishedAsyncWriteUnsolicitedFiles;
    if (pFVar1 != (FScopedEvent *)0x0) {
      FScopedEvent::~FScopedEvent(pFVar1);
      ::operator_delete(pFVar1,8);
      this->FinishedAsyncWriteUnsolicitedFiles = (FScopedEvent *)0x0;
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->Connection != (TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1> *)&local_18) {
      (this->Connection).Object = (ICookOnTheFlyServerConnection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Connection).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  FEventRef::~FEventRef(&this->NewPayloadEvent);
  TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::
  ~TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>(&this->PendingPayloads);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Connection).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LocalDirectoriesCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DestructItems<FString,int>
            ((FString *)(this->LocalDirectories).AllocatorInstance.Data,
             (this->LocalDirectories).ArrayNum);
  pFVar2 = (this->LocalDirectories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FServerTOC::~FServerTOC(&this->ServerFiles);
  pFVar2 = (this->ServerProjectPlatformExtensionsDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ServerEnginePlatformExtensionsDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ServerProjectDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ServerEngineDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->CachedLocalFiles).HashSize = 0;
  FVar3 = (this->CachedLocalFiles).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedLocalFiles).Elements);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  return;
}

// ConvertServerFilenameToClientFilename @ 148be0840

void __thiscall
FNetworkPlatformFile::ConvertServerFilenameToClientFilename
          (FNetworkPlatformFile *this,FString *param_1)

{
  ConvertServerFilenameToClientFilename
            (param_1,&this->ServerEngineDir,&this->ServerProjectDir,
             &this->ServerEnginePlatformExtensionsDir,&this->ServerProjectPlatformExtensionsDir);
  return;
}

// ConvertServerFilenameToClientFilename @ 148be0880

/* WARNING: Enum "EPathConversion": Some values do not have unique names */

void __cdecl
FNetworkPlatformFile::ConvertServerFilenameToClientFilename
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4,FString *param_5)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar7 = (param_2->Data).ArrayNum;
  pwVar4 = L"";
  iVar5 = 0;
  iVar6 = 0;
  if (iVar7 == 0) {
    pwVar8 = L"";
    iVar7 = iVar6;
  }
  else {
    pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar7 = iVar7 + -1;
  }
  bVar2 = ::FString::StartsWith(param_1,pwVar8,iVar7,IgnoreCase);
  if (bVar2) {
    pFVar3 = FPaths::EngineDir(&local_58);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    if ((param_2->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar3 = ::FString::Replace(param_1,&local_48,pwVar4,pwVar8,IgnoreCase);
    local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (param_1 != pFVar3) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar7 = (param_3->Data).ArrayNum;
    if (iVar7 == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      iVar6 = iVar7 + -1;
    }
    bVar2 = ::FString::StartsWith(param_1,pwVar8,iVar6,IgnoreCase);
    if (bVar2) {
      pFVar3 = FPaths::ProjectDir(&local_58);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      if ((param_3->Data).ArrayNum != 0) {
        pwVar4 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      pFVar3 = ::FString::Replace(param_1,&local_48,pwVar4,pwVar8,IgnoreCase);
      if (param_1 != pFVar3) {
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
        (param_1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      goto LAB_148be0b52;
    }
    iVar7 = (param_4->Data).ArrayNum;
    if (iVar7 == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
      iVar5 = iVar7 + -1;
    }
    bVar2 = ::FString::StartsWith(param_1,pwVar8,iVar5,IgnoreCase);
    if (!bVar2) {
      iVar6 = (param_5->Data).ArrayNum;
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = 0;
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
      }
      bVar2 = ::FString::StartsWith(param_1,pwVar8,iVar7,IgnoreCase);
      if (!bVar2) {
        return;
      }
      pFVar3 = UnsafeProjectPlatformExtensionDir(&local_38);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      if ((param_5->Data).ArrayNum != 0) {
        pwVar4 = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
      }
      pFVar3 = ::FString::Replace(param_1,&local_28,pwVar4,pwVar8,IgnoreCase);
      ::FString::operator=(param_1,pFVar3);
      local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      }
      goto LAB_148be0b52;
    }
    pFVar3 = FPaths::EngineDir(&local_38);
    FPaths::ConvertPath(&local_48,pFVar3,Engine_PlatformExtension,L"",(wchar_t *)0x0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::TrimChar(&local_48,&local_58,L'/',(bool *)0x0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    if ((param_4->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    pFVar3 = ::FString::Replace(param_1,&local_28,pwVar4,(wchar_t *)FVar9.Data,IgnoreCase);
    ::FString::operator=(param_1,pFVar3);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_148be0b52:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// ConvertToAbsolutePathForExternalAppForRead @ 148be0b80

FString * __thiscall
FNetworkPlatformFile::ConvertToAbsolutePathForExternalAppForRead
          (FNetworkPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FPaths::MakeStandardFilename(&local_18);
  iVar3 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar1 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_18,(wchar_t *)FVar1.Data,iVar3,CaseSensitive);
  bVar2 = IsInLocalDirectory(this,&local_18);
  if (!bVar2) {
    EnsureFileIsLocal(this,&local_18);
  }
  (**(code **)((longlong)*this->InnerPlatformFile + 0x218))
            (this->InnerPlatformFile,__return_storage_ptr__,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertToAbsolutePathForExternalAppForWrite @ 148be0c40

FString * __thiscall
FNetworkPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
          (FNetworkPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FPaths::MakeStandardFilename(&local_18);
  iVar3 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar1 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_18,(wchar_t *)FVar1.Data,iVar3,CaseSensitive);
  bVar2 = IsInLocalDirectory(this,&local_18);
  if (!bVar2) {
    EnsureFileIsLocal(this,&local_18);
  }
  (**(code **)((longlong)*this->InnerPlatformFile + 0x220))
            (this->InnerPlatformFile,__return_storage_ptr__,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CopyFile @ 148be0d00

bool __thiscall
FNetworkPlatformFile::CopyFile
          (FNetworkPlatformFile *this,wchar_t *param_1,wchar_t *param_2,EPlatformFileRead param_3,
          EPlatformFileWrite param_4)

{
  ForAnyElementType FVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString local_18;
  
  ::FString::FString(&local_18,param_2);
  FPaths::MakeStandardFilename(&local_18);
  iVar4 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar1 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_18,(wchar_t *)FVar1.Data,iVar4,CaseSensitive);
  bVar2 = IsInLocalDirectory(this,&local_18);
  if (!bVar2) {
    EnsureFileIsLocal(this,&local_18);
  }
  uVar3 = (**(code **)((longlong)*this->InnerPlatformFile + 0x208))
                    (this->InnerPlatformFile,param_1,param_2,param_3,param_4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// CreateDirectory @ 148be0f70

bool __thiscall FNetworkPlatformFile::CreateDirectory(FNetworkPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148be0f77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->InnerPlatformFile + 0x120))();
  return (bool)uVar1;
}

// CreateDirectoryTree @ 148be0f90

bool __thiscall
FNetworkPlatformFile::CreateDirectoryTree(FNetworkPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148be0f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->InnerPlatformFile + 0x200))();
  return (bool)uVar1;
}

// DeleteDirectory @ 148be0fb0

bool __thiscall FNetworkPlatformFile::DeleteDirectory(FNetworkPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148be0fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->InnerPlatformFile + 0x128))();
  return (bool)uVar1;
}

// DeleteDirectoryRecursively @ 148be0fd0

bool __thiscall
FNetworkPlatformFile::DeleteDirectoryRecursively(FNetworkPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148be0fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->InnerPlatformFile + 0x128))();
  return (bool)uVar1;
}

// DeleteFile @ 148be0ff0

bool __thiscall FNetworkPlatformFile::DeleteFile(FNetworkPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148be0ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->InnerPlatformFile + 0x88))();
  return (bool)uVar1;
}

// DirectoryExists @ 148be1010

bool __thiscall FNetworkPlatformFile::DirectoryExists(FNetworkPlatformFile *this,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  char cVar2;
  TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
  *pTVar3;
  int iVar4;
  FString local_18;
  
  cVar2 = (**(code **)((longlong)*this->InnerPlatformFile + 0x118))();
  if (cVar2 != '\0') {
    return true;
  }
  ::FString::FString(&local_18,param_1);
  FPaths::MakeStandardFilename(&local_18);
  iVar4 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar1 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_18,(wchar_t *)FVar1.Data,iVar4,CaseSensitive);
  pTVar3 = FServerTOC::FindDirectory(&this->ServerFiles,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pTVar3 != (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
                    *)0x0;
}

// EnsureFileIsLocal @ 148be1d60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetworkPlatformFile::EnsureFileIsLocal(FNetworkPlatformFile *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScopedEvent *pFVar2;
  IPlatformFile *pIVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined8 uVar8;
  FDateTime FVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  FString *pFVar13;
  FDateTime *pFVar14;
  size_t sVar15;
  TStringView<wchar_t> *pTVar16;
  TStringView<wchar_t> *pTVar17;
  FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *pFVar18;
  ForAnyElementType FVar19;
  wchar_t *pwVar20;
  FStaticBasicLogRecord *pFVar21;
  FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *pFVar22;
  FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *pFVar23;
  uint uVar24;
  int iVar25;
  bool bVar26;
  uint local_res8 [2];
  FString local_res18;
  FDateTime local_368;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  LARGE_INTEGER local_320;
  LARGE_INTEGER local_318 [2];
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  TStringView<wchar_t> local_2f8;
  TStringView<wchar_t> local_2e8;
  undefined1 local_2d8 [8];
  FFastPathLoadBuffer *pFStack_2d0;
  uchar *local_2c8;
  uchar *puStack_2c0;
  uchar *local_2b8;
  ulonglong uStack_2b0;
  undefined8 local_2a8;
  long64 lStack_2a0;
  FPackageFileVersion local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  FCustomVersionContainer *pFStack_280;
  FCustomPropertyListNode *local_278;
  FArchiveSavePackageData *pFStack_270;
  FProperty *local_268;
  FArchiveSerializedPropertyChain *pFStack_260;
  undefined8 local_258;
  FArchiveState *pFStack_250;
  undefined8 local_248;
  void *pvStack_240;
  undefined8 local_238;
  LARGE_INTEGER local_228;
  LARGE_INTEGER local_220;
  TStringView<wchar_t> local_218;
  undefined1 local_208 [42];
  byte local_1de;
  void *local_170 [3];
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  wchar_t *local_138;
  undefined8 uStack_130;
  wchar_t *local_128;
  undefined8 uStack_120;
  undefined1 local_118 [168];
  void *local_70 [7];
  
  QueryPerformanceCounter(&local_320);
  dVar6 = (double)local_320.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (5 < (byte)LogNetworkPlatformFile._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
  }
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar13 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Find
                      (&this->CachedLocalFiles,param_1);
  if (pFVar13 != (FString *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
  pFVar2 = this->FinishedAsyncNetworkReadUnsolicitedFiles;
  bVar26 = false;
  if (pFVar2 != (FScopedEvent *)0x0) {
    bVar26 = pFVar2->Event == (FEvent *)0x0;
    if (bVar26) {
      this->UnsolicitedPackageWaits = this->UnsolicitedPackageWaits + 1;
    }
    FScopedEvent::~FScopedEvent(pFVar2);
    ::operator_delete(pFVar2,8);
    this->FinishedAsyncNetworkReadUnsolicitedFiles = (FScopedEvent *)0x0;
  }
  pFVar2 = this->FinishedAsyncWriteUnsolicitedFiles;
  if (pFVar2 != (FScopedEvent *)0x0) {
    if ((!bVar26) && (pFVar2->Event == (FEvent *)0x0)) {
      this->UnsolicitedPackageWaits = this->UnsolicitedPackageWaits + 1;
    }
    FScopedEvent::~FScopedEvent(pFVar2);
    ::operator_delete(pFVar2,8);
    this->FinishedAsyncWriteUnsolicitedFiles = (FScopedEvent *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->SynchronizationObject);
  QueryPerformanceCounter(local_318);
  fVar7 = __real_447a0000;
  this->TotalWaitForAsyncUnsolicitedPackages =
       (double)((float)((double)local_318[0].QuadPart * FGenericPlatformTime::SecondsPerCycle -
                       dVar6) * __real_447a0000) + this->TotalWaitForAsyncUnsolicitedPackages;
  pFVar13 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Find
                      (&this->CachedLocalFiles,param_1);
  if (pFVar13 != (FString *)0x0) {
    this->UnsolicitedPackagesHits = this->UnsolicitedPackagesHits + 1;
    goto LAB_148be28b2;
  }
  if (5 < (byte)LogNetworkPlatformFile._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->CachedLocalFiles,&local_res18,(bool *)param_1);
  QueryPerformanceCounter(&local_228);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar10 = (**(code **)((longlong)*this->InnerPlatformFile + 0x78))(this->InnerPlatformFile,pwVar20)
  ;
  if (cVar10 != '\0') {
    this->TotalFilesFoundLocally = this->TotalFilesFoundLocally + 1;
    if (5 < (byte)LogNetworkPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
    }
    goto LAB_148be28b2;
  }
  this->TotalFilesSynced = this->TotalFilesSynced + 1;
  QueryPerformanceCounter(&local_220);
  FPaths::GetExtension(&local_350,param_1,true);
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
LAB_148be20f8:
    pFVar14 = FServerTOC::FindFile(&this->ServerFiles,param_1);
    if (pFVar14 != (FDateTime *)0x0) goto LAB_148be223a;
    if (5 < (byte)LogNetworkPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
    }
  }
  else {
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_350.Data.ArrayNum != 0) {
      FVar19.Data = local_350.Data.AllocatorInstance.Data;
    }
    bVar26 = FPackageName::IsPackageExtension((wchar_t *)FVar19.Data);
    if (!bVar26) {
      if (local_350.Data.ArrayNum == 0) {
        pwVar20 = L"";
LAB_148be2050:
        sVar15 = wcslen(pwVar20);
        bVar26 = ::FString::EndsWith(&MP4Extension,pwVar20,(int)sVar15,IgnoreCase);
      }
      else {
        pwVar20 = (wchar_t *)local_350.Data.AllocatorInstance.Data;
        if (*(wchar_t *)local_350.Data.AllocatorInstance.Data != L'.') goto LAB_148be2050;
        pwVar20 = L"";
        if (MP4Extension.Data.ArrayNum != 0) {
          pwVar20 = (wchar_t *)MP4Extension.Data.AllocatorInstance;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp
                           (pwVar20,(wchar_t *)local_350.Data.AllocatorInstance.Data);
        bVar26 = iVar11 == 0;
      }
      FVar19.Data = local_350.Data.AllocatorInstance.Data;
      if (bVar26 == false) {
        if (local_350.Data.ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)local_350.Data.AllocatorInstance.Data;
          if (*(wchar_t *)local_350.Data.AllocatorInstance.Data == L'.') {
            pwVar20 = L"";
            if (BulkFileExtension.Data.ArrayNum != 0) {
              pwVar20 = (wchar_t *)BulkFileExtension.Data.AllocatorInstance.Data;
            }
            iVar11 = FGenericPlatformStricmp::Stricmp
                               (pwVar20,(wchar_t *)local_350.Data.AllocatorInstance.Data);
            if (iVar11 != 0) {
              pwVar20 = L"";
              if (FontFileExtension.Data.ArrayNum != 0) {
                pwVar20 = (wchar_t *)FontFileExtension.Data.AllocatorInstance;
              }
              iVar11 = FGenericPlatformStricmp::Stricmp(pwVar20,(wchar_t *)FVar19.Data);
              if (iVar11 != 0) {
                pwVar20 = L"";
                if (ExpFileExtension.Data.ArrayNum != 0) {
                  pwVar20 = (wchar_t *)ExpFileExtension.Data.AllocatorInstance;
                }
                iVar11 = FGenericPlatformStricmp::Stricmp(pwVar20,(wchar_t *)FVar19.Data);
                if (iVar11 != 0) goto LAB_148be20f8;
              }
            }
            goto LAB_148be21b3;
          }
        }
        sVar15 = wcslen(pwVar20);
        bVar26 = ::FString::EndsWith(&BulkFileExtension,pwVar20,(int)sVar15,IgnoreCase);
        if (!bVar26) {
          sVar15 = wcslen(pwVar20);
          bVar26 = ::FString::EndsWith(&FontFileExtension,pwVar20,(int)sVar15,IgnoreCase);
          if (!bVar26) {
            sVar15 = wcslen(pwVar20);
            bVar26 = ::FString::EndsWith(&ExpFileExtension,pwVar20,(int)sVar15,IgnoreCase);
            if (!bVar26) goto LAB_148be20f8;
          }
        }
      }
    }
LAB_148be21b3:
    pFVar13 = FPackageName::GetAssetPackageExtension();
    iVar11 = (pFVar13->Data).ArrayNum;
    if (iVar11 == local_350.Data.ArrayNum) {
      if (1 < iVar11) {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,
                            (wchar_t *)local_350.Data.AllocatorInstance.Data);
        bVar26 = iVar11 == 0;
        goto LAB_148be21e0;
      }
    }
    else {
      bVar26 = iVar11 + local_350.Data.ArrayNum == 1;
LAB_148be21e0:
      if (!bVar26) goto LAB_148be223a;
    }
    pFVar13 = FPackageName::GetMapPackageExtension();
    FPaths::ChangeExtension(&local_330,param_1,pFVar13);
    cVar10 = (**(code **)((longlong)*this->InnerPlatformFile + 0x78))();
    if (cVar10 == '\0') {
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
LAB_148be223a:
      FNetworkFileArchive::FNetworkFileArchive((FNetworkFileArchive *)local_118,0);
      ::operator<<((FArchive *)local_118,param_1);
      if (4 < (byte)LogNetworkPlatformFile._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile)
        ;
      }
      dVar6 = FWindowsPlatformTime::Seconds();
      FArrayReader::FArrayReader((FArrayReader *)local_208,false);
      cVar10 = (**(code **)(this->_padding_ + 0x260))(this,local_70,local_170);
      if (cVar10 == '\0') {
        UE::Logging::Private::BasicFatalLog
                  (&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
      }
      else {
        dVar5 = FWindowsPlatformTime::Seconds();
        this->TotalNetworkSyncTime =
             (double)((float)(dVar5 - dVar6) * fVar7) + this->TotalNetworkSyncTime;
        dVar6 = FWindowsPlatformTime::Seconds();
        local_360.Data.ArrayNum = 0;
        local_360.Data.ArrayMax = 0;
        local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::operator<<((FArchive *)local_208,&local_360);
        (**(code **)(this->_padding_ + 0x270))(this,&local_360);
        iVar11 = (param_1->Data).ArrayNum;
        if (local_360.Data.ArrayNum == iVar11) {
          if (1 < local_360.Data.ArrayNum) {
            iVar11 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)local_360.Data.AllocatorInstance.Data,
                                (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar26 = iVar11 == 0;
            goto LAB_148be2358;
          }
        }
        else {
          bVar26 = local_360.Data.ArrayNum + iVar11 == 1;
LAB_148be2358:
          if (!bVar26) {
            local_308 = (param_1->Data).AllocatorInstance.Data;
            iVar11 = (param_1->Data).ArrayNum;
            iStack_300 = iVar11 + -1;
            if (iVar11 == 0) {
              iStack_300 = 0;
            }
            local_218._12_4_ = uStack_2fc;
            local_218.Size = iStack_300;
            local_218.DataPtr = (wchar_t *)local_308;
            bVar26 = FPackageName::IsPackageFilename(&local_218);
            if (bVar26) {
              local_2f8.DataPtr = (wchar_t *)local_360.Data.AllocatorInstance.Data;
              local_2f8.Size = local_360.Data.ArrayNum + -1;
              if (local_360.Data.ArrayNum == 0) {
                local_2f8.Size = 0;
              }
              pTVar16 = FPathViews::GetBaseFilename(&local_158,&local_2f8);
              local_2e8.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
              iVar11 = (param_1->Data).ArrayNum;
              local_2e8.Size = iVar11 + -1;
              if (iVar11 == 0) {
                local_2e8.Size = 0;
              }
              pTVar17 = FPathViews::GetBaseFilename(&local_148,&local_2e8);
              local_138 = pTVar16->DataPtr;
              uStack_130 = *(undefined8 *)&pTVar16->Size;
              iVar11 = pTVar17->Size;
              iVar25 = (int)*(undefined8 *)&pTVar16->Size;
              if (iVar11 == iVar25) {
                local_128 = local_138;
                uStack_120 = uStack_130;
                if ((iVar11 != 0) && (iVar25 != 0)) {
                  iVar12 = iVar25;
                  if (iVar11 < iVar25) {
                    iVar12 = iVar11;
                  }
                  iVar12 = FGenericPlatformStricmp::Strnicmp
                                     (pTVar17->DataPtr,local_138,(longlong)iVar12);
                  if (iVar12 != 0) goto LAB_148be2434;
                }
                if (iVar11 == iVar25) goto LAB_148be2456;
              }
            }
LAB_148be2434:
            bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ReplyFile == Filename) || (FPackageName::IsPackageFilename(Filename) && (FPathViews::GetBaseFilename(Filename) == FPathViews::GetBaseFilename(ReplyFile)))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkFile\\Private\\NetworkPlatformFile.cpp"
                                ,0x517,L"");
            if (bVar26) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
LAB_148be2456:
        pFVar22 = (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *)0x0;
        local_res18.Data.ArrayNum = 0;
        local_res18.Data.ArrayMax = 0;
        if (*(longlong **)(local_208._8_8_ + 8) < *(longlong **)local_208._8_8_ + 1) {
          piVar1 = &local_res18.Data.ArrayNum;
          if ((local_1de & 1) == 0) {
            (**(code **)(local_208._0_8_ + 0x188))((FArchive *)local_208,piVar1,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)local_208,(ulong64 *)piVar1);
          }
        }
        else {
          local_res18.Data._8_8_ = **(longlong **)local_208._8_8_;
          *(longlong *)local_208._8_8_ = *(longlong *)local_208._8_8_ + 8;
        }
        if (local_res18.Data._8_8_ == 0) {
          if (5 < (byte)LogNetworkPlatformFile._0_1_) {
            pFVar21 = &::LOG_Static;
            goto LAB_148be2500;
          }
        }
        else if (5 < (byte)LogNetworkPlatformFile._0_1_) {
          if ((param_1->Data).ArrayNum == 0) {
            pFVar21 = &::LOG_Static;
          }
          else {
            pFVar21 = &::LOG_Static;
          }
LAB_148be2500:
          UE::Logging::Private::BasicLog<6>(pFVar21,(FLogCategoryBase *)&LogNetworkPlatformFile);
        }
        uVar8 = local_res18.Data._8_8_;
        pIVar3 = this->InnerPlatformFile;
        pFVar18 = ::operator_new(0x70);
        pFVar23 = pFVar22;
        if (pFVar18 != (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *)0x0) {
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_360.Data.ArrayNum != 0) {
            FVar19.Data = local_360.Data.AllocatorInstance.Data;
          }
          pFVar18->_padding_ = 0;
          pFVar18->_padding_ =
               (longlong)&___7__FAutoDeleteAsyncTask_VFAsyncNetworkWriteWorker____6B_;
          ::FString::FString(&(pFVar18->Task).Filename,(wchar_t *)FVar19.Data);
          (pFVar18->Task).FileArchive = (FArrayReader *)local_208;
          (pFVar18->Task).FileArchiveOwner.Ptr = (FArrayReader *)0x0;
          (pFVar18->Task).ServerTimeStamp.Ticks = uVar8;
          (pFVar18->Task).InnerPlatformFile = pIVar3;
          (pFVar18->Task).Event = (FScopedEvent *)0x0;
          pFVar23 = pFVar18;
        }
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&pFVar23->_padding_);
        FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker>::DoWork(pFVar23);
        if (*(uint **)(local_208._8_8_ + 8) < *(uint **)local_208._8_8_ + 1) {
          if ((local_1de & 1) == 0) {
            (**(code **)(local_208._0_8_ + 0x188))((FArchive *)local_208,local_res8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)local_208,local_res8);
          }
        }
        else {
          local_res8[0] = **(uint **)local_208._8_8_;
          *(longlong *)local_208._8_8_ = *(longlong *)local_208._8_8_ + 4;
        }
        if (local_res8[0] != 0) {
          if ((this->FinishedAsyncNetworkReadUnsolicitedFiles != (FScopedEvent *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FinishedAsyncNetworkReadUnsolicitedFiles == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkFile\\Private\\NetworkPlatformFile.cpp"
                                  ,0x52e,L""), bVar26)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((this->FinishedAsyncWriteUnsolicitedFiles != (FScopedEvent *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FinishedAsyncWriteUnsolicitedFiles == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkFile\\Private\\NetworkPlatformFile.cpp"
                                  ,0x52f,L""), bVar26)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this->TotalUnsolicitedPackages = this->TotalUnsolicitedPackages + local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              pFVar23 = (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *)0x0;
              local_2d8 = (undefined1  [8])0x0;
              pFStack_2d0 = (FFastPathLoadBuffer *)0x0;
              local_2c8 = (uchar *)0x0;
              puStack_2c0 = (uchar *)0x0;
              local_2b8 = (uchar *)0x0;
              uStack_2b0 = 0;
              local_2a8 = 0;
              lStack_2a0 = 0;
              local_298.FileVersionUE4 = 0;
              local_298.FileVersionUE5 = 0;
              uStack_290 = 0;
              local_288._0_2_ = 0;
              local_288._2_2_ = 0;
              local_288._4_4_ = 0;
              pFStack_280 = (FCustomVersionContainer *)0x0;
              local_278 = (FCustomPropertyListNode *)0x0;
              pFStack_270 = (FArchiveSavePackageData *)0x0;
              local_268 = (FProperty *)0x0;
              pFStack_260 = (FArchiveSerializedPropertyChain *)0x0;
              local_258 = 0;
              pFStack_250 = (FArchiveState *)0x0;
              FArchiveState::FArchiveState((FArchiveState *)local_2d8);
              local_238 = 0;
              local_248 = 0;
              pvStack_240 = (void *)0x0;
              local_2d8 = (undefined1  [8])&___7FArrayReader__6B_;
              FArchiveState::SetIsLoading((FArchiveState *)local_2d8,true);
              (**(code **)((longlong)local_2d8 + 0x108))(local_2d8,0);
              cVar10 = (**(code **)(this->_padding_ + 0x268))(this,&pvStack_240);
              if (cVar10 == '\0') {
                UE::Logging::Private::BasicFatalLog
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
                if (pvStack_240 != (void *)0x0) {
                  FMemory::Free(pvStack_240);
                }
                FArchive::~FArchive((FArchive *)local_2d8);
                goto LAB_148be285a;
              }
              local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_340.Data.ArrayNum = 0;
              local_340.Data.ArrayMax = 0;
              ::operator<<((FArchive *)local_2d8,&local_340);
              if (1 < local_340.Data.ArrayNum) {
                (**(code **)(this->_padding_ + 0x270))(this,&local_340);
                local_368.Ticks = 0;
                if (pFStack_2d0->EndFastPathLoadBuffer <
                    (long64 *)((longlong)pFStack_2d0->StartFastPathLoadBuffer + 8)) {
                  if ((uStack_2b0 & 0x10000) == 0) {
                    if (*(code **)((longlong)local_2d8 + 0x188) == FArrayReader::Serialize) {
                      FArrayReader::Serialize((FArrayReader *)local_2d8,&local_368,8);
                    }
                    else {
                      (**(code **)((longlong)local_2d8 + 0x188))();
                    }
                  }
                  else {
                    FArchive::SerializeByteOrderSwapped((FArchive *)local_2d8,(ulong64 *)&local_368)
                    ;
                  }
                }
                else {
                  local_368.Ticks = *(long64 *)pFStack_2d0->StartFastPathLoadBuffer;
                  pFStack_2d0->StartFastPathLoadBuffer = pFStack_2d0->StartFastPathLoadBuffer + 8;
                }
                FVar9.Ticks = local_368.Ticks;
                local_res18.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)this->InnerPlatformFile;
                pFVar18 = ::operator_new(0x70);
                if (pFVar18 != (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *)0x0) {
                  FVar19.Data = (FScriptContainerElement *)L"";
                  if (local_340.Data.ArrayNum != 0) {
                    FVar19.Data = local_340.Data.AllocatorInstance.Data;
                  }
                  pFVar18->_padding_ = 0;
                  pFVar18->_padding_ =
                       (longlong)&___7__FAutoDeleteAsyncTask_VFAsyncNetworkWriteWorker____6B_;
                  ::FString::FString(&(pFVar18->Task).Filename,(wchar_t *)FVar19.Data);
                  (pFVar18->Task).FileArchiveOwner.Ptr = (FArrayReader *)0x0;
                  (pFVar18->Task).FileArchive = (FArrayReader *)local_2d8;
                  (pFVar18->Task).InnerPlatformFile =
                       (IPlatformFile *)local_res18.Data.AllocatorInstance.Data;
                  (pFVar18->Task).ServerTimeStamp.Ticks = FVar9.Ticks;
                  (pFVar18->Task).Event = (FScopedEvent *)0x0;
                  pFVar23 = pFVar18;
                }
                UE::FInheritedContextBase::CaptureInheritedContext
                          ((FInheritedContextBase *)&pFVar23->_padding_);
                FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker>::DoWork(pFVar23);
              }
              if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_340.Data.AllocatorInstance.Data);
              }
              if (pvStack_240 != (void *)0x0) {
                FMemory::Free(pvStack_240);
              }
              FArchive::~FArchive((FArchive *)local_2d8);
              uVar24 = (int)pFVar22 + 1;
              pFVar22 = (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *)(ulonglong)uVar24;
            } while ((int)uVar24 < (int)local_res8[0]);
          }
        }
        dVar5 = FWindowsPlatformTime::Seconds();
        this->TotalWriteTime = (double)((float)(dVar5 - dVar6) * fVar7) + this->TotalWriteTime;
LAB_148be285a:
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
        }
      }
      if (local_170[0] != (void *)0x0) {
        FMemory::Free(local_170[0]);
      }
      FArchive::~FArchive((FArchive *)local_208);
      if (local_70[0] != (void *)0x0) {
        FMemory::Free(local_70[0]);
      }
      FArchive::~FArchive((FArchive *)local_118);
    }
    else if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
  }
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
LAB_148be28b2:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->SynchronizationObject);
  return;
}

// Exec_Runtime @ 148be2930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNetworkPlatformFile::Exec_Runtime
          (FNetworkPlatformFile *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"networkfile",true);
  if (bVar1) {
    bVar1 = FParse::Command(local_res18,L"stats",true);
    if (bVar1) {
      FOutputDevice::LogfImpl
                (param_3,
                 L"Network platform file %s stats\nTotalWriteTime \t%fms \nTotalNetworkSyncTime \t%fms \nTotalTimeSpentInUnsolicitedPackages \t%fms \nTotalWaitForAsyncUnsolicitedPackages \t%fms \nTotalFilesSynced \t%d \nTotalFilesFoundLocally \t%d\nTotalUnsolicitedPackages \t%d \nUnsolicitedPackagesHits \t%d \nUnsolicitedPackageWaits \t%d \n"
                );
    }
  }
  return false;
}

// FileExists @ 148be2ab0

bool __thiscall FNetworkPlatformFile::FileExists(FNetworkPlatformFile *this,wchar_t *param_1)

{
  undefined2 local_28 [4];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_28[0] = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0xffffffffffffffff;
  (**(code **)(this->_padding_ + 0x288))(0,param_1,local_28);
  return (bool)(undefined1)local_28[0];
}

// FileSize @ 148be2af0

long64 __thiscall FNetworkPlatformFile::FileSize(FNetworkPlatformFile *this,wchar_t *param_1)

{
  undefined2 local_28 [4];
  undefined8 local_20;
  undefined8 uStack_18;
  long64 local_10;
  
  local_28[0] = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = -1;
  (**(code **)(this->_padding_ + 0x288))(0,param_1,local_28);
  return local_10;
}

// FillGetFileList @ 148be2b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPathConversion": Some values do not have unique names */

void __thiscall
FNetworkPlatformFile::FillGetFileList(FNetworkPlatformFile *this,FNetworkFileArchive *param_1)

{
  EConnectionFlags *pEVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FName *pFVar7;
  ISocketSubsystem *pIVar8;
  FOutputDeviceRedirector *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_1f8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1a8;
  undefined1 local_198 [8];
  FString local_190;
  FString local_180;
  TArray<FString,TSizedDefaultAllocator<32>_> local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  longlong *local_120;
  TReferenceControllerBase<1> *local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  FGenericPlatformMisc::GetValidTargetPlatforms(&local_170);
  ::FString::FString(&local_180,GInternalProjectName);
  bVar4 = FPaths::IsProjectFilePathSet();
  if (bVar4) {
    pFVar6 = FPaths::GetProjectFilePath(&local_b8);
    if (&local_180 != pFVar6) {
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      local_180.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_180.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  FPaths::EngineDir(&local_160);
  FPaths::EnginePluginsDir(&local_d0);
  FPaths::ProjectDir(&local_190);
  FPaths::ProjectPluginsDir(&local_e0);
  pFVar6 = FPaths::EngineDir(&local_a8);
  FPaths::ConvertPath(&local_150,pFVar6,Engine_PlatformExtension,L"",(wchar_t *)0x0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::TrimChar(&local_150,&local_f0,L'/',(bool *)0x0);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::ProjectDir(&local_98);
  FPaths::ConvertPath(&local_140,pFVar6,Project_First,L"",(wchar_t *)0x0);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::TrimChar(&local_140,&local_100,L'/',(bool *)0x0);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_1a8.AllocatorInstance,&local_1a8.ArrayMax);
  FVar3.Data = local_160.Data.AllocatorInstance.Data;
  pFVar10 = local_1a8.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FScriptContainerElement **)pFVar10 = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 8) = local_160.Data.ArrayNum;
  local_1a8.ArrayNum = iVar5 + 1;
  if (local_160.Data.ArrayNum == 0) {
    *(int *)(pFVar10 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_160.Data.ArrayNum,0,(ForAnyElementType *)pFVar10,local_160.Data.ArrayNum,
               (int *)(pFVar10 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar10,FVar3.Data,(longlong)local_160.Data.ArrayNum * 2);
  }
  if (((local_1a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_190) &&
      ((FScriptContainerElement *)&local_190 <
       local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_1a8.ArrayNum == local_1a8.ArrayMax) {
    local_1a8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_1a8.AllocatorInstance,&local_1a8.ArrayMax);
  }
  FVar3.Data = local_190.Data.AllocatorInstance.Data;
  pFVar10 = local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayNum * 0x10;
  local_1a8.ArrayNum = local_1a8.ArrayNum + 1;
  *(FScriptContainerElement **)pFVar10 = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 8) = local_190.Data.ArrayNum;
  if (local_190.Data.ArrayNum == 0) {
    *(int *)(pFVar10 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_190.Data.ArrayNum,0,(ForAnyElementType *)pFVar10,local_190.Data.ArrayNum,
               (int *)(pFVar10 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar10,FVar3.Data,(longlong)local_190.Data.ArrayNum * 2);
  }
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&local_170);
  ::operator<<((FArchive *)param_1,&local_180);
  ::operator<<((FArchive *)param_1,&local_160);
  ::operator<<((FArchive *)param_1,&local_190);
  ::operator<<((FArchive *)param_1,&local_f0);
  ::operator<<((FArchive *)param_1,&local_100);
  ::operator<<((FArchive *)param_1,&local_d0);
  ::operator<<((FArchive *)param_1,&local_e0);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&local_1a8);
  pEVar1 = (EConnectionFlags *)**(undefined8 **)&param_1->field_0x8;
  if ((EConnectionFlags *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ConnectionFlags,1);
  }
  else {
    this->ConnectionFlags = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  (**(code **)(this->_padding_ + 0x278))(this,&local_110);
  ::operator<<((FArchive *)param_1,&local_110);
  pFVar7 = ::FName::FName(&local_c0,L"WINDOWS");
  pIVar8 = ISocketSubsystem::Get(pFVar7);
  pcVar2 = *(code **)(pIVar8->_padding_ + 0xe0);
  pFVar9 = GetGlobalLogSingleton();
  (*pcVar2)(pIVar8,&local_120,pFVar9,local_198);
  (**(code **)(*local_120 + 0x80))(local_120,&local_130,0);
  ::operator<<((FArchive *)param_1,&local_130);
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  TSetPrivateFriend::
  Serialize<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ((FArchive *)param_1,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_88);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar5 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return;
}

// GetAccessTimeStamp @ 148be31e0

FDateTime __thiscall
FNetworkPlatformFile::GetAccessTimeStamp(FNetworkPlatformFile *this,wchar_t *param_1)

{
  (**(code **)(this->_padding_ + 0x288))();
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FDateTime)(long64)param_1;
}

// GetFileInfo @ 148be3240

void __thiscall
FNetworkPlatformFile::GetFileInfo(FNetworkPlatformFile *this,wchar_t *param_1,FFileInfo *param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  FString local_48;
  undefined1 local_38 [8];
  long64 local_30;
  long64 local_28;
  long64 local_20;
  byte local_18;
  
  ::FString::FString(&local_48,param_1);
  FPaths::MakeStandardFilename(&local_48);
  iVar3 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar1 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_48,(wchar_t *)FVar1.Data,iVar3,CaseSensitive);
  bVar2 = IsInLocalDirectory(this,&local_48);
  if (!bVar2) {
    EnsureFileIsLocal(this,&local_48);
  }
  (**(code **)((longlong)*this->InnerPlatformFile + 0x130))
            (this->InnerPlatformFile,local_38,param_1);
  if (((local_18 & 4) == 0) || ((local_18 & 1) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  param_2->FileExists = bVar2;
  param_2->ReadOnly = (bool)(local_18 >> 1 & 1);
  param_2->Size = local_20;
  (param_2->TimeStamp).Ticks = local_28;
  (param_2->AccessTimeStamp).Ticks = local_30;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GetFilenameOnDisk @ 148be3330

FString * __thiscall
FNetworkPlatformFile::GetFilenameOnDisk
          (FNetworkPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetLowerLevel @ 148be3380

IPlatformFile * __thiscall FNetworkPlatformFile::GetLowerLevel(FNetworkPlatformFile *this)

{
  return this->InnerPlatformFile;
}

// GetName @ 148be3390

wchar_t * __thiscall FNetworkPlatformFile::GetName(FNetworkPlatformFile *this)

{
  return L"NetworkFile";
}

// GetStatData @ 148be33b0

FFileStatData * __thiscall
FNetworkPlatformFile::GetStatData
          (FNetworkPlatformFile *this,FFileStatData *__return_storage_ptr__,wchar_t *param_1)

{
  (**(code **)((longlong)*this->InnerPlatformFile + 0x130))();
  return __return_storage_ptr__;
}

// GetTimeStamp @ 148be33e0

FDateTime __thiscall FNetworkPlatformFile::GetTimeStamp(FNetworkPlatformFile *this,wchar_t *param_1)

{
  (**(code **)(this->_padding_ + 0x288))();
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FDateTime)(long64)param_1;
}

// GetTimeStampPair @ 148be3430

void __thiscall
FNetworkPlatformFile::GetTimeStampPair
          (FNetworkPlatformFile *this,wchar_t *param_1,wchar_t *param_2,FDateTime *param_3,
          FDateTime *param_4)

{
  long64 *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  plVar1 = (long64 *)(**(code **)(this->_padding_ + 0xb0))(this,local_res8,param_1);
  param_3->Ticks = *plVar1;
  plVar1 = (long64 *)(**(code **)(this->_padding_ + 0xb0))(this,local_res8,param_2);
  param_4->Ticks = *plVar1;
  lVar2 = (**(code **)(this->_padding_ + 0x60))(this);
  if (((lVar2 != 0) && (param_3->Ticks == 0)) && (param_4->Ticks == 0)) {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x60))(this);
    (**(code **)(*plVar3 + 0x1b8))(plVar3,param_1,param_2,param_3,param_4);
  }
  return;
}

// GetVersionInfo @ 148be34f0

FString * __thiscall
FNetworkPlatformFile::GetVersionInfo(FNetworkPlatformFile *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// Initialize @ 148be3530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNetworkPlatformFile::Initialize(FNetworkPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  FModuleManager *this_00;
  IModuleInterface *pIVar8;
  undefined8 *puVar9;
  TMulticastDelegateRegistration<void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  wchar_t *pwVar10;
  FName local_res8;
  code *local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  code *local_28;
  longlong lStack_20;
  
  pFVar7 = ::FName::FName(&local_res8,L"CookOnTheFly");
  FVar2 = *pFVar7;
  this_00 = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModuleChecked(this_00,FVar2);
  puVar9 = (undefined8 *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8,&local_38);
  pTVar1 = &this->Connection;
  if (pTVar1 != (TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1> *)puVar9) {
    pTVar1->Object = (ICookOnTheFlyServerConnection *)*puVar9;
    *puVar9 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Connection).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_2c,uStack_30));
  if (pTVar1->Object == (ICookOnTheFlyServerConnection *)0x0) {
    if (2 < (byte)LogNetworkPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
      return false;
    }
  }
  else {
    pcVar3 = *(code **)(this->_padding_ + 0x248);
    puVar9 = (undefined8 *)(**(code **)((longlong)*pTVar1->Object + 8))();
    if (*(int *)(puVar9 + 1) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)*puVar9;
    }
    cVar4 = (*pcVar3)(this,param_1,pwVar10);
    if (cVar4 != '\0') {
      if ((pTVar1->Object == (ICookOnTheFlyServerConnection *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_01 = (TMulticastDelegateRegistration<void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                 *)(**(code **)((longlong)*pTVar1->Object + 0x48))();
      uStack_30 = 0;
      local_38 = OnCookOnTheFlyMessage;
      lStack_20 = (ulonglong)uStack_2c << 0x20;
      local_28 = OnCookOnTheFlyMessage;
      TMulticastDelegateRegistration<void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FNetworkPlatformFile>
                (this_01,(FNetworkPlatformFile *)&stack0x00000020,(pmf_4b70fb6e *)this);
      return true;
    }
    if (2 < (byte)LogNetworkPlatformFile._0_1_) {
      if ((pTVar1->Object == (ICookOnTheFlyServerConnection *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      (**(code **)((longlong)*pTVar1->Object + 8))();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
    }
  }
  return false;
}

// InitializeAfterSetActive @ 148be3700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetworkPlatformFile::InitializeAfterSetActive(FNetworkPlatformFile *this)

{
  char cVar1;
  FString *pFVar2;
  size_t sVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  int iVar6;
  LARGE_INTEGER local_res8;
  undefined8 local_res10;
  FString local_1e8;
  undefined8 local_1d8;
  FSharedReferencer<1> FStack_1d0;
  TStringView<wchar_t> local_1c8;
  wchar_t *local_1b8;
  undefined4 local_1b0;
  FArchiveState local_1a8;
  undefined8 local_118;
  void *pvStack_110;
  undefined8 local_108;
  FString local_f8;
  undefined1 local_e8 [168];
  void *local_40 [5];
  
  QueryPerformanceCounter(&local_res8);
  FNetworkFileArchive::FNetworkFileArchive((FNetworkFileArchive *)local_e8,0x17);
  (**(code **)(this->_padding_ + 0x290))(this,local_e8);
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  iVar6 = 0;
  local_118 = 0;
  pvStack_110 = (void *)0x0;
  local_1a8._padding_ = (longlong)&___7FArrayReader__6B_;
  local_108 = 0;
  FArchiveState::SetIsLoading(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
  cVar1 = (**(code **)(this->_padding_ + 0x260))(this,local_40,&pvStack_110);
  if (cVar1 == '\0') {
    local_1d8 = 0;
    FStack_1d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->Connection != (TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1> *)&local_1d8) {
      (this->Connection).Object = (ICookOnTheFlyServerConnection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Connection).SharedReferenceCount,&FStack_1d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_1d0.ReferenceController);
    if (pvStack_110 != (void *)0x0) {
      FMemory::Free(pvStack_110);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
    if (local_40[0] != (void *)0x0) {
      FMemory::Free(local_40[0]);
    }
    FArchive::~FArchive((FArchive *)local_e8);
    QueryPerformanceCounter(&local_res8);
    return;
  }
  local_res10 = 0;
  local_res8.s.LowPart = 0;
  (**(code **)(this->_padding_ + 0x298))(this,&local_1a8,&local_res10,&local_res8);
  (**(code **)(this->_padding_ + 0x2a0))(this,&local_1a8,&local_res10,local_res8.s.LowPart);
  pFVar2 = FPaths::EngineDir(&local_f8);
  if ((pFVar2->Data).ArrayNum == 0) {
    local_1c8.DataPtr = L"";
  }
  else {
    local_1c8.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(local_1c8.DataPtr);
    iVar6 = (int)sVar3;
  }
  local_1b8 = L"Config/BaseEngine.ini";
  local_1b0 = 0x15;
  local_1c8.Size = iVar6;
  FPaths::CombineInternal(&local_1e8,&local_1c8,2);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    FVar5.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*this->InnerPlatformFile + 0xa8))(this->InnerPlatformFile,FVar5.Data,0);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    FVar5.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*this->InnerPlatformFile + 0x88))(this->InnerPlatformFile,FVar5.Data);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    FVar5.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*this->InnerPlatformFile + 0x78))
                    (this->InnerPlatformFile,FVar5.Data);
  if ((cVar1 != '\0') && (1 < (byte)LogNetworkPlatformFile._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
  }
  EnsureFileIsLocal(this,&local_1e8);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    FVar5.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*this->InnerPlatformFile + 0x78))
                    (this->InnerPlatformFile,FVar5.Data);
  if (cVar1 != '\0') {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar5.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    lVar4 = (**(code **)((longlong)*this->InnerPlatformFile + 0x80))
                      (this->InnerPlatformFile,FVar5.Data);
    if (0 < lVar4) goto LAB_148be3a02;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
LAB_148be3a02:
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (pvStack_110 != (void *)0x0) {
    FMemory::Free(pvStack_110);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  if (local_40[0] != (void *)0x0) {
    FMemory::Free(local_40[0]);
  }
  FArchive::~FArchive((FArchive *)local_e8);
  QueryPerformanceCounter(&local_res8);
  FGenericPlatformMisc::LowLevelOutputDebugStringf(L"Network file startup time: %5.3f seconds\n");
  return;
}

// InitializeInternal @ 148be3aa0

/* WARNING: Removing unreachable block (ram,0x000148be3c50) */
/* WARNING: Removing unreachable block (ram,0x000148be3e24) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNetworkPlatformFile::InitializeInternal
          (FNetworkPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  IPlatformFile IVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FString *pFVar10;
  longlong lVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_248;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FArchiveState local_198;
  undefined8 local_108;
  void *pvStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [168];
  void *local_40 [3];
  
  if ((param_1 == (IPlatformFile *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Inner != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkFile\\Private\\NetworkPlatformFile.cpp"
                         ,0x65,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  this->InnerPlatformFile = param_1;
  if (param_2 == (wchar_t *)0x0) {
    if (1 < (byte)LogNetworkPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
    }
    this->bIsUsable = false;
    return false;
  }
  pTVar1 = &this->LocalDirectories;
  pTVar8 = &FPaths::EngineDir(&local_218)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_248,pTVar8,10 - (uint)(pTVar8->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_248,L"Binaries",8);
  pTVar8 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pTVar1->AllocatorInstance).Data;
  if (((pTVar8 <= &local_248) && (&local_248 < pTVar8 + (this->LocalDirectories).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = (this->LocalDirectories).ArrayNum;
  if (iVar7 == (this->LocalDirectories).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->LocalDirectories).ArrayMax);
  }
  (this->LocalDirectories).ArrayNum = iVar7 + 1;
  pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(FScriptContainerElement **)pFVar13 = local_248.AllocatorInstance.Data;
  *(int *)(pFVar13 + 8) = local_248.ArrayNum;
  *(int *)(pFVar13 + 0xc) = local_248.ArrayMax;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pFVar9 = (FScriptContainerElement *)FPaths::EngineIntermediateDir(&local_208);
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar13 <= pFVar9) &&
      (pFVar9 < pFVar13 + (longlong)(this->LocalDirectories).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = (this->LocalDirectories).ArrayNum;
  if (iVar7 == (this->LocalDirectories).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->LocalDirectories).ArrayMax);
  }
  (this->LocalDirectories).ArrayNum = iVar7 + 1;
  pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)pFVar13 = *(undefined8 *)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  *(int *)(pFVar13 + 8) = *(int *)(pFVar9 + 8);
  *(int *)(pFVar13 + 0xc) = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  pTVar8 = &FPaths::ProjectDir(&local_1f8)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_238,pTVar8,10 - (uint)(pTVar8->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_238,L"Binaries",8);
  pTVar8 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pTVar1->AllocatorInstance).Data;
  if (((pTVar8 <= &local_238) && (&local_238 < pTVar8 + (this->LocalDirectories).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = (this->LocalDirectories).ArrayNum;
  if (iVar7 == (this->LocalDirectories).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->LocalDirectories).ArrayMax);
  }
  (this->LocalDirectories).ArrayNum = iVar7 + 1;
  pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(FScriptContainerElement **)pFVar13 = local_238.AllocatorInstance.Data;
  *(int *)(pFVar13 + 8) = local_238.ArrayNum;
  *(int *)(pFVar13 + 0xc) = local_238.ArrayMax;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  pFVar9 = (FScriptContainerElement *)FPaths::ProjectIntermediateDir(&local_1e8);
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar13 <= pFVar9) &&
      (pFVar9 < pFVar13 + (longlong)(this->LocalDirectories).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = (this->LocalDirectories).ArrayNum;
  if (iVar7 == (this->LocalDirectories).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->LocalDirectories).ArrayMax);
  }
  (this->LocalDirectories).ArrayNum = iVar7 + 1;
  pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)pFVar13 = *(undefined8 *)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  *(int *)(pFVar13 + 8) = *(int *)(pFVar9 + 8);
  *(int *)(pFVar13 + 0xc) = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  pFVar10 = FPaths::ProjectSavedDir();
  pFVar9 = (FScriptContainerElement *)::operator/(&local_1d8,pFVar10,L"Backup");
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar13 <= pFVar9) &&
      (pFVar9 < pFVar13 + (longlong)(this->LocalDirectories).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = (this->LocalDirectories).ArrayNum;
  if (iVar7 == (this->LocalDirectories).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->LocalDirectories).ArrayMax);
  }
  (this->LocalDirectories).ArrayNum = iVar7 + 1;
  pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)pFVar13 = *(undefined8 *)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  *(int *)(pFVar13 + 8) = *(int *)(pFVar9 + 8);
  *(int *)(pFVar13 + 0xc) = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pFVar10 = FPaths::ProjectSavedDir();
  pFVar9 = (FScriptContainerElement *)::operator/(&local_1c8,pFVar10,L"Config");
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar13 <= pFVar9) &&
      (pFVar9 < pFVar13 + (longlong)(this->LocalDirectories).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = (this->LocalDirectories).ArrayNum;
  if (iVar7 == (this->LocalDirectories).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->LocalDirectories).ArrayMax);
  }
  (this->LocalDirectories).ArrayNum = iVar7 + 1;
  pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)pFVar13 = *(undefined8 *)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  *(int *)(pFVar13 + 8) = *(int *)(pFVar9 + 8);
  *(int *)(pFVar13 + 0xc) = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pFVar10 = FPaths::ProjectSavedDir();
  pFVar9 = (FScriptContainerElement *)::operator/(&local_1b8,pFVar10,L"Logs");
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar13 <= pFVar9) &&
      (pFVar9 < pFVar13 + (longlong)(this->LocalDirectories).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = (this->LocalDirectories).ArrayNum;
  if (iVar7 == (this->LocalDirectories).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->LocalDirectories).ArrayMax);
  }
  (this->LocalDirectories).ArrayNum = iVar7 + 1;
  pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)pFVar13 = *(undefined8 *)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  *(int *)(pFVar13 + 8) = *(int *)(pFVar9 + 8);
  *(int *)(pFVar13 + 0xc) = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  pFVar10 = FPaths::ProjectSavedDir();
  pFVar9 = (FScriptContainerElement *)::operator/(&local_1a8,pFVar10,L"Sandboxes");
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar13 <= pFVar9) &&
      (pFVar9 < pFVar13 + (longlong)(this->LocalDirectories).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = (this->LocalDirectories).ArrayNum;
  if (iVar7 == (this->LocalDirectories).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->LocalDirectories).ArrayMax);
  }
  (this->LocalDirectories).ArrayNum = iVar7 + 1;
  pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)pFVar13 = *(undefined8 *)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  *(int *)(pFVar13 + 8) = *(int *)(pFVar9 + 8);
  *(int *)(pFVar13 + 0xc) = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  lVar11 = (**(code **)((longlong)*this->InnerPlatformFile + 0x60))();
  IVar2 = *this->InnerPlatformFile;
  if (lVar11 == 0) {
    (**(code **)((longlong)IVar2 + 0x48))(this->InnerPlatformFile,pTVar1);
  }
  else {
    plVar12 = (longlong *)(**(code **)((longlong)IVar2 + 0x60))();
    (**(code **)(*plVar12 + 0x48))(plVar12,pTVar1);
  }
  FNetworkFileArchive::FNetworkFileArchive((FNetworkFileArchive *)local_e8,0x18);
  local_198._padding_ = 0;
  local_198.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_198.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_198.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_198.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_198._40_8_ = 0;
  local_198.ArSerializingDefaults = 0;
  local_198.ArPortFlags = 0;
  local_198.ArMaxSerializeSize = 0;
  local_198.ArUEVer.FileVersionUE4 = 0;
  local_198.ArUEVer.FileVersionUE5 = 0;
  local_198.ArLicenseeUEVer = 0;
  local_198.ArEngineVer.Major = 0;
  local_198.ArEngineVer.Minor = 0;
  local_198.ArEngineVer.Patch = 0;
  local_198.ArEngineVer._6_2_ = 0;
  local_198.ArEngineVer.Changelist = 0;
  local_198.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_198.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_198.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_198.SerializedProperty = (FProperty *)0x0;
  local_198.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_198.bCustomVersionsAreReset = false;
  local_198._129_7_ = 0;
  local_198.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_198);
  local_f8 = 0;
  local_108 = 0;
  pvStack_100 = (void *)0x0;
  local_198._padding_ = (longlong)&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading(&local_198,true);
  (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
  cVar6 = (**(code **)(this->_padding_ + 0x260))(this,local_40,&pvStack_100);
  if (cVar6 == '\0') {
    this->bIsUsable = true;
    uVar5 = 1;
  }
  else {
    uVar5 = this->bIsUsable;
  }
  if ((int)local_f8 != 0) {
    ::FString::PrintfImpl(&local_228,L"-FileHostIP=%s");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_228.Data.ArrayNum != 0) {
      FVar14.Data = local_228.Data.AllocatorInstance.Data;
    }
    FCommandLine::AddToSubprocessCommandLine((wchar_t *)FVar14.Data,AllContexts);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    this->bIsUsable = true;
    uVar5 = 1;
  }
  if (pvStack_100 != (void *)0x0) {
    FMemory::Free(pvStack_100);
  }
  FArchive::~FArchive((FArchive *)&local_198);
  if (local_40[0] != (void *)0x0) {
    FMemory::Free(local_40[0]);
  }
  FArchive::~FArchive((FArchive *)local_e8);
  return (bool)uVar5;
}

// IsAdditionalCookedFileExtension @ 148be4410

bool __cdecl FNetworkPlatformFile::IsAdditionalCookedFileExtension(wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  if (*param_1 != L'.') {
    sVar3 = wcslen(param_1);
    bVar1 = ::FString::EndsWith(&BulkFileExtension,param_1,(int)sVar3,IgnoreCase);
    if (!bVar1) {
      sVar3 = wcslen(param_1);
      bVar1 = ::FString::EndsWith(&FontFileExtension,param_1,(int)sVar3,IgnoreCase);
      if (!bVar1) {
        sVar3 = wcslen(param_1);
        bVar1 = ::FString::EndsWith(&ExpFileExtension,param_1,(int)sVar3,IgnoreCase);
        if (!bVar1) {
          return false;
        }
      }
    }
    return true;
  }
  pwVar5 = L"";
  pwVar4 = L"";
  if (BulkFileExtension.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)BulkFileExtension.Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,param_1);
  if (iVar2 != 0) {
    pwVar4 = L"";
    if (FontFileExtension.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)FontFileExtension.Data.AllocatorInstance;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,param_1);
    if (iVar2 != 0) {
      if (ExpFileExtension.Data.ArrayNum != 0) {
        pwVar5 = (wchar_t *)ExpFileExtension.Data.AllocatorInstance;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar5,param_1);
      if (iVar2 != 0) {
        return false;
      }
    }
  }
  return true;
}

// IsInLocalDirectory @ 148be4520

bool __thiscall
FNetworkPlatformFile::IsInLocalDirectory(FNetworkPlatformFile *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FDerivedDataCacheInterface *pFVar7;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  if (this->bHasLoadedDDCDirectories != false) {
    bVar4 = IsInLocalDirectoryUnGuarded(this,param_1);
    return bVar4;
  }
  lpCriticalSection = &this->LocalDirectoriesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar4 = IsInGameThread();
    if (((bVar4) && (GConfig != (FConfigCacheIni *)0x0)) && (GConfig->bIsReadyForUse != false)) {
      pFVar7 = GetDerivedDataCache();
      if (pFVar7 != (FDerivedDataCacheInterface *)0x0) {
        local_18.Data = (FScriptContainerElement *)0x0;
        local_10 = 0;
        pFVar7 = GetDerivedDataCacheRef();
        (**(code **)((longlong)*pFVar7 + 0xa0))(pFVar7,&local_18);
        pTVar1 = &this->LocalDirectories;
        if (pTVar1 == (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_18) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        iVar3 = (int)local_10;
        iVar6 = 0;
        if ((int)local_10 != 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,(int)local_10,&pTVar1->AllocatorInstance,
                             &(this->LocalDirectories).ArrayNum,&(this->LocalDirectories).ArrayMax);
          ConstructItems<FString,FString,int>
                    ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10,
                     (FString *)local_18.Data,iVar3);
          iVar6 = (int)local_10;
        }
        DestructItems<FString,int>((FString *)local_18.Data,iVar6);
        if (local_18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data);
        }
      }
      this->bHasLoadedDDCDirectories = true;
    }
    bVar4 = IsInLocalDirectoryUnGuarded(this,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsInLocalDirectoryUnGuarded @ 148be46b0

bool __thiscall
FNetworkPlatformFile::IsInLocalDirectoryUnGuarded(FNetworkPlatformFile *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  FString local_18;
  
  FPaths::GetPath(&local_18,param_1);
  uVar8 = 0;
  if (0 < (this->LocalDirectories).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->LocalDirectories).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar2 = (this->LocalDirectories).AllocatorInstance.Data;
      iVar1 = *(int *)(pFVar2 + lVar9 + 8);
      iVar10 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar10 = 0;
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(pFVar2 + lVar9);
      }
      bVar4 = ::FString::StartsWith(&local_18,pwVar7,iVar10,IgnoreCase);
      if (bVar4) {
        bVar4 = true;
        goto LAB_148be4788;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (this->LocalDirectories).ArrayNum);
  }
  bVar4 = false;
LAB_148be4788:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// IsMediaExtension @ 148be47c0

bool __cdecl FNetworkPlatformFile::IsMediaExtension(wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  
  if (*param_1 != L'.') {
    sVar3 = wcslen(param_1);
    bVar1 = ::FString::EndsWith(&MP4Extension,param_1,(int)sVar3,IgnoreCase);
    return bVar1;
  }
  pwVar4 = L"";
  if (MP4Extension.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)MP4Extension.Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,param_1);
  return iVar2 == 0;
}

// IsReadOnly @ 148be4820

bool __thiscall FNetworkPlatformFile::IsReadOnly(FNetworkPlatformFile *this,wchar_t *param_1)

{
  undefined2 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0xffffffffffffffff;
  (**(code **)(this->_padding_ + 0x288))(0,param_1,&local_28);
  return (bool)local_28._1_1_;
}

// IsUsable @ 148be4870

bool __thiscall FNetworkPlatformFile::IsUsable(FNetworkPlatformFile *this)

{
  return this->bIsUsable;
}

// IterateDirectory @ 148be4880

bool __thiscall
FNetworkPlatformFile::IterateDirectory
          (FNetworkPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  wchar_t wVar1;
  ForAnyElementType FVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTVar7;
  FString *pFVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  FString local_c8;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  FString local_78;
  FString local_68;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  bVar11 = false;
  wVar1 = *param_1;
  ::FString::FString(&local_c8,param_1);
  FPaths::MakeStandardFilename(&local_c8);
  iVar6 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar2 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_c8,(wchar_t *)FVar2.Data,iVar6,CaseSensitive);
  bVar4 = IsInLocalDirectory(this,&local_c8);
  if (bVar4) {
    uVar5 = (**(code **)((longlong)*this->InnerPlatformFile + 0x140))
                      (this->InnerPlatformFile,param_1,param_2);
  }
  else {
    uVar5 = true;
    pTVar7 = (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
              *)FServerTOC::FindDirectory(&this->ServerFiles,&local_c8);
    if (pTVar7 != (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                   *)0x0) {
      TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_58,pTVar7);
      local_80 = 0;
      stack0xffffffffffffff58 = local_58._16_16_;
      local_b8 = (longlong *)local_58._0_8_;
      auStack_b0._0_8_ = local_58._8_8_;
      local_98 = local_38;
      pTStack_90 = pTStack_30;
      uVar9 = local_58._24_8_ >> 0x20;
      uVar12 = local_58._28_4_;
      local_88 = pTVar7;
      if ((int)uVar12 < *(int *)(local_58._16_8_ + 0x18)) {
        do {
          plVar3 = local_b8;
          if ((bool)uVar5 != true) break;
          lVar13 = (longlong)(int)uVar9 * 0x20;
          pFVar8 = FPaths::GetPath(&local_78,(FString *)(*local_b8 + lVar13));
          iVar6 = (pFVar8->Data).ArrayNum;
          if (iVar6 == local_c8.Data.ArrayNum) {
            if (iVar6 < 2) {
              bVar4 = true;
            }
            else {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                                 (wchar_t *)local_c8.Data.AllocatorInstance.Data);
              bVar4 = iVar6 == 0;
            }
          }
          else {
            bVar4 = local_c8.Data.ArrayNum + iVar6 == 1;
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            pFVar8 = (FString *)(*plVar3 + lVar13);
            lVar13 = *(longlong *)((longlong)(int)uVar12 * 0x20 + 0x10 + *plVar3);
            if (wVar1 == L'\0') {
              bVar11 = true;
              pFVar8 = FPaths::GetCleanFilename(&local_68,pFVar8);
              if ((pFVar8->Data).ArrayNum == 0) {
LAB_148be4a50:
                pwVar10 = L"";
              }
              else {
                pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
              }
            }
            else {
              if ((pFVar8->Data).ArrayNum == 0) goto LAB_148be4a50;
              pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
            }
            uVar5 = IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
                              (param_2,pwVar10,lVar13 == 0);
            if ((bVar11) &&
               (bVar11 = false,
               local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
          uVar9 = (ulonglong)uStack_9c;
          uVar12 = uStack_9c;
        } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          uVar12 = *(int *)&(local_88->Elements).field_0x8 -
                   *(int *)&(local_88->Elements).field_0x34;
          if (uVar12 < 4) {
            iVar6 = 1;
          }
          else {
            uVar9 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
            lVar13 = 0x3f;
            if (uVar9 != 0) {
              for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar6 = 1 << ((byte)lVar13 & 0x1f);
          }
          if (((0 < (int)uVar12) && (local_88->HashSize < iVar6)) || (iVar6 < local_88->HashSize)) {
            local_88->HashSize = iVar6;
            TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
            ::Rehash(local_88);
          }
        }
      }
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return (bool)uVar5;
}

// IterateDirectoryRecursively @ 148be4b50

bool __thiscall
FNetworkPlatformFile::IterateDirectoryRecursively
          (FNetworkPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FServerTOC *pFVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FString local_d8;
  longlong *local_c8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  longlong *local_88;
  undefined1 auStack_80 [16];
  uint uStack_70;
  uint uStack_6c;
  longlong local_68;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *local_58;
  undefined2 local_50;
  undefined1 local_48 [32];
  longlong local_28;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  
  ::FString::FString(&local_d8,param_1);
  FPaths::MakeStandardFilename(&local_d8);
  iVar11 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar7 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar7.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_d8,(wchar_t *)FVar7.Data,iVar11,CaseSensitive);
  bVar3 = IsInLocalDirectory(this,&local_d8);
  if (bVar3) {
    uVar4 = (**(code **)((longlong)*this->InnerPlatformFile + 0x1d0))
                      (this->InnerPlatformFile,param_1,param_2);
  }
  else {
    pFVar9 = &this->ServerFiles;
    uVar4 = true;
    TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_48,
               (TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
                *)pFVar9);
    local_50 = 0;
    stack0xffffffffffffff88 = local_48._16_16_;
    local_88 = (longlong *)local_48._0_8_;
    auStack_80._0_8_ = local_48._8_8_;
    local_68 = local_28;
    pTStack_60 = pTStack_20;
    uVar14 = local_48._24_8_ >> 0x20;
    local_58 = (TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
                *)pFVar9;
    if (local_48._28_4_ < *(int *)(local_48._16_8_ + 0x18)) {
      iVar11 = 1;
      do {
        plVar2 = local_88;
        if ((bool)uVar4 != true) break;
        iVar5 = local_d8.Data.ArrayNum;
        FVar7.Data = (FScriptContainerElement *)L"";
        if (iVar5 != 0) {
          FVar7.Data = local_d8.Data.AllocatorInstance.Data;
        }
        iVar12 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar12 = 0;
        }
        lVar10 = (longlong)(int)uVar14 * 0x20;
        bVar3 = ::FString::StartsWith
                          ((FString *)(*local_88 + lVar10),(wchar_t *)FVar7.Data,iVar12,IgnoreCase);
        if (bVar3) {
          pTVar1 = *(TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                     **)(*plVar2 + 0x10 + lVar10);
          TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
          ::TIterator::TIterator((TIterator *)local_48,pTVar1);
          local_90 = 0;
          stack0xffffffffffffff48 = local_48._16_16_;
          local_c8 = (longlong *)local_48._0_8_;
          auStack_c0._0_8_ = local_48._8_8_;
          local_a8 = local_28;
          pTStack_a0 = pTStack_20;
          uVar14 = local_48._24_8_ >> 0x20;
          uVar13 = local_48._28_4_;
          local_98 = pTVar1;
          if ((int)uVar13 < *(int *)(local_48._16_8_ + 0x18)) {
            do {
              if ((bool)uVar4 != true) break;
              lVar10 = *local_c8;
              lVar6 = (longlong)(int)uVar14 * 0x20;
              if (*(int *)(lVar6 + 8 + lVar10) == 0) {
                pwVar8 = L"";
              }
              else {
                pwVar8 = *(wchar_t **)(lVar6 + lVar10);
              }
              uVar4 = IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
                                (param_2,pwVar8,
                                 *(longlong *)((longlong)(int)uVar13 * 0x20 + 0x10 + lVar10) == 0);
              uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
              uVar14 = (ulonglong)uStack_ac;
              uVar13 = uStack_ac;
            } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
            if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
              uVar13 = *(int *)&(local_98->Elements).field_0x8 -
                       *(int *)&(local_98->Elements).field_0x34;
              if (uVar13 < 4) {
                iVar5 = 1;
              }
              else {
                uVar14 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
                lVar10 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                  }
                }
                iVar5 = 1 << ((byte)lVar10 & 0x1f);
              }
              if (((0 < (int)uVar13) && (local_98->HashSize < iVar5)) ||
                 (iVar5 < local_98->HashSize)) {
                local_98->HashSize = iVar5;
                TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                ::Rehash(local_98);
              }
            }
          }
        }
        uStack_70 = uStack_70 & ~auStack_80._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_80);
        uVar14 = (ulonglong)uStack_6c;
      } while ((int)uStack_6c < *(int *)(auStack_80._8_8_ + 0x18));
      if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
        uVar13 = *(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34;
        if (3 < uVar13) {
          uVar14 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar11 = 1 << ((byte)lVar10 & 0x1f);
        }
        if (((0 < (int)uVar13) && (local_58->HashSize < iVar11)) || (iVar11 < local_58->HashSize)) {
          local_58->HashSize = iVar11;
          TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
          ::Rehash(local_58);
        }
      }
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// IterateDirectoryStat @ 148be4e70

bool __thiscall
FNetworkPlatformFile::IterateDirectoryStat
          (FNetworkPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  wchar_t wVar1;
  ForAnyElementType FVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTVar7;
  FString *pFVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  bool bVar11;
  longlong lVar12;
  uint uVar13;
  FString local_c8;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  TIterator local_78;
  FString local_48;
  FString local_38;
  
  wVar1 = *param_1;
  bVar11 = false;
  ::FString::FString(&local_c8,param_1);
  FPaths::MakeStandardFilename(&local_c8);
  iVar6 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar2 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_c8,(wchar_t *)FVar2.Data,iVar6,CaseSensitive);
  bVar4 = IsInLocalDirectory(this,&local_c8);
  if (bVar4) {
    uVar5 = (**(code **)((longlong)*this->InnerPlatformFile + 0x150))
                      (this->InnerPlatformFile,param_1,param_2);
  }
  else {
    uVar5 = true;
    pTVar7 = (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
              *)FServerTOC::FindDirectory(&this->ServerFiles,&local_c8);
    if (pTVar7 != (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                   *)0x0) {
      TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
      ::TIterator::TIterator(&local_78,pTVar7);
      unique0x10000245 = local_78._padding_;
      auStack_b0._8_8_ = local_78._padding_;
      local_80 = 0;
      local_b8 = (longlong *)local_78._padding_;
      auStack_b0._0_8_ = local_78._padding_;
      pTStack_90 = local_78.Set;
      uVar9 = (ulonglong)local_78._padding_ >> 0x20;
      uVar13 = (uint)((ulonglong)local_78._padding_ >> 0x20);
      local_88 = pTVar7;
      if ((int)uVar13 < *(int *)(local_78._padding_ + 0x18)) {
        do {
          plVar3 = local_b8;
          if ((bool)uVar5 != true) break;
          lVar12 = (longlong)(int)uVar9 * 0x20;
          pFVar8 = FPaths::GetPath(&local_48,(FString *)(*local_b8 + lVar12));
          iVar6 = (pFVar8->Data).ArrayNum;
          if (iVar6 == local_c8.Data.ArrayNum) {
            if (iVar6 < 2) {
              bVar4 = true;
            }
            else {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                                 (wchar_t *)local_c8.Data.AllocatorInstance.Data);
              bVar4 = iVar6 == 0;
            }
          }
          else {
            bVar4 = local_c8.Data.ArrayNum + iVar6 == 1;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            local_78._padding_ = *(longlong *)((longlong)(int)uVar13 * 0x20 + 0x10 + *plVar3);
            local_78._padding_ = 0xffffffffffffffff;
            local_78._padding_ = 0;
            local_78._padding_._0_1_ = (byte)local_78._padding_ & 0xfe | local_78._padding_ == 0 | 6
            ;
            local_78._padding_ = 0;
            if (wVar1 == L'\0') {
              bVar11 = true;
              pFVar8 = FPaths::GetCleanFilename(&local_38,(FString *)(*plVar3 + lVar12));
              if ((pFVar8->Data).ArrayNum == 0) {
LAB_148be506b:
                pwVar10 = L"";
              }
              else {
                pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
              }
            }
            else {
              if (*(int *)(lVar12 + 8 + *plVar3) == 0) goto LAB_148be506b;
              pwVar10 = *(wchar_t **)(lVar12 + *plVar3);
            }
            uVar5 = IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit
                              (param_2,pwVar10,(FFileStatData *)&local_78);
            if ((bVar11) &&
               (bVar11 = false,
               local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
          uVar9 = (ulonglong)uStack_9c;
          uVar13 = uStack_9c;
        } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          uVar13 = *(int *)&(local_88->Elements).field_0x8 -
                   *(int *)&(local_88->Elements).field_0x34;
          if (uVar13 < 4) {
            iVar6 = 1;
          }
          else {
            uVar9 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar9 != 0) {
              for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar6 = 1 << ((byte)lVar12 & 0x1f);
          }
          if (((0 < (int)uVar13) && (local_88->HashSize < iVar6)) || (iVar6 < local_88->HashSize)) {
            local_88->HashSize = iVar6;
            TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
            ::Rehash(local_88);
          }
        }
      }
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return (bool)uVar5;
}

// IterateDirectoryStatRecursively @ 148be5170

bool __thiscall
FNetworkPlatformFile::IterateDirectoryStatRecursively
          (FNetworkPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FServerTOC *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FString local_d8;
  TIterator local_c8;
  longlong *local_98;
  undefined1 auStack_90 [16];
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_70;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *local_68;
  undefined2 local_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  ::FString::FString(&local_d8,param_1);
  FPaths::MakeStandardFilename(&local_d8);
  iVar10 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar6 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar10 = 0;
    FVar6.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_d8,(wchar_t *)FVar6.Data,iVar10,CaseSensitive);
  bVar3 = IsInLocalDirectory(this,&local_d8);
  if (bVar3) {
    uVar4 = (**(code **)((longlong)*this->InnerPlatformFile + 0x1e0))
                      (this->InnerPlatformFile,param_1,param_2);
  }
  else {
    pFVar8 = &this->ServerFiles;
    uVar4 = true;
    TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_c8,
               (TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
                *)pFVar8);
    unique0x100002d0 = local_c8._padding_;
    auStack_50._8_8_ = local_c8._padding_;
    local_20 = 0;
    local_58 = (longlong *)local_c8._padding_;
    auStack_50._0_8_ = local_c8._padding_;
    pTStack_30 = local_c8.Set;
    uVar14 = (ulonglong)local_c8._padding_ >> 0x20;
    local_28 = (TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
                *)pFVar8;
    if ((int)((ulonglong)local_c8._padding_ >> 0x20) < *(int *)(local_c8._padding_ + 0x18)) {
      iVar10 = 1;
      do {
        plVar2 = local_58;
        if ((bool)uVar4 != true) break;
        iVar5 = local_d8.Data.ArrayNum;
        FVar6.Data = (FScriptContainerElement *)L"";
        if (iVar5 != 0) {
          FVar6.Data = local_d8.Data.AllocatorInstance.Data;
        }
        iVar11 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar11 = 0;
        }
        lVar9 = (longlong)(int)uVar14 * 0x20;
        bVar3 = ::FString::StartsWith
                          ((FString *)(*local_58 + lVar9),(wchar_t *)FVar6.Data,iVar11,IgnoreCase);
        if (bVar3) {
          pTVar1 = *(TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                     **)(*plVar2 + 0x10 + lVar9);
          TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
          ::TIterator::TIterator((TIterator *)&local_c8,pTVar1);
          unique0x100002e0 = local_c8._padding_;
          auStack_90._8_8_ = local_c8._padding_;
          local_60 = 0;
          local_98 = (longlong *)local_c8._padding_;
          auStack_90._0_8_ = local_c8._padding_;
          local_78._1_7_ = local_c8._padding_._1_7_;
          local_78._0_1_ = (byte)local_c8._padding_;
          pTStack_70 = local_c8.Set;
          uVar14 = (ulonglong)local_c8._padding_ >> 0x20;
          uVar12 = (uint)((ulonglong)local_c8._padding_ >> 0x20);
          local_68 = pTVar1;
          if ((int)uVar12 < *(int *)(local_c8._padding_ + 0x18)) {
            do {
              if ((bool)uVar4 != true) break;
              local_c8._padding_ = *(longlong *)((longlong)(int)uVar12 * 0x20 + 0x10 + *local_98);
              local_c8._padding_ = 0;
              local_c8._padding_ = 0;
              local_c8._padding_ = 0;
              local_c8._padding_._0_1_ =
                   (byte)local_c8._padding_ & 0xfe | local_c8._padding_ == 0 | 6;
              uVar13 = (uint)uVar14;
              if (local_c8._padding_ != 0) {
                uVar13 = uVar12;
              }
              if (*(int *)((longlong)(int)uVar13 * 0x20 + 8 + *local_98) == 0) {
                pwVar7 = L"";
              }
              else {
                pwVar7 = *(wchar_t **)((longlong)(int)uVar13 * 0x20 + *local_98);
              }
              uVar4 = IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit
                                (param_2,pwVar7,(FFileStatData *)&local_c8);
              uStack_80 = uStack_80 & ~auStack_90._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_90);
              uVar14 = (ulonglong)uStack_7c;
              uVar12 = uStack_7c;
            } while ((int)uStack_7c < *(int *)(auStack_90._8_8_ + 0x18));
            if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
              uVar12 = *(int *)&(local_68->Elements).field_0x8 -
                       *(int *)&(local_68->Elements).field_0x34;
              if (uVar12 < 4) {
                iVar5 = 1;
              }
              else {
                uVar14 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
                lVar9 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                iVar5 = 1 << ((byte)lVar9 & 0x1f);
              }
              if (((0 < (int)uVar12) && (local_68->HashSize < iVar5)) ||
                 (iVar5 < local_68->HashSize)) {
                local_68->HashSize = iVar5;
                TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                ::Rehash(local_68);
              }
            }
          }
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar14 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar12 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (3 < uVar12) {
          uVar14 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((0 < (int)uVar12) && (local_28->HashSize < iVar10)) || (iVar10 < local_28->HashSize)) {
          local_28->HashSize = iVar10;
          TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// MakeStandardNetworkFilename @ 148be54c0

void __thiscall
FNetworkPlatformFile::MakeStandardNetworkFilename(FNetworkPlatformFile *this,FString *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  
  FPaths::MakeStandardFilename(param_1);
  iVar2 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar1 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar2 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(param_1,(wchar_t *)FVar1.Data,iVar2,CaseSensitive);
  return;
}

// MoveFile @ 148be5510

bool __thiscall
FNetworkPlatformFile::MoveFile(FNetworkPlatformFile *this,wchar_t *param_1,wchar_t *param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString local_18;
  
  ::FString::FString(&local_18,param_2);
  FPaths::MakeStandardFilename(&local_18);
  iVar4 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar1 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_18,(wchar_t *)FVar1.Data,iVar4,CaseSensitive);
  bVar2 = IsInLocalDirectory(this,&local_18);
  if (!bVar2) {
    EnsureFileIsLocal(this,&local_18);
  }
  uVar3 = (**(code **)((longlong)*this->InnerPlatformFile + 0xa0))
                    (this->InnerPlatformFile,param_1,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// OnCookOnTheFlyMessage @ 148be55d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNetworkPlatformFile::OnCookOnTheFlyMessage
          (FNetworkPlatformFile *this,FCookOnTheFlyMessage *param_1)

{
  TTypeCompatibleBytes<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *pTVar1;
  atomic<int> *paVar2;
  atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*> aVar3;
  uchar *puVar4;
  int iVar5;
  longlong lVar6;
  atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*> aVar7;
  longlong *local_res10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1->Header).MessageType == NetworkPlatformFile) {
    UE::Cook::FCookOnTheFlyMessage::ReadBody(param_1);
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    lVar6 = (**(code **)(*local_res10 + 0x30))();
    if (lVar6 == (int)lVar6) {
      iVar5 = (**(code **)(*local_res10 + 0x30))();
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_18,iVar5,Default);
      (**(code **)(*local_res10 + 0x188))
                (local_res10,local_18.AllocatorInstance.Data,(longlong)local_18.ArrayNum);
      aVar7 = (atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>
               )(this->PendingPayloads).First;
      if (aVar7 == (atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>
                    )(this->PendingPayloads).TailCopy) {
        aVar3 = (this->PendingPayloads).Tail;
        aVar7 = (atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>
                 )(this->PendingPayloads).First;
        (this->PendingPayloads).TailCopy = (FNode *)aVar3;
        if (aVar7 == aVar3) {
          aVar7 = (atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>
                   )FMemory::Malloc(0x18,8);
          puVar4 = (uchar *)((longlong)aVar7 + 0x10);
          puVar4[0] = '\0';
          puVar4[1] = '\0';
          puVar4[2] = '\0';
          puVar4[3] = '\0';
          puVar4[4] = '\0';
          puVar4[5] = '\0';
          puVar4[6] = '\0';
          puVar4[7] = '\0';
          *(undefined8 *)aVar7 = 0;
        }
        else {
          (this->PendingPayloads).First = *(FNode **)aVar7;
          *(undefined8 *)aVar7 = 0;
        }
      }
      else {
        (this->PendingPayloads).First = *(FNode **)aVar7;
        *(undefined8 *)aVar7 = 0;
      }
      pTVar1 = (TTypeCompatibleBytes<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *)
               ((longlong)aVar7 + 8);
      pTVar1->Pad[0] = '\0';
      pTVar1->Pad[1] = '\0';
      pTVar1->Pad[2] = '\0';
      pTVar1->Pad[3] = '\0';
      pTVar1->Pad[4] = '\0';
      pTVar1->Pad[5] = '\0';
      pTVar1->Pad[6] = '\0';
      pTVar1->Pad[7] = '\0';
      *(FScriptContainerElement **)
       ((TTypeCompatibleBytes<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *)
       ((longlong)aVar7 + 8))->Pad = local_18.AllocatorInstance.Data;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)aVar7 + 0x10) = local_18.ArrayNum;
      *(int *)((longlong)aVar7 + 0x14) = local_18.ArrayMax;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      ((this->PendingPayloads).Head)->Next = aVar7;
      (this->PendingPayloads).Head = (FNode *)aVar7;
      LOCK();
      paVar2 = &(this->PendingPayloads).NumElems;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
      (**(code **)(((this->NewPayloadEvent).Event)->_padding_ + 0x10))();
    }
    else if (2 < (byte)LogCookOnTheFly._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    if (local_res10 != (longlong *)0x0) {
      (**(code **)*local_res10)(local_res10,1);
    }
  }
  return;
}

// OnFileUpdated @ 148be5760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetworkPlatformFile::OnFileUpdated(FNetworkPlatformFile *this,FString *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  FDateTime FVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  pwVar6 = L"";
  cVar2 = (**(code **)((longlong)*this->InnerPlatformFile + 0x78))();
  if (((cVar2 != '\0') &&
      (cVar2 = (**(code **)((longlong)*this->InnerPlatformFile + 0x88))(), cVar2 == '\0')) &&
     (1 < (byte)LogNetworkPlatformFile._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
  }
  if (*(int *)&(this->CachedLocalFiles).Elements.field_0x8 !=
      *(int *)&(this->CachedLocalFiles).Elements.field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
              (&this->CachedLocalFiles,uVar3,param_1);
  }
  FVar4 = FDateTime::UtcNow();
  FServerTOC::AddFileOrDirectory(&this->ServerFiles,param_1,(FDateTime *)FVar4.Ticks);
  return;
}

// OpenRead @ 148be5850

IFileHandle * __thiscall
FNetworkPlatformFile::OpenRead(FNetworkPlatformFile *this,wchar_t *param_1,bool param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  IFileHandle *pIVar3;
  int iVar4;
  LARGE_INTEGER local_res8;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FPaths::MakeStandardFilename(&local_18);
  iVar4 = NetworkPlatformFileEndChop.Data.ArrayNum + -1;
  FVar1 = NetworkPlatformFileEndChop.Data.AllocatorInstance;
  if (NetworkPlatformFileEndChop.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_18,(wchar_t *)FVar1.Data,iVar4,CaseSensitive);
  bVar2 = IsInLocalDirectory(this,&local_18);
  if (!bVar2) {
    EnsureFileIsLocal(this,&local_18);
  }
  QueryPerformanceCounter(&local_res8);
  pIVar3 = (IFileHandle *)
           (**(code **)((longlong)*this->InnerPlatformFile + 0xe8))
                     (this->InnerPlatformFile,param_1,param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pIVar3;
}

// OpenWrite @ 148be5920

IFileHandle * __thiscall
FNetworkPlatformFile::OpenWrite
          (FNetworkPlatformFile *this,wchar_t *param_1,bool param_2,bool param_3)

{
  IFileHandle *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148be5927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IFileHandle *)(**(code **)((longlong)*this->InnerPlatformFile + 0x110))();
  return pIVar1;
}

// PerformHeartbeat @ 148be5940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetworkPlatformFile::PerformHeartbeat(FNetworkPlatformFile *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *_Src;
  code *pcVar1;
  ForAnyElementType _Src_00;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  FString local_1e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d8;
  FString local_1c8;
  FReadAccessScope local_1b8;
  FArchiveState local_198;
  undefined8 local_108;
  void *pvStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [168];
  void *local_40 [3];
  ulonglong uVar10;
  
  FNetworkFileArchive::FNetworkFileArchive((FNetworkFileArchive *)local_e8,0x18);
  local_198._padding_ = 0;
  local_198.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_198.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_198.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_198.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_198._40_8_ = 0;
  local_198.ArSerializingDefaults = 0;
  local_198.ArPortFlags = 0;
  local_198.ArMaxSerializeSize = 0;
  local_198.ArUEVer.FileVersionUE4 = 0;
  local_198.ArUEVer.FileVersionUE5 = 0;
  local_198.ArLicenseeUEVer = 0;
  local_198.ArEngineVer.Major = 0;
  local_198.ArEngineVer.Minor = 0;
  local_198.ArEngineVer.Patch = 0;
  local_198.ArEngineVer._6_2_ = 0;
  local_198.ArEngineVer.Changelist = 0;
  local_198.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_198.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_198.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_198.SerializedProperty = (FProperty *)0x0;
  local_198.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_198.bCustomVersionsAreReset = false;
  local_198._129_7_ = 0;
  local_198.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_198);
  uVar8 = 0;
  local_108 = 0;
  pvStack_100 = (void *)0x0;
  local_198._padding_ = (longlong)&___7FArrayReader__6B_;
  local_f8 = 0;
  FArchiveState::SetIsLoading(&local_198,true);
  (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  cVar2 = (**(code **)(this->_padding_ + 0x260))(this,local_40);
  if (cVar2 == '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_1d8);
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0 = 0;
    uVar10 = uVar8;
    if (0 < local_1d8.ArrayNum) {
      do {
        uVar9 = (uint)uVar10;
        uVar4 = 0;
        if ((int)uVar9 < local_1d8.ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Data.ArrayNum = *(int *)(local_1d8.AllocatorInstance.Data + uVar8 + 8);
        lVar7 = (longlong)local_1e8.Data.ArrayNum;
        _Src = *(void **)(local_1d8.AllocatorInstance.Data + uVar8);
        if (local_1e8.Data.ArrayNum == 0) {
          local_1e8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1e8.Data.ArrayNum,0,(ForAnyElementType *)&local_1e8,
                     local_1e8.Data.ArrayNum,&local_1e8.Data.ArrayMax);
          memcpy(local_1e8.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
        }
        (**(code **)(this->_padding_ + 0x270))(this,&local_1e8);
        if (4 < (byte)LogNetworkPlatformFile._0_1_) {
          uVar4 = 0;
          if ((int)uVar9 < local_1d8.ArrayNum) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
        }
        local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = 0;
        local_1c8.Data.ArrayMax = 0;
        bVar3 = FPackageName::TryConvertFilenameToLongPackageName
                          (&local_1e8,&local_1c8,(FString *)0x0,None);
        if (bVar3) {
          if (((local_1f8.Data <= (FScriptContainerElement *)&local_1c8) &&
              ((FScriptContainerElement *)&local_1c8 <
               local_1f8.Data + (longlong)local_1f0._4_4_ * 0x10)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = (int)local_1f0;
          if ((int)local_1f0 == local_1f0._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1f8,(int *)((longlong)&local_1f0 + 4));
          }
          _Src_00.Data = local_1c8.Data.AllocatorInstance.Data;
          pFVar6 = local_1f8.Data + (longlong)iVar5 * 0x10;
          local_1f0 = CONCAT44(local_1f0._4_4_,iVar5 + 1);
          *(FScriptContainerElement **)pFVar6 = (FScriptContainerElement *)0x0;
          lVar7 = (longlong)local_1c8.Data.ArrayNum;
          *(int *)(pFVar6 + 8) = local_1c8.Data.ArrayNum;
          if (local_1c8.Data.ArrayNum == 0) {
            *(int *)(pFVar6 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_1c8.Data.ArrayNum,0,(ForAnyElementType *)pFVar6,
                       local_1c8.Data.ArrayNum,(int *)(pFVar6 + 0xc));
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar6,_Src_00.Data,lVar7 * 2);
          }
        }
        else if (4 < (byte)LogNetworkPlatformFile._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
        }
        (**(code **)(this->_padding_ + 0x250))(this,&local_1e8);
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        uVar8 = uVar8 + 0x10;
        uVar10 = (ulonglong)(uVar9 + 1);
      } while ((int)(uVar9 + 1) < local_1d8.ArrayNum);
      if (0 < (int)local_1f0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FCoreUObjectDelegates::NetworkFileRequestPackageReload,&local_1b8);
        if ((FCoreUObjectDelegates::NetworkFileRequestPackageReload._16_4_ != 0) &&
           (FCoreUObjectDelegates::NetworkFileRequestPackageReload._8_8_ != 0)) {
          (**(code **)(*(longlong *)FCoreUObjectDelegates::NetworkFileRequestPackageReload._8_8_ +
                      0x68))(FCoreUObjectDelegates::NetworkFileRequestPackageReload._8_8_,&local_1f8
                            );
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b8);
      }
    }
    DestructItems<FString,int>((FString *)local_1f8.Data,(int)local_1f0);
    if (local_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data);
    }
    DestructItems<FString,int>((FString *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
  }
  if (pvStack_100 != (void *)0x0) {
    FMemory::Free(pvStack_100);
  }
  FArchive::~FArchive((FArchive *)&local_198);
  if (local_40[0] != (void *)0x0) {
    FMemory::Free(local_40[0]);
  }
  FArchive::~FArchive((FArchive *)local_e8);
  return;
}

// ProcessServerCachedFilesResponse @ 148be5e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNetworkPlatformFile::ProcessServerCachedFilesResponse
          (FNetworkPlatformFile *this,FArrayReader *param_1,FPackageFileVersion *param_2,int param_3
          )

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  double dVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  undefined8 uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FNetworkPlatformFile *pFVar10;
  char cVar11;
  bool bVar12;
  ulonglong uVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar14;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong *plVar16;
  uint *puVar17;
  wchar_t *pwVar18;
  FString *pFVar19;
  FString *pFVar20;
  byte bVar21;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  longlong lVar24;
  FStaticBasicLogRecord *pFVar25;
  FScriptContainerElement *pFVar26;
  void *pvVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  longlong lVar32;
  FPackageFileVersion *pFVar33;
  uint uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ForElementType<unsigned_int> FVar38;
  undefined1 auStackY_458 [32];
  undefined1 local_418;
  undefined1 local_417 [7];
  FPackageFileVersion *local_410;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_408;
  int local_3f8 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_3f0;
  undefined8 local_3e0;
  FNetworkPlatformFile *local_3d8;
  FString local_3d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3c0;
  int local_3b0 [2];
  uint local_3a8;
  uint uStack_3a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3a0;
  undefined4 local_398;
  uint uStack_394;
  uint uStack_390;
  undefined4 uStack_38c;
  longlong *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_380;
  undefined8 local_360;
  TArray<FString,TSizedDefaultAllocator<32>_> local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  undefined4 local_328;
  int local_324;
  TPairInitializer<FString_&&,FDateTime_const_&> local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_310;
  longlong *local_2f0;
  int iStack_2e8;
  uint uStack_2e4;
  TBitArray<FDefaultBitArrayAllocator> *local_2e0;
  undefined4 uStack_2d8;
  uint uStack_2d4;
  int local_2d0;
  undefined4 uStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  longlong *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 uStack_298;
  FString *local_290;
  longlong local_288;
  FString local_280;
  FString local_270;
  FString local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_250;
  undefined4 local_214;
  undefined1 local_208 [32];
  uint *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  void *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [32];
  ForElementType<unsigned_int> local_198;
  uint local_190;
  int local_18c;
  int local_188;
  int local_184;
  FScriptContainerElement local_180 [8];
  ForAnyElementType local_178;
  uint local_170;
  undefined1 local_168 [32];
  undefined8 local_148;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  void *local_c8;
  undefined4 local_c0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_458;
  uVar23 = 0;
  local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c0.ArrayNum = 0;
  local_3c0.ArrayMax = 0;
  local_410 = param_2;
  local_3f8[0] = param_3;
  local_3d8 = this;
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&local_3c0);
  local_1b8._0_8_ = (FScriptContainerElement *)0x0;
  local_1b8._8_8_ = 0;
  local_198 = (ForElementType<unsigned_int>)0x0;
  local_190 = 0;
  local_18c = 0x80;
  local_188 = -1;
  local_184 = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_168._0_8_ = 0;
  local_168._8_8_ = 0;
  local_148 = 0;
  local_140 = 0;
  local_13c = 0x80;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (ForElementType<FSetElementId>)0x0;
  local_120 = 0;
  TSetPrivateFriend::
  Serialize<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
            ((FArchive *)param_1,
             (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
              *)local_168);
  uVar29 = local_168._8_4_ - local_134;
  local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)&DAT_00000001;
  uVar30 = 1;
  if ((uint)(local_1b8._8_4_ - local_184) < uVar29) {
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_1b8,uVar29);
    if (3 < uVar29) {
      uVar36 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_328 = (undefined4)lVar24;
      uVar30 = 1 << ((byte)lVar24 & 0x1f);
    }
    if ((local_170 == 0) || ((int)local_170 < (int)uVar30)) {
      local_170 = uVar30;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,4);
      }
      if (uVar30 != 0) {
        uVar29 = uVar30;
        if (uVar30 < 2) {
          if (local_178.Data != (FScriptContainerElement *)0x0) {
            uVar29 = 0;
            goto LAB_148be5fee;
          }
        }
        else {
LAB_148be5fee:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_178,0,uVar29,4);
        }
        if (0 < (int)uVar30) {
          uVar37 = (ulonglong)uVar30;
          uVar36 = uVar23;
          do {
            FVar22.Data = local_180;
            if (local_178.Data != (FScriptContainerElement *)0x0) {
              FVar22.Data = local_178.Data;
            }
            uVar13 = uVar36 & (longlong)(int)uVar30 - 1U;
            uVar36 = uVar36 + 1;
            *(undefined4 *)(FVar22.Data + uVar13 * 4) = 0xffffffff;
            uVar37 = uVar37 - 1;
          } while (uVar37 != 0);
        }
      }
      if (local_170 != 0) {
        pTStack_3a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
        local_3a8 = 0;
        uStack_3a4 = 1;
        uStack_394 = 0;
        uStack_390 = 0;
        if (local_190 != 0) {
          FVar38 = (ForElementType<unsigned_int>)((longlong)local_1b8 + 0x10);
          if (local_198 != (ForElementType<unsigned_int>)0x0) {
            FVar38 = local_198;
          }
          uVar29 = *(uint *)FVar38;
          uVar36 = uVar23;
          while (uVar29 == 0) {
            uStack_390 = (int)uVar36 + 0x20;
            uVar36 = (ulonglong)uStack_390;
            iVar31 = (int)uVar23;
            local_3a8 = iVar31 + 1;
            uVar23 = (ulonglong)local_3a8;
            if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_3a8) goto LAB_148be60f8;
            uVar29 = ((uint *)((longlong)FVar38 + 4))[iVar31];
          }
          uStack_3a4 = -uVar29 & uVar29;
          uVar23 = (ulonglong)uStack_3a4 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          local_324 = (int)lVar24;
          uStack_394 = local_324 + -1 + uStack_390;
          uVar23 = (ulonglong)uStack_394;
          if ((int)local_190 < (int)uStack_394) {
LAB_148be60f8:
            uVar23 = (ulonglong)local_190;
            uStack_394 = local_190;
          }
        }
        local_398 = 0xffffffff;
        local_320.Value = (FDateTime *)local_1b8;
        local_310._padding_ = CONCAT44(uStack_3a4,local_3a8);
        local_310.CurrentBitIndex = uStack_394;
        local_310.UnvisitedBitMask = 0xffffffff;
        local_310._28_4_ = uStack_38c;
        local_310.BaseBitIndex = uStack_390;
        local_310.Array = pTStack_3a0;
        if ((int)uVar23 < (int)local_190) {
          do {
            lVar24 = (local_320.Value)->Ticks;
            lVar32 = (longlong)(int)uVar23 * 0x20;
            iVar31 = *(int *)(lVar32 + 8 + lVar24);
            if (iVar31 == 0) {
              pwVar18 = L"";
              iVar31 = 0;
            }
            else {
              pwVar18 = *(wchar_t **)(lVar32 + lVar24);
              iVar31 = iVar31 + -1;
            }
            uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar31,pwVar18);
            uVar29 = local_170 - 1 & uVar29;
            *(uint *)(lVar32 + 0x1c + lVar24) = uVar29;
            FVar22.Data = local_180;
            if (local_178.Data != (FScriptContainerElement *)0x0) {
              FVar22.Data = local_178.Data;
            }
            uVar36 = (longlong)(int)local_170 - 1U & (longlong)(int)uVar29;
            *(undefined4 *)(lVar32 + 0x18 + lVar24) = *(undefined4 *)(FVar22.Data + uVar36 * 4);
            *(int *)(FVar22.Data + uVar36 * 4) = (int)uVar23;
            local_310.UnvisitedBitMask = local_310.UnvisitedBitMask & ~local_310._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_310);
            uVar23 = (ulonglong)(uint)local_310.CurrentBitIndex;
          } while (local_310.CurrentBitIndex < (local_310.Array)->NumBits);
        }
      }
    }
  }
  local_348.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
  local_348._padding_._0_4_ = 0;
  local_348._padding_._4_4_ = 1;
  local_348.UnvisitedBitMask = 0xffffffff;
  local_348.CurrentBitIndex = 0;
  local_348.BaseBitIndex = 0;
  if (local_140 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_348);
  }
  TStack_380._padding_ = CONCAT44(local_348._padding_._4_4_,(undefined4)local_348._padding_);
  local_388 = (longlong *)local_168;
  TStack_380.CurrentBitIndex = local_348.CurrentBitIndex;
  TStack_380.UnvisitedBitMask = local_348.UnvisitedBitMask;
  TStack_380._28_4_ = local_348._28_4_;
  TStack_380.BaseBitIndex = local_348.BaseBitIndex;
  TStack_380.Array = local_348.Array;
  local_360 = CONCAT44(local_360._4_4_,local_168._8_4_ - local_134);
  TStack_2b8.Array = local_348.Array;
  uStack_298 = local_360;
  local_2c0 = local_388;
  TStack_2b8._padding_ = TStack_380._padding_;
  TStack_2b8._16_8_ = TStack_380._16_8_;
  TStack_2b8._24_8_ = TStack_380._24_8_;
  pTVar14 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_250,(TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),
                       local_140);
  pFVar10 = local_3d8;
  TStack_380._padding_ = pTVar14->_padding_;
  pTVar4 = pTVar14->Array;
  uVar5._0_4_ = pTVar14->UnvisitedBitMask;
  uVar5._4_4_ = pTVar14->CurrentBitIndex;
  TStack_380.BaseBitIndex = pTVar14->BaseBitIndex;
  TStack_380._28_4_ = *(undefined4 *)&pTVar14->field_0x1c;
  TStack_380.Array = pTVar4;
  TStack_380._16_8_ = uVar5;
  while( true ) {
    plVar16 = local_2c0;
    if ((int)local_2c0[1] - *(int *)((longlong)local_2c0 + 0x34) != (int)uStack_298) {
      local_418 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_418);
    }
    if (((TStack_2b8.CurrentBitIndex == uVar5._4_4_) && (TStack_2b8.Array == pTVar4)) &&
       (plVar16 == (longlong *)local_168)) break;
    lVar24 = *plVar16;
    lVar35 = (longlong)TStack_2b8.CurrentBitIndex * 0x20;
    local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d0.Data.ArrayNum = *(int *)(lVar35 + 8 + lVar24);
    lVar32 = (longlong)local_3d0.Data.ArrayNum;
    pvVar27 = *(void **)(lVar35 + lVar24);
    if (local_3d0.Data.ArrayNum == 0) {
      local_3d0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3d0.Data.ArrayNum,0,(ForAnyElementType *)&local_3d0,
                 local_3d0.Data.ArrayNum,&local_3d0.Data.ArrayMax);
      memcpy(local_3d0.Data.AllocatorInstance.Data,pvVar27,lVar32 * 2);
    }
    (**(code **)(pFVar10->_padding_ + 0x270))(pFVar10,&local_3d0);
    ::FString::ToLowerInline(&local_3d0);
    local_290 = &local_3d0;
    local_288 = lVar24 + 0x10 + lVar35;
    TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FDateTime_const_&>_>
              ((TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                *)local_1b8,&local_320,(bool *)&local_290);
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
    TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
  }
  local_120 = 0;
  if (local_128 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_168);
  if (3 < (byte)LogNetworkPlatformFile._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
  }
  bVar6 = true;
  pTVar15 = &FPaths::GeneratedConfigDir(&local_280)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_408,pTVar15,0x13 - (uint)(pTVar15->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_408,L"CookedVersion.txt",0x11);
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  pFVar10 = local_3d8;
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_408.ArrayNum != 0) {
    FVar22.Data = local_408.AllocatorInstance.Data;
  }
  cVar11 = (**(code **)((longlong)*local_3d8->InnerPlatformFile + 0x78))
                     (local_3d8->InnerPlatformFile,FVar22.Data);
  if (cVar11 == '\x01') {
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_408.ArrayNum != 0) {
      FVar22.Data = local_408.AllocatorInstance.Data;
    }
    plVar16 = (longlong *)
              (**(code **)((longlong)*pFVar10->InnerPlatformFile + 0xe8))
                        (pFVar10->InnerPlatformFile,FVar22.Data,0);
    pFVar33 = local_410;
    FVar22.Data = local_3f0.AllocatorInstance.Data;
    if (plVar16 != (longlong *)0x0) {
      local_3e0 = 0;
      cVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,&local_3e0,8);
      if ((cVar11 == '\x01') &&
         (cVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,local_3b0,4),
         FVar22.Data = local_3f0.AllocatorInstance.Data, pFVar33 = local_410, cVar11 == '\x01')) {
        if ((local_410->FileVersionUE4 == (int)local_3e0) &&
           ((local_410->FileVersionUE5 == local_3e0._4_4_ && (local_3f8[0] == local_3b0[0])))) {
          bVar6 = false;
          (**(code **)*plVar16)(plVar16,(ulonglong)local_3f0.AllocatorInstance.Data & 0xffffffff);
        }
        else {
          if ((byte)LogNetworkPlatformFile._0_1_ < 4) goto LAB_148be657b;
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
          FVar22.Data = local_3f0.AllocatorInstance.Data;
          (**(code **)*plVar16)(plVar16,(ulonglong)local_3f0.AllocatorInstance.Data & 0xffffffff);
        }
      }
      else {
LAB_148be657b:
        FVar22.Data = local_3f0.AllocatorInstance.Data;
        pFVar33 = local_410;
        (**(code **)*plVar16)(plVar16,(ulonglong)local_3f0.AllocatorInstance.Data & 0xffffffff);
      }
    }
  }
  else {
    pFVar33 = local_410;
    FVar22.Data = local_3f0.AllocatorInstance.Data;
    if (3 < (byte)LogNetworkPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
      pFVar33 = local_410;
      FVar22.Data = local_3f0.AllocatorInstance.Data;
    }
  }
  uVar30 = (uint)FVar22.Data;
  local_208._0_8_ = (void *)0x0;
  local_208._8_8_ = 0;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_1dc = 0x80;
  local_1d8 = 0xffffffff;
  local_1d4 = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_358.ArrayNum = 0;
  local_358.ArrayMax = 0;
  local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f0.ArrayNum = 0;
  local_3f0.ArrayMax = 0;
  FLocalTimestampDirectoryVisitor::FLocalTimestampDirectoryVisitor
            ((FLocalTimestampDirectoryVisitor *)local_118,pFVar10->InnerPlatformFile,&local_358,
             &local_3f0,false,true);
  uVar29 = 0;
  while ((-1 < (int)uVar29 && ((int)uVar29 < local_3c0.ArrayNum))) {
    uVar34 = 0;
    if ((int)uVar29 < local_3c0.ArrayNum) {
      uVar34 = ~uVar29 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = pFVar10->InnerPlatformFile;
    if (*(int *)(local_3c0.AllocatorInstance.Data + (longlong)(int)uVar29 * 0x10 + 8) == 0) {
      (**(code **)((longlong)*pIVar1 + 0x140))(pIVar1,L"",local_118);
      uVar29 = uVar29 + 1;
    }
    else {
      (**(code **)((longlong)*pIVar1 + 0x140))
                (pIVar1,*(undefined8 *)
                         (local_3c0.AllocatorInstance.Data + (longlong)(int)uVar29 * 0x10),local_118
                );
      uVar29 = uVar29 + 1;
    }
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_208,0,local_208._8_4_);
  if ((void *)local_208._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_208._0_8_);
  }
  local_208._0_8_ = local_118._16_8_;
  local_208._8_4_ = local_118._24_4_;
  local_118._16_8_ = 0;
  local_118._24_8_ = 0;
  if (local_e8 == (uint *)0x0) {
    local_208._16_8_ = local_118._32_8_;
    local_208._24_8_ = local_118._40_8_;
  }
  puVar17 = local_e8;
  if (local_1e8 != (void *)0x0) {
    FMemory::Free(local_1e8);
    puVar17 = local_e8;
  }
  local_1e0 = (uint)local_e0;
  local_1dc = local_e0._4_4_;
  local_1d8 = local_d8;
  local_1d4 = local_d4;
  local_d4 = 0;
  local_e8 = (uint *)0x0;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  if (local_c8 == (void *)0x0) {
    local_1d0 = local_d0;
  }
  pvVar27 = local_c8;
  local_1e8 = puVar17;
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
    pvVar27 = local_c8;
  }
  local_1c0 = local_c0;
  local_c0 = 0;
  local_c8 = (void *)0x0;
  local_1c8 = pvVar27;
  FLocalTimestampDirectoryVisitor::~FLocalTimestampDirectoryVisitor
            ((FLocalTimestampDirectoryVisitor *)local_118);
  DestructItems<FString,int>((FString *)local_3f0.AllocatorInstance.Data,local_3f0.ArrayNum);
  if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_358.AllocatorInstance.Data,local_358.ArrayNum);
  if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.AllocatorInstance.Data);
  }
  if (3 < (byte)LogNetworkPlatformFile._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
  }
  pwVar18 = FCommandLine::Get();
  bVar12 = FParse::Param(pwVar18,L"DeleteLocalCache");
  if (bVar12) {
    bVar6 = true;
  }
  else if (!bVar6) goto LAB_148be69ac;
  if (3 < (byte)LogNetworkPlatformFile._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
  }
  pIVar1 = pFVar10->InnerPlatformFile;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x200);
  pFVar19 = FPaths::GeneratedConfigDir(&local_270);
  if ((pFVar19->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar1,pwVar18);
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  FVar28.Data = (FScriptContainerElement *)L"";
  if (local_408.ArrayNum != 0) {
    FVar28.Data = local_408.AllocatorInstance.Data;
  }
  plVar16 = (longlong *)
            (**(code **)((longlong)*local_3d8->InnerPlatformFile + 0x110))
                      (local_3d8->InnerPlatformFile,FVar28.Data,0,0);
  if (plVar16 == (longlong *)0x0) {
    if (2 < (byte)LogNetworkPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_write_151c80160,
                 (FLogCategoryBase *)&LogNetworkPlatformFile);
    }
  }
  else {
    (**(code **)(*plVar16 + 0x30))(plVar16,pFVar33,8);
    (**(code **)(*plVar16 + 0x30))(plVar16,local_3f8,4);
    (**(code **)*plVar16)(plVar16,(ulonglong)FVar22.Data & 0xffffffff);
  }
LAB_148be69ac:
  uVar29 = local_1e0;
  iStack_2e8 = 0;
  local_2d0 = 0;
  uStack_2d4 = 0;
  if (local_1e0 != 0) {
    puVar17 = (uint *)(local_208 + 0x10);
    if (local_1e8 != (uint *)0x0) {
      puVar17 = local_1e8;
    }
    uVar34 = *puVar17;
    local_2d0 = 0;
    while (uVar34 == 0) {
      lVar24 = (longlong)iStack_2e8;
      local_2d0 = local_2d0 + 0x20;
      iStack_2e8 = iStack_2e8 + 1;
      uStack_2d4 = local_1e0;
      if ((int)((local_1e0 - 1) + ((int)(local_1e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2e8)
      goto LAB_148be6a32;
      uVar34 = puVar17[lVar24 + 1];
    }
    uVar30 = -uVar34 & uVar34;
    uVar23 = (ulonglong)uVar30 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uStack_2d4 = local_2d0 + -1 + (int)lVar24;
    local_410 = (FPackageFileVersion *)CONCAT44(local_410._4_4_,(int)lVar24);
    if ((int)local_1e0 < (int)uStack_2d4) {
      uStack_2d4 = local_1e0;
    }
  }
LAB_148be6a32:
  local_388 = (longlong *)local_208;
  uStack_2cc = local_214;
  TStack_380.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10);
  uVar34 = local_1e0 & 0xffffffe0;
  iStack_2c8 = local_208._8_4_ - local_1d4;
  uStack_2d8 = 0xffffffff;
  TStack_380.CurrentBitIndex = uStack_2d4;
  TStack_380.UnvisitedBitMask = 0xffffffff;
  TStack_380._padding_ = CONCAT44(uVar30,iStack_2e8);
  iVar31 = (int)local_1e0 >> 5;
  TStack_380._28_4_ = local_214;
  TStack_380.BaseBitIndex = local_2d0;
  local_360 = CONCAT44(uStack_2c4,iStack_2c8);
  bVar21 = (byte)local_1e0;
  local_2f0 = local_388;
  uStack_2e4 = uVar30;
  local_2e0 = TStack_380.Array;
  if (((int)local_1e0 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  dVar9 = __real_bff0000000000000;
  dVar8 = __real_3ff0000000000000;
  dVar7 = __real_3e7ad7f29abcaf48;
  if (uVar29 != local_1e0) {
    puVar17 = (uint *)(local_208 + 0x10);
    if (local_1e8 != (uint *)0x0) {
      puVar17 = local_1e8;
    }
    uVar29 = -1 << (bVar21 & 0x1f) & puVar17[iVar31];
    while (uVar29 == 0) {
      lVar24 = (longlong)iVar31;
      uVar34 = uVar34 + 0x20;
      iVar31 = iVar31 + 1;
      uVar29 = local_1e0;
      if ((int)((local_1e0 - 1) + ((int)(local_1e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
      goto LAB_148be6b70;
      uVar29 = puVar17[lVar24 + 1];
    }
    uVar23 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar29 = (uVar34 - 1) + (int)lVar24;
    if ((int)local_1e0 < (int)uVar29) {
      uVar29 = local_1e0;
    }
  }
LAB_148be6b70:
  do {
    plVar16 = local_388;
    if ((int)local_388[1] - *(int *)((longlong)local_388 + 0x34) != (int)local_360) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_417);
    }
    if (((TStack_380.CurrentBitIndex == uVar29) &&
        (TStack_380.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10))) &&
       (plVar16 == (longlong *)local_208)) {
      if (3 < (byte)LogNetworkPlatformFile._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile)
        ;
      }
      local_1c0 = 0;
      if (local_1c8 != (void *)0x0) {
        FMemory::Free(local_1c8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_208);
      if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.AllocatorInstance.Data);
      }
      local_170 = 0;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1b8);
      DestructItems<FString,int>((FString *)local_3c0.AllocatorInstance.Data,local_3c0.ArrayNum);
      if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.AllocatorInstance.Data);
      }
      return;
    }
    pFVar19 = (FString *)((longlong)TStack_380.CurrentBitIndex * 0x20 + *plVar16);
    if (bVar6) {
      if (3 < (byte)LogNetworkPlatformFile._0_1_) {
        if ((pFVar19->Data).ArrayNum == 0) {
          pFVar25 = &::LOG_Static;
        }
        else {
          pFVar25 = &::LOG_Static;
        }
LAB_148be6d0e:
        UE::Logging::Private::BasicLog<4>(pFVar25,(FLogCategoryBase *)&LogNetworkPlatformFile);
      }
LAB_148be6d1a:
      pFVar20 = FPaths::GetExtension(&local_260,pFVar19,false);
      if ((pFVar20->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
      }
      iVar31 = FGenericPlatformStricmp::Stricmp(pwVar18,L"pak");
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      if (iVar31 != 0) {
        if ((pFVar19->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
        }
        (**(code **)((longlong)*local_3d8->InnerPlatformFile + 0x88))
                  (local_3d8->InnerPlatformFile,pwVar18);
      }
    }
    else {
      iVar31 = (pFVar19->Data).ArrayNum;
      if (iVar31 == 0) {
        pwVar18 = L"";
        iVar31 = 0;
      }
      else {
        pwVar18 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
        iVar31 = iVar31 + -1;
      }
      uVar30 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar31,pwVar18);
      iVar31 = TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                           *)local_1b8,uVar30,pFVar19);
      if (iVar31 == -1) {
LAB_148be6cec:
        if (3 < (byte)LogNetworkPlatformFile._0_1_) {
          pFVar25 = &::LOG_Static;
          goto LAB_148be6d0e;
        }
        goto LAB_148be6d1a;
      }
      pFVar26 = (FScriptContainerElement *)(local_1b8._0_8_ + (longlong)iVar31 * 0x20) + 0x10;
      if ((FScriptContainerElement *)(local_1b8._0_8_ + (longlong)iVar31 * 0x20) ==
          (FScriptContainerElement *)0x0) {
        pFVar26 = (FScriptContainerElement *)0x0;
      }
      if (pFVar26 == (FScriptContainerElement *)0x0) goto LAB_148be6cec;
      dVar3 = (double)(*(longlong *)pFVar26 - (longlong)pFVar19[1].Data.AllocatorInstance.Data) *
              dVar7;
      if ((dVar8 < dVar3) || (dVar3 < dVar9)) {
        if (3 < (byte)LogNetworkPlatformFile._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
        }
        goto LAB_148be6d1a;
      }
      if (3 < (byte)LogNetworkPlatformFile._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile)
        ;
      }
    }
    TStack_380.UnvisitedBitMask = TStack_380.UnvisitedBitMask & ~TStack_380._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_380);
  } while( true );
}

// ProcessServerInitialResponse @ 148be6e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPathConversion": Some values do not have unique names */

void __thiscall
FNetworkPlatformFile::ProcessServerInitialResponse
          (FNetworkPlatformFile *this,FArrayReader *param_1,FPackageFileVersion *param_2,
          int *param_3)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  int iVar3;
  FString *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStackY_188 [32];
  FString local_148;
  FString local_138;
  longlong *local_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *local_f8;
  undefined2 local_f0;
  FString local_e8;
  undefined1 local_d8 [32];
  longlong local_b8;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  ::operator<<((FArchive *)param_1,param_2);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)param_3);
    }
  }
  else {
    *param_3 = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<((FArchive *)param_1,&this->ServerEngineDir);
  ::operator<<((FArchive *)param_1,&this->ServerProjectDir);
  ::operator<<((FArchive *)param_1,&this->ServerEnginePlatformExtensionsDir);
  ::operator<<((FArchive *)param_1,&this->ServerProjectPlatformExtensionsDir);
  if ((3 < (byte)LogNetworkPlatformFile._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile),
     3 < (byte)LogNetworkPlatformFile._0_1_)) {
    FPaths::EngineDir(&local_138);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if ((3 < (byte)LogNetworkPlatformFile._0_1_) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile)
       , 3 < (byte)LogNetworkPlatformFile._0_1_)) {
      FPaths::ProjectDir(&local_138);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if ((3 < (byte)LogNetworkPlatformFile._0_1_) &&
         (UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile),
         3 < (byte)LogNetworkPlatformFile._0_1_)) {
        pFVar4 = FPaths::EngineDir(&local_e8);
        FPaths::ConvertPath(&local_138,pFVar4,Engine_PlatformExtension,L"",(wchar_t *)0x0);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        ::FString::TrimChar(&local_138,&local_148,L'/',(bool *)0x0);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile)
        ;
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if ((3 < (byte)LogNetworkPlatformFile._0_1_) &&
           (UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile),
           3 < (byte)LogNetworkPlatformFile._0_1_)) {
          pFVar4 = FPaths::ProjectDir(&local_e8);
          FPaths::ConvertPath(&local_138,pFVar4,Project_First,L"",(wchar_t *)0x0);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          ::FString::TrimChar(&local_138,&local_148,L'/',(bool *)0x0);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u______Local_Proj_151c80770,
                     (FLogCategoryBase *)&LogNetworkPlatformFile);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  TSetPrivateFriend::
  Serialize<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
            ((FArchive *)param_1,&local_a8);
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_d8,&local_a8);
  local_f8 = &local_a8;
  local_f0 = 0;
  stack0xfffffffffffffee8 = local_d8._16_16_;
  local_128 = (longlong *)local_d8._0_8_;
  auStack_120._0_8_ = local_d8._8_8_;
  local_108 = local_b8;
  pTStack_100 = pTStack_b0;
  uVar5 = local_d8._24_8_ >> 0x20;
  uVar8 = local_d8._28_4_;
  if ((int)uVar8 < *(int *)(local_d8._16_8_ + 0x18)) {
    do {
      plVar2 = local_128;
      lVar6 = (longlong)(int)uVar5 * 0x20;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = *(int *)(lVar6 + 8 + *local_128);
      lVar7 = (longlong)local_148.Data.ArrayNum;
      _Src = *(void **)(lVar6 + *local_128);
      if (local_148.Data.ArrayNum == 0) {
        local_148.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_148,
                   local_148.Data.ArrayNum,&local_148.Data.ArrayMax);
        memcpy(local_148.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
      }
      (**(code **)(this->_padding_ + 0x270))(this,&local_148);
      FServerTOC::AddFileOrDirectory
                (&this->ServerFiles,&local_148,
                 (FDateTime *)(*plVar2 + 0x10 + (longlong)(int)uVar8 * 0x20));
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      uStack_110 = uStack_110 & ~auStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      uVar5 = (ulonglong)uStack_10c;
      uVar8 = uStack_10c;
    } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
    if (((char)local_f0 != '\0') && (local_f0._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar3 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_f8->HashSize < iVar3)) || (iVar3 < local_f8->HashSize)) {
        local_f8->HashSize = iVar3;
        TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
        ::Rehash(local_f8);
      }
    }
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  return;
}

// ReceiveResponse @ 148be73f0

bool __thiscall
FNetworkPlatformFile::ReceiveResponse
          (FNetworkPlatformFile *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> *paVar1;
  int iVar2;
  FEvent *pFVar3;
  atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*> aVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  while( true ) {
    do {
      pFVar3 = (this->NewPayloadEvent).Event;
      (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,0xffffffff,0);
      aVar4 = *(atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>
                *)(this->PendingPayloads).Tail;
    } while (aVar4 == (atomic<TSpscQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FMemory>::FNode_*>
                       )0x0);
    pFVar9 = *(FScriptContainerElement **)((longlong)aVar4 + 8);
    *(undefined8 *)((longlong)aVar4 + 8) = 0;
    iVar10 = *(int *)((longlong)aVar4 + 0x14);
    iVar2 = *(int *)((longlong)aVar4 + 0x10);
    *(undefined8 *)((longlong)aVar4 + 0x10) = 0;
    if (iVar10 == -1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    if (*(void **)((longlong)aVar4 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)aVar4 + 8));
    }
    (this->PendingPayloads).Tail = aVar4;
    if (iVar10 != -1) break;
    local_28.ArrayMax = -1;
  }
  LOCK();
  paVar1 = &(this->PendingPayloads).NumElems;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (iVar10 == -1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  if (param_1 != &local_28) {
    pFVar5 = (param_1->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (param_1->AllocatorInstance).Data = pFVar9;
    param_1->ArrayMax = iVar10;
    iVar10 = 0;
    param_1->ArrayNum = iVar2;
    pFVar9 = (FScriptContainerElement *)0x0;
  }
  if ((iVar10 != -1) && (pFVar9 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar9);
  }
  return true;
}

// SendMessageToServer @ 148be7540

bool __thiscall
FNetworkPlatformFile::SendMessageToServer
          (FNetworkPlatformFile *this,wchar_t *param_1,IFileServerMessageHandler *param_2)

{
  ICookOnTheFlyServerConnection *pIVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  TFutureBase<UE::Cook::FCookOnTheFlyResponse> *this_00;
  FCookOnTheFlyResponse *pFVar7;
  size_t _Size;
  undefined8 *local_res8;
  undefined8 *local_res20;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  FCookOnTheFlyMessage local_68;
  FCookOnTheFlyMessage local_40;
  
  if (((this->Connection).Object == (ICookOnTheFlyServerConnection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  cVar5 = (**(code **)((longlong)*(this->Connection).Object + 0x30))();
  if ((cVar5 == '\0') ||
     (iVar6 = FGenericPlatformStricmp::Stricmp(param_1,L"RecompileShaders"), iVar6 != 0)) {
    bVar3 = false;
  }
  else {
    local_40.Header.MessageStatus = Ok;
    local_40.Header.CorrelationId = 0;
    local_40.Body.ArrayNum = 0;
    local_40.Body.ArrayMax = 0;
    local_40.Header.MessageType = RecompileShaders|Request;
    local_40.Header.Timestamp = 0;
    local_40.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Cook::FCookOnTheFlyMessage::WriteBody(&local_40);
    (**(code **)((longlong)*param_2 + 8))(param_2,local_res8);
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (((this->Connection).Object == (ICookOnTheFlyServerConnection *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->Connection).Object;
    this_00 = (TFutureBase<UE::Cook::FCookOnTheFlyResponse> *)
              (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,local_78,&local_40);
    pFVar7 = TFutureBase<UE::Cook::FCookOnTheFlyResponse>::Get(this_00);
    local_68.Header.MessageType = *(ECookOnTheFlyMessage *)&pFVar7->field_0x0;
    local_68.Header.MessageStatus = *(ECookOnTheFlyMessageStatus *)&pFVar7->field_0x4;
    local_68.Header.CorrelationId = *(uint *)&pFVar7->field_0x8;
    local_68.Header._12_4_ = *(undefined4 *)&pFVar7->field_0xc;
    local_68.Header.Timestamp = *(long64 *)&pFVar7->field_0x10;
    local_68.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Body.ArrayNum = *(int *)&pFVar7->field_0x20;
    _Size = (size_t)local_68.Body.ArrayNum;
    _Src = *(void **)&pFVar7->field_0x18;
    if (local_68.Body.ArrayNum == 0) {
      local_68.Body.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_68.Body.ArrayNum,0,&local_68.Body.AllocatorInstance,
                 local_68.Body.ArrayNum,&local_68.Body.ArrayMax);
      memcpy(local_68.Body.AllocatorInstance.Data,_Src,_Size);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    bVar3 = false;
    if (local_68.Header.MessageStatus == Ok) {
      UE::Cook::FCookOnTheFlyMessage::ReadBody(&local_68);
      (**(code **)((longlong)*param_2 + 0x10))(param_2,local_res20);
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
      bVar3 = local_68.Header.MessageStatus == Ok;
    }
    if (local_68.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Body.AllocatorInstance.Data);
    }
    if (local_40.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Body.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// SendPayloadAndReceiveResponse @ 148be7740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FNetworkPlatformFile::SendPayloadAndReceiveResponse
          (FNetworkPlatformFile *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScopedEvent *this_00;
  ICookOnTheFlyServerConnection *pIVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TFutureBase<UE::Cook::FCookOnTheFlyResponse> *this_01;
  FCookOnTheFlyResponse *pFVar6;
  longlong lVar7;
  size_t _Size;
  longlong *local_res8;
  longlong *local_res20;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  FCookOnTheFlyMessage local_78;
  FCookOnTheFlyMessage local_50;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = this->FinishedAsyncNetworkReadUnsolicitedFiles;
  if (this_00 != (FScopedEvent *)0x0) {
    FScopedEvent::~FScopedEvent(this_00);
    ::operator_delete(this_00,8);
    this->FinishedAsyncNetworkReadUnsolicitedFiles = (FScopedEvent *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_50.Header.MessageStatus = Ok;
  local_50.Header.CorrelationId = 0;
  local_50.Body.ArrayNum = 0;
  local_50.Body.ArrayMax = 0;
  local_50.Header.MessageType = NetworkPlatformFile|Request;
  local_50.Header.Timestamp = 0;
  local_50.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Cook::FCookOnTheFlyMessage::WriteBody(&local_50);
  (**(code **)(*local_res20 + 0x188))
            (local_res20,(param_1->AllocatorInstance).Data,(longlong)param_1->ArrayNum);
  if ((this->Connection).Object == (ICookOnTheFlyServerConnection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->Connection).Object;
  this_01 = (TFutureBase<UE::Cook::FCookOnTheFlyResponse> *)
            (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,local_88,&local_50);
  pFVar6 = TFutureBase<UE::Cook::FCookOnTheFlyResponse>::Get(this_01);
  local_78.Header.MessageType = *(ECookOnTheFlyMessage *)&pFVar6->field_0x0;
  local_78.Header.MessageStatus = *(ECookOnTheFlyMessageStatus *)&pFVar6->field_0x4;
  local_78.Header.CorrelationId = *(uint *)&pFVar6->field_0x8;
  local_78.Header._12_4_ = *(undefined4 *)&pFVar6->field_0xc;
  local_78.Header.Timestamp = *(long64 *)&pFVar6->field_0x10;
  local_78.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Body.ArrayNum = *(int *)&pFVar6->field_0x20;
  _Size = (size_t)local_78.Body.ArrayNum;
  _Src = *(void **)&pFVar6->field_0x18;
  if (local_78.Body.ArrayNum == 0) {
    local_78.Body.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_78.Body.ArrayNum,0,&local_78.Body.AllocatorInstance,local_78.Body.ArrayNum,
               &local_78.Body.ArrayMax);
    memcpy(local_78.Body.AllocatorInstance.Data,_Src,_Size);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  if (local_78.Header.MessageStatus == Ok) {
    UE::Cook::FCookOnTheFlyMessage::ReadBody(&local_78);
    lVar7 = (**(code **)(*local_res8 + 0x30))();
    if (lVar7 == (int)lVar7) {
      iVar5 = (**(code **)(*local_res8 + 0x30))();
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar5,Default);
      (**(code **)(*local_res8 + 0x188))
                (local_res8,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum);
      bVar3 = true;
    }
    else {
      if (2 < (byte)LogCookOnTheFly._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
      }
      bVar3 = false;
    }
    if (local_res8 != (longlong *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  else {
    if (2 < (byte)LogCookOnTheFly._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
    }
    bVar3 = false;
  }
  if (local_78.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Body.AllocatorInstance.Data);
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  if (local_50.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Body.AllocatorInstance.Data);
  }
  return bVar3;
}

// SendReadMessage @ 148be79b0

bool __thiscall
FNetworkPlatformFile::SendReadMessage(FNetworkPlatformFile *this,uchar *param_1,long64 param_2)

{
  return true;
}

// SendWriteMessage @ 148be79c0

bool __thiscall
FNetworkPlatformFile::SendWriteMessage(FNetworkPlatformFile *this,uchar *param_1,long64 param_2)

{
  return true;
}

// SetLowerLevel @ 148be79d0

void __thiscall
FNetworkPlatformFile::SetLowerLevel(FNetworkPlatformFile *this,IPlatformFile *param_1)

{
  this->InnerPlatformFile = param_1;
  return;
}

// SetReadOnly @ 148be79e0

bool __thiscall
FNetworkPlatformFile::SetReadOnly(FNetworkPlatformFile *this,wchar_t *param_1,bool param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148be79e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->InnerPlatformFile + 0xa8))();
  return (bool)uVar1;
}

// SetTimeStamp @ 148be7a00

void __thiscall
FNetworkPlatformFile::SetTimeStamp(FNetworkPlatformFile *this,wchar_t *param_1,FDateTime param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148be7a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerPlatformFile + 0xb8))();
  return;
}

// ShouldBeUsed @ 148be7a20

bool __thiscall
FNetworkPlatformFile::ShouldBeUsed
          (FNetworkPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  longlong lVar7;
  FName local_res20;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar3 = FParse::Value(param_2,L"-FileHostIP=",&local_18,true,(wchar_t **)0x0);
  if (!bVar3) {
    bVar3 = false;
    goto LAB_148be7aed;
  }
  pFVar5 = ::FName::FName(&local_res20,L"CookOnTheFly");
  FVar1 = *pFVar5;
  this_00 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,&local_28);
  if (local_28 == (longlong *)0x0) {
LAB_148be7ae1:
    bVar3 = true;
  }
  else {
    if ((local_28 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    lVar7 = (**(code **)(*local_28 + 0x10))();
    if (*(int *)(lVar7 + 8) < 2) goto LAB_148be7ae1;
    bVar3 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
LAB_148be7aed:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// Tick @ 148be7b10

void __thiscall FNetworkPlatformFile::Tick(FNetworkPlatformFile *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScopedEvent *this_00;
  bool bVar1;
  LARGE_INTEGER local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    QueryPerformanceCounter(&local_res8);
    StartTime = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000;
    _Init_thread_footer(&::_TSS0);
  }
  QueryPerformanceCounter(&local_res8);
  if (((double)this->HeartbeatFrequency <
       ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000) - StartTime) && (0.0 <= this->HeartbeatFrequency)) {
    bVar1 = (*IsAsyncLoading)();
    lpCriticalSection = &this->SynchronizationObject;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->FinishedAsyncNetworkReadUnsolicitedFiles == (FScopedEvent *)0x0) || (bVar1)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (bVar1) {
        return;
      }
    }
    else {
      bVar1 = FScopedEvent::IsReady(this->FinishedAsyncNetworkReadUnsolicitedFiles);
      if (!bVar1) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
      this_00 = this->FinishedAsyncNetworkReadUnsolicitedFiles;
      if (this_00 != (FScopedEvent *)0x0) {
        FScopedEvent::~FScopedEvent(this_00);
        ::operator_delete(this_00,8);
      }
      this->FinishedAsyncNetworkReadUnsolicitedFiles = (FScopedEvent *)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    QueryPerformanceCounter(&local_res8);
    StartTime = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000;
    (**(code **)(this->_padding_ + 0x280))(this);
  }
  return;
}

