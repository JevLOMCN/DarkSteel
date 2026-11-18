// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 99

// FPakPlatformFile @ 142a53590

FPakPlatformFile * __thiscall FPakPlatformFile::FPakPlatformFile(FPakPlatformFile *this)

{
  FEncryptionKeyManager *pFVar1;
  
  IPlatformFile::IPlatformFile((IPlatformFile *)this);
  this->_padding_ = (longlong)&___7FPakPlatformFile__6B_;
  (this->PakFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PakFiles).ArrayNum = 0;
  (this->PakFiles).ArrayMax = 0;
  (this->PendingEncryptedPakFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingEncryptedPakFiles).ArrayNum = 0;
  (this->PendingEncryptedPakFiles).ArrayMax = 0;
  this->LowerLevel = (IPlatformFile *)0x0;
  this->bSigned = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PakListCritical,4000);
  *(undefined8 *)&(this->ExcludedNonPakExtensions).Elements = 0;
  *(undefined8 *)&(this->ExcludedNonPakExtensions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExcludedNonPakExtensions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExcludedNonPakExtensions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExcludedNonPakExtensions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExcludedNonPakExtensions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExcludedNonPakExtensions).Elements.field_0x34 = 0;
  (this->ExcludedNonPakExtensions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExcludedNonPakExtensions).HashSize = 0;
  (this->IniFileExtension).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IniFileExtension).Data.ArrayNum = 0;
  (this->IniFileExtension).Data.ArrayMax = 0;
  (this->GameUserSettingsIniFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameUserSettingsIniFilename).Data.ArrayNum = 0;
  (this->GameUserSettingsIniFilename).Data.ArrayMax = 0;
  (this->IoDispatcherFileBackend).Object = (IFileIoDispatcherBackend *)0x0;
  (this->IoDispatcherFileBackend).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PackageStoreBackend).Object = (FFilePackageStoreBackend *)0x0;
  (this->PackageStoreBackend).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RetireReadersHandle).Object = (FElement *)0x0;
  (this->RetireReadersHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bLookLooseFirst = false;
  pFVar1 = UE::FEncryptionKeyManager::Get();
  TMulticastDelegateRegistration<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FPakPlatformFile>
            ((TMulticastDelegateRegistration<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar1->KeyAdded,(FPakPlatformFile *)&stack0x00000008,(pmf_5a5e8888)this);
  return this;
}

// ~FPakPlatformFile @ 142a56af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakPlatformFile::~FPakPlatformFile(FPakPlatformFile *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForElementType<FSetElementId> FVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  FEncryptionKeyManager *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  
  this->_padding_ = (longlong)&___7FPakPlatformFile__6B_;
  if (4 < (byte)LogPakFile._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  local_a8.Object = (this->RetireReadersHandle).Object;
  local_a8.WeakReferenceCount.ReferenceController =
       (this->RetireReadersHandle).WeakReferenceCount.ReferenceController;
  if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_a8);
  pFVar12 = UE::FEncryptionKeyManager::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar12->KeyAdded,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnFEngineLoopInitComplete,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnMountAllPakFiles,(FWriteAccessScope *)&local_98);
  uVar13 = 0;
  if ((FCoreDelegates::OnMountAllPakFiles._16_4_ != 0) &&
     (FCoreDelegates::OnMountAllPakFiles._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FCoreDelegates::OnMountAllPakFiles._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FCoreDelegates::OnMountAllPakFiles.field_0x8,0,0,0x10);
    FCoreDelegates::OnMountAllPakFiles._16_4_ = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FCoreDelegates::MountPak,
             (FWriteAccessScope *)&local_80);
  if ((FCoreDelegates::MountPak._16_4_ != 0) && (FCoreDelegates::MountPak._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FCoreDelegates::MountPak._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FCoreDelegates::MountPak.field_0x8,0,0,0x10);
    FCoreDelegates::MountPak._16_4_ = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FCoreDelegates::MountPaksEx,
             (FWriteAccessScope *)&local_68);
  if ((FCoreDelegates::MountPaksEx._16_4_ != 0) && (FCoreDelegates::MountPaksEx._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FCoreDelegates::MountPaksEx._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FCoreDelegates::MountPaksEx.field_0x8,0,0,0x10);
    FCoreDelegates::MountPaksEx._16_4_ = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FCoreDelegates::OnUnmountPak
             ,(FWriteAccessScope *)&local_50);
  if ((FCoreDelegates::OnUnmountPak._16_4_ != 0) && (FCoreDelegates::OnUnmountPak._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FCoreDelegates::OnUnmountPak._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FCoreDelegates::OnUnmountPak.field_0x8,0,0,0x10);
    FCoreDelegates::OnUnmountPak._16_4_ = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnOptimizeMemoryUsageForMountedPaks,(FWriteAccessScope *)&local_38);
  if ((FCoreDelegates::OnOptimizeMemoryUsageForMountedPaks._16_4_ != 0) &&
     (FCoreDelegates::OnOptimizeMemoryUsageForMountedPaks._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FCoreDelegates::OnOptimizeMemoryUsageForMountedPaks._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FCoreDelegates::OnOptimizeMemoryUsageForMountedPaks.field_0x8,0
               ,0,0x10);
    FCoreDelegates::OnOptimizeMemoryUsageForMountedPaks._16_4_ = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  FPakPrecacher::Shutdown();
  lpCriticalSection = &this->PakListCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar15 = uVar13;
  if (0 < (this->PakFiles).ArrayNum) {
    do {
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar14 < (this->PakFiles).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = (this->PakFiles).AllocatorInstance.Data;
      puVar6 = *(undefined8 **)(pFVar5 + uVar13 + 8);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar5 + uVar13 + 8) = 0;
        piVar1 = (int *)(puVar6 + 1);
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      uVar13 = uVar13 + 0x10;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < (this->PakFiles).ArrayNum);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pTVar7 = (this->RetireReadersHandle).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar7->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PackageStoreBackend).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->IoDispatcherFileBackend).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->GameUserSettingsIniFilename).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->IniFileExtension).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  (this->ExcludedNonPakExtensions).HashSize = 0;
  FVar8 = (this->ExcludedNonPakExtensions).Hash.SecondaryData;
  if (FVar8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExcludedNonPakExtensions).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DestructItems<FPakPlatformFile::FPakListDeferredEntry,int>
            ((FPakListDeferredEntry *)(this->PendingEncryptedPakFiles).AllocatorInstance.Data,
             (this->PendingEncryptedPakFiles).ArrayNum);
  pFVar5 = (this->PendingEncryptedPakFiles).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)(this->PakFiles).AllocatorInstance.Data,(this->PakFiles).ArrayNum);
  pFVar5 = (this->PakFiles).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  return;
}

// operator() @ 142a59060

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
`FPakPlatformFile::Initialize'::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  FPakListEntry *pFVar3;
  undefined1 local_res8 [8];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  if (GPakReaderReleaseDelay != 0.0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    FPakPlatformFile::GetMountedPaks(*(FPakPlatformFile **)this,&local_18);
    iVar1 = local_18.ArrayNum;
    pFVar3 = (FPakListEntry *)(local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x10)
    ;
    FVar2.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if (local_18.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if ((FPakListEntry *)FVar2.Data == pFVar3) break;
      FPakFile::ReleaseOldReaders
                ((((FPakListEntry *)FVar2.Data)->PakFile).Reference,(double)GPakReaderReleaseDelay);
      FVar2.Data = FVar2.Data + 0x10;
    }
    DestructItems<FPakPlatformFile::FPakListEntry,int>
              ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 142a59120

bool __thiscall
`FPakPlatformFile::IterateDirectoryInPakFiles'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  TStringView<wchar_t> *pTVar7;
  int iVar8;
  TStringView<wchar_t> local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  iVar8 = param_1->Size;
  pwVar1 = param_1->DataPtr;
  iVar6 = iVar8;
  if (1 < iVar8) {
    iVar6 = 1;
  }
  iVar4 = 0;
  if (0 < iVar6) {
    iVar4 = iVar6;
  }
  if (iVar4 == 1) {
    iVar6 = wcsncmp(L"/",pwVar1 + ((longlong)iVar8 - (longlong)iVar4),1);
    if (iVar6 == 0) {
      if (iVar8 + -1 < iVar8) {
        iVar8 = iVar8 + -1;
      }
      local_38.Size = 0;
      if (0 < iVar8) {
        local_38.Size = iVar8;
      }
      local_38.DataPtr._0_4_ = SUB84(pwVar1,0);
      local_38.DataPtr._4_4_ = (undefined4)((ulonglong)pwVar1 >> 0x20);
      goto LAB_142a591a9;
    }
  }
  local_38.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_38.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_38.Size = param_1->Size;
  uStack_1c = *(undefined4 *)&param_1->field_0xc;
LAB_142a591a9:
  plVar2 = *(longlong **)this;
  pcVar3 = *(code **)(*plVar2 + 8);
  local_38._12_4_ = uStack_1c;
  pTVar7 = FPathViews::GetCleanFilename(&local_18,&local_38);
  local_28 = *(undefined4 *)&pTVar7->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&pTVar7->DataPtr + 4);
  iStack_20 = pTVar7->Size;
  uStack_1c = *(undefined4 *)&pTVar7->field_0xc;
  uVar5 = (*pcVar3)(plVar2,&local_28);
  return (bool)uVar5;
}

// operator() @ 142a59930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPakPlatformFile::ForeachPackageInIostoreWhile'::__l12::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1,uint param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  FName *pFVar4;
  undefined1 auStack_278 [32];
  TStringView<wchar_t> local_258;
  TStringView<wchar_t> local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  FPathViews::GetExtension(&local_248,param_1,false);
  if (((local_248.Size == 4) &&
      (iVar3 = FGenericPlatformStricmp::Strnicmp(local_248.DataPtr,L"umap",4), iVar3 == 0)) ||
     ((local_248.Size == 6 &&
      (iVar3 = FGenericPlatformStricmp::Strnicmp(local_248.DataPtr,L"uasset",6), iVar3 == 0)))) {
    local_258.DataPtr = param_1->DataPtr;
    local_258.Size = param_1->Size;
    local_258._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_238.Base = local_218;
    local_238.bIsDynamic = false;
    local_238.bIsExternal = false;
    local_238.CurPos = local_218;
    local_238.End = (wchar_t *)local_18;
    bVar1 = FPackageName::TryConvertFilenameToLongPackageName
                      (&local_258,&local_238,(TStringBuilderBase<wchar_t> *)0x0,None);
    if (bVar1) {
      pFVar4 = ::FName::FName((FName *)&local_258,
                              (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1),
                              local_238.Base,FNAME_Add);
      local_258.DataPtr = *(wchar_t **)pFVar4;
      uVar2 = (**(code **)this)(*(undefined8 *)((longlong)this + 8),&local_258);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
    }
    else {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return (bool)uVar2;
}

// operator() @ 142a5aab0

/* WARNING: Enum "EVersion": Some values do not have unique names */

TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_> * __thiscall
`FPakPlatformFile::Initialize'::__l2::<lambda_4>::operator()
          (void *this,TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FPakFile *pFVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FPakListEntry *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_38;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  FPakPlatformFile::GetMountedPaks(*(FPakPlatformFile **)this,&local_38);
  uVar6 = local_38._8_8_ & 0xffffffff;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (-1 < local_38.ArrayNum) {
    if (0 < local_38.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_38.ArrayNum,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
      uVar6 = local_38._8_8_ & 0xffffffff;
    }
    iVar5 = (int)uVar6;
    pFVar7 = (FPakListEntry *)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10);
    FVar8.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      iVar4 = (int)uVar6;
      if ((int)uVar6 != iVar5) {
        `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        iVar4 = local_38.ArrayNum;
      }
      if ((FPakListEntry *)FVar8.Data == pFVar7) break;
      pFVar3 = (((FPakListEntry *)FVar8.Data)->PakFile).Reference;
      uStack_20 = ((FPakListEntry *)FVar8.Data)->ReadOrder;
      local_28 = &pFVar3->_padding_;
      if (pFVar3 == (FPakFile *)0x0) {
        local_28 = (longlong *)0x0;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      FVar8.Data = FVar8.Data + 0x10;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(longlong **)pFVar2 = local_28;
      *(longlong *)(pFVar2 + 8) = CONCAT44(uStack_1c,uStack_20);
      uVar6 = local_38._8_8_ & 0xffffffff;
    }
    DestructItems<FPakPlatformFile::FPakListEntry,int>
              ((FPakListEntry *)local_38.AllocatorInstance.Data,iVar4);
    if ((FPakListEntry *)local_38.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar6);
}

// AnyChunksAvailable @ 142a5fb00

bool __thiscall FPakPlatformFile::AnyChunksAvailable(FPakPlatformFile *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lpCriticalSection = &this->PakListCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->PakFiles).ArrayNum;
  pFVar6 = (this->PakFiles).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PakFiles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) {
      iVar1 = (this->PendingEncryptedPakFiles).ArrayNum;
      pFVar6 = (this->PendingEncryptedPakFiles).AllocatorInstance.Data;
      pFVar5 = pFVar6 + (longlong)iVar1 * 0x38;
      goto LAB_142a5fb97;
    }
    if (*(int *)(*(longlong *)(pFVar6 + 8) + 0x2f8) != -1) break;
    pFVar6 = pFVar6 + 0x10;
  }
LAB_142a5fbb8:
  bVar3 = true;
LAB_142a5fbc0:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar3;
LAB_142a5fb97:
  if ((this->PendingEncryptedPakFiles).ArrayNum != iVar1) {
    `TCheckedPointerIterator<FPakPlatformFile::FPakListDeferredEntry_const_,int,0>::operator!='::
    __l2::<lambda_1>::operator()(local_res10);
  }
  if (pFVar6 == pFVar5) {
    bVar3 = false;
    goto LAB_142a5fbc0;
  }
  if (*(int *)(pFVar6 + 0x34) != -1) goto LAB_142a5fbb8;
  pFVar6 = pFVar6 + 0x38;
  goto LAB_142a5fb97;
}

// BroadcastPakChunkSignatureCheckFailure @ 142a60280

void __cdecl
FPakPlatformFile::BroadcastPakChunkSignatureCheckFailure(FPakChunkSignatureCheckFailedData *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FPakSigningFailureHandlerData *lpCriticalSection;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  lpCriticalSection = GetPakSigningFailureHandlerData();
  if (lpCriticalSection == (FPakSigningFailureHandlerData *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &lpCriticalSection->ChunkSignatureCheckFailedDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(lpCriticalSection->ChunkSignatureCheckFailedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(lpCriticalSection->ChunkSignatureCheckFailedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(lpCriticalSection->ChunkSignatureCheckFailedDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(lpCriticalSection->ChunkSignatureCheckFailedDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(lpCriticalSection->ChunkSignatureCheckFailedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &lpCriticalSection->ChunkSignatureCheckFailedDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
                    /* WARNING: Could not recover jumptable at 0x000142a603ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// BroadcastPakMasterSignatureTableCheckFailure @ 142a603d0

void __cdecl FPakPlatformFile::BroadcastPakMasterSignatureTableCheckFailure(FString *param_1)

{
  FPakSigningFailureHandlerData *lpCriticalSection;
  
  lpCriticalSection = GetPakSigningFailureHandlerData();
  if (lpCriticalSection != (FPakSigningFailureHandlerData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (&lpCriticalSection->MasterSignatureTableCheckFailedDelegate,param_1);
                    /* WARNING: Could not recover jumptable at 0x000142a6040c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// BroadcastPakPrincipalSignatureTableCheckFailure @ 142a60420

void __cdecl FPakPlatformFile::BroadcastPakPrincipalSignatureTableCheckFailure(FString *param_1)

{
  FPakSigningFailureHandlerData *lpCriticalSection;
  
  lpCriticalSection = GetPakSigningFailureHandlerData();
  if (lpCriticalSection != (FPakSigningFailureHandlerData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (&lpCriticalSection->MasterSignatureTableCheckFailedDelegate,param_1);
                    /* WARNING: Could not recover jumptable at 0x000142a6045c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// BufferedCopyFile @ 142a60470

bool __thiscall
FPakPlatformFile::BufferedCopyFile
          (FPakPlatformFile *this,IFileHandle *param_1,IFileHandle *param_2,long64 param_3,
          uchar *param_4,long64 param_5)

{
  char cVar1;
  longlong lVar2;
  
  while( true ) {
    if (param_3 < 1) {
      return true;
    }
    lVar2 = param_3;
    if (param_5 < param_3) {
      lVar2 = param_5;
    }
    cVar1 = (**(code **)((longlong)*param_2 + 0x20))(param_2,param_4,lVar2);
    if ((cVar1 == '\0') ||
       (cVar1 = (**(code **)((longlong)*param_1 + 0x30))(param_1,param_4,lVar2), cVar1 == '\0'))
    break;
    param_3 = param_3 - lVar2;
  }
  return false;
}

// CheckIfPakFilesExist @ 142a62000

bool __cdecl
FPakPlatformFile::CheckIfPakFilesExist
          (IPlatformFile *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  ::FString::FString(&local_18,L"*.pak");
  FindAllPakFiles(param_1,param_2,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar1 = 0 < local_28.ArrayNum;
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar1;
}

// ConvertToAbsolutePathForExternalAppForRead @ 142a65080

/* WARNING: Enum "EVersion": Some values do not have unique names */

FString * __thiscall
FPakPlatformFile::ConvertToAbsolutePathForExternalAppForRead
          (FPakPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  int iVar1;
  bool bVar2;
  TRefCountPtr<FPakFile> TVar3;
  longlong *plVar4;
  int iVar5;
  TRefCountPtr<FPakFile> local_res20;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  local_res20.Reference = (FPakFile *)0x0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetMountedPaks(this,&local_38);
  bVar2 = FindFileInPakFiles(&local_38,param_1,&local_res20,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FPakListEntry *)local_38.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (bVar2) {
    ::FString::FString(&local_28,param_1);
    TVar3.Reference = local_res20.Reference;
    iVar1 = ((local_res20.Reference)->MountPoint).Data.ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::RightChop(&local_28,(FString *)&local_38,iVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"Pak: %s/%s");
    if ((FPakListEntry *)local_38.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    plVar4 = &(TVar3.Reference)->_padding_;
    LOCK();
    iVar1 = (int)*plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
  }
  else {
    (**(code **)((longlong)*this->LowerLevel + 0x218))
              (this->LowerLevel,__return_storage_ptr__,param_1);
    if (local_res20.Reference == (FPakFile *)0x0) {
      return __return_storage_ptr__;
    }
    plVar4 = &(local_res20.Reference)->_padding_;
    LOCK();
    iVar1 = (int)*plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    TVar3.Reference = local_res20.Reference;
  }
  if (iVar1 == 1) {
    if (plVar4 == (longlong *)0x0) {
      TVar3.Reference = (FPakFile *)0x0;
    }
    if (TVar3.Reference != (FPakFile *)0x0) {
      (**(code **)(TVar3.Reference)->_padding_)(TVar3.Reference,1);
    }
  }
  return __return_storage_ptr__;
}

// ConvertToAbsolutePathForExternalAppForWrite @ 142a65200

/* WARNING: Enum "EVersion": Some values do not have unique names */

FString * __thiscall
FPakPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
          (FPakPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  int iVar1;
  bool bVar2;
  TRefCountPtr<FPakFile> TVar3;
  longlong *plVar4;
  int iVar5;
  TRefCountPtr<FPakFile> local_res20;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  local_res20.Reference = (FPakFile *)0x0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetMountedPaks(this,&local_38);
  bVar2 = FindFileInPakFiles(&local_38,param_1,&local_res20,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FPakListEntry *)local_38.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (bVar2) {
    ::FString::FString(&local_28,param_1);
    TVar3.Reference = local_res20.Reference;
    iVar1 = ((local_res20.Reference)->MountPoint).Data.ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::RightChop(&local_28,(FString *)&local_38,iVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"Pak: %s/%s");
    if ((FPakListEntry *)local_38.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    plVar4 = &(TVar3.Reference)->_padding_;
    LOCK();
    iVar1 = (int)*plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
  }
  else {
    (**(code **)((longlong)*this->LowerLevel + 0x220))
              (this->LowerLevel,__return_storage_ptr__,param_1);
    if (local_res20.Reference == (FPakFile *)0x0) {
      return __return_storage_ptr__;
    }
    plVar4 = &(local_res20.Reference)->_padding_;
    LOCK();
    iVar1 = (int)*plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    TVar3.Reference = local_res20.Reference;
  }
  if (iVar1 == 1) {
    if (plVar4 == (longlong *)0x0) {
      TVar3.Reference = (FPakFile *)0x0;
    }
    if (TVar3.Reference != (FPakFile *)0x0) {
      (**(code **)(TVar3.Reference)->_padding_)(TVar3.Reference,1);
    }
  }
  return __return_storage_ptr__;
}

// CopyFile @ 142a65380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakPlatformFile::CopyFile
          (FPakPlatformFile *this,wchar_t *param_1,wchar_t *param_2,EPlatformFileRead param_3,
          EPlatformFileWrite param_4)

{
  IPlatformFile *pIVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong *plVar6;
  IFileHandle *pIVar7;
  void *pvVar8;
  ulonglong uVar9;
  TRefCountPtr<FPakFile> TVar10;
  undefined7 in_register_00000089;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  EPlatformFileWrite local_d8;
  TRefCountPtr<FPakFile> local_c0;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_b8;
  FPakEntry local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->bLookLooseFirst != false) &&
     (cVar3 = (**(code **)((longlong)*this->LowerLevel + 0x78))
                        (this->LowerLevel,param_2,param_2,CONCAT71(in_register_00000089,param_3)),
     cVar3 != '\0')) {
    local_d8 = param_4;
    uVar4 = (**(code **)((longlong)*this->LowerLevel + 0x208))
                      (this->LowerLevel,param_1,param_2,param_3);
    return (bool)uVar4;
  }
  local_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
  local_a8.Size = _UNK_15076adc8;
  local_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.CompressionBlocks.ArrayNum = 0;
  local_a8.CompressionBlocks.ArrayMax = 0;
  uVar4 = 0;
  local_a8.UncompressedSize = 0;
  local_a8.CompressionBlockSize = 0;
  local_a8.CompressionMethodIndex = 0;
  local_c0.Reference = (FPakFile *)0x0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_a8.Hash[0] = '\0';
  local_a8.Hash[1] = '\0';
  local_a8.Hash[2] = '\0';
  local_a8.Hash[3] = '\0';
  local_a8.Hash[4] = '\0';
  local_a8.Hash[5] = '\0';
  local_a8.Hash[6] = '\0';
  local_a8.Hash[7] = '\0';
  local_a8.Hash[8] = '\0';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash[0xc] = '\0';
  local_a8.Hash[0xd] = '\0';
  local_a8.Hash[0xe] = '\0';
  local_a8.Hash[0xf] = '\0';
  local_a8.Hash[0x10] = '\0';
  local_a8.Hash[0x11] = '\0';
  local_a8.Hash[0x12] = '\0';
  local_a8.Hash[0x13] = '\0';
  local_a8.Flags = '\0';
  local_a8.Verified = false;
  GetMountedPaks(this,&local_b8);
  bVar5 = FindFileInPakFiles(&local_b8,param_2,&local_c0,&local_a8);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FPakListEntry *)local_b8.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  pIVar1 = this->LowerLevel;
  if (!bVar5) {
    local_d8 = param_4;
    uVar4 = (**(code **)((longlong)*pIVar1 + 0x208))(pIVar1,param_1,param_2,param_3);
    goto LAB_142a65595;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,param_1,0,param_4 & AllowRead);
  pIVar7 = CreatePakFileHandle(this,param_2,&local_c0,&local_a8);
  if (plVar6 == (longlong *)0x0) {
    if (pIVar7 == (IFileHandle *)0x0) goto LAB_142a65595;
LAB_142a6555b:
    (**(code **)*pIVar7)(pIVar7,1);
    if (plVar6 == (longlong *)0x0) goto LAB_142a65595;
  }
  else if (pIVar7 != (IFileHandle *)0x0) {
    pvVar8 = FMemory::Malloc(0x10000,0);
    for (uVar9 = (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7); 0 < (longlong)uVar9;
        uVar9 = uVar9 - uVar11) {
      uVar11 = uVar9;
      if (0x10000 < uVar9) {
        uVar11 = 0x10000;
      }
      cVar3 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,pvVar8,uVar11);
      if ((cVar3 == '\0') ||
         (cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,pvVar8,uVar11), cVar3 == '\0')) {
        uVar4 = 0;
        FMemory::Free(pvVar8);
        goto LAB_142a6555b;
      }
    }
    uVar4 = 1;
    FMemory::Free(pvVar8);
    goto LAB_142a6555b;
  }
  (**(code **)*plVar6)(plVar6,1);
LAB_142a65595:
  if (local_c0.Reference != (FPakFile *)0x0) {
    plVar6 = &(local_c0.Reference)->_padding_;
    LOCK();
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      TVar10.Reference = local_c0.Reference;
      if (plVar6 == (longlong *)0x0) {
        TVar10.Reference = (FPakFile *)0x0;
      }
      if (TVar10.Reference != (FPakFile *)0x0) {
        (**(code **)(TVar10.Reference)->_padding_)(TVar10.Reference,1);
      }
    }
  }
  if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// CreateDirectory @ 142a666b0

bool __thiscall FPakPlatformFile::CreateDirectory(FPakPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142a666b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x120))();
  return (bool)uVar1;
}

// CreateDirectoryTree @ 142a666d0

bool __thiscall FPakPlatformFile::CreateDirectoryTree(FPakPlatformFile *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142a666d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x200))();
  return (bool)uVar1;
}

// CreatePakFileHandle @ 142a669d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

IFileHandle * __thiscall
FPakPlatformFile::CreatePakFileHandle
          (FPakPlatformFile *this,wchar_t *param_1,TRefCountPtr<FPakFile> *param_2,
          FPakEntry *param_3)

{
  FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this_00;
  FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this_01;
  FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this_02;
  FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this_03;
  undefined ***pppuVar1;
  FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *pFVar2;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FPakFile *local_30;
  IPlatformFile *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_30 = param_2->Reference;
  if (local_30 != (FPakFile *)0x0) {
    LOCK();
    *(int *)&local_30->_padding_ = (int)local_30->_padding_ + 1;
    UNLOCK();
  }
  local_28 = this->LowerLevel;
  pFVar2 = (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPakPlatformFile::CreatePakFileHandle'::__l2::<lambda_1>,FSharedPakReader>
                ::Call;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::`2'::<lambda_1>,0,0>::
              _vftable_;
  if ((param_3->CompressionMethodIndex == 0) || ((param_2->Reference->Info).Version < 3)) {
    if ((param_3->Flags & 1) == 0) {
      this_03 = ::operator_new(0xc0);
      if (this_03 != (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *)0x0) {
        pFVar2 = (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *)
                 FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::
                 FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>
                           (this_03,(TRefCountPtr<FPakFile_const_> *)param_2,param_3,
                            (TFunction<FSharedPakReader___cdecl(void)> *)local_48);
      }
    }
    else {
      this_02 = ::operator_new(0xc0);
      if (this_02 != (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *)0x0) {
        pFVar2 = FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::
                 FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>
                           (this_02,(TRefCountPtr<FPakFile_const_> *)param_2,param_3,
                            (TFunction<FSharedPakReader___cdecl(void)> *)local_48);
      }
    }
  }
  else {
    pFVar2 = (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *)0x0;
    if ((param_3->Flags & 1) == 0) {
      this_01 = ::operator_new(0xb0);
      if (this_01 != (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *)0x0) {
        pFVar2 = (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *)
                 FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::
                 FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>
                           (this_01,(TRefCountPtr<FPakFile_const_> *)param_2,param_3,
                            (TFunction<FSharedPakReader___cdecl(void)> *)local_48);
      }
    }
    else {
      this_00 = ::operator_new(0xb0);
      if (this_00 != (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *)0x0) {
        pFVar2 = (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *)
                 FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::
                 FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>
                           (this_00,(TRefCountPtr<FPakFile_const_> *)param_2,param_3,
                            (TFunction<FSharedPakReader___cdecl(void)> *)local_48);
      }
    }
  }
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return (IFileHandle *)pFVar2;
}

// DeleteDirectory @ 142a67780

bool __thiscall FPakPlatformFile::DeleteDirectory(FPakPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = DirectoryExistsInPrunedPakFiles(this,param_1);
  if (bVar1) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a677ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((longlong)*this->LowerLevel + 0x128))(this->LowerLevel,param_1);
  return (bool)uVar2;
}

// DeleteDirectoryRecursively @ 142a677d0

bool __thiscall
FPakPlatformFile::DeleteDirectoryRecursively(FPakPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = DirectoryExistsInPrunedPakFiles(this,param_1);
  if (bVar1) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a6780a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((longlong)*this->LowerLevel + 0x1f8))(this->LowerLevel,param_1);
  return (bool)uVar2;
}

// DeleteFile @ 142a67820

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakPlatformFile::DeleteFile(FPakPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  bVar1 = FindFileInPakFiles(&local_18,param_1,(TRefCountPtr<FPakFile> *)0x0,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (bVar1) {
    return false;
  }
  uVar2 = 0;
  ::FString::FString((FString *)&local_18,param_1);
  bVar1 = IsNonPakFilenameAllowed(this,(FString *)&local_18);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (bVar1) {
    uVar2 = (**(code **)((longlong)*this->LowerLevel + 0x88))(this->LowerLevel,param_1);
  }
  return (bool)uVar2;
}

// DirectoryExists @ 142a67e80

bool __thiscall FPakPlatformFile::DirectoryExists(FPakPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = DirectoryExistsInPrunedPakFiles(this,param_1);
  if (bVar1) {
    return true;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a67eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((longlong)*this->LowerLevel + 0x118))(this->LowerLevel,param_1);
  return (bool)uVar2;
}

// DirectoryExistsInPrunedPakFiles @ 142a67ed0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakPlatformFile::DirectoryExistsInPrunedPakFiles(FPakPlatformFile *this,wchar_t *param_1)

{
  FPakFile *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  FString local_58;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_28,param_1);
  FPaths::MakeStandardFilename(&local_28);
  uVar13 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  GetMountedPaks(this,&local_48);
  uVar15 = 0;
  uVar14 = uVar13;
  if (0 < local_48.ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar6 = uVar15;
      if ((int)uVar12 < local_48.ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar9.Data = local_28.Data.AllocatorInstance.Data;
      }
      this_00 = *(FPakFile **)(local_48.AllocatorInstance.Data + uVar14 + 8);
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      ::FString::operator=(&local_58,(wchar_t *)FVar9.Data);
      uVar6 = local_58.Data.ArrayNum - 1U;
      if (local_58.Data.ArrayNum == 0) {
        uVar6 = uVar15;
      }
      iVar8 = 0;
      if (0 < (int)uVar6) {
        iVar11 = local_58.Data.ArrayNum + -2;
        if (local_58.Data.ArrayNum == 0) {
          iVar11 = -1;
        }
        if ((((iVar11 < 0) || (local_58.Data.ArrayNum == 0)) ||
            ((int)(local_58.Data.ArrayNum - 1U) <= iVar11)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        if (*(short *)(local_58.Data.AllocatorInstance.Data + (longlong)iVar11 * 2) != 0x2f) {
          ::FString::AppendChars(&local_58,L"/",1);
        }
      }
      iVar11 = (this_00->MountPoint).Data.ArrayNum;
      if (iVar11 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(this_00->MountPoint).Data.AllocatorInstance.Data;
        iVar8 = iVar11 + -1;
      }
      bVar4 = ::FString::StartsWith(&local_58,pwVar10,iVar8,IgnoreCase);
      if (bVar4) {
        iVar8 = (this_00->MountPoint).Data.ArrayNum;
        uVar6 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar6 = uVar15;
        }
        ::FString::RightChop(&local_58,&local_38,uVar6);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        uVar2 = local_38.Data._8_8_;
        iVar8 = local_38.Data.ArrayNum;
        local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        uVar3 = local_38.Data._8_8_;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = (int)uVar2;
        local_38.Data.ArrayMax = SUB84(uVar2,4);
        local_58.Data.ArrayNum = local_38.Data.ArrayNum;
        local_58.Data.ArrayMax = local_38.Data.ArrayMax;
        local_38.Data._8_8_ = uVar3;
        if (iVar8 < 2) {
          ::FString::operator=(&local_58,L"/");
        }
        if (this_00->bWillPruneDirectoryIndex == false) {
          pTVar7 = FPakFile::FindPrunedDirectoryInternal(this_00,&local_58);
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->DirectoryIndexLock);
          pTVar7 = FPakFile::FindPrunedDirectoryInternal(this_00,&local_58);
          ReleaseSRWLockShared((PSRWLOCK)&this_00->DirectoryIndexLock);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (pTVar7 != (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                       *)0x0) {
          bVar4 = true;
          iVar8 = local_48.ArrayNum;
          goto LAB_142a6813a;
        }
      }
      else if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar12 + 1) < local_48.ArrayNum);
  }
  bVar4 = false;
  iVar8 = local_48.ArrayNum;
LAB_142a6813a:
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_48.AllocatorInstance.Data,iVar8);
  if ((FPakListEntry *)local_48.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// FileExists @ 142a6d030

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakPlatformFile::FileExists(FPakPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  bVar1 = FindFileInPakFiles(&local_18,param_1,(TRefCountPtr<FPakFile> *)0x0,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (bVar1) {
    return true;
  }
  uVar2 = 0;
  ::FString::FString((FString *)&local_18,param_1);
  bVar1 = IsNonPakFilenameAllowed(this,(FString *)&local_18);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (bVar1) {
    uVar2 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,param_1);
  }
  return (bool)uVar2;
}

// FileSize @ 142a6d110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall FPakPlatformFile::FileSize(FPakPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  long64 lVar2;
  undefined1 auStack_b8 [48];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_88;
  FPakEntry local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CompressionBlocks.ArrayNum = 0;
  local_78.CompressionBlocks.ArrayMax = 0;
  local_78.Offset = ___xmm_0000000000000000ffffffffffffffff;
  local_78.Size = _UNK_15076adc8;
  local_78.UncompressedSize = 0;
  local_78.Hash[0] = '\0';
  local_78.Hash[1] = '\0';
  local_78.Hash[2] = '\0';
  local_78.Hash[3] = '\0';
  local_78.Hash[4] = '\0';
  local_78.Hash[5] = '\0';
  local_78.Hash[6] = '\0';
  local_78.Hash[7] = '\0';
  local_78.Hash[8] = '\0';
  local_78.Hash[9] = '\0';
  local_78.Hash[10] = '\0';
  local_78.Hash[0xb] = '\0';
  local_78.Hash[0xc] = '\0';
  local_78.Hash[0xd] = '\0';
  local_78.Hash[0xe] = '\0';
  local_78.Hash[0xf] = '\0';
  local_78.Hash[0x10] = '\0';
  local_78.Hash[0x11] = '\0';
  local_78.Hash[0x12] = '\0';
  local_78.Hash[0x13] = '\0';
  local_78.CompressionBlockSize = 0;
  local_78.CompressionMethodIndex = 0;
  local_78.Flags = '\0';
  local_78.Verified = false;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  GetMountedPaks(this,&local_88);
  bVar1 = FindFileInPakFiles(&local_88,param_1,(TRefCountPtr<FPakFile> *)0x0,&local_78);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FPakListEntry *)local_88.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (bVar1) {
    lVar2 = local_78.Size;
    if (local_78.CompressionMethodIndex != 0) {
      lVar2 = local_78.UncompressedSize;
    }
  }
  else {
    ::FString::FString((FString *)&local_88,param_1);
    bVar1 = IsNonPakFilenameAllowed(this,(FString *)&local_88);
    if ((FPakListEntry *)local_88.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    lVar2 = -1;
    if (bVar1) {
      lVar2 = (**(code **)((longlong)*this->LowerLevel + 0x80))(this->LowerLevel,param_1);
    }
  }
  if (local_78.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CompressionBlocks.AllocatorInstance.Data);
  }
  return lVar2;
}

// FindAllPakFiles @ 142a6e1e0

void __cdecl
FPakPlatformFile::FindAllPakFiles
          (IPlatformFile *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  FDestructionSentinel local_78;
  undefined **local_60;
  undefined1 local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_50;
  FString *local_48;
  FString local_40;
  undefined1 local_30;
  undefined1 local_2f;
  
  iVar13 = param_2->ArrayNum;
  uVar9 = 0;
  uVar11 = uVar9;
  if (0 < iVar13) {
    do {
      uVar7 = (uint)uVar9;
      uVar8 = 0;
      if ((int)uVar7 < iVar13) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + uVar11 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(pFVar1 + uVar11);
      }
      local_58 = 0;
      local_60 = &`FPakPlatformFile::FindPakFilesInDirectory'::`2'::FPakSearchVisitor::_vftable_;
      local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.Data.ArrayNum = 0;
      local_40.Data.ArrayMax = 0;
      local_50 = param_4;
      local_48 = param_3;
      pwVar6 = FCommandLine::Get();
      local_30 = FParse::Param(pwVar6,L"SkipOptionalPakFiles");
      pwVar6 = FCommandLine::Get();
      local_2f = FParse::Param(pwVar6,L"SkipOnDemandPakFiles");
      pwVar6 = FCommandLine::Get();
      FParse::Value(pwVar6,L"-SkipStartupPaksWildCard=",&local_40,true,(wchar_t **)0x0);
      (**(code **)((longlong)*param_1 + 0x1d0))(param_1,pwVar10,&local_60);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      iVar13 = param_2->ArrayNum;
      uVar9 = (ulonglong)(uVar7 + 1);
      local_60 = &___7FDirectoryVisitor_IPlatformFile__6B_;
      uVar11 = uVar11 + 0x10;
    } while ((int)(uVar7 + 1) < iVar13);
  }
  if (param_4->ArrayNum == 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::NoPakFilesMountedDelegate,(FWriteAccessScope *)&local_78);
    bVar3 = false;
    FCoreDelegates::NoPakFilesMountedDelegate._28_4_ =
         FCoreDelegates::NoPakFilesMountedDelegate._28_4_ + 1;
    uVar8 = FCoreDelegates::NoPakFilesMountedDelegate._16_4_ - 1;
    if (-1 < (int)uVar8) {
      lVar12 = (longlong)(int)uVar8 << 4;
      bVar3 = false;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (int)FCoreDelegates::NoPakFilesMountedDelegate._16_4_) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar12 + 8 + FCoreDelegates::NoPakFilesMountedDelegate._8_8_) == 0) ||
            (*(longlong **)(lVar12 + FCoreDelegates::NoPakFilesMountedDelegate._8_8_) ==
             (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)
                                   (lVar12 + FCoreDelegates::NoPakFilesMountedDelegate._8_8_) + 0x68
                                ))(), cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    FCoreDelegates::NoPakFilesMountedDelegate._28_4_ =
         FCoreDelegates::NoPakFilesMountedDelegate._28_4_ + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::NoPakFilesMountedDelegate,false);
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
  }
  return;
}

// FindFileInPakFiles @ 142a6e630

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakPlatformFile::FindFileInPakFiles
          (FPakPlatformFile *this,wchar_t *param_1,TRefCountPtr<FPakFile> *param_2,
          FPakEntry *param_3)

{
  bool bVar1;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  bVar1 = FindFileInPakFiles(&local_18,param_1,param_2,param_3);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// FindFileInPakFiles @ 142a6e6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPakPlatformFile::FindFileInPakFiles
          (TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,TRefCountPtr<FPakFile> *param_3,FPakEntry *param_4)

{
  longlong *plVar1;
  ForElementType<FPakPlatformFile::FPakListEntry_const_*> FVar2;
  FPakFile *this;
  FPakFile *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  EFindResult EVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FPakPlatformFile::FPakListEntry_const_*> FVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  FScriptContainerElement **local_d8;
  ForElementType<FPakPlatformFile::FPakListEntry_const_*> local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  char local_a8;
  undefined1 local_a7 [7];
  wchar_t *local_a0;
  FScriptContainerElement *local_98;
  FPakEntry *local_90;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> *local_88;
  TRefCountPtr<FPakFile> *local_80;
  FString local_78;
  ForElementType<FPakPlatformFile::FPakListEntry_const_*> local_68;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a0 = param_2;
  local_90 = param_4;
  local_88 = param_1;
  local_80 = param_3;
  ::FString::FString(&local_78,param_2);
  FPaths::MakeStandardFilename(&local_78);
  iVar10 = param_1->ArrayNum;
  uVar13 = 0;
  local_68.SecondaryData = (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)0x0;
  local_58 = 0;
  local_54 = 1;
  local_a8 = '\0';
  if (0 < iVar10) {
    lVar14 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_d0 = (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)(longlong)iVar10;
        local_d8 = (FScriptContainerElement **)(longlong)(int)uVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      iVar10 = local_58;
      pFVar12 = (param_1->AllocatorInstance).Data + lVar14;
      this = *(FPakFile **)(pFVar12 + 8);
      if (this != (FPakFile *)0x0) {
        if (local_58 < 1) {
LAB_142a6e813:
          EVar8 = FPakFile::Find(this,&local_78,local_90);
          if (EVar8 == Found) {
            if ((local_80 != (TRefCountPtr<FPakFile> *)0x0) &&
               (pFVar3 = local_80->Reference, pFVar3 != this)) {
              local_80->Reference = this;
              LOCK();
              *(int *)&this->_padding_ = (int)this->_padding_ + 1;
              UNLOCK();
              if (pFVar3 != (FPakFile *)0x0) {
                plVar1 = &pFVar3->_padding_;
                LOCK();
                lVar14 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if (((int)lVar14 == 1) && (plVar1 != (longlong *)0x0)) {
                  (**(code **)pFVar3->_padding_)(pFVar3,1);
                }
              }
            }
            if ((5 < (byte)LogPakFile._0_1_) && (local_58 != 0)) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            }
            bVar6 = true;
            goto LAB_142a6ea1d;
          }
          if (EVar8 == FoundDeleted) {
            FVar11 = (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)&local_68;
            if (local_68.SecondaryData !=
                (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)0x0) {
              FVar11 = local_68.SecondaryData;
            }
            local_98 = pFVar12;
            if ((ulonglong)FVar11 <= &local_98) {
              FVar11 = (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)&local_68;
              if (local_68.SecondaryData !=
                  (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)0x0) {
                FVar11 = local_68.SecondaryData;
              }
              if (&local_98 <
                  (FScriptContainerElement **)((longlong)FVar11 + (longlong)local_54 * 8)) {
                local_c0 = (longlong)local_58;
                local_b8 = 8;
                local_d8 = &local_98;
                local_d0 = (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)&local_68;
                if (local_68.SecondaryData !=
                    (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)0x0) {
                  local_d0 = local_68.SecondaryData;
                }
                local_c8 = (longlong)local_54;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
              }
            }
            iVar10 = local_58;
            if (local_58 == local_54) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPakPlatformFile::FPakListEntry_const_*>_>
                                 (0x808,&local_68,&local_54);
            }
            local_58 = iVar10 + 1;
            FVar11 = (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)&local_68;
            if (local_68.SecondaryData !=
                (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)0x0) {
              FVar11 = local_68.SecondaryData;
            }
            *(FScriptContainerElement **)((longlong)FVar11 + (longlong)iVar10 * 8) = local_98;
            if (5 < (byte)LogPakFile._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            }
          }
        }
        else {
          FVar11 = (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)&local_68;
          if (local_68.SecondaryData != (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)0x0
             ) {
            FVar11 = local_68.SecondaryData;
          }
          FVar2 = (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)
                  ((longlong)FVar11 + (longlong)local_58 * 8);
          while( true ) {
            if (local_58 != iVar10) {
              local_a7[0] = 0;
              `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry_const_*_const,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_a7);
            }
            if (FVar11 == FVar2) goto LAB_142a6e813;
            if ((*(uint *)pFVar12 < **(uint **)FVar11) &&
               (*(int *)(*(longlong *)(*(uint **)FVar11 + 2) + 0x2f8) ==
                *(int *)(*(longlong *)(pFVar12 + 8) + 0x2f8))) break;
            FVar11 = (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)((longlong)FVar11 + 8)
            ;
          }
          local_a8 = '\x01';
        }
      }
      cVar5 = local_a8;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x10;
      iVar10 = local_88->ArrayNum;
      param_1 = local_88;
    } while ((int)uVar13 < iVar10);
    if (local_58 != 0) {
      if ((5 < (byte)LogPakFile._0_1_) && (local_a8 != '\0')) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      if ((2 < (byte)LogPakFile._0_1_) && (cVar5 == '\0')) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
    }
  }
  bVar6 = false;
LAB_142a6ea1d:
  if (local_68.SecondaryData != (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)0x0) {
    FMemory::Free((void *)local_68.SecondaryData);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// FindFiles @ 142a6ea90

void __thiscall
FPakPlatformFile::FindFiles
          (FPakPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x118))(this->LowerLevel,param_2);
  if (cVar1 != '\0') {
    (**(code **)((longlong)*this->LowerLevel + 0x1e8))(this->LowerLevel,param_1,param_2,param_3);
  }
  FindFilesInternal(this,param_1,param_2,param_3,false);
  return;
}

// FindFilesInternal @ 142a6eb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::FindFilesInternal
          (FPakPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3,bool param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  size_t sVar8;
  ulonglong uVar9;
  int iVar10;
  wchar_t *pwVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  int iVar20;
  undefined1 auStackY_1b8 [32];
  undefined1 local_167 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_160;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_150;
  uint local_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_138;
  undefined4 local_130;
  uint uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
  local_108;
  FString local_f8;
  undefined4 local_e8;
  int local_e4;
  undefined1 local_e0 [8];
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  <lambda_1> local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar9 = 0;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  local_118 = param_1;
  GetMountedPaks(this,&local_150);
  iVar10 = 0;
  if (local_150.ArrayNum == 0) goto LAB_142a6f0aa;
  iVar10 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if ((iVar10 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar15 = (local_98._8_4_ - local_64) + iVar10;
  if ((uint)(local_98._8_4_ - local_64) < uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar15);
    if (uVar15 < 4) {
      uVar15 = 1;
    }
    else {
      uVar17 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_e8 = (undefined4)lVar3;
      uVar15 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((local_50 == 0) || ((int)local_50 < (int)uVar15)) {
      local_50 = uVar15;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar15 != 0) {
        uVar12 = uVar15;
        if (uVar15 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar12 = 0;
            goto LAB_142a6ec5b;
          }
        }
        else {
LAB_142a6ec5b:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4)
          ;
        }
        if (0 < (int)uVar15) {
          uVar18 = (ulonglong)uVar15;
          uVar17 = uVar9;
          do {
            FVar14.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar14.Data = local_58.Data;
            }
            uVar7 = uVar17 & (longlong)(int)uVar15 - 1U;
            uVar17 = uVar17 + 1;
            *(undefined4 *)(FVar14.Data + uVar7 * 4) = 0xffffffff;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      if (local_50 != 0) {
        pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_140 = 0;
        uStack_13c = 1;
        uStack_12c = 0;
        uStack_128 = 0;
        if (local_70 != 0) {
          FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_78;
          }
          uVar15 = *(uint *)FVar19;
          uVar17 = uVar9;
          while (uVar15 == 0) {
            uStack_128 = (int)uVar17 + 0x20;
            uVar17 = (ulonglong)uStack_128;
            iVar6 = (int)uVar9;
            local_140 = iVar6 + 1;
            uVar9 = (ulonglong)local_140;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_140)
            goto LAB_142a6ed51;
            uVar15 = ((uint *)((longlong)FVar19 + 4))[iVar6];
          }
          uStack_13c = -uVar15 & uVar15;
          uVar9 = (ulonglong)uStack_13c * 2 + 1;
          lVar3 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          local_e4 = (int)lVar3;
          uStack_12c = local_e4 + -1 + uStack_128;
          uVar9 = (ulonglong)uStack_12c;
          if ((int)local_70 < (int)uStack_12c) {
LAB_142a6ed51:
            uVar9 = (ulonglong)local_70;
            uStack_12c = local_70;
          }
        }
        local_130 = 0xffffffff;
        local_d8 = (longlong *)local_98;
        local_d0._padding_ = CONCAT44(uStack_13c,local_140);
        local_d0.CurrentBitIndex = uStack_12c;
        local_d0.UnvisitedBitMask = 0xffffffff;
        local_d0._28_4_ = uStack_124;
        local_d0.BaseBitIndex = uStack_128;
        local_d0.Array = pTStack_138;
        if ((int)uVar9 < (int)local_70) {
          do {
            iVar20 = (int)uVar9;
            puVar1 = (undefined8 *)(*local_d8 + (longlong)iVar20 * 0x18);
            iVar2 = *(int *)(*local_d8 + 8 + (longlong)iVar20 * 0x18);
            iVar6 = iVar2 + -1;
            if (iVar2 == 0) {
              pwVar11 = L"";
              iVar6 = 0;
            }
            else {
              pwVar11 = (wchar_t *)*puVar1;
            }
            uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
            uVar15 = local_50 - 1 & uVar15;
            *(uint *)((longlong)puVar1 + 0x14) = uVar15;
            FVar14.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar14.Data = local_58.Data;
            }
            uVar9 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
            *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar14.Data + uVar9 * 4);
            *(int *)(FVar14.Data + uVar9 * 4) = iVar20;
            local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
            uVar9 = (ulonglong)(uint)local_d0.CurrentBitIndex;
            param_1 = local_118;
          } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
        }
      }
    }
  }
  uVar9 = 0;
  pFVar16 = pFVar13 + (longlong)iVar10 * 0x10;
  for (; pFVar13 != pFVar16; pFVar13 = pFVar13 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
               (FString *)local_e0,(bool *)pFVar13);
  }
  ::FString::FString(&local_f8,param_2);
  iStack_110 = 0;
  local_118 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_3);
    iStack_110 = (int)sVar8;
  }
  FPaths::MakeStandardFilename(&local_f8);
  local_a8.FileExtensionStr._12_4_ = uStack_10c;
  local_a8.FileExtensionStr.Size = iStack_110;
  local_a8.FileExtensionStr.DataPtr = (wchar_t *)local_118;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0x40,&local_160.AllocatorInstance,0,&local_160.ArrayMax);
  uVar17 = uVar9;
  if (0 < local_150.ArrayNum) {
    do {
      uVar12 = (uint)uVar9;
      uVar15 = 0;
      if ((int)uVar12 < local_150.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_108.ShouldVisit = &local_a8;
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar14.Data = local_f8.Data.AllocatorInstance.Data;
      }
      local_108.bIncludeFiles = true;
      local_108.bIncludeDirectories = false;
      local_108.bRecursive = param_4;
      FPakFile::
      FindPrunedFilesAtPathInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                (*(FPakFile **)(local_150.AllocatorInstance.Data + uVar17 + 8),
                 (wchar_t *)FVar14.Data,&local_160,&local_108);
      uVar9 = (ulonglong)(uVar12 + 1);
      uVar17 = uVar17 + 0x10;
    } while ((int)(uVar12 + 1) < local_150.ArrayNum);
  }
  iVar10 = local_160.ArrayNum;
  pFVar13 = local_160.AllocatorInstance.Data + (longlong)local_160.ArrayNum * 0x10;
  FVar14.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if (local_160.ArrayNum != iVar10) {
      local_167[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_167);
    }
    if (FVar14.Data == pFVar13) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
               (FString *)(local_e0 + 4),(bool *)FVar14.Data);
    pFVar16 = (param_1->AllocatorInstance).Data;
    if (((pFVar16 <= FVar14.Data) && (FVar14.Data < pFVar16 + (longlong)param_1->ArrayMax * 0x10))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                       (FString *)FVar14.Data);
    FVar14.Data = FVar14.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  iVar10 = local_150.ArrayNum;
LAB_142a6f0aa:
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_150.AllocatorInstance.Data,iVar10);
  if ((FPakListEntry *)local_150.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  return;
}

// FindFilesRecursively @ 142a6f100

void __thiscall
FPakPlatformFile::FindFilesRecursively
          (FPakPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x118))(this->LowerLevel,param_2);
  if (cVar1 != '\0') {
    (**(code **)((longlong)*this->LowerLevel + 0x1f0))(this->LowerLevel,param_1,param_2,param_3);
  }
  FindFilesInternal(this,param_1,param_2,param_3,true);
  return;
}

// FindPakFilesInDirectory @ 142a70320

void __cdecl
FPakPlatformFile::FindPakFilesInDirectory
          (IPlatformFile *param_1,wchar_t *param_2,FString *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  wchar_t *pwVar1;
  undefined **local_48;
  undefined1 local_40;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_38;
  FString *local_30;
  FString local_28;
  undefined1 local_18;
  undefined1 local_17;
  
  local_40 = 0;
  local_48 = &`FPakPlatformFile::FindPakFilesInDirectory'::`2'::FPakSearchVisitor::_vftable_;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38 = param_4;
  local_30 = param_3;
  pwVar1 = FCommandLine::Get();
  local_18 = FParse::Param(pwVar1,L"SkipOptionalPakFiles");
  pwVar1 = FCommandLine::Get();
  local_17 = FParse::Param(pwVar1,L"SkipOnDemandPakFiles");
  pwVar1 = FCommandLine::Get();
  FParse::Value(pwVar1,L"-SkipStartupPaksWildCard=",&local_28,true,(wchar_t **)0x0);
  (**(code **)((longlong)*param_1 + 0x1d0))(param_1,param_2,&local_48);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ForeachPackageInIostoreWhile @ 142a716d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPakPlatformFile::ForeachPackageInIostoreWhile(TFunctionRef<bool___cdecl(FName)> *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPlatformFileManager *this;
  IPlatformFile *pIVar5;
  FEncryptionKeyManager *this_00;
  FIoStoreReader *pFVar6;
  FString *pFVar7;
  size_t sVar8;
  FIoDirectoryIndexReader *this_01;
  IPlatformFile IVar9;
  IPlatformFile IVar10;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FIoStatus local_108;
  FString local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  code *local_c8;
  undefined8 *local_c0;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  TStringView<wchar_t> local_98;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  this = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::FindPlatformFile(this,L"PakFile");
  if ((pIVar5 == (IPlatformFile *)0x0) || (pIVar5[0x1a] == (IPlatformFile)0x0)) {
    return;
  }
  this_00 = UE::FEncryptionKeyManager::Get();
  UE::FEncryptionKeyManager::GetAllKeys
            (this_00,(TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
                      *)local_88);
  lpCriticalSection = (LPCRITICAL_SECTION)(pIVar5 + 7);
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(pIVar5 + 3);
  IVar9 = pIVar5[2];
  IVar10 = (IPlatformFile)((longlong)iVar1 * 0x10 + (longlong)IVar9);
  do {
    if (*(int *)(pIVar5 + 3) != iVar1) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_128);
    }
    if (IVar9 == IVar10) goto LAB_142a7192a;
    pFVar6 = ::operator_new(8);
    if (pFVar6 == (FIoStoreReader *)0x0) {
      pFVar6 = (FIoStoreReader *)0x0;
    }
    else {
      pFVar6 = FIoStoreReader::FIoStoreReader(pFVar6);
    }
    ::FString::FString(&local_f8,L"");
    pFVar7 = FPaths::ChangeExtension
                       (&local_a8,(FString *)(*(longlong *)((longlong)IVar9 + 8) + 0x18),&local_f8);
    if ((pFVar7->Data).ArrayNum == 0) {
      local_118 = (FScriptContainerElement *)0x15060d16c;
LAB_142a7182b:
      sVar8 = wcslen((wchar_t *)local_118);
      iVar4 = (int)sVar8;
    }
    else {
      local_118 = (pFVar7->Data).AllocatorInstance.Data;
      iVar4 = 0;
      if (local_118 != (FScriptContainerElement *)0x0) goto LAB_142a7182b;
    }
    local_b8._12_4_ = uStack_10c;
    local_b8.Size = iVar4;
    local_b8.DataPtr = (wchar_t *)local_118;
    iStack_110 = iVar4;
    FIoStoreReader::Initialize
              (pFVar6,&local_108,&local_b8,
               (TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
                *)local_88);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_108.ErrorCode == Ok) {
      this_01 = FIoStoreReader::GetDirectoryIndexReader(pFVar6);
      local_e8 = *(undefined8 *)param_1;
      local_e0 = *(undefined8 *)&param_1->field_0x8;
      local_c0 = &local_e8;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPakPlatformFile::ForeachPackageInIostoreWhile'::__l12::<lambda_1>,bool,TStringView<wchar_t>,unsigned_int>
                 ::Call;
      local_d8 = L"";
      uStack_d0 = 0;
      local_98._8_8_ = (ulonglong)uStack_cc << 0x20;
      local_98.DataPtr = L"";
      bVar3 = FIoDirectoryIndexReader::IterateDirectoryIndex
                        (this_01,(FIoDirectoryIndexHandle)0x0,&local_98,
                         (TFunctionRef<bool___cdecl(TStringView<wchar_t>,unsigned_int)> *)&local_c8)
      ;
      if (!bVar3) {
        FIoStatus::~FIoStatus(&local_108);
        if (pFVar6 != (FIoStoreReader *)0x0) {
          FIoStoreReader::~FIoStoreReader(pFVar6);
          ::operator_delete(pFVar6,8);
        }
LAB_142a7192a:
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        local_40 = 0;
        if ((void *)local_88._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_88._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        return;
      }
    }
    FIoStatus::~FIoStatus(&local_108);
    if (pFVar6 != (FIoStoreReader *)0x0) {
      FIoStoreReader::~FIoStoreReader(pFVar6);
      ::operator_delete(pFVar6,8);
    }
    IVar9 = (IPlatformFile)((longlong)IVar9 + 0x10);
  } while( true );
}

// GetAccessTimeStamp @ 142a72150

/* WARNING: Enum "EVersion": Some values do not have unique names */

FDateTime __thiscall FPakPlatformFile::GetAccessTimeStamp(FPakPlatformFile *this,wchar_t *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  TRefCountPtr<FPakFile> TVar4;
  FPakFile *pFVar5;
  wchar_t *in_R8;
  TRefCountPtr<FPakFile> local_res20;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_28;
  
  local_res20.Reference = (FPakFile *)0x0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  GetMountedPaks(this,&local_28);
  bVar2 = FindFileInPakFiles(&local_28,in_R8,&local_res20,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FPakListEntry *)local_28.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (bVar2) {
    *(long64 *)param_1 = ((local_res20.Reference)->Timestamp).Ticks;
  }
  else {
    ::FString::FString((FString *)&local_28,in_R8);
    bVar2 = IsNonPakFilenameAllowed(this,(FString *)&local_28);
    if ((FPakListEntry *)local_28.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    pFVar5 = (FPakFile *)0x0;
    if (bVar2) {
      plVar3 = (longlong *)
               (**(code **)((longlong)*this->LowerLevel + 0xc0))(this->LowerLevel,&local_28);
      pFVar5 = (FPakFile *)*plVar3;
    }
    *(FPakFile **)param_1 = pFVar5;
    if (local_res20.Reference == (FPakFile *)0x0) {
      return (FDateTime)(long64)param_1;
    }
  }
  plVar3 = &(local_res20.Reference)->_padding_;
  LOCK();
  lVar1 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar1 == 1) {
    TVar4.Reference = local_res20.Reference;
    if (plVar3 == (longlong *)0x0) {
      TVar4.Reference = (FPakFile *)0x0;
    }
    if (TVar4.Reference != (FPakFile *)0x0) {
      (**(code **)(TVar4.Reference)->_padding_)(TVar4.Reference,1);
    }
  }
  return (FDateTime)(long64)param_1;
}

// GetFilenameOnDisk @ 142a73e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a74257) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */

FString * __thiscall
FPakPlatformFile::GetFilenameOnDisk
          (FPakPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  TRefCountPtr<FPakFile> this_00;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar4;
  long64 lVar5;
  bool bVar6;
  bool bVar7;
  EFindResult EVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar13;
  longlong lVar14;
  FIndexSettings *pFVar15;
  ForAnyElementType FVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  TRefCountPtr<FPakFile> TVar22;
  wchar_t *pwVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_2d8 [32];
  FString local_290;
  TRefCountPtr<FPakFile> local_280;
  FPakFile *local_278;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_270;
  FString local_260;
  wchar_t *local_250;
  undefined1 local_248 [8];
  FString local_240;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8 [2];
  undefined4 local_19c;
  FPakEntry local_198;
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  FPakEntry local_a8;
  ulonglong local_58;
  
  lVar5 = _UNK_15076adc8;
  pTVar4 = ___xmm_0000000000000000ffffffffffffffff;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.CompressionBlocks.ArrayNum = 0;
  local_a8.CompressionBlocks.ArrayMax = 0;
  local_a8.Offset = (long64)___xmm_0000000000000000ffffffffffffffff;
  local_a8.Size = _UNK_15076adc8;
  local_a8.UncompressedSize = 0;
  local_a8.Hash[0] = '\0';
  local_a8.Hash[1] = '\0';
  local_a8.Hash[2] = '\0';
  local_a8.Hash[3] = '\0';
  local_a8.Hash[4] = '\0';
  local_a8.Hash[5] = '\0';
  local_a8.Hash[6] = '\0';
  local_a8.Hash[7] = '\0';
  local_a8.Hash[8] = '\0';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash[0xc] = '\0';
  local_a8.Hash[0xd] = '\0';
  local_a8.Hash[0xe] = '\0';
  local_a8.Hash[0xf] = '\0';
  local_a8.Hash[0x10] = '\0';
  local_a8.Hash[0x11] = '\0';
  local_a8.Hash[0x12] = '\0';
  local_a8.Hash[0x13] = '\0';
  local_a8.CompressionBlockSize = 0;
  local_a8.CompressionMethodIndex = 0;
  local_a8.Flags = '\0';
  local_a8.Verified = false;
  local_280.Reference = (FPakFile *)0x0;
  local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ArrayNum = 0;
  local_270.ArrayMax = 0;
  local_250 = param_1;
  GetMountedPaks(this,&local_270);
  bVar6 = FindFileInPakFiles(&local_270,param_1,&local_280,&local_a8);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_270.AllocatorInstance.Data,local_270.ArrayNum);
  if ((FPakListEntry *)local_270.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_270.AllocatorInstance.Data);
  }
  if (bVar6) {
    ::FString::FString(&local_208,param_1);
    FPaths::GetPath(&local_260,&local_208);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    this_00.Reference = local_280.Reference;
    local_278 = local_280.Reference;
    bVar6 = (local_280.Reference)->bWillPruneDirectoryIndex;
    if (bVar6 != false) {
      AcquireSRWLockShared((PSRWLOCK)&(local_280.Reference)->DirectoryIndexLock);
    }
    pwVar23 = L"";
    local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_260.Data.ArrayNum != 0) {
      FVar16.Data = local_260.Data.AllocatorInstance.Data;
    }
    local_290.Data.ArrayNum = 0;
    local_290.Data.ArrayMax = 0;
    ::FString::operator=(&local_290,(wchar_t *)FVar16.Data);
    iVar11 = local_290.Data.ArrayNum + -1;
    if (local_290.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      iVar11 = local_290.Data.ArrayNum + -2;
      if (local_290.Data.ArrayNum == 0) {
        iVar11 = -1;
      }
      if ((((iVar11 < 0) || (local_290.Data.ArrayNum == 0)) ||
          (local_290.Data.ArrayNum + -1 <= iVar11)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FString *)(*pcVar3)();
        return pFVar12;
      }
      if (*(short *)(local_290.Data.AllocatorInstance.Data + (longlong)iVar11 * 2) != 0x2f) {
        ::FString::AppendChars(&local_290,L"/",1);
      }
    }
    iVar11 = ((this_00.Reference)->MountPoint).Data.ArrayNum;
    iVar20 = 0;
    if (iVar11 != 0) {
      pwVar23 = (wchar_t *)((this_00.Reference)->MountPoint).Data.AllocatorInstance.Data;
      iVar20 = iVar11 + -1;
    }
    bVar7 = ::FString::StartsWith(&local_290,pwVar23,iVar20,IgnoreCase);
    TVar22.Reference = this_00.Reference;
    if (bVar7) {
      iVar11 = ((this_00.Reference)->MountPoint).Data.ArrayNum;
      iVar20 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar20 = 0;
      }
      ::FString::RightChop(&local_290,&local_240,iVar20);
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      local_290.Data.AllocatorInstance.Data = local_240.Data.AllocatorInstance.Data;
      local_290.Data.ArrayMax = local_240.Data.ArrayMax;
      local_290.Data.ArrayNum = local_240.Data.ArrayNum;
      if (local_240.Data.ArrayNum < 2) {
        ::FString::operator=(&local_290,L"/");
      }
      pTVar13 = FPakFile::FindPrunedDirectoryInternal(this_00.Reference,&local_290);
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      if (pTVar13 !=
          (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
           *)0x0) {
        iVar11 = *(int *)&pTVar13->field_0x28;
        TStack_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar13->field_0x10;
        uVar9 = 1;
        iVar19 = 0;
        iVar20 = iVar19;
        iVar10 = 0;
        if (iVar11 != 0) {
          puVar21 = *(uint **)&pTVar13->field_0x20;
          if (*(uint **)&pTVar13->field_0x20 == (uint *)0x0) {
            puVar21 = (uint *)TStack_228.Array;
          }
          uVar2 = *puVar21;
          iVar20 = 0;
          iVar19 = 0;
          while (uVar2 == 0) {
            lVar14 = (longlong)iVar19;
            iVar20 = iVar20 + 0x20;
            iVar19 = iVar19 + 1;
            iVar10 = iVar11;
            if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iVar19)
            goto LAB_142a741df;
            uVar2 = puVar21[lVar14 + 1];
          }
          uVar9 = ~(uVar2 - 1) & uVar2;
          uVar1 = (ulonglong)uVar9 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar10 = (int)lVar14 + -1 + iVar20;
          if (iVar11 < iVar10) {
            iVar10 = iVar11;
          }
        }
LAB_142a741df:
        local_198.Size = CONCAT44(uVar9,iVar19);
        local_198.Hash[4] = (char)iVar10;
        local_198.Hash[5] = (char)((uint)iVar10 >> 8);
        local_198.Hash[6] = (char)((uint)iVar10 >> 0x10);
        local_198.Hash[7] = (char)((uint)iVar10 >> 0x18);
        local_198.Hash[0] = 0xff;
        local_198.Hash[1] = 0xff;
        local_198.Hash[2] = 0xff;
        local_198.Hash[3] = 0xff;
        local_198.Hash[0xc] = (undefined1)local_19c;
        local_198.Hash[0xd] = local_19c._1_1_;
        local_198.Hash[0xe] = local_19c._2_1_;
        local_198.Hash[0xf] = local_19c._3_1_;
        local_198.Hash[8] = (char)iVar20;
        local_198.Hash[9] = (char)((uint)iVar20 >> 8);
        local_198.Hash[10] = (char)((uint)iVar20 >> 0x10);
        local_198.Hash[0xb] = (char)((uint)iVar20 >> 0x18);
        TStack_228._padding_ = local_198.Size;
        TStack_228._24_8_ = local_198.Hash._8_8_;
        TStack_228._16_8_ = local_198.Hash._0_8_;
        TVar22.Reference = local_278;
        param_1 = local_250;
        local_230 = pTVar13;
        local_198.Offset = (long64)pTVar13;
        local_198.UncompressedSize = (long64)TStack_228.Array;
        if (iVar10 < iVar11) {
          do {
            pTVar13 = local_230;
            local_198.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.CompressionBlocks.ArrayMax = 0;
            local_198.Offset = (long64)pTVar4;
            local_198.Size = lVar5;
            local_198.UncompressedSize = 0;
            local_198.Hash[0x10] = '\0';
            local_198.Hash[0x11] = '\0';
            local_198.Hash[0x12] = '\0';
            local_198.Hash[0x13] = '\0';
            local_198.CompressionBlocks.ArrayNum = 0;
            local_198.Hash[0] = '\0';
            local_198.Hash[1] = '\0';
            local_198.Hash[2] = '\0';
            local_198.Hash[3] = '\0';
            local_198.Hash[4] = '\0';
            local_198.Hash[5] = '\0';
            local_198.Hash[6] = '\0';
            local_198.Hash[7] = '\0';
            local_198.Hash[8] = '\0';
            local_198.Hash[9] = '\0';
            local_198.Hash[10] = '\0';
            local_198.Hash[0xb] = '\0';
            local_198.Hash[0xc] = '\0';
            local_198.Hash[0xd] = '\0';
            local_198.Hash[0xe] = '\0';
            local_198.Hash[0xf] = '\0';
            local_198.CompressionBlockSize = 0;
            local_198.CompressionMethodIndex = 0;
            local_198.Flags = '\0';
            local_198.Verified = false;
            EVar8 = FPakFile::GetPakEntry
                              ((FPakEntryLocation *)
                               ((longlong)iVar10 * 0x20 + *(longlong *)local_230 + 0x10),&local_198,
                               &(this_00.Reference)->EncodedPakEntries,&(this_00.Reference)->Files,
                               &(this_00.Reference)->Info);
            if ((EVar8 != NotFound) && (local_198.Offset == local_a8.Offset)) {
              iVar19 = 0;
              puVar17 = (undefined8 *)(*(longlong *)pTVar13 + (longlong)iVar10 * 0x20);
              pFVar24 = (FScriptContainerElement *)0x0;
              iVar20 = *(int *)(puVar17 + 1);
              iVar11 = iVar20 + -1;
              if (iVar20 == 0) {
                iVar11 = 0;
              }
              pFVar12 = ::FString::ConstructFromPtrSize(&local_1d8,(uchar *)*puVar17,iVar11);
              iVar11 = iVar19;
              if (local_1c8 != pFVar12) {
                pFVar24 = (pFVar12->Data).AllocatorInstance.Data;
                (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar11 = (pFVar12->Data).ArrayNum;
                (pFVar12->Data).ArrayNum = 0;
                (pFVar12->Data).ArrayMax = 0;
              }
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              FVar16.Data = local_260.Data.AllocatorInstance.Data;
              if (iVar11 != 0) {
                iVar19 = iVar11 + -1;
              }
              iVar11 = iVar19 + 1;
              if ((local_260.Data.ArrayNum == 0) && (iVar11 != 0)) {
                (__return_storage_ptr__->Data).AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                iVar11 = iVar19 + 2;
                (__return_storage_ptr__->Data).ArrayNum = 0;
LAB_142a743a4:
                if (iVar11 != 0) goto LAB_142a743b0;
                (__return_storage_ptr__->Data).ArrayMax = 0;
              }
              else {
                (__return_storage_ptr__->Data).AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                (__return_storage_ptr__->Data).ArrayNum = local_260.Data.ArrayNum;
                if (local_260.Data.ArrayNum == 0) goto LAB_142a743a4;
LAB_142a743b0:
                uVar9 = local_260.Data.ArrayNum + iVar11;
                if ((int)uVar9 < local_260.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
                }
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,uVar9,0,(ForAnyElementType *)__return_storage_ptr__,
                           local_260.Data.ArrayNum,&(__return_storage_ptr__->Data).ArrayMax);
                if (local_260.Data.ArrayNum != 0) {
                  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar16.Data,
                         (longlong)local_260.Data.ArrayNum * 2);
                }
              }
              ::FString::PathAppend(__return_storage_ptr__,(wchar_t *)pFVar24,iVar19);
              if (pFVar24 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar24);
              }
              if (local_198.CompressionBlocks.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.CompressionBlocks.AllocatorInstance.Data);
              }
              TVar22.Reference = local_278;
              if (bVar6 == false) goto LAB_142a74436;
              goto LAB_142a74430;
            }
            if (local_198.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_198.CompressionBlocks.AllocatorInstance.Data);
            }
            TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
            TVar22.Reference = local_278;
            param_1 = local_250;
            iVar10 = TStack_228.CurrentBitIndex;
          } while (TStack_228.CurrentBitIndex < (TStack_228.Array)->NumBits);
        }
      }
    }
    else if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    pFVar15 = FPakFile::GetIndexSettings();
    if (((pFVar15->bValidatePruning != false) &&
        ((this_00.Reference)->bWillPruneDirectoryIndex != false)) &&
       ((this_00.Reference)->bNeedsLegacyPruning == false)) {
      local_148._0_8_ = (FScriptContainerElement *)0x0;
      local_148._8_8_ = 0;
      local_128 = (void *)0x0;
      local_120 = 0;
      local_11c = 0x80;
      local_118 = 0xffffffff;
      local_114 = 0;
      local_108 = (ForElementType<FSetElementId>)0x0;
      local_100 = 0;
      local_f8._0_8_ = (FScriptContainerElement *)0x0;
      local_f8._8_8_ = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = (ForElementType<FSetElementId>)0x0;
      local_b0 = 0;
      ::FString::FString(&local_1f8,param_1);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_148,
                 (FString *)local_248,(bool *)&local_1f8);
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      FPakFile::ValidateDirectorySearch
                (this_00.Reference,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_148,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f8,param_1);
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_f8,0,local_f8._8_4_);
      bVar7 = local_f8._12_4_ != 0;
      local_f8._8_8_ = (ulonglong)(uint)local_f8._12_4_ << 0x20;
      if (bVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
      }
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_d0 = 0;
      if (0x80 < local_cc) {
        local_cc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
      local_100 = 0;
      if (local_108 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_108);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_148,0,local_148._8_4_);
      bVar7 = local_148._12_4_ != 0;
      local_148._8_8_ = (ulonglong)(uint)local_148._12_4_ << 0x20;
      if (bVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
      }
      local_118 = 0xffffffff;
      local_114 = 0;
      local_120 = 0;
      if (0x80 < local_11c) {
        local_11c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
      }
      if (local_128 != (void *)0x0) {
        FMemory::Free(local_128);
      }
      if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_148._0_8_);
      }
    }
    ::FString::FString(__return_storage_ptr__,param_1);
    if (bVar6 != false) {
LAB_142a74430:
      ReleaseSRWLockShared((PSRWLOCK)&(TVar22.Reference)->DirectoryIndexLock);
    }
LAB_142a74436:
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
    if (this_00.Reference == (FPakFile *)0x0) goto LAB_142a7478d;
    plVar18 = &(this_00.Reference)->_padding_;
    LOCK();
    iVar11 = (int)*plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
  }
  else {
    ::FString::FString(&local_1e8,param_1);
    bVar6 = IsNonPakFilenameAllowed(this,&local_1e8);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      (**(code **)((longlong)*this->LowerLevel + 200))
                (this->LowerLevel,__return_storage_ptr__,param_1);
    }
    else {
      ::FString::FString(__return_storage_ptr__,param_1);
    }
    if (local_280.Reference == (FPakFile *)0x0) goto LAB_142a7478d;
    plVar18 = &(local_280.Reference)->_padding_;
    LOCK();
    iVar11 = (int)*plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    this_00.Reference = local_280.Reference;
  }
  if (((iVar11 == 1) && (plVar18 != (longlong *)0x0)) && (this_00.Reference != (FPakFile *)0x0)) {
    (**(code **)(this_00.Reference)->_padding_)(this_00.Reference,1);
  }
LAB_142a7478d:
  if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFilenameSecurityDelegate @ 142a747f0

TDelegate<bool___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy> * __cdecl
FPakPlatformFile::GetFilenameSecurityDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FPakPlatformFile::GetFilenameSecurityDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Delegate;
}

// GetFilenamesFromIostoreByBlockIndex @ 142a74860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPakPlatformFile::GetFilenamesFromIostoreByBlockIndex
          (FString *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPlatformFileManager *this;
  IPlatformFile *pIVar6;
  FEncryptionKeyManager *this_00;
  FString *pFVar7;
  FIoStoreReader *pFVar8;
  size_t sVar9;
  IPlatformFile IVar10;
  IPlatformFile IVar11;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_110;
  TArray<int,TSizedDefaultAllocator<32>_> *local_108;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  FIoStatus local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_110 = param_3;
  local_108 = param_2;
  this = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::FindPlatformFile(this,L"PakFile");
  if (pIVar6 == (IPlatformFile *)0x0) {
    return;
  }
  if (pIVar6[0x1a] == (IPlatformFile)0x0) {
    return;
  }
  this_00 = UE::FEncryptionKeyManager::Get();
  UE::FEncryptionKeyManager::GetAllKeys
            (this_00,(TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
                      *)local_98);
  lpCriticalSection = (LPCRITICAL_SECTION)(pIVar6 + 7);
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(pIVar6 + 3);
  IVar10 = pIVar6[2];
  IVar11 = (IPlatformFile)((longlong)iVar1 * 0x10 + (longlong)IVar10);
  while( true ) {
    if (*(int *)(pIVar6 + 3) != iVar1) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_118);
    }
    if (IVar10 == IVar11) goto LAB_142a74ac1;
    pFVar7 = FPaths::GetBaseFilename
                       (&local_c8,(FString *)(*(longlong *)((longlong)IVar10 + 8) + 0x18),true);
    iVar5 = (param_1->Data).ArrayNum;
    iVar2 = (pFVar7->Data).ArrayNum;
    if (iVar2 == iVar5) {
      if (iVar2 < 2) {
        bVar4 = true;
      }
      else {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar4 = iVar5 == 0;
      }
    }
    else {
      bVar4 = iVar5 + iVar2 == 1;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar4) break;
    IVar10 = (IPlatformFile)((longlong)IVar10 + 0x10);
  }
  pFVar8 = ::operator_new(8);
  if (pFVar8 == (FIoStoreReader *)0x0) {
    pFVar8 = (FIoStoreReader *)0x0;
  }
  else {
    pFVar8 = FIoStoreReader::FIoStoreReader(pFVar8);
  }
  ::FString::FString(&local_e8,L"");
  pFVar7 = FPaths::ChangeExtension
                     (&local_a8,(FString *)(*(longlong *)((longlong)IVar10 + 8) + 0x18),&local_e8);
  if ((pFVar7->Data).ArrayNum == 0) {
    local_f8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_f8 = (pFVar7->Data).AllocatorInstance.Data;
    iStack_f0 = 0;
    if (local_f8 == (FScriptContainerElement *)0x0) goto LAB_142a74a34;
  }
  sVar9 = wcslen((wchar_t *)local_f8);
  iStack_f0 = (int)sVar9;
LAB_142a74a34:
  local_b8._12_4_ = uStack_ec;
  local_b8.Size = iStack_f0;
  local_b8.DataPtr = (wchar_t *)local_f8;
  FIoStoreReader::Initialize
            (pFVar8,&local_d8,&local_b8,
             (TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
              *)local_98);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.ErrorCode == Ok) {
    FIoStoreReader::GetFilenamesByBlockIndex(pFVar8,local_108,local_110);
  }
  FIoStatus::~FIoStatus(&local_d8);
  if (pFVar8 != (FIoStoreReader *)0x0) {
    FIoStoreReader::~FIoStoreReader(pFVar8);
    ::operator_delete(pFVar8,8);
  }
LAB_142a74ac1:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  local_50 = 0;
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GetFilenamesFromIostoreContainer @ 142a74b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPakPlatformFile::GetFilenamesFromIostoreContainer
          (FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPlatformFileManager *this;
  IPlatformFile *pIVar6;
  FEncryptionKeyManager *this_00;
  FString *pFVar7;
  FIoStoreReader *pFVar8;
  size_t sVar9;
  IPlatformFile IVar10;
  IPlatformFile IVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_100;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  FIoStatus local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_100 = param_2;
  this = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::FindPlatformFile(this,L"PakFile");
  if (pIVar6 == (IPlatformFile *)0x0) {
    return;
  }
  if (pIVar6[0x1a] == (IPlatformFile)0x0) {
    return;
  }
  this_00 = UE::FEncryptionKeyManager::Get();
  UE::FEncryptionKeyManager::GetAllKeys
            (this_00,(TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
                      *)local_98);
  lpCriticalSection = (LPCRITICAL_SECTION)(pIVar6 + 7);
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(pIVar6 + 3);
  IVar10 = pIVar6[2];
  IVar11 = (IPlatformFile)((longlong)iVar1 * 0x10 + (longlong)IVar10);
  while( true ) {
    if (*(int *)(pIVar6 + 3) != iVar1) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_108);
    }
    if (IVar10 == IVar11) goto LAB_142a74d9b;
    pFVar7 = FPaths::GetBaseFilename
                       (&local_c8,(FString *)(*(longlong *)((longlong)IVar10 + 8) + 0x18),true);
    iVar5 = (param_1->Data).ArrayNum;
    iVar2 = (pFVar7->Data).ArrayNum;
    if (iVar2 == iVar5) {
      if (iVar2 < 2) {
        bVar4 = true;
      }
      else {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar4 = iVar5 == 0;
      }
    }
    else {
      bVar4 = iVar5 + iVar2 == 1;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar4) break;
    IVar10 = (IPlatformFile)((longlong)IVar10 + 0x10);
  }
  pFVar8 = ::operator_new(8);
  if (pFVar8 == (FIoStoreReader *)0x0) {
    pFVar8 = (FIoStoreReader *)0x0;
  }
  else {
    pFVar8 = FIoStoreReader::FIoStoreReader(pFVar8);
  }
  ::FString::FString(&local_e8,L"");
  pFVar7 = FPaths::ChangeExtension
                     (&local_a8,(FString *)(*(longlong *)((longlong)IVar10 + 8) + 0x18),&local_e8);
  if ((pFVar7->Data).ArrayNum == 0) {
    local_f8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_f8 = (pFVar7->Data).AllocatorInstance.Data;
    iStack_f0 = 0;
    if (local_f8 == (FScriptContainerElement *)0x0) goto LAB_142a74d19;
  }
  sVar9 = wcslen((wchar_t *)local_f8);
  iStack_f0 = (int)sVar9;
LAB_142a74d19:
  local_b8._12_4_ = uStack_ec;
  local_b8.Size = iStack_f0;
  local_b8.DataPtr = (wchar_t *)local_f8;
  FIoStoreReader::Initialize
            (pFVar8,&local_d8,&local_b8,
             (TMap<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
              *)local_98);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.ErrorCode == Ok) {
    FIoStoreReader::GetFilenames(pFVar8,local_100);
  }
  FIoStatus::~FIoStatus(&local_d8);
  if (pFVar8 != (FIoStoreReader *)0x0) {
    FIoStoreReader::~FIoStoreReader(pFVar8);
    ::operator_delete(pFVar8,8);
  }
LAB_142a74d9b:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  local_50 = 0;
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FAES::FAESKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GetLowerLevel @ 142a754c0

IPlatformFile * __thiscall FPakPlatformFile::GetLowerLevel(FPakPlatformFile *this)

{
  return this->LowerLevel;
}

// GetMountStartupPaksWildCard @ 142a75830

wchar_t * __cdecl FPakPlatformFile::GetMountStartupPaksWildCard(void)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"";
  if (GMountStartupPaksWildCard.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GMountStartupPaksWildCard.Data.AllocatorInstance.Data;
  }
  return pwVar1;
}

// GetMountedPaks @ 142a75850

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::GetMountedPaks
          (FPakPlatformFile *this,
          TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  lpCriticalSection = &this->PakListCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == &this->PakFiles) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->PakFiles).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,
                       &param_1->ArrayMax);
    ConstructItems<FPakPlatformFile::FPakListEntry,FPakPlatformFile::FPakListEntry,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
               (FPakListEntry *)(this->PakFiles).AllocatorInstance.Data,iVar1);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetName @ 142a75960

wchar_t * __thiscall FPakPlatformFile::GetName(FPakPlatformFile *this)

{
  return L"PakFile";
}

// GetPakChunkLocation @ 142a765a0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FPakPlatformFile::GetPakChunkLocation(FPakPlatformFile *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  lpCriticalSection = &this->PakListCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->PakFiles).ArrayNum;
  pFVar5 = (this->PakFiles).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PakFiles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      iVar1 = (this->PendingEncryptedPakFiles).ArrayNum;
      pFVar5 = (this->PendingEncryptedPakFiles).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)iVar1 * 0x38;
      goto LAB_142a76640;
    }
    if (*(int *)(*(longlong *)(pFVar5 + 8) + 0x2f8) == param_1) break;
    pFVar5 = pFVar5 + 0x10;
  }
  TVar4 = BestLocation;
LAB_142a76669:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return TVar4;
LAB_142a76640:
  if ((this->PendingEncryptedPakFiles).ArrayNum != iVar1) {
    `TCheckedPointerIterator<FPakPlatformFile::FPakListDeferredEntry_const_,int,0>::operator!='::
    __l2::<lambda_1>::operator()(local_res18);
  }
  if (pFVar5 == pFVar6) {
    TVar4 = DoesNotExist;
    goto LAB_142a76669;
  }
  if (*(int *)(pFVar5 + 0x34) == param_1) goto LAB_142a76660;
  pFVar5 = pFVar5 + 0x38;
  goto LAB_142a76640;
LAB_142a76660:
  TVar4 = NotAvailable;
  goto LAB_142a76669;
}

// GetPakCustomEncryptionDelegate @ 142a76690

TDelegate<void___cdecl(unsigned_char_*,unsigned_int,FGuid),FDefaultDelegateUserPolicy> * __cdecl
FPakPlatformFile::GetPakCustomEncryptionDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FPakPlatformFile::GetPakCustomEncryptionDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Delegate;
}

// GetPakEncryptionKey @ 142a76700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPakPlatformFile::GetPakEncryptionKey(FAESKey *param_1,FGuid *param_2)

{
  bool bVar1;
  FEncryptionKeyManager *this;
  TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *pTVar2;
  FString local_18;
  
  param_1->Key[0] = '\0';
  param_1->Key[1] = '\0';
  param_1->Key[2] = '\0';
  param_1->Key[3] = '\0';
  param_1->Key[4] = '\0';
  param_1->Key[5] = '\0';
  param_1->Key[6] = '\0';
  param_1->Key[7] = '\0';
  param_1->Key[8] = '\0';
  param_1->Key[9] = '\0';
  param_1->Key[10] = '\0';
  param_1->Key[0xb] = '\0';
  param_1->Key[0xc] = '\0';
  param_1->Key[0xd] = '\0';
  param_1->Key[0xe] = '\0';
  param_1->Key[0xf] = '\0';
  param_1->Key[0x10] = '\0';
  param_1->Key[0x11] = '\0';
  param_1->Key[0x12] = '\0';
  param_1->Key[0x13] = '\0';
  param_1->Key[0x14] = '\0';
  param_1->Key[0x15] = '\0';
  param_1->Key[0x16] = '\0';
  param_1->Key[0x17] = '\0';
  param_1->Key[0x18] = '\0';
  param_1->Key[0x19] = '\0';
  param_1->Key[0x1a] = '\0';
  param_1->Key[0x1b] = '\0';
  param_1->Key[0x1c] = '\0';
  param_1->Key[0x1d] = '\0';
  param_1->Key[0x1e] = '\0';
  param_1->Key[0x1f] = '\0';
  this = UE::FEncryptionKeyManager::Get();
  bVar1 = UE::FEncryptionKeyManager::TryGetKey(this,param_2,param_1);
  if (!bVar1) {
    if (((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) {
      pTVar2 = FCoreDelegates::GetPakEncryptionKeyDelegate();
      bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      if (bVar1) {
        pTVar2 = FCoreDelegates::GetPakEncryptionKeyDelegate();
        TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy>::Execute
                  (pTVar2,param_1->Key);
        return;
      }
    }
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(param_2,&local_18,Digits);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPakFolders @ 142a76c20

/* WARNING: Removing unreachable block (ram,0x000142a76ef9) */
/* WARNING: Removing unreachable block (ram,0x000142a76e05) */
/* WARNING: Removing unreachable block (ram,0x000142a76fe1) */

void __cdecl
FPakPlatformFile::GetPakFolders
          (wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar2 = FParse::Value(param_1,L"-pakdir=",&local_38,true,(wchar_t **)0x0);
  if (bVar2) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_38,&local_48,L"*",true);
    if ((param_2 == &local_48) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = local_48.ArrayNum;
    iVar3 = 0;
    if (local_48.ArrayNum != 0) {
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_48.ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
                         &param_2->ArrayMax);
      ConstructItems<FString,FString,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10,
                 (FString *)local_48.AllocatorInstance.Data,iVar4);
      iVar3 = local_48.ArrayNum;
    }
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,iVar3);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  FPaths::ProjectContentDir(&local_28);
  ::FString::PrintfImpl(&local_78,L"%sPaks/");
  pFVar5 = (param_2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_78.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_78.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FPaths::ProjectSavedDir();
  ::FString::PrintfImpl(&local_68,L"%sPaks/");
  pFVar5 = (param_2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FPaths::EngineContentDir(&local_18);
  ::FString::PrintfImpl(&local_58,L"%sPaks/");
  pFVar5 = (param_2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_58.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_58.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPakOrderFromPakFilePath @ 142a77030

int __cdecl FPakPlatformFile::GetPakOrderFromPakFilePath(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  FString local_28;
  FString local_18;
  
  FPaths::ProjectContentDir(&local_18);
  ::FString::PrintfImpl(&local_28,L"%sPaks/%s-");
  iVar4 = param_1->Size;
  pwVar1 = param_1->DataPtr;
  iVar6 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  iVar3 = iVar4;
  if (iVar6 < iVar4) {
    iVar3 = iVar6;
  }
  iVar7 = 0;
  if (0 < iVar3) {
    iVar7 = iVar3;
  }
  if (((iVar6 == iVar7) &&
      (((iVar6 == 0 || (iVar7 == 0)) ||
       (iVar3 = FGenericPlatformStricmp::Strnicmp
                          ((wchar_t *)local_28.Data.AllocatorInstance.Data,pwVar1,(longlong)iVar7),
       iVar3 == 0)))) && (iVar6 == iVar7)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    iVar4 = 4;
  }
  else {
    pFVar5 = FPaths::ProjectContentDir(&local_18);
    iVar3 = (pFVar5->Data).ArrayNum;
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    iVar3 = iVar4;
    if (iVar6 < iVar4) {
      iVar3 = iVar6;
    }
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    if (((iVar6 == iVar7) &&
        (((iVar6 == 0 || (iVar7 == 0)) ||
         (iVar3 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,pwVar1,(longlong)iVar7
                            ), iVar3 == 0)))) && (iVar6 == iVar7)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      iVar4 = 3;
    }
    else {
      pFVar5 = FPaths::EngineContentDir(&local_18);
      iVar3 = (pFVar5->Data).ArrayNum;
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      iVar3 = iVar4;
      if (iVar6 < iVar4) {
        iVar3 = iVar6;
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      if (((iVar6 == iVar7) &&
          (((iVar6 == 0 || (iVar7 == 0)) ||
           (iVar3 = FGenericPlatformStricmp::Strnicmp
                              ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,pwVar1,
                               (longlong)iVar7), iVar3 == 0)))) && (iVar6 == iVar7)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        iVar4 = 2;
      }
      else {
        pFVar5 = FPaths::ProjectSavedDir();
        iVar3 = (pFVar5->Data).ArrayNum;
        iVar6 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        if (iVar6 < iVar4) {
          iVar4 = iVar6;
        }
        iVar3 = 0;
        if (0 < iVar4) {
          iVar3 = iVar4;
        }
        if (((iVar6 == iVar3) &&
            (((iVar6 == 0 || (iVar3 == 0)) ||
             (iVar4 = FGenericPlatformStricmp::Strnicmp
                                ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,pwVar1,
                                 (longlong)iVar3), iVar4 == 0)))) && (iVar6 == iVar3)) {
          iVar4 = 1;
        }
        else {
          iVar4 = 0;
        }
      }
    }
  }
  return iVar4;
}

// GetPakSetIndexSettingsDelegate @ 142a77240

TDelegate<void___cdecl(bool_&,bool_&,bool_&),FDefaultDelegateUserPolicy> * __cdecl
FPakPlatformFile::GetPakSetIndexSettingsDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FPakPlatformFile::GetPakSetIndexSettingsDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Delegate;
}

// GetPakSignatureFile @ 142a772b0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FPakSignatureFile_const_,1> * __cdecl
FPakPlatformFile::GetPakSignatureFile
          (TSharedPtr<FPakSignatureFile_const_,1> *__return_storage_ptr__,wchar_t *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  TSharedPtr<FPakSignatureFile_const_,1> *pTVar7;
  IFileManager *pIVar8;
  FArchive *pFVar9;
  FPakSigningFailureHandlerData *lpCriticalSection;
  TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this;
  void *pvVar10;
  TReferenceControllerBase<1> *pTVar11;
  ForAnyElementType FVar12;
  FSharedReferencer<1> FVar13;
  TPairInitializer<FName_const_&,TSharedPtr<FPakSignatureFile_const_,1>_&&> local_res18;
  FPakSignatureFile *local_128;
  FSharedReferencer<1> FStack_120;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_118;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_108;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8;
  FSharedReferencer<1> local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TSharedPtr<FPakSignatureFile_const_,1> **local_98;
  FPakSignatureFile **local_90;
  FPakSignatureFile *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FString local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  ::FName::FName((FName *)&local_res18.Value,param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
  pTVar7 = TMapBase<FName,TSharedPtr<FPakSignatureFile_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FPakSignatureFile_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>_>
                   *)&PakSignatureFileCache,(FName)local_res18.Value);
  if (pTVar7 != (TSharedPtr<FPakSignatureFile_const_,1> *)0x0) {
    __return_storage_ptr__->Object = pTVar7->Object;
    pTVar11 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
    return __return_storage_ptr__;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    this = FCoreDelegates::GetPakSigningKeysDelegate();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_68);
    if ((*(int *)&this->field_0x10 == 0) ||
       ((*(longlong **)&this->field_0x8 == (longlong *)0x0 ||
        (cVar6 = (**(code **)(**(longlong **)&this->field_0x8 + 0x38))(), cVar6 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pvVar10 = (void *)0x0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_50);
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (*(int *)&this->field_0x10 != 0) {
        pTVar11 = *(TReferenceControllerBase<1> **)&this->field_0x8;
      }
      (**(code **)(pTVar11->_padding_ + 0x60))(pTVar11,&local_108,&local_118);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      pvVar10 = FRSA::CreateKey(&local_108,&local_f8,&local_118);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
    }
    PublicKey = pvVar10;
    _Init_thread_footer(&::_TSS0);
  }
  local_128 = (FPakSignatureFile *)0x0;
  FStack_120.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (PublicKey == (void *)0x0) {
    FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    ::FString::FString(&local_b8,L"sig");
    ::FString::FString(&local_c8,param_1);
    FPaths::ChangeExtension(&local_d8,&local_c8,&local_b8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pIVar8 = IFileManager::Get();
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar12.Data = local_d8.Data.AllocatorInstance.Data;
    }
    pFVar9 = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,FVar12.Data,0);
    if (pFVar9 == (FArchive *)0x0) {
      if (2 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      ::FString::FString(&local_78,param_1);
      lpCriticalSection = GetPakSigningFailureHandlerData();
      if (lpCriticalSection == (FPakSigningFailureHandlerData *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
                (&lpCriticalSection->MasterSignatureTableCheckFailedDelegate,&local_78);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FVar13.ReferenceController = FStack_120.ReferenceController;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        FVar13.ReferenceController = FStack_120.ReferenceController;
      }
    }
    else {
      local_e0.ReferenceController = ::operator_new(0x60);
      if (local_e0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_128 = (FPakSignatureFile *)&DAT_00000010;
      }
      else {
        (local_e0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        local_128 = (FPakSignatureFile *)(local_e0.ReferenceController + 1);
        (local_e0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_e0.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFPakSignatureFile___00_SharedPointerInternals__6B_
        ;
        local_e0.ReferenceController[1]._padding_ = 1;
        local_e0.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        local_e0.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        local_e0.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
        local_e0.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
        local_e0.ReferenceController[2]._padding_ = 0;
        local_e0.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
        local_e0.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
        local_e0.ReferenceController[3]._padding_ = 0;
        local_e0.ReferenceController[4]._padding_ = 0;
        local_e0.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
        local_e0.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
        local_e0.ReferenceController[5]._padding_ = 0;
        local_e0.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
        local_e0.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
        if ((local_128 == (FPakSignatureFile *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FPakSignatureFile_const_,1> *)(*pcVar3)();
          return pTVar7;
        }
        LOCK();
        (local_e0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar13.ReferenceController = local_e0.ReferenceController;
      local_e8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_120,&local_e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar13.ReferenceController);
      if ((local_128 == (FPakSignatureFile *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FPakSignatureFile_const_,1> *)(*pcVar3)();
        return pTVar7;
      }
      FPakSignatureFile::Serialize(local_128,pFVar9);
      if ((local_128 == (FPakSignatureFile *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FPakSignatureFile_const_,1> *)(*pcVar3)();
        return pTVar7;
      }
      ::FString::FString(&local_a8,param_1);
      bVar5 = FPakSignatureFile::DecryptSignatureAndValidate(local_128,PublicKey,&local_a8);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      FVar4.ReferenceController = FStack_120.ReferenceController;
      FVar13.ReferenceController = FStack_120.ReferenceController;
      if (!bVar5) {
        local_128 = (FPakSignatureFile *)0x0;
        if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          FStack_120.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          LOCK();
          paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(FVar4.ReferenceController)->_padding_)();
            LOCK();
            paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1)
              ;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
      pTVar7 = TMapBase<FName,TSharedPtr<FPakSignatureFile_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>_>
               ::Find((TMapBase<FName,TSharedPtr<FPakSignatureFile_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>_>
                       *)&PakSignatureFileCache,(FName)local_res18.Value);
      if (pTVar7 != (TSharedPtr<FPakSignatureFile_const_,1> *)0x0) {
        __return_storage_ptr__->Object = pTVar7->Object;
        pTVar11 = (pTVar7->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
        (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        goto LAB_142a7774e;
      }
      local_88 = local_128;
      pTStack_80 = FStack_120.ReferenceController;
      if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar13.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98 = &local_res18.Value;
      local_90 = &local_88;
      TSet<TTuple<FName,TSharedPtr<FPakSignatureFile_const_,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FPakSignatureFile_const_,1>_&&>_>
                ((TSet<TTuple<FName,TSharedPtr<FPakSignatureFile_const_,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>,FDefaultSetAllocator>
                  *)&PakSignatureFileCache,&local_res18,(bool *)&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_80);
      LeaveCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
      (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Object = local_128;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar13.ReferenceController;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_142a7774e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  return __return_storage_ptr__;
}

// GetPakSigningFailureHandlerData @ 142a778b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPakSigningFailureHandlerData * __cdecl FPakPlatformFile::GetPakSigningFailureHandlerData(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Instance,4000);
      ::Instance.ChunkSignatureCheckFailedDelegate._0_8_ = 0;
      ::Instance.ChunkSignatureCheckFailedDelegate._8_8_ = 0;
      ::Instance.ChunkSignatureCheckFailedDelegate._16_8_ = ___xmm_00000000000000020000000000000000;
      ::Instance.ChunkSignatureCheckFailedDelegate._24_8_ = _UNK_150631d48;
      ::Instance.MasterSignatureTableCheckFailedDelegate._0_8_ = 0;
      ::Instance.MasterSignatureTableCheckFailedDelegate._8_8_ = 0;
      ::Instance.MasterSignatureTableCheckFailedDelegate._16_8_ =
           ___xmm_00000000000000020000000000000000;
      ::Instance.MasterSignatureTableCheckFailedDelegate._24_8_ = _UNK_150631d48;
      atexit(`FPakPlatformFile::GetPakSigningFailureHandlerData'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetPrunedFilenamesInChunk @ 142a78420

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::GetPrunedFilenamesInChunk
          (FPakPlatformFile *this,FString *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FPakFile *pFVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FPakListEntry *pFVar6;
  bool bVar7;
  undefined1 local_38 [8];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  GetMountedPaks(this,&local_30);
  iVar3 = local_30.ArrayNum;
  pFVar6 = (FPakListEntry *)(local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 0x10);
  FVar5.Data = local_30.AllocatorInstance.Data;
  do {
    if (local_30.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_38);
    }
    if ((FPakListEntry *)FVar5.Data == pFVar6) goto LAB_142a784ce;
    pFVar2 = (((FPakListEntry *)FVar5.Data)->PakFile).Reference;
    if (pFVar2 != (FPakFile *)0x0) {
      iVar4 = (pFVar2->PakFilename).Data.ArrayNum;
      iVar1 = (param_1->Data).ArrayNum;
      if (iVar4 == iVar1) {
        if (iVar4 < 2) {
LAB_142a784bf:
          FPakFile::GetPrunedFilenamesInChunk
                    ((((FPakListEntry *)FVar5.Data)->PakFile).Reference,param_2,param_3);
LAB_142a784ce:
          DestructItems<FPakPlatformFile::FPakListEntry,int>
                    ((FPakListEntry *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
          if ((FPakListEntry *)local_30.AllocatorInstance.Data != (FPakListEntry *)0x0) {
            FMemory::Free(local_30.AllocatorInstance.Data);
          }
          return;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar2->PakFilename).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar4 == 0;
      }
      else {
        bVar7 = iVar4 + iVar1 == 1;
      }
      if (bVar7) goto LAB_142a784bf;
    }
    FVar5.Data = FVar5.Data + 0x10;
  } while( true );
}

// GetPrunedFilenamesInPakFile @ 142a78510

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::GetPrunedFilenamesInPakFile
          (FPakPlatformFile *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FPakFile *pFVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FPakListEntry *pFVar6;
  bool bVar7;
  undefined1 local_res20 [8];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  GetMountedPaks(this,&local_28);
  iVar3 = local_28.ArrayNum;
  pFVar6 = (FPakListEntry *)(local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10);
  FVar5.Data = local_28.AllocatorInstance.Data;
  do {
    if (local_28.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if ((FPakListEntry *)FVar5.Data == pFVar6) goto LAB_142a785ad;
    pFVar2 = (((FPakListEntry *)FVar5.Data)->PakFile).Reference;
    if (pFVar2 != (FPakFile *)0x0) {
      iVar4 = (pFVar2->PakFilename).Data.ArrayNum;
      iVar1 = (param_1->Data).ArrayNum;
      if (iVar4 == iVar1) {
        if (iVar4 < 2) {
LAB_142a785a1:
          FPakFile::GetPrunedFilenames((((FPakListEntry *)FVar5.Data)->PakFile).Reference,param_2);
LAB_142a785ad:
          DestructItems<FPakPlatformFile::FPakListEntry,int>
                    ((FPakListEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
          if ((FPakListEntry *)local_28.AllocatorInstance.Data != (FPakListEntry *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
          return;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar2->PakFilename).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar4 == 0;
      }
      else {
        bVar7 = iVar4 + iVar1 == 1;
      }
      if (bVar7) goto LAB_142a785a1;
    }
    FVar5.Data = FVar5.Data + 0x10;
  } while( true );
}

// GetStatData @ 142a798a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */

FFileStatData * __thiscall
FPakPlatformFile::GetStatData
          (FPakPlatformFile *this,FFileStatData *__return_storage_ptr__,wchar_t *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  long64 lVar7;
  TRefCountPtr<FPakFile> TVar8;
  FPakFile *pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long64 lVar14;
  undefined1 auStack_118 [48];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_e8;
  TRefCountPtr<FPakFile> local_d8;
  undefined1 local_d0 [32];
  byte local_b0;
  undefined7 uStack_af;
  FPakEntry local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.CompressionBlocks.ArrayNum = 0;
  local_a8.CompressionBlocks.ArrayMax = 0;
  local_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
  local_a8.Size = _UNK_15076adc8;
  local_a8.UncompressedSize = 0;
  local_a8.Hash[0] = '\0';
  local_a8.Hash[1] = '\0';
  local_a8.Hash[2] = '\0';
  local_a8.Hash[3] = '\0';
  local_a8.Hash[4] = '\0';
  local_a8.Hash[5] = '\0';
  local_a8.Hash[6] = '\0';
  local_a8.Hash[7] = '\0';
  local_a8.Hash[8] = '\0';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash[0xc] = '\0';
  local_a8.Hash[0xd] = '\0';
  local_a8.Hash[0xe] = '\0';
  local_a8.Hash[0xf] = '\0';
  local_a8.Hash[0x10] = '\0';
  local_a8.Hash[0x11] = '\0';
  local_a8.Hash[0x12] = '\0';
  local_a8.Hash[0x13] = '\0';
  local_a8.CompressionBlockSize = 0;
  local_a8.CompressionMethodIndex = 0;
  local_a8.Flags = '\0';
  local_a8.Verified = false;
  local_d8.Reference = (FPakFile *)0x0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  GetMountedPaks(this,&local_e8);
  bVar4 = FindFileInPakFiles(&local_e8,param_1,&local_d8,&local_a8);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FPakListEntry *)local_e8.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (bVar4) {
    lVar7 = ((local_d8.Reference)->Timestamp).Ticks;
    (__return_storage_ptr__->CreationTime).Ticks = lVar7;
    (__return_storage_ptr__->AccessTime).Ticks = lVar7;
    (__return_storage_ptr__->ModificationTime).Ticks = lVar7;
    lVar7 = local_a8.Size;
    if (local_a8.CompressionMethodIndex != 0) {
      lVar7 = local_a8.UncompressedSize;
    }
    __return_storage_ptr__->bIsDirectory = false;
    __return_storage_ptr__->bIsReadOnly = true;
    __return_storage_ptr__->bIsValid = true;
    __return_storage_ptr__->FileSize = lVar7;
    plVar5 = &(local_d8.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      TVar8.Reference = local_d8.Reference;
      if (plVar5 == (longlong *)0x0) {
        TVar8.Reference = (FPakFile *)0x0;
      }
      if (TVar8.Reference != (FPakFile *)0x0) {
        (**(code **)(TVar8.Reference)->_padding_)(TVar8.Reference,1);
      }
    }
  }
  else {
    bVar4 = DirectoryExistsInPrunedPakFiles(this,param_1);
    lVar14 = _UNK_15076cb68;
    lVar7 = ___xmm_ffffffffffffffff0000000000000000;
    if (bVar4) {
      __return_storage_ptr__->bIsDirectory = true;
      __return_storage_ptr__->bIsValid = true;
      __return_storage_ptr__->bIsReadOnly = true;
      (__return_storage_ptr__->CreationTime).Ticks = 0;
      (__return_storage_ptr__->AccessTime).Ticks = 0;
      (__return_storage_ptr__->ModificationTime).Ticks = 0;
      __return_storage_ptr__->FileSize = -1;
    }
    else {
      local_b0 = local_b0 & 0xf8;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      ::FString::FString((FString *)&local_e8,param_1);
      bVar4 = IsNonPakFilenameAllowed(this,(FString *)&local_e8);
      if ((FPakListEntry *)local_e8.AllocatorInstance.Data != (FPakListEntry *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (bVar4) {
        puVar6 = (undefined4 *)
                 (**(code **)((longlong)*this->LowerLevel + 0x130))
                           (this->LowerLevel,local_d0,param_1);
        uVar10 = *puVar6;
        uVar11 = puVar6[1];
        uVar12 = puVar6[2];
        uVar13 = puVar6[3];
        lVar7 = *(long64 *)(puVar6 + 4);
        lVar14 = *(long64 *)(puVar6 + 6);
        uVar2 = *(undefined8 *)(puVar6 + 8);
      }
      else {
        uVar2 = CONCAT71(uStack_af,local_b0);
      }
      *(undefined4 *)&(__return_storage_ptr__->CreationTime).Ticks = uVar10;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->CreationTime).Ticks + 4) = uVar11;
      *(undefined4 *)&(__return_storage_ptr__->AccessTime).Ticks = uVar12;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->AccessTime).Ticks + 4) = uVar13;
      (__return_storage_ptr__->ModificationTime).Ticks = lVar7;
      __return_storage_ptr__->FileSize = lVar14;
      *(undefined8 *)&__return_storage_ptr__->field_0x20 = uVar2;
    }
    if (local_d8.Reference != (FPakFile *)0x0) {
      plVar5 = &(local_d8.Reference)->_padding_;
      LOCK();
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        pFVar9 = local_d8.Reference;
        if (plVar5 == (longlong *)0x0) {
          pFVar9 = (FPakFile *)0x0;
        }
        if (pFVar9 != (FPakFile *)0x0) {
          (**(code **)pFVar9->_padding_)(pFVar9,1);
        }
      }
    }
  }
  if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTimeStamp @ 142a79b20

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDateTime __thiscall FPakPlatformFile::GetTimeStamp(FPakPlatformFile *this,wchar_t *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  TRefCountPtr<FPakFile> TVar4;
  FPakFile *pFVar5;
  wchar_t *in_R8;
  TRefCountPtr<FPakFile> local_res20;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  
  local_res20.Reference = (FPakFile *)0x0;
  local_38.QuadPart = 0;
  local_30 = 0;
  GetMountedPaks(this,(TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> *)
                      &local_38.s);
  bVar2 = FindFileInPakFiles((TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> *)
                             &local_38.s,in_R8,&local_res20,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>((FPakListEntry *)local_38,(int)local_30);
  if ((FPakListEntry *)local_38.QuadPart != (FPakListEntry *)0x0) {
    FMemory::Free((void *)local_38);
  }
  if (bVar2) {
    *(long64 *)param_1 = ((local_res20.Reference)->Timestamp).Ticks;
  }
  else {
    ::FString::FString((FString *)&local_38.s,in_R8);
    bVar2 = IsNonPakFilenameAllowed(this,(FString *)&local_38.s);
    if ((FPakListEntry *)local_38.QuadPart != (FPakListEntry *)0x0) {
      FMemory::Free((void *)local_38);
    }
    pFVar5 = (FPakFile *)0x0;
    if (bVar2) {
      if (5 < (byte)LogPakFile._0_1_) {
        QueryPerformanceCounter(&local_38);
      }
      plVar3 = (longlong *)
               (**(code **)((longlong)*this->LowerLevel + 0xb0))(this->LowerLevel,&local_38);
      pFVar5 = (FPakFile *)*plVar3;
      if (5 < (byte)LogPakFile._0_1_) {
        QueryPerformanceCounter(&local_38);
        UE::Logging::Private::BasicLog<6>
                  (&`public:_virtual_struct_FDateTime___cdecl_FPakPlatformFile::GetTimeStamp(wchar_t_const*___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
    }
    *(FPakFile **)param_1 = pFVar5;
    if (local_res20.Reference == (FPakFile *)0x0) {
      return (FDateTime)(long64)param_1;
    }
  }
  plVar3 = &(local_res20.Reference)->_padding_;
  LOCK();
  lVar1 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar1 == 1) {
    TVar4.Reference = local_res20.Reference;
    if (plVar3 == (longlong *)0x0) {
      TVar4.Reference = (FPakFile *)0x0;
    }
    if (TVar4.Reference != (FPakFile *)0x0) {
      (**(code **)(TVar4.Reference)->_padding_)(TVar4.Reference,1);
    }
  }
  return (FDateTime)(long64)param_1;
}

// GetTimeStampPair @ 142a79cf0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::GetTimeStampPair
          (FPakPlatformFile *this,wchar_t *param_1,wchar_t *param_2,FDateTime *param_3,
          FDateTime *param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  long64 lVar6;
  long64 lVar7;
  TRefCountPtr<FPakFile> TVar8;
  ForAnyElementType FVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  TRefCountPtr<FPakFile> local_50;
  FString local_48;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_38;
  
  lVar7 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Reference = (FPakFile *)0x0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetMountedPaks(this,&local_38);
  FindFileInPakFiles(&local_38,param_1,(TRefCountPtr<FPakFile> *)&local_48,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FPakListEntry *)local_38.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetMountedPaks(this,&local_38);
  FindFileInPakFiles(&local_38,param_2,&local_50,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FPakListEntry *)local_38.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  FVar9.Data = local_48.Data.AllocatorInstance.Data;
  TVar8.Reference = local_50.Reference;
  if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    lVar6 = lVar7;
    if (local_50.Reference == (FPakFile *)0x0) {
      ::FString::FString(&local_48,param_1);
      bVar2 = false;
      bVar5 = IsNonPakFilenameAllowed(this,&local_48);
      if (bVar5) {
        ::FString::FString((FString *)&local_38,param_2);
        bVar2 = true;
        bVar5 = IsNonPakFilenameAllowed(this,(FString *)&local_38);
        if (!bVar5) goto LAB_142a79e11;
        bVar4 = true;
LAB_142a79e1a:
        bVar5 = bVar4;
        if ((FPakListEntry *)local_38.AllocatorInstance.Data != (FPakListEntry *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
      else {
LAB_142a79e11:
        bVar5 = false;
        bVar4 = false;
        if (bVar2) goto LAB_142a79e1a;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        (**(code **)((longlong)*this->LowerLevel + 0x1b8))
                  (this->LowerLevel,param_1,param_2,param_3,param_4);
      }
      else {
        param_3->Ticks = 0;
        param_4->Ticks = 0;
      }
      goto LAB_142a79e9c;
    }
  }
  else {
    lVar6 = *(long64 *)(local_48.Data.AllocatorInstance.Data + 0x2e0);
  }
  param_3->Ticks = lVar6;
  if (local_50.Reference != (FPakFile *)0x0) {
    lVar7 = ((local_50.Reference)->Timestamp).Ticks;
  }
  param_4->Ticks = lVar7;
LAB_142a79e9c:
  if (TVar8.Reference != (FPakFile *)0x0) {
    plVar10 = &(TVar8.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      if (plVar10 == (longlong *)0x0) {
        TVar8.Reference = (FPakFile *)0x0;
      }
      if (TVar8.Reference != (FPakFile *)0x0) {
        (**(code **)(TVar8.Reference)->_padding_)(TVar8.Reference,1);
      }
    }
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    pFVar11 = FVar9.Data + 8;
    LOCK();
    iVar1 = *(int *)pFVar11;
    *(int *)pFVar11 = *(int *)pFVar11 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (pFVar11 == (FScriptContainerElement *)0x0) {
        FVar9.Data = (FScriptContainerElement *)(FPakFile *)0x0;
      }
      if ((FPakFile *)FVar9.Data != (FPakFile *)0x0) {
        (**(code **)((FPakFile *)FVar9.Data)->_padding_)(FVar9.Data,1);
      }
    }
  }
  return;
}

// HandleMountCommand @ 142a7b500

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::HandleMountCommand(FPakPlatformFile *this,wchar_t *param_1,FOutputDevice *param_2)

{
  wchar_t *local_res10 [3];
  FString local_48;
  FString local_38;
  FPakMountArgs local_28;
  
  local_res10[0] = param_1;
  FParse::Token(&local_48,local_res10,false);
  if (1 < local_48.Data.ArrayNum) {
    FParse::Token(&local_38,local_res10,false);
    local_28.bLoadIndex = true;
    local_28.PakOrder = 0;
    local_28.Path = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    if (local_38.Data.ArrayNum < 2) {
      local_28.Path = (wchar_t *)(FScriptContainerElement *)0x0;
    }
    local_28.MountOptions.MountFlags = None;
    local_28.PakFilename = L"";
    if (local_48.Data.ArrayNum != 0) {
      local_28.PakFilename = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    }
    Mount(this,&local_28,(FIoStatus *)0x0,(FPakListEntry *)0x0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleMountPakDelegate @ 142a7b5b0

/* WARNING: Enum "EVersion": Some values do not have unique names */

IPakFile * __thiscall
FPakPlatformFile::HandleMountPakDelegate(FPakPlatformFile *this,FString *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  IPakFile *pIVar5;
  wchar_t *pwVar6;
  undefined1 local_38 [8];
  TRefCountPtr<FPakFile> TStack_30;
  FPakMountArgs local_28;
  
  pwVar6 = L"";
  FGenericPlatformMisc::LowLevelOutputDebugStringf(L"Mounting pak file: %s \n");
  if (param_2 == -1) {
    local_38 = (undefined1  [8])(param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    TStack_30.Reference._0_4_ = iVar2 + -1;
    if (iVar2 == 0) {
      TStack_30.Reference._0_4_ = 0;
    }
    param_2 = GetPakOrderFromPakFilePath((TStringView<wchar_t> *)local_38);
  }
  local_38 = (undefined1  [8])((ulonglong)local_38 & 0xffffffff00000000);
  TStack_30.Reference = (FPakFile *)0x0;
  if ((param_1->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_28.Path = (wchar_t *)0x0;
  local_28.MountOptions.MountFlags = None;
  local_28.bLoadIndex = true;
  local_28.PakFilename = pwVar6;
  local_28.PakOrder = param_2;
  bVar4 = Mount(this,&local_28,(FIoStatus *)0x0,(FPakListEntry *)local_38);
  pIVar5 = (IPakFile *)0x0;
  if ((bVar4) &&
     (pIVar5 = (IPakFile *)&(TStack_30.Reference)->_padding_, TStack_30.Reference == (FPakFile *)0x0
     )) {
    pIVar5 = (IPakFile *)0x0;
  }
  if (TStack_30.Reference != (FPakFile *)0x0) {
    plVar1 = &(TStack_30.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(TStack_30.Reference)->_padding_)(TStack_30.Reference,1);
    }
  }
  return pIVar5;
}

// HandlePakCorruptCommand @ 142a7b6e0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FPakPlatformFile::HandlePakCorruptCommand
          (FPakPlatformFile *this,wchar_t *param_1,FOutputDevice *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  FPakPrecacher *pFVar6;
  bool bVar7;
  byte *pbVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  LPCRITICAL_SECTION local_30;
  
  if (PakPrecacherSingleton == (FPakPrecacher *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("PakPrecacherSingleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x33f,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar6 = PakPrecacherSingleton;
  local_30 = (LPCRITICAL_SECTION)&PakPrecacherSingleton->CachedFilesScopeLock;
  if (local_30 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(local_30);
    iVar2 = (pFVar6->CachedPakData).ArrayNum;
    pFVar10 = (pFVar6->CachedPakData).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar2 * 0x98;
    while( true ) {
      if ((pFVar6->CachedPakData).ArrayNum != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FPakPrecacher::FPakData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar10 == pFVar9) break;
      if (*(longlong *)(pFVar10 + 0x88) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar4 = *(longlong *)(pFVar10 + 0x88);
      pbVar8 = *(byte **)(lVar4 + 0x40);
      iVar3 = *(int *)(lVar4 + 0x48);
      pbVar1 = pbVar8 + (longlong)iVar3 * 4;
      while( true ) {
        if (*(int *)(lVar4 + 0x48) != iVar3) {
          local_38[0] = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_38);
        }
        if (pbVar8 == pbVar1) break;
        *pbVar8 = *pbVar8 | 1;
        pbVar8 = pbVar8 + 4;
      }
      pFVar10 = pFVar10 + 0x98;
    }
    if (local_30 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(local_30);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandlePakListCommand @ 142a7b850

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::HandlePakListCommand
          (FPakPlatformFile *this,wchar_t *param_1,FOutputDevice *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  FPakFile *pFVar4;
  FPakListEntry *pFVar5;
  ForAnyElementType FVar6;
  undefined1 local_res20 [8];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  GetMountedPaks(this,&local_28);
  iVar3 = local_28.ArrayNum;
  pFVar5 = (FPakListEntry *)(local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10);
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if ((FPakListEntry *)FVar6.Data == pFVar5) break;
    pFVar4 = (((FPakListEntry *)FVar6.Data)->PakFile).Reference;
    if (pFVar4 != (FPakFile *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    FOutputDevice::LogfImpl(param_2,L"%s Mounted to %s");
    if (pFVar4 != (FPakFile *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar4 = (FPakFile *)0x0;
        }
        if (pFVar4 != (FPakFile *)0x0) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    FVar6.Data = FVar6.Data + 0x10;
  }
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FPakListEntry *)local_28.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// HandleReloadPakReadersCommand @ 142a7b980

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::HandleReloadPakReadersCommand
          (FPakPlatformFile *this,wchar_t *param_1,FOutputDevice *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  FPakListEntry *pFVar3;
  undefined1 local_res20 [8];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  iVar1 = local_18.ArrayNum;
  pFVar3 = (FPakListEntry *)(local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x10);
  FVar2.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if ((FPakListEntry *)FVar2.Data == pFVar3) break;
    FPakFile::RecreatePakReaders
              ((((FPakListEntry *)FVar2.Data)->PakFile).Reference,this->LowerLevel);
    FVar2.Data = FVar2.Data + 0x10;
  }
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// HandleUnmountCommand @ 142a7bd70

void __thiscall
FPakPlatformFile::HandleUnmountCommand
          (FPakPlatformFile *this,wchar_t *param_1,FOutputDevice *param_2)

{
  wchar_t *local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  FParse::Token(&local_18,local_res10,false);
  if (1 < local_18.Data.ArrayNum) {
    Unmount(this,(wchar_t *)local_18.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleUnmountPakDelegate @ 142a7bdc0

bool __thiscall FPakPlatformFile::HandleUnmountPakDelegate(FPakPlatformFile *this,FString *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  pwVar2 = L"";
  FGenericPlatformMisc::LowLevelOutputDebugStringf(L"Unmounting pak file: %s \n");
  if ((param_1->Data).ArrayNum != 0) {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = Unmount(this,pwVar2);
  return bVar1;
}

// Initialize @ 142a7dc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FPakPlatformFile::Initialize(FPakPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  atomic<int> *paVar1;
  TSharedPtr<FFilePackageStoreBackend,1> *pTVar2;
  atomic<int> aVar3;
  code *pcVar4;
  longlong *plVar5;
  TUniquePtr<FPakExec,TDefaultDelete<FPakExec>_> TVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  bool bVar10;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar11;
  TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this_01;
  wchar_t *pwVar12;
  FPlatformFileManager *this_02;
  IPlatformFile *pIVar13;
  FIoDispatcher *this_03;
  IPlatformIoDispatcher *pIVar14;
  FSharedReferencer<1> FVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TSharedRef<FFileIoStore,1> *pTVar18;
  FPackageStore *this_04;
  IFileIoDispatcherBackend *pIVar19;
  TMulticastDelegate<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy> *this_05;
  TUniquePtr<FPakExec,TDefaultDelete<FPakExec>_> this_06;
  undefined8 *puVar20;
  ulong64 uVar21;
  TDelegate<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
  *this_07;
  undefined ***pppuVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  TReferenceControllerBase<1> *pTVar25;
  int iVar26;
  FFilePackageStoreBackend *pFVar27;
  bool bVar28;
  undefined1 auStackY_3b8 [32];
  FLLMScope local_374;
  FString local_370;
  FString local_360;
  TArray<FString,TSizedDefaultAllocator<32>_> local_350;
  FFilePackageStoreBackend *local_340;
  FSharedReferencer<1> FStack_338;
  TReferenceControllerBase<1> *local_330;
  FSharedReferencer<1> local_328;
  FFilePackageStoreBackend *local_320;
  FSharedReferencer<1> FStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300 [8];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FIoDispatcher *local_2b8;
  FMemScope local_2b0;
  TSharedRef<IPackageStoreBackend,1> local_2a8;
  TSharedRef<IIoDispatcherBackend,1> local_298;
  FDestructionSentinel local_288;
  undefined8 local_270;
  FDestructionSentinel local_268;
  undefined8 local_250;
  FDestructionSentinel local_248;
  undefined8 local_230;
  FDestructionSentinel local_228;
  undefined8 local_210;
  FDestructionSentinel local_208;
  undefined8 local_1f0;
  FDestructionSentinel local_1e8;
  undefined1 *local_1d0;
  undefined1 local_1c8 [16];
  TWeakPtr<FTSTicker::FElement,1> local_1b8;
  FString local_1a8;
  TSharedRef<FFileIoStore,1> local_198;
  FString local_188;
  FScopedBootTiming local_178;
  FReadAccessScope local_160;
  code *local_148 [2];
  undefined **local_138;
  FPakPlatformFile *local_130;
  undefined ***local_120;
  ForAnyElementType local_118;
  undefined8 uStack_110;
  ForAnyElementType local_108;
  undefined8 uStack_100;
  FIoStatus local_f8;
  FIoContainerHeader local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if (4 < (byte)LogPakFile._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name5613,L"FileSystem/PakFile");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_374,LLMScope_Name5613,false,None,Default,true);
  FMemScope::FMemScope(&local_2b0,&LLMScope_Name5613,true);
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5614,"FPakPlatformFile::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
               ,0x15ee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5614);
  }
  FScopedBootTiming::FScopedBootTiming(&local_178,"FPakPlatformFile::Initialize");
  if ((param_1 == (IPlatformFile *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Inner != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x15f0,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  this->LowerLevel = param_1;
  this_00 = FTSTicker::GetCoreTicker();
  local_138 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FPakPlatformFile::Initialize'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  local_148[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPakPlatformFile::Initialize'::__l2::<lambda_1>,bool,float>::
                 Call;
  pTVar25 = (TReferenceControllerBase<1> *)0x0;
  local_120 = (undefined ***)0x0;
  local_130 = this;
  pTVar11 = FTSTicker::AddTicker
                      (this_00,&local_1b8,L"RetirePakReaders",__real_3f800000,
                       (TUniqueFunction<bool___cdecl(float)> *)local_148);
  if (&this->RetireReadersHandle != pTVar11) {
    (this->RetireReadersHandle).Object = pTVar11->Object;
    pTVar11->Object = (FElement *)0x0;
    pTVar16 = (this->RetireReadersHandle).WeakReferenceCount.ReferenceController;
    (this->RetireReadersHandle).WeakReferenceCount.ReferenceController =
         (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar16->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
      }
    }
  }
  if (local_1b8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_1b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_1b8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_1b8.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_148[0] != (code *)0x0) {
    pppuVar22 = &local_138;
    if (local_120 != (undefined ***)0x0) {
      pppuVar22 = local_120;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  ::FName::FName(&local_2e8,L"uasset");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->ExcludedNonPakExtensions,(FName *)local_300,(bool *)&local_2e8);
  ::FName::FName(&local_2e0,L"umap");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->ExcludedNonPakExtensions,(FName *)(local_300 + 4),(bool *)&local_2e0);
  ::FName::FName(&local_2d8,L"ubulk");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->ExcludedNonPakExtensions,(FName *)local_2f8,(bool *)&local_2d8);
  ::FName::FName(&local_2d0,L"uexp");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->ExcludedNonPakExtensions,(FName *)(local_2f8 + 4),(bool *)&local_2d0);
  ::FName::FName(&local_2c8,L"uptnl");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->ExcludedNonPakExtensions,(FName *)local_2f0,(bool *)&local_2c8);
  ::FName::FName(&local_2c0,L"ushaderbytecode");
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&this->ExcludedNonPakExtensions,(FName *)(local_2f0 + 4),(bool *)&local_2c0);
  this_01 = FCoreDelegates::GetPakSigningKeysDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_160);
  if (((*(int *)&this_01->field_0x10 == 0) || (*(longlong **)&this_01->field_0x8 == (longlong *)0x0)
      ) || (cVar9 = (**(code **)(**(longlong **)&this_01->field_0x8 + 0x38))(), cVar9 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_160);
  this->bSigned = bVar7;
  pwVar12 = FCommandLine::Get();
  bVar10 = FParse::Param(pwVar12,L"fileopenlog");
  local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bSigned = (bool)(!bVar10 & bVar7);
  FVar23 = GMountStartupPaksWildCard.Data.AllocatorInstance;
  iVar26 = GMountStartupPaksWildCard.Data.ArrayNum;
  local_360.Data.ArrayNum = iVar26;
  if (iVar26 == 0) {
    local_360.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar26,0,(ForAnyElementType *)&local_360,iVar26,&local_360.Data.ArrayMax);
    memcpy(local_360.Data.AllocatorInstance.Data,FVar23.Data,(longlong)iVar26 * 2);
  }
  pwVar12 = FCommandLine::Get();
  FParse::Value(pwVar12,L"StartupPaksWildcard=",&local_360,true,(wchar_t **)0x0);
  pwVar12 = FCommandLine::Get();
  bVar7 = FParse::Param(pwVar12,L"LookLooseFirst");
  this->bLookLooseFirst = bVar7;
  bVar7 = FIoDispatcher::IsInitialized();
  if (bVar7) {
    FPaths::ProjectContentDir(&local_1a8);
    ::FString::PrintfImpl(&local_370,L"%sPaks/global.utoc");
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    this_02 = FPlatformFileManager::Get();
    pIVar13 = FPlatformFileManager::GetPlatformFile(this_02);
    cVar9 = (**(code **)((longlong)*pIVar13 + 0x78))(pIVar13);
    if (cVar9 != '\0') {
      bVar7 = ShouldCheckPak();
      if (bVar7) {
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_370.Data.ArrayNum != 0) {
          FVar23.Data = local_370.Data.AllocatorInstance.Data;
        }
        bVar7 = CheckIoStoreContainerBlockSignatures((wchar_t *)FVar23.Data);
        if ((!bVar7) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<5195954862361155098>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                               ,0x161a,"CheckIoStoreContainerBlockSignatures(*GlobalUTocPath)"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
      }
      this_03 = FIoDispatcher::Get();
      local_2b8 = this_03;
      pIVar14 = UE::FPlatformIoDispatcher::TryGet();
      if (pIVar14 == (IPlatformIoDispatcher *)0x0) {
        pTVar18 = CreateIoDispatcherFileBackend(&local_198);
        if (pTVar18->Object != (FFileIoStore *)0x0) {
          pTVar25 = (TReferenceControllerBase<1> *)&pTVar18->Object->_padding_;
        }
        local_328.ReferenceController = (pTVar18->SharedReferenceCount).ReferenceController;
        if (local_328.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_328.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_328.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_330 = pTVar25;
        if (&this->IoDispatcherFileBackend !=
            (TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1> *)&local_330) {
          (this->IoDispatcherFileBackend).Object = (IFileIoDispatcherBackend *)pTVar25;
          local_330 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->IoDispatcherFileBackend).SharedReferenceCount,&local_328);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_328.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.SharedReferenceCount.ReferenceController);
      }
      else {
        FVar15.ReferenceController = ::operator_new(0x68);
        if (FVar15.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          local_340 = ___xmm_00000000000000000000000000000010;
          pFVar27 = (FFilePackageStoreBackend *)&DAT_00000010;
          FVar15.ReferenceController = _UNK_150651568;
        }
        else {
          (FVar15.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          (FVar15.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          (FVar15.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFFileIoDispatcherBackend_IoStore_UE___00_SharedPointerInternals__6B_
          ;
          FVar15.ReferenceController[1]._padding_ =
               (longlong)&___7FFileIoDispatcherBackend_IoStore_UE__6B_;
          FVar15.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
          FVar15.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
          FVar15.ReferenceController[2]._padding_ = 0;
          FVar15.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
          FVar15.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
          FVar15.ReferenceController[3]._padding_ = 0;
          FVar15.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
          FVar15.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
          *(undefined4 *)&FVar15.ReferenceController[4]._padding_ = 1;
          FVar15.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
          FVar15.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
          pTVar16 = ::operator_new(0x48008);
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            memset((void *)((longlong)&pTVar16->_padding_ + 4),0,0x48004);
            lVar24 = 0x1000;
            *(undefined4 *)&pTVar16->_padding_ = 0;
            pTVar17 = pTVar16;
            do {
              pTVar17 = (TReferenceControllerBase<1> *)&pTVar17[4].SharedReferenceCount;
              *(undefined8 *)&((atomic<unsigned_int> *)pTVar17)->field_0x0 = 0;
              lVar24 = lVar24 + -1;
              pTVar25 = pTVar16;
            } while (lVar24 != 0);
          }
          *(TReferenceControllerBase<1> **)&FVar15.ReferenceController[4].SharedReferenceCount =
               pTVar25;
          pFVar27 = (FFilePackageStoreBackend *)(FVar15.ReferenceController + 1);
          FVar15.ReferenceController[5]._padding_ = 0;
          FVar15.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
          FVar15.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
          *(undefined1 *)&FVar15.ReferenceController[6]._padding_ = 0;
          if ((pFVar27 == (FFilePackageStoreBackend *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          LOCK();
          (FVar15.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          pTVar25 = FVar15.ReferenceController;
          local_340 = pFVar27;
        }
        FStack_338.ReferenceController = FVar15.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25)
        ;
        if (&this->IoDispatcherFileBackend !=
            (TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1> *)&local_340) {
          (this->IoDispatcherFileBackend).Object = (IFileIoDispatcherBackend *)pFVar27;
          local_340 = (FFilePackageStoreBackend *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->IoDispatcherFileBackend).SharedReferenceCount,&FStack_338);
          FVar15.ReferenceController = FStack_338.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar15.ReferenceController);
        this_03 = local_2b8;
      }
      pTVar25 = (TReferenceControllerBase<1> *)0x0;
      if (((this->IoDispatcherFileBackend).Object == (IFileIoDispatcherBackend *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pIVar19 = (this->IoDispatcherFileBackend).Object;
      pTVar16 = (this->IoDispatcherFileBackend).SharedReferenceCount.ReferenceController;
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar19 == (IFileIoDispatcherBackend *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_298.Object = (IIoDispatcherBackend *)pIVar19;
      local_298.SharedReferenceCount.ReferenceController = pTVar16;
      FIoDispatcher::Mount(this_03,&local_298,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      pTVar16 = ::operator_new(0x130);
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        local_320 = ___xmm_00000000000000000000000000000010;
        pFVar27 = (FFilePackageStoreBackend *)&DAT_00000010;
        FStack_318.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar16->SharedReferenceCount = (atomic<int>)0x1;
        pTVar16->WeakReferenceCount = (atomic<int>)0x1;
        pTVar16->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFFilePackageStoreBackend___00_SharedPointerInternals__6B_
        ;
        memset(pTVar16 + 2,0,0x110);
        pTVar16[1]._padding_ = (longlong)&___7FFilePackageStoreBackend__6B_;
        pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar16 + 2),4000);
        pTVar16[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar16[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[6].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[6].WeakReferenceCount = (atomic<int>)0x0;
        pTVar16[7]._padding_ = 0;
        pTVar16[7].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[7].WeakReferenceCount = (atomic<int>)0x0;
        pTVar16[8].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[8].WeakReferenceCount = (atomic<int>)0x0;
        pTVar16[10].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[10].WeakReferenceCount = (atomic<int>)0x0;
        pTVar16[5]._padding_ = 0;
        pTVar16[6]._padding_ = 0;
        pTVar16[8]._padding_ = 0;
        pTVar16[9]._padding_ = 0;
        *(undefined4 *)&pTVar16[0xb]._padding_ = 0;
        *(undefined4 *)((longlong)&pTVar16[0xb]._padding_ + 4) = 0x80;
        pTVar16[0xb].WeakReferenceCount = (atomic<int>)0x0;
        pTVar16[0xb].SharedReferenceCount = (atomic<int>)0xffffffff;
        pTVar16[0xc].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[0xc].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)&pTVar16[0xd]._padding_ = 0;
        pTVar16[0xd].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[0xd].WeakReferenceCount = (atomic<int>)0x0;
        pTVar16[0xf].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[0xf].WeakReferenceCount = (atomic<int>)0x0;
        pTVar16[0xe]._padding_ = 0;
        *(undefined4 *)&pTVar16[0x10]._padding_ = 0;
        *(undefined4 *)((longlong)&pTVar16[0x10]._padding_ + 4) = 0x80;
        pTVar16[0x10].WeakReferenceCount = (atomic<int>)0x0;
        pTVar16[0x10].SharedReferenceCount = (atomic<int>)0xffffffff;
        pTVar16[0x11].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[0x11].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)&pTVar16[0x12]._padding_ = 0;
        pFVar27 = (FFilePackageStoreBackend *)(pTVar16 + 1);
        *(undefined1 *)&pTVar16[0x12].SharedReferenceCount = 0;
        if ((pFVar27 == (FFilePackageStoreBackend *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
        FStack_318.ReferenceController = pTVar16;
        pTVar25 = pTVar16;
        local_320 = pFVar27;
      }
      pTVar2 = &this->PackageStoreBackend;
      if (pTVar2 != (TSharedPtr<FFilePackageStoreBackend,1> *)&local_320) {
        pTVar2->Object = pFVar27;
        local_320 = (FFilePackageStoreBackend *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->PackageStoreBackend).SharedReferenceCount,&FStack_318);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_318.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      this_04 = FPackageStore::Get();
      if ((pTVar2->Object == (FFilePackageStoreBackend *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar27 = pTVar2->Object;
      pTVar25 = (this->PackageStoreBackend).SharedReferenceCount.ReferenceController;
      if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar27 == (FFilePackageStoreBackend *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2a8.Object = (IPackageStoreBackend *)pFVar27;
      local_2a8.SharedReferenceCount.ReferenceController = pTVar25;
      FPackageStore::Mount(this_04,&local_2a8,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      pIVar19 = TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1>::operator->
                          (&this->IoDispatcherFileBackend);
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_370.Data.ArrayNum != 0) {
        FVar23.Data = local_370.Data.AllocatorInstance.Data;
      }
      local_118.Data = (FScriptContainerElement *)0x0;
      uStack_110._0_4_ = 0;
      uStack_110._4_4_ = 0;
      local_310 = 0;
      local_108.Data = (FScriptContainerElement *)0x0;
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
      local_308 = 0;
      (**(code **)((longlong)*pIVar19 + 0x68))(pIVar19,&local_f8,FVar23.Data,0);
      if (local_f8.ErrorCode == Ok) {
        if (3 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        this_05 = FIoDispatcher::OnSignatureError(this_03);
        TMulticastDelegateRegistration<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>
        ::AddLambda<_FPakPlatformFile::Initialize_::__l47::<lambda_2>_>
                  ((TMulticastDelegateRegistration<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>
                    *)this_05,(<lambda_2> *)(local_1c8 + 8));
      }
      else if (1 < (byte)LogPakFile._0_1_) {
        FIoStatus::ToString(&local_f8,&local_188);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      FIoStatus::operator=(&local_f8,Unknown);
      if (local_f8.ErrorCode == Ok) {
        FIoContainerHeader::~FIoContainerHeader(&local_e8);
      }
      FIoStatus::~FIoStatus(&local_f8);
    }
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
    }
  }
  local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_350.ArrayNum = 0;
  local_350.ArrayMax = 0;
  pwVar12 = FCommandLine::Get();
  GetPakFolders(pwVar12,&local_350);
  MountAllPakFiles(this,&local_350,&local_360);
  this_06.Ptr = ::operator_new(0x10);
  if (this_06.Ptr == (FPakExec *)0x0) {
    this_06.Ptr = (FPakExec *)0x0;
  }
  else {
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)this_06.Ptr);
    (this_06.Ptr)->PlatformFile = this;
    (this_06.Ptr)->_padding_ = (longlong)&___7FPakExec__6B_;
  }
  TVar6.Ptr = GPakExec.Ptr;
  if (GPakExec.Ptr != (FPakExec *)0x0) {
    plVar5 = &(GPakExec.Ptr)->_padding_;
    GPakExec.Ptr = this_06.Ptr;
    (**(code **)*plVar5)(TVar6.Ptr,1);
    this_06.Ptr = GPakExec.Ptr;
  }
  GPakExec.Ptr = this_06.Ptr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnMountAllPakFiles,(FWriteAccessScope *)&local_268);
  local_250 = 0x154f06880;
  puVar20 = UE::Core::Private::DelegateAllocate
                      (0x28,(FDelegateAllocation *)&FCoreDelegates::OnMountAllPakFiles.field_0x8);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6AHAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar21;
    *puVar20 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AHAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[4] = MountAllPakFiles;
    puVar20[3] = this;
  }
  if (local_268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FCoreDelegates::MountPak,
             (FWriteAccessScope *)&local_248);
  local_230 = 0x154f06898;
  puVar20 = UE::Core::Private::DelegateAllocate
                      (0x28,(FDelegateAllocation *)&FCoreDelegates::MountPak.field_0x8);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6APEAVIPakFile__AEBVFString__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar21;
    *puVar20 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6APEAVIPakFile__AEBVFString__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[4] = HandleMountPakDelegate;
    puVar20[3] = this;
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FCoreDelegates::MountPaksEx,
             (FWriteAccessScope *)&local_228);
  local_210 = 0x154f068b0;
  puVar20 = UE::Core::Private::DelegateAllocate
                      (0x20,(FDelegateAllocation *)&FCoreDelegates::MountPaksEx.field_0x8);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_NV__TArrayView_UFMountPaksExArgs_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar21;
    *puVar20 = &TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`2'::<lambda_3>_>
                ::_vftable_;
    puVar20[3] = this;
  }
  if (local_228.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FCoreDelegates::OnUnmountPak
             ,(FWriteAccessScope *)&local_288);
  local_270 = 0x154f068c8;
  puVar20 = UE::Core::Private::DelegateAllocate
                      (0x28,(FDelegateAllocation *)&FCoreDelegates::OnUnmountPak.field_0x8);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar21;
    *puVar20 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6A_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[4] = HandleUnmountPakDelegate;
    puVar20[3] = this;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnOptimizeMemoryUsageForMountedPaks,(FWriteAccessScope *)&local_208);
  local_1f0 = 0x154f068f8;
  puVar20 = UE::Core::Private::DelegateAllocate
                      (0x28,(FDelegateAllocation *)
                            &FCoreDelegates::OnOptimizeMemoryUsageForMountedPaks.field_0x8);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar21;
    *puVar20 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = this;
    puVar20[4] = OptimizeMemoryUsageForMountedPaks;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  this_07 = FCoreInternalDelegates::GetCurrentlyMountedPaksDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_07,
             (FWriteAccessScope *)&local_1e8);
  local_1d0 = &this_07->field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_1d0);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFMountedPakInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar21;
    *puVar20 = &TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`2'::<lambda_4>_>
                ::_vftable_;
    puVar20[3] = this;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FPakPlatformFile>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnFEngineLoopInitComplete,(FPakPlatformFile *)local_1c8,
             (pmf_a0f8367f)this);
  pIVar13 = this->LowerLevel;
  DestructItems<FString,int>((FString *)local_350.AllocatorInstance.Data,local_350.ArrayNum);
  if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.AllocatorInstance.Data);
  }
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_178);
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_2b0);
  FLLMScope::~FLLMScope(&local_374);
  return pIVar13 != (IPlatformFile *)0x0;
}

// InitializeNewAsyncIO @ 142a7eb80

/* WARNING: Removing unreachable block (ram,0x000142a7ec09) */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakPlatformFile::InitializeNewAsyncIO(FPakPlatformFile *this)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this_00;
  FPakPrecacher *pFVar5;
  
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar3) {
    pwVar4 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar4,L"FileOpenLog");
    if (!bVar3) {
      this_00 = FCoreDelegates::GetPakSigningKeysDelegate();
      bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      pIVar1 = this->LowerLevel;
      if (PakPrecacherSingleton == (FPakPrecacher *)0x0) {
        pFVar5 = ::operator_new(0x2c8);
        if (pFVar5 == (FPakPrecacher *)0x0) {
          pFVar5 = (FPakPrecacher *)0x0;
        }
        else {
          pFVar5 = FPakPrecacher::FPakPrecacher(pFVar5,pIVar1,bVar3);
        }
        LOCK();
        bVar3 = PakPrecacherSingleton != (FPakPrecacher *)0x0;
        if (bVar3) {
          pFVar5 = PakPrecacherSingleton;
        }
        PakPrecacherSingleton = pFVar5;
        UNLOCK();
        if ((bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!FPlatformAtomics::InterlockedCompareExchangePointer((void**)& PakPrecacherSingleton, new FPakPrecacher(InLowerLevel, bInEnableSignatureChecks), nullptr)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                               ,799,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("PakPrecacherSingleton",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                               ,0x321,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      return;
    }
  }
  if (3 < (byte)LogPakFile._0_1_) {
    pwVar4 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar4,L"FileOpenLog");
    if (bVar3) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
  }
  GPakCache_Enable = 0;
  return;
}

// IsNonPakFilenameAllowed @ 142a7f0c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPakPlatformFile::IsNonPakFilenameAllowed(FPakPlatformFile *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  FReadAccessScope *this_00;
  ForElementType<FSetElementId> FVar11;
  longlong *plVar12;
  uint uVar13;
  wchar_t *pwVar15;
  longlong *plVar16;
  char cVar17;
  FName local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  longlong *plVar14;
  
  cVar17 = true;
  pwVar15 = L"";
  if ((this->PakFiles).ArrayNum != 0) {
    pFVar9 = FPaths::GetExtension(&local_68,param_1,false);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,pwVar10);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar7 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
    if (*(int *)&(this->ExcludedNonPakExtensions).Elements.field_0x8 !=
        *(int *)&(this->ExcludedNonPakExtensions).Elements.field_0x34) {
      FVar11 = (this->ExcludedNonPakExtensions).Hash.SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&(this->ExcludedNonPakExtensions).Hash;
      }
      iVar8 = *(int *)((longlong)FVar11 +
                      (ulonglong)
                      ((this->ExcludedNonPakExtensions).HashSize - 1U & uVar7 + local_res8.Number) *
                      4);
      if (iVar8 != -1) {
        lVar2 = *(longlong *)&(this->ExcludedNonPakExtensions).Elements;
        do {
          if (*(FName *)(lVar2 + (longlong)iVar8 * 0x10) == local_res8) goto LAB_142a7f19a;
          iVar8 = *(int *)(lVar2 + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_142a7f19a:
    cVar17 = iVar8 == -1;
    if ((6 < (byte)LogPakFile._0_1_) && (iVar8 != -1)) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
  }
  iVar8 = (this->IniFileExtension).Data.ArrayNum;
  plVar12 = (longlong *)0x0;
  if (iVar8 == 0) {
    pwVar10 = L"";
    uVar7 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(this->IniFileExtension).Data.AllocatorInstance.Data;
    uVar7 = iVar8 - 1;
  }
  bVar4 = ::FString::EndsWith(param_1,pwVar10,uVar7,IgnoreCase);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (!bVar4) goto LAB_142a7f3bb;
  pwVar10 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar10,L"-iniFile=",&local_78,false,(wchar_t **)0x0);
  if (bVar4) {
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_78,&local_98,L",",true);
    plVar14 = plVar12;
    plVar16 = plVar12;
    iVar8 = local_98.ArrayNum;
    if (0 < local_98.ArrayNum) {
      do {
        uVar13 = (uint)plVar14;
        uVar7 = 0;
        if ((int)uVar13 < iVar8) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar8 = local_98.ArrayNum;
        }
        iVar1 = (param_1->Data).ArrayNum;
        if (iVar1 == *(int *)(local_98.AllocatorInstance.Data + 8 + (longlong)plVar16)) {
          if (1 < iVar1) {
            iVar8 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                               *(wchar_t **)(local_98.AllocatorInstance.Data + (longlong)plVar16));
            bVar4 = iVar8 == 0;
            iVar8 = local_98.ArrayNum;
            goto LAB_142a7f2e8;
          }
LAB_142a7f2ff:
          cVar17 = true;
          if (4 < (byte)LogPakFile._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            iVar8 = local_98.ArrayNum;
          }
          break;
        }
        bVar4 = iVar1 + *(int *)(local_98.AllocatorInstance.Data + 8 + (longlong)plVar16) == 1;
LAB_142a7f2e8:
        if (bVar4) goto LAB_142a7f2ff;
        plVar14 = (longlong *)(ulonglong)(uVar13 + 1);
        plVar16 = plVar16 + 2;
      } while ((int)(uVar13 + 1) < iVar8);
    }
    DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,iVar8);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  if ((bool)cVar17 != false) goto LAB_142a7f3bb;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  pwVar10 = FCommandLine::Get();
  FParse::Value(pwVar10,L"-cvarsini=",&local_88,true,(wchar_t **)0x0);
  if (1 < local_88.Data.ArrayNum) {
    iVar8 = (param_1->Data).ArrayNum;
    if (iVar8 == local_88.Data.ArrayNum) {
      if (1 < iVar8) {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           (wchar_t *)local_88.Data.AllocatorInstance.Data);
        bVar4 = iVar8 == 0;
        goto LAB_142a7f3a3;
      }
    }
    else {
      bVar4 = iVar8 + local_88.Data.ArrayNum == 1;
LAB_142a7f3a3:
      if (!bVar4) goto LAB_142a7f3ad;
    }
    cVar17 = true;
  }
LAB_142a7f3ad:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_142a7f3bb:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FPakPlatformFile::GetFilenameSecurityDelegate'::__l2::
           _dynamic_atexit_destructor_for__Delegate__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((bool)cVar17 != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&::Delegate,&local_58);
    if (((::Delegate._16_4_ == 0) || (::Delegate._8_8_ == 0)) ||
       (cVar6 = (**(code **)(*(longlong *)::Delegate._8_8_ + 0x38))(), cVar6 == '\0')) {
      this_00 = &local_58;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if ((param_1->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&::Delegate,&local_40);
      if (::Delegate._16_4_ != 0) {
        plVar12 = (longlong *)::Delegate._8_8_;
      }
      cVar17 = (**(code **)(*plVar12 + 0x60))(plVar12,pwVar15);
      this_00 = &local_40;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_00);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return (bool)cVar17;
}

// IsPakFileInstalled @ 142a7f530

bool __cdecl FPakPlatformFile::IsPakFileInstalled(FString *param_1)

{
  int iVar1;
  IPlatformChunkInstall *pIVar2;
  TStringView<wchar_t> local_18;
  
  pIVar2 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  if (pIVar2 != (IPlatformChunkInstall *)0x0) {
    iVar1 = (param_1->Data).ArrayNum;
    local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    local_18.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_18.Size = 0;
    }
    iVar1 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_18);
    if (iVar1 != -1) {
      iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,iVar1);
      return iVar1 != 1;
    }
  }
  return true;
}

// IsReadOnly @ 142a7f6c0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakPlatformFile::IsReadOnly(FPakPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  bVar1 = FindFileInPakFiles(&local_18,param_1,(TRefCountPtr<FPakFile> *)0x0,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (bVar1) {
    return true;
  }
  uVar2 = 0;
  ::FString::FString((FString *)&local_18,param_1);
  bVar1 = IsNonPakFilenameAllowed(this,(FString *)&local_18);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (bVar1) {
    uVar2 = (**(code **)((longlong)*this->LowerLevel + 0x98))(this->LowerLevel,param_1);
  }
  return (bool)uVar2;
}

// IsSymlink @ 142a7f860

ESymlinkResult __thiscall FPakPlatformFile::IsSymlink(FPakPlatformFile *this,wchar_t *param_1)

{
  ESymlinkResult EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142a7f867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*this->LowerLevel + 0xd0))();
  return EVar1;
}

// IterateDirectory @ 142a7f8a0

bool __thiscall
FPakPlatformFile::IterateDirectory
          (FPakPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  bool bVar1;
  
  bVar1 = IterateDirectoryInternal(this,param_1,param_2,false);
  return bVar1;
}

// IterateDirectoryInPakFiles @ 142a7f8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakPlatformFile::IterateDirectoryInPakFiles
          (FPakPlatformFile *this,wchar_t *param_1,FPakFileDirectoryVisitorBase *param_2,
          bool param_3,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  ulonglong uVar1;
  int iVar2;
  FPakFile *this_00;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  FString *pFVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  wchar_t *pwVar17;
  FString *pFVar18;
  longlong lVar19;
  uint *puVar20;
  bool bVar21;
  undefined1 auStackY_1c8 [32];
  uint local_194;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_190;
  FString local_180;
  FString local_170;
  longlong local_160;
  FVisitFilter<_private:_bool___cdecl_FPakPlatformFile::IterateDirectoryInPakFiles(wchar_t_const_*,UE::PakFile::Private::FPakFileDirectoryVisitorBase_&,bool,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
  local_158;
  int local_148;
  undefined1 local_144 [20];
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  longlong *local_108;
  uint uStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  FString local_d8;
  FString local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar21 = true;
  bVar8 = false;
  iVar11 = 0;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  local_144._12_8_ = param_2;
  ::FString::FString(&local_170,param_1);
  FPaths::MakeStandardFilename(&local_170);
  bVar5 = FPaths::HasProjectPersistentDownloadDir();
  if (bVar5) {
    pFVar12 = FPaths::ProjectPersistentDownloadDir(local_c8);
    iVar2 = (pFVar12->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar17 = L"";
      iVar2 = iVar11;
    }
    else {
      pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      iVar2 = iVar2 + -1;
    }
    cVar10 = '\x01';
    iVar11 = 1;
    bVar6 = ::FString::StartsWith(&local_170,pwVar17,iVar2,IgnoreCase);
    bVar5 = false;
    if (!bVar6) goto LAB_142a7f96b;
  }
  else {
LAB_142a7f96b:
    cVar10 = (char)iVar11;
    bVar6 = true;
    pFVar12 = FPaths::CloudDir(&local_d8);
    iVar2 = (pFVar12->Data).ArrayNum;
    iVar11 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar11 = 0;
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    bVar7 = ::FString::StartsWith(&local_170,pwVar17,iVar11,IgnoreCase);
    bVar5 = true;
    if (!bVar7) goto LAB_142a7f9aa;
  }
  bVar6 = bVar5;
  bVar8 = true;
LAB_142a7f9aa:
  if ((bVar6) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((cVar10 != '\0') &&
     (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  if (!bVar8) {
    GetMountedPaks(this,&local_190);
  }
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.Data.ArrayNum = 0;
  local_180.Data.ArrayMax = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_50 = 0;
  local_194 = 0;
  local_144._4_8_ = param_2;
  if (0 < local_190.ArrayNum) {
    local_160 = 0;
    do {
      lVar19 = local_160;
      uVar13 = 0;
      if ((int)local_194 < local_190.ArrayNum) {
        uVar13 = ~local_194 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      this_00 = *(FPakFile **)(local_190.AllocatorInstance.Data + lVar19 + 8);
      if (local_98._8_4_ != local_64) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98);
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_98,0,local_98._8_4_);
        bVar8 = (longlong)local_98._8_8_ < 0;
        local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
        if (bVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
        }
        local_68 = 0xffffffff;
        local_64 = 0;
        local_70 = 0;
      }
      local_158.ShouldVisit = (<lambda_1> *)(local_144 + 4);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_170.Data.ArrayNum != 0) {
        FVar16.Data = local_170.Data.AllocatorInstance.Data;
      }
      local_158.bIncludeFiles = true;
      local_158.bIncludeDirectories = true;
      local_158.bRecursive = param_3;
      FPakFile::
      FindPrunedFilesAtPathInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                (this_00,(wchar_t *)FVar16.Data,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                 &local_158);
      uVar4 = local_144._12_8_;
      uStack_100 = 0;
      uStack_fc = 1;
      local_e8 = uStack_100;
      uVar13 = 0;
      if (local_70 != 0) {
        puVar20 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar20 = local_78;
        }
        uVar13 = *puVar20;
        uStack_100 = 0;
        local_e8 = 0;
        while (uVar13 == 0) {
          lVar15 = (longlong)(int)uStack_100;
          local_e8 = local_e8 + 0x20;
          uStack_100 = uStack_100 + 1;
          uVar13 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_100)
          goto LAB_142a7fb9f;
          uVar13 = puVar20[lVar15 + 1];
        }
        uStack_fc = -uVar13 & uVar13;
        uVar1 = (ulonglong)uStack_fc * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_148 = (int)lVar15;
        uVar13 = (int)lVar15 + -1 + local_e8;
        if ((int)local_70 < (int)uVar13) {
          uVar13 = local_70;
        }
      }
LAB_142a7fb9f:
      local_108 = (longlong *)local_98;
      local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uStack_f0 = 0xffffffff;
      uStack_ec = uVar13;
      uStack_e4 = local_9c;
      local_130 = (longlong *)local_98;
      TStack_128._padding_ = CONCAT44(uStack_fc,uStack_100);
      TStack_128.BaseBitIndex = local_e8;
      TStack_128._28_4_ = local_9c;
      TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      TStack_128.UnvisitedBitMask = 0xffffffff;
      TStack_128.CurrentBitIndex = uVar13;
      if ((int)uVar13 < (int)local_70) {
        do {
          lVar19 = local_160;
          if (!bVar21) break;
          pFVar12 = (FString *)(*local_130 + (longlong)(int)uVar13 * 0x18);
          iVar2 = *(int *)(*local_130 + 8 + (longlong)(int)uVar13 * 0x18);
          iVar11 = iVar2 + -1;
          iVar14 = iVar11;
          if (iVar2 == 0) {
            iVar14 = 0;
          }
          if (iVar14 == 0) {
LAB_142a7fcd2:
            uVar9 = 0;
            pFVar18 = pFVar12;
          }
          else {
            if (iVar2 == 0) {
              iVar11 = 0;
LAB_142a7fc46:
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x113,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                );
              if (bVar8) {
                pcVar3 = (code *)swi(3);
                uVar9 = (*pcVar3)();
                return (bool)uVar9;
              }
            }
            else if ((iVar2 + -2 < 0) || (iVar11 <= iVar2 + -2)) goto LAB_142a7fc46;
            if (*(short *)((pFVar12->Data).AllocatorInstance.Data + (longlong)iVar11 * 2 + -2) !=
                0x2f) goto LAB_142a7fcd2;
            iVar2 = (pFVar12->Data).ArrayNum;
            uVar9 = 1;
            iVar11 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar11 = 0;
            }
            ::FString::Reset(&local_180,iVar11);
            iVar2 = (pFVar12->Data).ArrayNum;
            iVar11 = iVar2 + -2;
            if (iVar2 == 0) {
              pwVar17 = L"";
              iVar11 = -1;
            }
            else {
              pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
            }
            ::FString::AppendChars(&local_180,pwVar17,iVar11);
            pFVar18 = &local_180;
          }
          iVar11 = (pFVar18->Data).ArrayNum;
          if (iVar11 == 0) {
            iVar11 = 0;
            pwVar17 = L"";
          }
          else {
            pwVar17 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
            iVar11 = iVar11 + -1;
          }
          uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar17);
          iVar11 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                   FindIndexByHash<FString>(param_4,uVar13,pFVar18);
          if (iVar11 == -1) {
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (param_4,(FString *)local_144,(bool *)pFVar18);
            cVar10 = (**(code **)((longlong)*(FPakFileDirectoryVisitorBase *)uVar4 + 0x10))
                               (uVar4,pFVar12,pFVar18,uVar9);
            bVar21 = cVar10 != '\0';
          }
          TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
          lVar19 = local_160;
          uVar13 = TStack_128.CurrentBitIndex;
        } while (TStack_128.CurrentBitIndex < (TStack_128.Array)->NumBits);
      }
      local_194 = local_194 + 1;
      local_160 = lVar19 + 0x10;
    } while ((int)local_194 < local_190.ArrayNum);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
  if ((FPakListEntry *)local_190.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  return bVar21;
}

// IterateDirectoryInternal @ 142a7fe40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPakPlatformFile::IterateDirectoryInternal
          (FPakPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2,bool param_3)

{
  IPlatformFile IVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  FDirectoryVisitor *pFVar5;
  undefined1 auStackY_108 [32];
  FDirectoryVisitor local_d8;
  undefined1 *local_c8;
  void *local_c0;
  undefined8 local_b8;
  FDirectoryVisitor *local_b0;
  FPakFileDirectoryVisitorBase local_a8;
  FDirectoryVisitor *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_a8 = (FPakFileDirectoryVisitorBase)&___7FPakFileDirectoryVisitor_Private_PakFile_UE__6B_;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_a0 = param_2;
  uVar3 = IterateDirectoryInPakFiles
                    (this,param_1,&local_a8,param_3,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98);
  if ((bool)uVar3) {
    cVar4 = (**(code **)((longlong)*this->LowerLevel + 0x118))();
    if (cVar4 != '\0') {
      local_c8 = local_98;
      local_c0 = (void *)0x0;
      local_d8._padding_ = (longlong)&___7FPreventDuplicatesVisitor_Private_PakFile_UE__6B_;
      local_b8 = 0;
      pFVar5 = &local_d8;
      if (local_98._8_4_ == local_64) {
        pFVar5 = param_2;
      }
      local_d8.DirectoryVisitorFlags = None;
      IVar1 = *this->LowerLevel;
      local_b0 = param_2;
      if (param_3) {
        uVar3 = (**(code **)((longlong)IVar1 + 0x1d0))();
      }
      else {
        uVar3 = (**(code **)((longlong)IVar1 + 0x140))(this->LowerLevel,param_1,pFVar5);
      }
      local_d8._padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
      if (local_c0 != (void *)0x0) {
        FMemory::Free(local_c0);
      }
    }
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return (bool)uVar3;
}

// IterateDirectoryRecursively @ 142a80010

bool __thiscall
FPakPlatformFile::IterateDirectoryRecursively
          (FPakPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  bool bVar1;
  
  bVar1 = IterateDirectoryInternal(this,param_1,param_2,true);
  return bVar1;
}

// IterateDirectoryStat @ 142a80020

bool __thiscall
FPakPlatformFile::IterateDirectoryStat
          (FPakPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  bool bVar1;
  
  bVar1 = IterateDirectoryStatInternal(this,param_1,param_2,false);
  return bVar1;
}

// IterateDirectoryStatInternal @ 142a80030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPakPlatformFile::IterateDirectoryStatInternal
          (FPakPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2,bool param_3)

{
  IPlatformFile IVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  FDirectoryStatVisitor *pFVar5;
  undefined1 auStackY_108 [32];
  FDirectoryStatVisitor local_d8;
  undefined1 *local_d0;
  void *local_c8;
  undefined8 local_c0;
  FDirectoryStatVisitor *local_b8;
  FPakFileDirectoryVisitorBase local_b0;
  FPakPlatformFile *local_a8;
  FDirectoryStatVisitor *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_b0 = (FPakFileDirectoryVisitorBase)&___7FPakFileDirectoryStatVisitor_Private_PakFile_UE__6B_
  ;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_a8 = this;
  local_a0 = param_2;
  uVar3 = IterateDirectoryInPakFiles
                    (this,param_1,&local_b0,param_3,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98);
  if ((bool)uVar3) {
    cVar4 = (**(code **)((longlong)*this->LowerLevel + 0x118))();
    if (cVar4 != '\0') {
      local_d0 = local_98;
      local_c8 = (void *)0x0;
      local_d8 = (FDirectoryStatVisitor)&___7FPreventDuplicatesStatVisitor_Private_PakFile_UE__6B_;
      local_c0 = 0;
      pFVar5 = &local_d8;
      if (local_98._8_4_ == local_64) {
        pFVar5 = param_2;
      }
      IVar1 = *this->LowerLevel;
      local_b8 = param_2;
      if (param_3) {
        uVar3 = (**(code **)((longlong)IVar1 + 0x1e0))();
      }
      else {
        uVar3 = (**(code **)((longlong)IVar1 + 0x150))(this->LowerLevel,param_1,pFVar5);
      }
      local_d8 = (FDirectoryStatVisitor)&___7FDirectoryStatVisitor_IPlatformFile__6B_;
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
    }
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return (bool)uVar3;
}

// IterateDirectoryStatRecursively @ 142a80200

bool __thiscall
FPakPlatformFile::IterateDirectoryStatRecursively
          (FPakPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  bool bVar1;
  
  bVar1 = IterateDirectoryStatInternal(this,param_1,param_2,true);
  return bVar1;
}

// MakeUniquePakFilesForTheseFiles @ 142a83600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a83714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::MakeUniquePakFilesForTheseFiles
          (FPakPlatformFile *this,
          TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  long64 lVar4;
  long64 lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TRefCountPtr<FPakFile> TVar9;
  FPakFile *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  FPakFile *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  FPakFile *pFVar20;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  uint local_128;
  uint local_124;
  TRefCountPtr<FPakFile> local_120;
  uint local_118;
  longlong local_110;
  TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_108;
  longlong local_100;
  FPakFile *local_f8;
  longlong local_f0;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  FPakMountArgs local_c8;
  FPakEntry local_a8;
  ulonglong local_58;
  
  lVar5 = _UNK_15076adc8;
  lVar4 = ___xmm_0000000000000000ffffffffffffffff;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_124 = 0;
  if (0 < param_1->ArrayNum) {
    local_f0 = 0;
    local_110 = 0;
    local_108 = param_1;
    do {
      pFVar10 = (FPakFile *)0x0;
      local_128 = 0;
      local_100 = 0;
      local_118 = ~local_124 >> 0x1f;
      pFVar14 = pFVar10;
      pFVar20 = pFVar10;
      while( true ) {
        uVar16 = local_118;
        uVar7 = local_124;
        uVar17 = (uint)pFVar14;
        uVar18 = 0;
        if ((int)local_124 < param_1->ArrayNum) {
          uVar18 = local_118;
        }
        local_f8 = pFVar20;
        if (uVar18 == 0) {
          local_138 = (longlong)(int)local_124;
          local_130 = (longlong)param_1->ArrayNum;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (*(int *)((param_1->AllocatorInstance).Data + local_110 + 8) <= (int)uVar17) break;
        local_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.CompressionBlocks.ArrayMax = 0;
        local_a8.Offset = lVar4;
        local_a8.Size = lVar5;
        local_a8.UncompressedSize = 0;
        local_a8.Hash[0x10] = '\0';
        local_a8.Hash[0x11] = '\0';
        local_a8.Hash[0x12] = '\0';
        local_a8.Hash[0x13] = '\0';
        local_a8.CompressionBlocks.ArrayNum = 0;
        local_a8.Hash[0] = '\0';
        local_a8.Hash[1] = '\0';
        local_a8.Hash[2] = '\0';
        local_a8.Hash[3] = '\0';
        local_a8.Hash[4] = '\0';
        local_a8.Hash[5] = '\0';
        local_a8.Hash[6] = '\0';
        local_a8.Hash[7] = '\0';
        local_a8.Hash[8] = '\0';
        local_a8.Hash[9] = '\0';
        local_a8.Hash[10] = '\0';
        local_a8.Hash[0xb] = '\0';
        local_a8.Hash[0xc] = '\0';
        local_a8.Hash[0xd] = '\0';
        local_a8.Hash[0xe] = '\0';
        local_a8.Hash[0xf] = '\0';
        local_a8.CompressionBlockSize = 0;
        local_a8.CompressionMethodIndex = 0;
        local_a8.Flags = '\0';
        local_a8.Verified = false;
        uVar18 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar18 = uVar16;
        }
        local_120.Reference = (FPakFile *)0x0;
        if (uVar18 == 0) {
          local_138 = (longlong)(int)uVar7;
          local_130 = (longlong)param_1->ArrayNum;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar12 = (param_1->AllocatorInstance).Data + local_110;
        uVar16 = ~uVar17;
        iVar8 = *(int *)(pFVar12 + 8);
        uVar7 = 0;
        if ((int)uVar17 < iVar8) {
          uVar7 = uVar16 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_138 = (longlong)(int)uVar17;
          local_130 = (longlong)iVar8;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar2 = *(longlong *)pFVar12;
        if (*(int *)((longlong)(pFVar20->ReadersCriticalSection).CriticalSection.Opaque1 +
                    lVar2 + -0x48) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)
                     ((longlong)&((FPakFile *)(&pFVar20->ReadersCriticalSection + -2))->_padding_ +
                     lVar2);
        }
        local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.ArrayNum = 0;
        local_e8.ArrayMax = 0;
        GetMountedPaks(this,&local_e8);
        bVar6 = FindFileInPakFiles(&local_e8,pwVar11,&local_120,&local_a8);
        DestructItems<FPakPlatformFile::FPakListEntry,int>
                  ((FPakListEntry *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
        if ((FPakListEntry *)local_e8.AllocatorInstance.Data != (FPakListEntry *)0x0) {
          FMemory::Free(local_e8.AllocatorInstance.Data);
        }
        TVar9.Reference = local_120.Reference;
        if (bVar6) {
          if (local_120.Reference != (FPakFile *)0x0) {
            if ((local_120.Reference)->PakFilenameName != (FName)0x0) {
              pFVar14 = pFVar10;
              if (pFVar10 == (FPakFile *)0x0) {
                if (((local_120.Reference)->MountPoint).Data.ArrayNum == 0) {
                  local_c8.Path = L"";
                }
                else {
                  local_c8.Path =
                       (wchar_t *)((local_120.Reference)->MountPoint).Data.AllocatorInstance.Data;
                }
                if (((local_120.Reference)->PakFilename).Data.ArrayNum == 0) {
                  local_c8.PakFilename = L"";
                }
                else {
                  local_c8.PakFilename =
                       (wchar_t *)((local_120.Reference)->PakFilename).Data.AllocatorInstance.Data;
                }
                local_c8.PakOrder = 500;
                local_c8.MountOptions.MountFlags = None;
                local_c8.bLoadIndex = false;
                bVar6 = Mount(this,&local_c8,(FIoStatus *)0x0,(FPakListEntry *)0x0);
                uVar15 = 0;
                if ((bVar6) && (uVar19 = uVar15, uVar17 = local_128, 0 < (this->PakFiles).ArrayNum))
                {
                  do {
                    iVar8 = (this->PakFiles).ArrayNum;
                    uVar18 = (uint)uVar15;
                    uVar7 = 0;
                    if ((int)uVar18 < iVar8) {
                      uVar7 = ~uVar18 >> 0x1f;
                    }
                    if (uVar7 == 0) {
                      local_138 = (longlong)(int)uVar18;
                      local_130 = (longlong)iVar8;
                      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar6) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                    }
                    iVar8 = ((TVar9.Reference)->PakFilename).Data.ArrayNum;
                    pFVar14 = *(FPakFile **)((this->PakFiles).AllocatorInstance.Data + uVar19 + 8);
                    iVar1 = (pFVar14->PakFilename).Data.ArrayNum;
                    if (iVar1 == iVar8) {
                      if (1 < iVar1) {
                        iVar8 = FGenericPlatformStricmp::Stricmp
                                          ((wchar_t *)
                                           (pFVar14->PakFilename).Data.AllocatorInstance.Data,
                                           (wchar_t *)
                                           ((TVar9.Reference)->PakFilename).Data.AllocatorInstance.
                                           Data);
                        bVar6 = iVar8 == 0;
                        goto LAB_142a8397f;
                      }
LAB_142a83986:
                      if ((pFVar14->CachedTotalSize == (TVar9.Reference)->CachedTotalSize) &&
                         (iVar8 = (**(code **)(pFVar14->_padding_ + 0x28))(&pFVar14->_padding_),
                         iVar8 == 0)) {
                        LOCK();
                        *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
                        UNLOCK();
                        pFVar14->CacheType = Individual;
                        param_1 = local_108;
                        pFVar20 = local_f8;
                        uVar17 = local_128;
                        goto LAB_142a839ea;
                      }
                    }
                    else {
                      bVar6 = iVar1 + iVar8 == 1;
LAB_142a8397f:
                      if (bVar6) goto LAB_142a83986;
                    }
                    uVar15 = (ulonglong)(uVar18 + 1);
                    param_1 = local_108;
                    pFVar20 = local_f8;
                    uVar19 = uVar19 + 0x10;
                    uVar17 = local_128;
                  } while ((int)(uVar18 + 1) < (this->PakFiles).ArrayNum);
                }
              }
              else {
LAB_142a839ea:
                pFVar14->bUseDirectoryTree = GPak_UseDirectoryTreeForPakSearch;
                uVar7 = 0;
                if ((int)local_124 < param_1->ArrayNum) {
                  uVar7 = local_118;
                }
                if (uVar7 == 0) {
                  local_138 = local_f0;
                  local_130 = (longlong)param_1->ArrayNum;
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar6) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                pFVar12 = (param_1->AllocatorInstance).Data + local_110;
                iVar8 = *(int *)(pFVar12 + 8);
                uVar7 = 0;
                if ((int)uVar17 < iVar8) {
                  uVar7 = uVar16 >> 0x1f;
                }
                if (uVar7 == 0) {
                  local_138 = local_100;
                  local_130 = (longlong)iVar8;
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar6) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                lVar2 = *(longlong *)pFVar12;
                if (*(int *)((longlong)(pFVar20->ReadersCriticalSection).CriticalSection.Opaque1 +
                            lVar2 + -0x48) == 0) {
                  pwVar11 = L"";
                }
                else {
                  pwVar11 = *(wchar_t **)
                             ((longlong)
                              &((FPakFile *)(&pFVar20->ReadersCriticalSection + -2))->_padding_ +
                             lVar2);
                }
                ::FString::FString(&local_d8,pwVar11);
                FPakFile::AddSpecialFile(pFVar14,&local_a8,&local_d8);
                param_1 = local_108;
                pFVar10 = pFVar14;
                if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                  param_1 = local_108;
                }
              }
            }
            goto LAB_142a83ae1;
          }
        }
        else {
LAB_142a83ae1:
          if (TVar9.Reference != (FPakFile *)0x0) {
            plVar13 = &(TVar9.Reference)->_padding_;
            LOCK();
            lVar2 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              if (plVar13 == (longlong *)0x0) {
                TVar9.Reference = (FPakFile *)0x0;
              }
              if (TVar9.Reference != (FPakFile *)0x0) {
                (**(code **)(TVar9.Reference)->_padding_)();
              }
            }
          }
        }
        if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
        }
        local_100 = local_100 + 1;
        local_128 = uVar17 + 1;
        pFVar14 = (FPakFile *)(ulonglong)local_128;
        pFVar20 = (FPakFile *)&pFVar20->_padding_;
      }
      if (pFVar10 != (FPakFile *)0x0) {
        plVar13 = &pFVar10->_padding_;
        LOCK();
        lVar2 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          if (plVar13 == (longlong *)0x0) {
            pFVar10 = (FPakFile *)0x0;
          }
          if (pFVar10 != (FPakFile *)0x0) {
            (**(code **)pFVar10->_padding_)(pFVar10,1);
          }
        }
      }
      local_f0 = local_f0 + 1;
      local_124 = uVar7 + 1;
      local_110 = local_110 + 0x10;
    } while ((int)local_124 < param_1->ArrayNum);
  }
  return;
}

// Mount @ 142a850e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a85933) */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakPlatformFile::Mount
          (FPakPlatformFile *this,FPakMountArgs *param_1,FIoStatus *param_2,FPakListEntry *param_3)

{
  FGuid *this_00;
  TUniquePtr<FIoContainerHeader,TDefaultDelete<FIoContainerHeader>_> *pTVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  wchar_t *pwVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FPakFile *pFVar15;
  FEncryptionKeyManager *pFVar16;
  FIoStatus *pFVar17;
  TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *pTVar18;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar19;
  IFileIoDispatcherBackend *pIVar20;
  FIoContainerHeader *pFVar21;
  FIoContainerHeader *this_02;
  FFilePackageStoreBackend *this_03;
  FIoStatus *pFVar22;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_04;
  TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *this_05;
  FString *pFVar23;
  FScriptContainerElement *pFVar24;
  wchar_t *pwVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  FScriptContainerElement *pFVar30;
  undefined1 auStackY_4e8 [32];
  undefined1 local_496;
  FIdentityFunctor local_495;
  uint local_494;
  wchar_t *local_490;
  undefined1 local_488 [8];
  FString local_480;
  FIoStatus local_470;
  FLLMScope local_460 [2];
  LARGE_INTEGER local_458;
  uint local_450 [2];
  TRefCountPtr<FPakFile> local_448;
  void *local_440;
  undefined8 local_438;
  void *local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined8 local_41c;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  wchar_t *local_408;
  FPakFile *local_400;
  FString local_3f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3e8;
  FString local_3d8;
  FGuid local_3c8;
  FIoStatus *local_3b8;
  FString local_3b0;
  FString local_3a0;
  FPakListEntry *local_390;
  LARGE_INTEGER local_388;
  FMemScope local_380;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  TStringView<wchar_t> local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  TStringView<wchar_t> local_2f8;
  wchar_t *local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  FScriptContainerElement *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  FIoStatus local_2a8;
  FString local_298;
  FString local_288;
  FIoStatus local_278;
  FString local_268;
  FString local_258;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  FIoStatus local_228;
  FIoStatus local_218;
  undefined8 local_208;
  FIoContainerHeader local_200;
  FAESKey local_150;
  FIoStatus local_130;
  FIoContainerHeader local_120;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_3b8 = param_2;
  local_390 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name5930,L"FileSystem/PakFile");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_460,LLMScope_Name5930,false,None,Default,true);
  FMemScope::FMemScope(&local_380,&LLMScope_Name5930,true);
  local_494 = param_1->PakOrder;
  pwVar25 = param_1->PakFilename;
  pwVar3 = param_1->Path;
  bVar9 = param_1->bLoadIndex;
  bVar7 = false;
  local_470.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_470.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_470.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  local_490 = pwVar25;
  local_408 = pwVar3;
  cVar8 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,pwVar25);
  if (cVar8 == '\0') {
    if (2 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    local_2b8.Size = 0xd;
    local_2b8.DataPtr = L"Pak not found";
    pFVar22 = FIoStatus::FIoStatus(&local_218,NotFound,&local_2b8);
    FIoStatus::operator=(&local_470,pFVar22);
    FIoStatus::~FIoStatus(&local_218);
    bVar7 = false;
LAB_142a85bec:
    if (local_3b8 != (FIoStatus *)0x0) {
      FIoStatus::operator=(local_3b8,&local_470);
    }
    if ((bVar7) && (local_470.ErrorCode == Ok)) {
      bVar9 = true;
      goto LAB_142a85539;
    }
  }
  else {
    pFVar15 = ::operator_new(0x350);
    if (pFVar15 == (FPakFile *)0x0) {
      local_400 = (FPakFile *)0x0;
    }
    else {
      pFVar15 = FPakFile::FPakFile(pFVar15,this->LowerLevel,pwVar25,this->bSigned,bVar9);
      local_400 = (FPakFile *)0x0;
      if (pFVar15 != (FPakFile *)0x0) {
        LOCK();
        *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
        UNLOCK();
        local_400 = pFVar15;
      }
    }
    pFVar15 = local_400;
    this_02 = (FIoContainerHeader *)0x0;
    if (local_400->bIsValid == false) {
      if (2 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      local_2c8.Size = 0xe;
      local_2c8.DataPtr = L"Pak is invalid";
      pFVar22 = FIoStatus::FIoStatus(&local_228,SignatureError,&local_2c8);
      FIoStatus::operator=(&local_470,pFVar22);
      FIoStatus::~FIoStatus(&local_228);
      if (pFVar15 != (FPakFile *)0x0) {
        plVar4 = &pFVar15->_padding_;
        LOCK();
        lVar29 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if (((int)lVar29 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)pFVar15->_padding_)(pFVar15,1);
          bVar7 = false;
        }
      }
      goto LAB_142a85bec;
    }
    this_00 = &(local_400->Info).EncryptionKeyGuid;
    uVar27 = 0;
    if ((((local_400->Info).EncryptionKeyGuid.D == 0 && (local_400->Info).EncryptionKeyGuid.C == 0)
        && (local_400->Info).EncryptionKeyGuid.B == 0) && this_00->A == 0) {
LAB_142a85582:
      if (pwVar3 != (wchar_t *)0x0) {
        ::FString::operator=(&pFVar15->MountPoint,pwVar3);
        FPakFile::MakeDirectoryFromPath(&pFVar15->MountPoint);
      }
      pwVar25 = local_490;
      ::FString::FString(&local_3f8,local_490);
      bVar9 = ::FString::EndsWith(&local_3f8,L"_P.pak",6,IgnoreCase);
      if (bVar9) {
        local_458.s.LowPart = 1;
        pFVar21 = (FIoContainerHeader *)(ulonglong)(local_3f8.Data.ArrayNum - 1);
        if (local_3f8.Data.ArrayNum == 0) {
          pFVar21 = this_02;
        }
        uVar12 = (uint)pFVar21;
        if ((int)(uVar12 - 6) < (int)uVar12) {
          uVar12 = uVar12 - 6;
        }
        uVar28 = uVar27;
        if (0 < (int)uVar12) {
          uVar28 = uVar12;
        }
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_3f8.Data.ArrayNum != 0) {
          FVar26.Data = local_3f8.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_298,(wchar_t *)FVar26.Data,uVar28);
        ::FString::FString(&local_378,"_");
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_378.Data.ArrayNum != 0) {
          FVar26.Data = local_378.Data.AllocatorInstance.Data;
        }
        pFVar21 = (FIoContainerHeader *)(ulonglong)(local_378.Data.ArrayNum - 1);
        if (local_378.Data.ArrayNum == 0) {
          pFVar21 = this_02;
        }
        iVar13 = ::FString::Find(&local_3f8,(wchar_t *)FVar26.Data,(int)pFVar21,CaseSensitive,
                                 FromEnd,-1);
        if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
        }
        if (0 < iVar13) {
          ::FString::FString(&local_368,"_");
          FVar26.Data = (FScriptContainerElement *)L"";
          if (local_368.Data.ArrayNum != 0) {
            FVar26.Data = local_368.Data.AllocatorInstance.Data;
          }
          pFVar21 = (FIoContainerHeader *)(ulonglong)(local_368.Data.ArrayNum - 1);
          if (local_368.Data.ArrayNum == 0) {
            pFVar21 = this_02;
          }
          iVar14 = ::FString::Find(&local_3f8,(wchar_t *)FVar26.Data,(int)pFVar21,CaseSensitive,
                                   FromEnd,iVar13 + -1);
          local_408 = (wchar_t *)CONCAT44(local_408._4_4_,iVar14);
          if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_368.Data.AllocatorInstance.Data);
            iVar14 = (int)local_408;
          }
          if (iVar14 != -1) {
            ::FString::Mid(&local_3f8,&local_3b0,iVar14 + 1,iVar13 - (iVar14 + 1));
            bVar9 = ::FString::IsNumeric(&local_3b0);
            if (bVar9) {
              FVar26.Data = (FScriptContainerElement *)L"";
              if (local_3b0.Data.ArrayNum != 0) {
                FVar26.Data = local_3b0.Data.AllocatorInstance.Data;
              }
              iVar13 = _wtoi((wchar_t *)FVar26.Data);
              if (0 < iVar13) {
                local_458.s.LowPart = iVar13 + 1;
              }
            }
            if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
            }
          }
        }
        local_494 = local_494 + local_458.s.LowPart * 100;
        pwVar25 = local_490;
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
          pwVar25 = local_490;
        }
      }
      bVar7 = true;
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
      if (((this->IoDispatcherFileBackend).Object == (IFileIoDispatcherBackend *)0x0) ||
         (((param_1->MountOptions).MountFlags & SkipContainerFile) != None)) {
        FIoStatus::operator=(&local_470,&FIoStatus::Ok);
      }
      else {
        local_3c8.A = this_00->A;
        local_3c8.B = this_00->B;
        local_3c8.C = (pFVar15->Info).EncryptionKeyGuid.C;
        local_3c8.D = (pFVar15->Info).EncryptionKeyGuid.D;
        local_150.Key[0] = '\0';
        local_150.Key[1] = '\0';
        local_150.Key[2] = '\0';
        local_150.Key[3] = '\0';
        local_150.Key[4] = '\0';
        local_150.Key[5] = '\0';
        local_150.Key[6] = '\0';
        local_150.Key[7] = '\0';
        local_150.Key[8] = '\0';
        local_150.Key[9] = '\0';
        local_150.Key[10] = '\0';
        local_150.Key[0xb] = '\0';
        local_150.Key[0xc] = '\0';
        local_150.Key[0xd] = '\0';
        local_150.Key[0xe] = '\0';
        local_150.Key[0xf] = '\0';
        local_150.Key[0x10] = '\0';
        local_150.Key[0x11] = '\0';
        local_150.Key[0x12] = '\0';
        local_150.Key[0x13] = '\0';
        local_150.Key[0x14] = '\0';
        local_150.Key[0x15] = '\0';
        local_150.Key[0x16] = '\0';
        local_150.Key[0x17] = '\0';
        local_150.Key[0x18] = '\0';
        local_150.Key[0x19] = '\0';
        local_150.Key[0x1a] = '\0';
        local_150.Key[0x1b] = '\0';
        local_150.Key[0x1c] = '\0';
        local_150.Key[0x1d] = '\0';
        local_150.Key[0x1e] = '\0';
        local_150.Key[0x1f] = '\0';
        pFVar16 = UE::FEncryptionKeyManager::Get();
        bVar9 = UE::FEncryptionKeyManager::TryGetKey(pFVar16,&local_3c8,&local_150);
        if (!bVar9) {
          if (((local_3c8.D == 0 && local_3c8.C == 0) && local_3c8.B == 0) && local_3c8.A == 0) {
            pTVar18 = FCoreDelegates::GetPakEncryptionKeyDelegate();
            bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar18);
            if (bVar9) {
              pTVar18 = FCoreDelegates::GetPakEncryptionKeyDelegate();
              TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy>::Execute
                        (pTVar18,local_150.Key);
            }
          }
        }
        ::FString::FString(&local_318,L".utoc");
        ::FString::FString(&local_328,pwVar25);
        FPaths::ChangeExtension(&local_480,&local_328,&local_318);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        this_01 = FPlatformFileManager::Get();
        pIVar19 = FPlatformFileManager::GetPlatformFile(this_01);
        cVar8 = (**(code **)((longlong)*pIVar19 + 0x78))(pIVar19);
        if (cVar8 == '\0') {
          if (bMountFailOnMissingUtoc == false) {
            FIoStatus::operator=(&local_470,&FIoStatus::Ok);
          }
          else {
            local_2f8.Size = 0xe;
            local_2f8.DataPtr = L"utoc not found";
            pFVar22 = FIoStatus::FIoStatus(&local_278,NotFound,&local_2f8);
            FIoStatus::operator=(&local_470,pFVar22);
            FIoStatus::~FIoStatus(&local_278);
            if (2 < (byte)LogPakFile._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            }
            TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
                      (&FCoreDelegates::PakFileMountFailedDelegate,&local_480);
          }
        }
        else {
          bVar9 = ShouldCheckPak();
          if (bVar9) {
            FVar26.Data = (FScriptContainerElement *)L"";
            if (local_480.Data.ArrayNum != 0) {
              FVar26.Data = local_480.Data.AllocatorInstance.Data;
            }
            bVar9 = CheckIoStoreContainerBlockSignatures((wchar_t *)FVar26.Data);
            if ((!bVar9) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<5195954862361155478>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                   ,0x1796,"CheckIoStoreContainerBlockSignatures(*UtocPath)"), bVar9
               )) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
          }
          pIVar20 = TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1>::operator->
                              (&this->IoDispatcherFileBackend);
          FVar26.Data = (FScriptContainerElement *)L"";
          if (local_480.Data.ArrayNum != 0) {
            FVar26.Data = local_480.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar20 + 0x68))(pIVar20,&local_130,FVar26.Data,local_494);
          FIoStatus::operator=(&local_470,&local_130);
          if (local_130.ErrorCode == Ok) {
            FIoStatus::operator=(&local_130,&FIoStatus::Unknown);
            FIoContainerHeader::FIoContainerHeader(&local_200,&local_120);
            pFVar21 = ::operator_new(0xb0);
            if (pFVar21 != (FIoContainerHeader *)0x0) {
              this_02 = FIoContainerHeader::FIoContainerHeader(pFVar21,&local_200);
            }
            pTVar1 = &pFVar15->IoContainerHeader;
            if (pTVar1 == (TUniquePtr<FIoContainerHeader,TDefaultDelete<FIoContainerHeader>_> *)
                          &local_208) {
              if (this_02 != (FIoContainerHeader *)0x0) {
                FIoContainerHeader::~FIoContainerHeader(this_02);
                goto LAB_142a859c6;
              }
            }
            else {
              pFVar21 = pTVar1->Ptr;
              pTVar1->Ptr = this_02;
              if (pFVar21 != (FIoContainerHeader *)0x0) {
                FIoContainerHeader::~FIoContainerHeader(pFVar21);
                this_02 = pFVar21;
LAB_142a859c6:
                ::operator_delete(this_02,0xb0);
              }
            }
            FIoContainerHeader::~FIoContainerHeader(&local_200);
            this_03 = TSharedPtr<FFilePackageStoreBackend,1>::operator->(&this->PackageStoreBackend)
            ;
            FFilePackageStoreBackend::Mount(this_03,pTVar1->Ptr,local_494);
            if (3 < (byte)LogPakFile._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            }
          }
          else {
            if (2 < (byte)LogPakFile._0_1_) {
              FIoStatus::ToString(&local_130,&local_288);
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_Failed_to_mount_150986bc8,
                         (FLogCategoryBase *)&LogPakFile);
              if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_288.Data.AllocatorInstance.Data);
              }
            }
            ::FString::FString(&local_308,local_490);
            TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
                      (&FCoreDelegates::PakFileMountFailedDelegate,&local_308);
            if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Data.AllocatorInstance.Data);
            }
          }
          FIoStatus::operator=(&local_130,Unknown);
          if (local_130.ErrorCode == Ok) {
            FIoContainerHeader::~FIoContainerHeader(&local_120);
          }
          FIoStatus::~FIoStatus(&local_130);
        }
        if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_480.Data.AllocatorInstance.Data);
        }
      }
      if (local_470.ErrorCode == Ok) {
        lpCriticalSection = &this->PakListCritical;
        if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        local_450[0] = local_494;
        LOCK();
        *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
        UNLOCK();
        pFVar15->bIsMounted = true;
        pFVar24 = (this->PakFiles).AllocatorInstance.Data;
        local_448.Reference = pFVar15;
        if (((pFVar24 <= (FScriptContainerElement *)local_450) &&
            ((FScriptContainerElement *)local_450 <
             pFVar24 + (longlong)(this->PakFiles).ArrayMax * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar13 = (this->PakFiles).ArrayNum;
        piVar2 = &(this->PakFiles).ArrayMax;
        if (iVar13 == *piVar2) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this->PakFiles).AllocatorInstance,piVar2);
        }
        pFVar24 = (this->PakFiles).AllocatorInstance.Data;
        lVar29 = (longlong)iVar13;
        (this->PakFiles).ArrayNum = iVar13 + 1;
        *(uint *)(pFVar24 + lVar29 * 0x10) = local_450[0];
        *(undefined8 *)(pFVar24 + lVar29 * 0x10 + 8) = 0;
        *(FPakFile **)(pFVar24 + lVar29 * 0x10 + 8) = local_448.Reference;
        if (local_448.Reference != (FPakFile *)0x0) {
          LOCK();
          *(int *)&(local_448.Reference)->_padding_ = (int)(local_448.Reference)->_padding_ + 1;
          UNLOCK();
        }
        AlgoImpl::
        StableSortInternal<FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_>
                  ((FPakListEntry *)(this->PakFiles).AllocatorInstance.Data,
                   (this->PakFiles).ArrayNum,local_495,(TLess<void> *)&local_495);
        if (local_390 != (FPakListEntry *)0x0) {
          local_390->ReadOrder = local_450[0];
          TRefCountPtr<FPakFile>::operator=(&local_390->PakFile,&local_448);
        }
        if (local_448.Reference != (FPakFile *)0x0) {
          plVar4 = &(local_448.Reference)->_padding_;
          LOCK();
          lVar29 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if (((int)lVar29 == 1) && (plVar4 != (longlong *)0x0)) {
            (**(code **)(local_448.Reference)->_padding_)();
          }
        }
        if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        this_04 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  FCoreInternalDelegates::GetOnPakMountOperation();
        if ((this_04 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)this_04);
        iVar13 = (this_04->InvocationList).ArrayNum;
        pFVar24 = (this_04->InvocationList).AllocatorInstance.Data;
        pFVar30 = pFVar24 + (longlong)iVar13 * 0x10;
        while( true ) {
          if ((this_04->InvocationList).ArrayNum != iVar13) {
            local_496 = 0;
            `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_496);
          }
          if (pFVar24 == pFVar30) {
            if (this_04 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0)
            goto LAB_142a85f4a;
            goto LAB_142a85f44;
          }
          if ((*(int *)(pFVar24 + 8) != 0) && (*(longlong *)pFVar24 != 0)) break;
          pFVar24 = pFVar24 + 0x10;
        }
        if (this_04 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)this_04);
        }
        this_04 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  FCoreInternalDelegates::GetOnPakMountOperation();
        if ((this_04 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)this_04);
        this_04->InvocationListLockCount = this_04->InvocationListLockCount + 1;
        bVar9 = false;
        uVar12 = (this_04->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar12) {
          lVar29 = (longlong)(int)uVar12 << 4;
          bVar9 = false;
          do {
            uVar28 = uVar27;
            if ((int)uVar12 < (this_04->InvocationList).ArrayNum) {
              uVar28 = ~uVar12 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            pFVar24 = (this_04->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar24 + lVar29 + 8) == 0) ||
                (plVar4 = *(longlong **)(pFVar24 + lVar29), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
              bVar9 = true;
            }
            lVar29 = lVar29 + -0x10;
            uVar12 = uVar12 - 1;
            pFVar15 = local_400;
          } while (-1 < (int)uVar12);
        }
        this_04->InvocationListLockCount = this_04->InvocationListLockCount + -1;
        if (bVar9) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_04,false)
          ;
        }
LAB_142a85f44:
        LeaveCriticalSection((LPCRITICAL_SECTION)this_04);
LAB_142a85f4a:
        QueryPerformanceCounter(&local_458);
        this_05 = FCoreDelegates::GetOnPakFileMounted2();
        TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
                  (this_05,(IPakFile *)&pFVar15->_padding_);
        QueryPerformanceCounter(&local_388);
        if (3 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        if (5 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        FPaths::CreateStandardFilename(&local_348,&pFVar15->MountPoint);
        pFVar23 = FPaths::RootDir(&local_258);
        pFVar23 = FPaths::CreateStandardFilename(&local_268,pFVar23);
        iVar13 = (pFVar23->Data).ArrayNum;
        if (local_348.Data.ArrayNum == iVar13) {
          if (local_348.Data.ArrayNum < 2) {
            bVar9 = true;
          }
          else {
            iVar13 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)local_348.Data.AllocatorInstance.Data,
                                (wchar_t *)(pFVar23->Data).AllocatorInstance.Data);
            bVar9 = iVar13 == 0;
          }
        }
        else {
          bVar9 = iVar13 + local_348.Data.ArrayNum == 1;
        }
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        if (!bVar9) {
          local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3a0.Data.ArrayNum = 0;
          local_3a0.Data.ArrayMax = 0;
          bVar9 = FPackageName::TryConvertFilenameToLongPackageName
                            (&pFVar15->MountPoint,&local_3a0,(FString *)0x0,None);
          if (!bVar9) {
            FPaths::ConvertRelativePathToFull(&local_358,&pFVar15->MountPoint);
            FPackageName::QueryMountPointLocalAbsPaths(&local_3e8);
            iVar13 = local_3e8.ArrayNum;
            pFVar24 = local_3e8.AllocatorInstance.Data + (longlong)local_3e8.ArrayNum * 0x10;
            FVar26.Data = local_3e8.AllocatorInstance.Data;
            while( true ) {
              if (local_3e8.ArrayNum != iVar13) {
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_488);
              }
              if (FVar26.Data == pFVar24) {
                bVar9 = false;
                goto LAB_142a8618b;
              }
              local_2e8 = *(wchar_t **)FVar26.Data;
              uStack_2e0 = *(int *)(FVar26.Data + 8) - 1;
              if (*(int *)(FVar26.Data + 8) == 0) {
                uStack_2e0 = uVar27;
              }
              local_2d8 = local_358.Data.AllocatorInstance.Data;
              local_248._12_4_ = uStack_2dc;
              local_248.Size = uStack_2e0;
              uStack_2d0 = local_358.Data.ArrayNum - 1;
              if (local_358.Data.ArrayNum == 0) {
                uStack_2d0 = uVar27;
              }
              local_238._12_4_ = uStack_2cc;
              local_238.Size = uStack_2d0;
              local_238.DataPtr = (wchar_t *)local_358.Data.AllocatorInstance.Data;
              local_248.DataPtr = local_2e8;
              bVar9 = FPathViews::IsParentPathOf(&local_238,&local_248);
              if (bVar9) break;
              FVar26.Data = FVar26.Data + 0x10;
            }
            bVar9 = true;
LAB_142a8618b:
            DestructItems<FString,int>
                      ((FString *)local_3e8.AllocatorInstance.Data,local_3e8.ArrayNum);
            if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.AllocatorInstance.Data);
            }
            if ((!bVar9) && (3 < (byte)LogPakFile._0_1_)) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            }
            if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_358.Data.AllocatorInstance.Data);
            }
          }
          if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
          }
        }
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
      }
      else if (pFVar15 == (FPakFile *)0x0) goto LAB_142a85bec;
      plVar4 = &pFVar15->_padding_;
      LOCK();
      lVar29 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if (((int)lVar29 == 1) && (plVar4 != (longlong *)0x0)) {
        (**(code **)pFVar15->_padding_)(pFVar15,1);
      }
      goto LAB_142a85bec;
    }
    pFVar16 = UE::FEncryptionKeyManager::Get();
    bVar9 = UE::FEncryptionKeyManager::ContainsKey(pFVar16,this_00);
    if (bVar9) goto LAB_142a85582;
    if (3 < (byte)LogPakFile._0_1_) {
      local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3d8.Data.ArrayNum = 0;
      local_3d8.Data.ArrayMax = 0;
      FGuid::AppendString(this_00,&local_3d8,Digits);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      }
    }
    pFVar16 = UE::FEncryptionKeyManager::Get();
    bVar9 = UE::FEncryptionKeyManager::ContainsKey(pFVar16,this_00);
    if ((bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!UE::FEncryptionKeyManager::Get().ContainsKey(Pak->GetInfo().EncryptionKeyGuid)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x1762,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pFVar24 = (this->PendingEncryptedPakFiles).AllocatorInstance.Data;
    uStack_424 = 0;
    uStack_420 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    local_440 = (void *)0x0;
    local_438 = 0;
    local_430 = (void *)0x0;
    local_428 = 0;
    local_41c = 0;
    uStack_414 = 0;
    if (((pFVar24 <= (FScriptContainerElement *)&local_440) &&
        ((FScriptContainerElement *)&local_440 <
         pFVar24 + (longlong)(this->PendingEncryptedPakFiles).ArrayMax * 0x38)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    uVar12 = (this->PendingEncryptedPakFiles).ArrayNum;
    piVar2 = &(this->PendingEncryptedPakFiles).ArrayMax;
    if (uVar12 == *piVar2) {
      uVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&(this->PendingEncryptedPakFiles).AllocatorInstance,piVar2);
    }
    pFVar24 = (this->PendingEncryptedPakFiles).AllocatorInstance.Data;
    (this->PendingEncryptedPakFiles).ArrayNum = uVar12 + 1;
    lVar29 = (longlong)(int)uVar12 * 0x38;
    *(undefined8 *)(pFVar24 + lVar29) = 0;
    *(void **)(pFVar24 + lVar29) = local_440;
    local_440 = (void *)0x0;
    *(undefined4 *)(pFVar24 + lVar29 + 8) = (undefined4)local_438;
    *(undefined4 *)(pFVar24 + lVar29 + 0xc) = local_438._4_4_;
    local_438 = 0;
    *(undefined8 *)(pFVar24 + lVar29 + 0x10) = 0;
    *(void **)(pFVar24 + lVar29 + 0x10) = local_430;
    local_430 = (void *)0x0;
    *(undefined4 *)(pFVar24 + lVar29 + 0x18) = local_428;
    *(undefined4 *)(pFVar24 + lVar29 + 0x1c) = uStack_424;
    local_428 = 0;
    uStack_424 = 0;
    *(undefined4 *)(pFVar24 + lVar29 + 0x20) = uStack_420;
    *(undefined8 *)(pFVar24 + lVar29 + 0x24) = local_41c;
    *(ulonglong *)(pFVar24 + lVar29 + 0x24 + 8) = CONCAT44(uStack_410,uStack_414);
    *(undefined4 *)(pFVar24 + lVar29 + 0x34) = uStack_40c;
    if ((int)uVar12 < (this->PendingEncryptedPakFiles).ArrayNum) {
      uVar27 = ~uVar12 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pFVar24 = (this->PendingEncryptedPakFiles).AllocatorInstance.Data + lVar29;
    if (local_430 != (void *)0x0) {
      FMemory::Free(local_430);
    }
    if (local_440 != (void *)0x0) {
      FMemory::Free(local_440);
    }
    ::FString::operator=((FString *)pFVar24,local_490);
    ::FString::operator=((FString *)(pFVar24 + 0x10),local_408);
    *(uint *)&pFVar24[0x20].field_0x0 = local_494;
    uVar6 = *(undefined8 *)&(pFVar15->Info).EncryptionKeyGuid.C;
    *(undefined8 *)(pFVar24 + 0x24) = *(undefined8 *)this_00;
    *(undefined8 *)(pFVar24 + 0x2c) = uVar6;
    *(int *)(pFVar24 + 0x34) = pFVar15->PakchunkIndex;
    if (pFVar15 != (FPakFile *)0x0) {
      FRefCountBase::Release((FRefCountBase *)pFVar15);
    }
    pFVar22 = local_3b8;
    if (local_3b8 != (FIoStatus *)0x0) {
      local_338.Size = 0x1c;
      local_338.DataPtr = L"Encryption key not available";
      pFVar17 = FIoStatus::FIoStatus(&local_2a8,PendingEncryptionKey,&local_338);
      FIoStatus::operator=(pFVar22,pFVar17);
      FIoStatus::~FIoStatus(&local_2a8);
    }
  }
  bVar9 = false;
LAB_142a85539:
  FIoStatus::~FIoStatus(&local_470);
  FMemScope::~FMemScope(&local_380);
  FLLMScope::~FLLMScope(local_460);
  return bVar9;
}

// Mount @ 142a86370

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakPlatformFile::Mount
          (FPakPlatformFile *this,wchar_t *param_1,uint param_2,wchar_t *param_3,bool param_4,
          FPakListEntry *param_5)

{
  bool bVar1;
  FPakMountArgs local_28;
  
  local_28.bLoadIndex = param_4;
  local_28.MountOptions.MountFlags = None;
  local_28.PakFilename = param_1;
  local_28.PakOrder = param_2;
  local_28.Path = param_3;
  bVar1 = Mount(this,&local_28,(FIoStatus *)0x0,param_5);
  return bVar1;
}

// MountAllPakFiles @ 142a863c0

int __thiscall
FPakPlatformFile::MountAllPakFiles
          (FPakPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FString local_18;
  
  ::FString::FString(&local_18,L"*.pak");
  iVar1 = MountAllPakFiles(this,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar1;
}

// MountAllPakFiles @ 142a86420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */

int __thiscall
FPakPlatformFile::MountAllPakFiles
          (FPakPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  FString *pFVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FPakListEntry *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188;
  FIdentityFunctor local_187 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_180;
  undefined4 local_170;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_168;
  TArray<FString,TSizedDefaultAllocator<32>_> local_158;
  longlong local_148;
  FString local_140;
  undefined1 local_130 [16];
  FString local_120;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FPakMountArgs local_f8;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  FScopedBootTiming local_b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar15 = 0;
  uVar17 = 0;
  local_170 = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  local_130._8_8_ = this;
  pwVar8 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar8,L"-paklist=",&local_140,true,(wchar_t **)0x0);
  if (bVar4) {
    ::FString::ParseIntoArray(&local_140,&local_158,L"+",true);
  }
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.ArrayNum = 0;
  local_180.ArrayMax = 0;
  FindAllPakFiles(this->LowerLevel,param_1,param_2,&local_180);
  if (local_180.ArrayNum == 0) {
    ::FString::FString(&local_120,"*.pak");
    FindAllPakFiles(this->LowerLevel,param_1,&local_120,&local_180);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
            ((FString *)local_180.AllocatorInstance.Data,local_180.ArrayNum,local_187[0],
             (TGreater<FString> *)local_187);
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  GetMountedPaks(this,&local_168);
  iVar6 = local_168.ArrayNum;
  uVar9 = (ulonglong)local_168.ArrayNum;
  pFVar13 = (FPakListEntry *)(local_168.AllocatorInstance.Data + uVar9 * 0x10);
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  FVar11.Data = local_168.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar6) {
      local_188 = 0;
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_188);
    }
    if ((FPakListEntry *)FVar11.Data == pFVar13) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&local_98,(FString *)local_130,
               (bool *)&((((FPakListEntry *)FVar11.Data)->PakFile).Reference)->PakFilename);
    uVar9 = local_168._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 0x10;
  }
  if (0 < local_180.ArrayNum) {
    local_148 = 0;
    uVar16 = uVar15;
    uVar17 = uVar15;
    do {
      lVar3 = local_148;
      uVar7 = 0;
      if ((int)uVar15 < local_180.ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      pFVar14 = local_180.AllocatorInstance.Data + lVar3;
      if (3 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      if (local_158.ArrayNum == 0) {
LAB_142a866c8:
        bVar4 = false;
      }
      else {
        uVar16 = 1;
        pFVar10 = FPaths::GetBaseFilename(&local_d8,(FString *)pFVar14,true);
        pFVar12 = local_158.AllocatorInstance.Data + (longlong)local_158.ArrayNum * 0x10;
        for (FVar11.Data = local_158.AllocatorInstance.Data; FVar11.Data != pFVar12;
            FVar11.Data = FVar11.Data + 0x10) {
          iVar6 = *(int *)(FVar11.Data + 8);
          iVar1 = (pFVar10->Data).ArrayNum;
          if (iVar6 == iVar1) {
            if (iVar6 < 2) goto LAB_142a866c8;
            iVar6 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar11.Data,
                               (wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
            bVar4 = iVar6 == 0;
          }
          else {
            bVar4 = iVar6 + iVar1 == 1;
          }
          if (bVar4) goto LAB_142a866c8;
        }
        bVar4 = true;
      }
      if ((uVar16 != 0) &&
         (uVar16 = 0, local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        iVar6 = *(int *)(pFVar14 + 8) + -1;
        if (*(int *)(pFVar14 + 8) == 0) {
          pwVar8 = L"";
          iVar6 = 0;
        }
        else {
          pwVar8 = *(wchar_t **)pFVar14;
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
        iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                FindIndexByHash<FString>(&local_98,uVar7,(FString *)pFVar14);
        if (iVar6 == -1) {
          local_108 = *(wchar_t **)pFVar14;
          iStack_100 = *(int *)(pFVar14 + 8) + -1;
          if (*(int *)(pFVar14 + 8) == 0) {
            iStack_100 = 0;
          }
          local_c8._12_4_ = uStack_fc;
          local_c8.Size = iStack_100;
          local_c8.DataPtr = local_108;
          uVar7 = GetPakOrderFromPakFilePath(&local_c8);
          if (3 < (byte)LogPakFile._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          }
          bVar4 = -1 < CpuChannel->Enabled;
          if (bVar4) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId6383,"Pak_Mount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x18ef);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6383);
          }
          FScopedBootTiming::FScopedBootTiming(&local_b8,"Pak_Mount");
          if (*(int *)(pFVar14 + 8) == 0) {
            local_f8.PakFilename = L"";
          }
          else {
            local_f8.PakFilename = *(wchar_t **)pFVar14;
          }
          local_f8.Path = (wchar_t *)0x0;
          local_f8.MountOptions.MountFlags = None;
          local_f8.bLoadIndex = true;
          local_f8.PakOrder = uVar7;
          bVar5 = Mount((FPakPlatformFile *)local_130._8_8_,&local_f8,(FIoStatus *)0x0,
                        (FPakListEntry *)0x0);
          uVar7 = uVar17 + 1;
          if (!bVar5) {
            uVar7 = uVar17;
          }
          FScopedBootTiming::~FScopedBootTiming(&local_b8);
          uVar17 = uVar7;
          if (bVar4) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        else if (3 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
      }
      uVar15 = uVar15 + 1;
      local_148 = local_148 + 0x10;
    } while ((int)uVar15 < local_180.ArrayNum);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((FPakListEntry *)local_168.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return uVar17;
}

// MoveFile @ 142a86930

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakPlatformFile::MoveFile(FPakPlatformFile *this,wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  bVar1 = FindFileInPakFiles(&local_18,param_2,(TRefCountPtr<FPakFile> *)0x0,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    ::FString::FString((FString *)&local_18,param_2);
    bVar1 = IsNonPakFilenameAllowed(this,(FString *)&local_18);
    if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    if (bVar1) {
      uVar2 = (**(code **)((longlong)*this->LowerLevel + 0xa0))(this->LowerLevel,param_1,param_2);
    }
  }
  return (bool)uVar2;
}

// OpenAsyncRead @ 142a88ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */

IAsyncReadFileHandle * __thiscall
FPakPlatformFile::OpenAsyncRead(FPakPlatformFile *this,wchar_t *param_1,bool param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  FPakAsyncReadFileHandle *this_00;
  FPakAsyncReadFileHandle *pFVar4;
  TRefCountPtr<FPakFile> TVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [48];
  TRefCountPtr<FPakFile> local_b8;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_b0;
  FPakEntry local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (!__CsvProfilerStat4687) {
    FCsvProfilerTrace::OutputInlineStat("PakOpenAsyncRead",_GCsvCategory_FileIOVerbose.Index);
    __CsvProfilerStat4687 = true;
  }
  uVar2 = _GCsvCategory_FileIOVerbose.Index;
  FCsvProfiler::BeginStat
            ("PakOpenAsyncRead",_GCsvCategory_FileIOVerbose.Index,"CSV_PakOpenAsyncRead");
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar3) && (0 < GPakCache_Enable)) {
    pFVar4 = (FPakAsyncReadFileHandle *)0x0;
    local_98.Offset = ___xmm_0000000000000000ffffffffffffffff;
    local_98.Size = _UNK_15076adc8;
    local_98.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.CompressionBlocks.ArrayNum = 0;
    local_98.CompressionBlocks.ArrayMax = 0;
    local_98.UncompressedSize = 0;
    local_98.Hash[0] = '\0';
    local_98.Hash[1] = '\0';
    local_98.Hash[2] = '\0';
    local_98.Hash[3] = '\0';
    local_98.Hash[4] = '\0';
    local_98.Hash[5] = '\0';
    local_98.Hash[6] = '\0';
    local_98.Hash[7] = '\0';
    local_98.Hash[8] = '\0';
    local_98.Hash[9] = '\0';
    local_98.Hash[10] = '\0';
    local_98.Hash[0xb] = '\0';
    local_98.Hash[0xc] = '\0';
    local_98.Hash[0xd] = '\0';
    local_98.Hash[0xe] = '\0';
    local_98.Hash[0xf] = '\0';
    local_98.Hash[0x10] = '\0';
    local_98.Hash[0x11] = '\0';
    local_98.Hash[0x12] = '\0';
    local_98.Hash[0x13] = '\0';
    local_98.CompressionBlockSize = 0;
    local_98.CompressionMethodIndex = 0;
    local_98.Flags = '\0';
    local_98.Verified = false;
    local_b8.Reference = (FPakFile *)0x0;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    GetMountedPaks(this,&local_b0);
    bVar3 = FindFileInPakFiles(&local_b0,param_1,&local_b8,&local_98);
    DestructItems<FPakPlatformFile::FPakListEntry,int>
              ((FPakListEntry *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
    if ((FPakListEntry *)local_b0.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    TVar5.Reference = local_b8.Reference;
    if (bVar3) {
      if (local_b8.Reference != (FPakFile *)0x0) {
        if ((local_b8.Reference)->PakFilenameName != (FName)0x0) {
          this_00 = ::operator_new(0x1b0);
          if (this_00 != (FPakAsyncReadFileHandle *)0x0) {
            pFVar4 = FPakAsyncReadFileHandle::FPakAsyncReadFileHandle
                               (this_00,&local_98,&local_b8,param_1);
            TVar5.Reference = local_b8.Reference;
          }
          if (TVar5.Reference != (FPakFile *)0x0) {
            plVar6 = &(TVar5.Reference)->_padding_;
            LOCK();
            lVar1 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar1 == 1) {
              if (plVar6 == (longlong *)0x0) {
                TVar5.Reference = (FPakFile *)0x0;
              }
              if (TVar5.Reference != (FPakFile *)0x0) {
                (**(code **)(TVar5.Reference)->_padding_)(TVar5.Reference,1);
              }
            }
          }
          if (local_98.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.CompressionBlocks.AllocatorInstance.Data);
          }
          goto LAB_142a89097;
        }
        goto LAB_142a89046;
      }
    }
    else {
LAB_142a89046:
      if (local_b8.Reference != (FPakFile *)0x0) {
        plVar6 = &(local_b8.Reference)->_padding_;
        LOCK();
        lVar1 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          if (plVar6 == (longlong *)0x0) {
            TVar5.Reference = (FPakFile *)0x0;
          }
          if (TVar5.Reference != (FPakFile *)0x0) {
            (**(code **)(TVar5.Reference)->_padding_)(TVar5.Reference,1);
          }
        }
      }
    }
    if (local_98.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  pFVar4 = (FPakAsyncReadFileHandle *)
           IPlatformFile::OpenAsyncRead((IPlatformFile *)this,param_1,param_2);
LAB_142a89097:
  FCsvProfiler::EndStat("PakOpenAsyncRead",uVar2);
  return (IAsyncReadFileHandle *)pFVar4;
}

// OpenMappedEx @ 142a89860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */

TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError> *
__thiscall
FPakPlatformFile::OpenMappedEx
          (FPakPlatformFile *this,
          TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2,long64 param_3)

{
  int iVar1;
  ulong64 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  IMappedFileHandle *this_00;
  longlong lVar11;
  TRefCountPtr<FPakFile> TVar12;
  bool bVar13;
  ulonglong uVar14;
  longlong *plVar15;
  IMappedFileHandle *pIVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  undefined1 auStack_1a8 [32];
  long64 local_188;
  TRefCountPtr<FPakFile> local_178;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_170;
  FString local_160;
  FString local_150;
  LPCRITICAL_SECTION local_140;
  IMappedFileHandle *local_138;
  FSharedReferencer<1> local_130;
  wchar_t *local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FPakEntry local_e8;
  IMappedFileHandle *local_98;
  undefined8 local_90;
  undefined4 local_88;
  byte local_80;
  longlong local_78 [3];
  byte local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  bVar7 = false;
  local_178.Reference = local_178.Reference & 0xffffffff00000000;
  local_128 = param_1;
  if (GMMIO_Enable == 0) {
    ::FString::FString(&local_120,L"Memory mapped IO is not enabled on this platform");
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_120.Data.AllocatorInstance.Data;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_120.Data.ArrayNum;
    *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_120.Data.ArrayMax;
    *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  bVar13 = bVar7;
  if (this->bLookLooseFirst != false) {
    ::FString::FString(&local_110,param_1);
    bVar13 = true;
    bVar6 = IsNonPakFilenameAllowed(this,&local_110);
    if (bVar6) {
      bVar7 = true;
    }
  }
  if ((bVar13) && (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    local_188 = param_3;
    (**(code **)((longlong)*this->LowerLevel + 0x1b0))(this->LowerLevel,local_78,param_1,param_2);
    uVar14 = (ulonglong)local_60;
    if ((2 < uVar14) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                *)(*pcVar3)();
      return pTVar8;
    }
    if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
          ::__l2::bIsSameType)[uVar14] == '\0') {
      if ((local_60 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                  *)(*pcVar3)();
        return pTVar8;
      }
      lVar11 = local_78[0];
      local_78[0] = 0;
      if ((2 < local_60) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                  *)(*pcVar3)();
        return pTVar8;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60])(local_78);
      (__return_storage_ptr__->Variant)._padding_ = lVar11;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    if ((2 < local_60) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                *)(*pcVar3)();
      return pTVar8;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60])(local_78);
    }
  }
  local_e8.Offset = ___xmm_0000000000000000ffffffffffffffff;
  local_e8.Size = _UNK_15076adc8;
  local_e8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.CompressionBlocks.ArrayNum = 0;
  local_e8.CompressionBlocks.ArrayMax = 0;
  local_e8.UncompressedSize = 0;
  local_e8.Hash[0] = '\0';
  local_e8.Hash[1] = '\0';
  local_e8.Hash[2] = '\0';
  local_e8.Hash[3] = '\0';
  local_e8.Hash[4] = '\0';
  local_e8.Hash[5] = '\0';
  local_e8.Hash[6] = '\0';
  local_e8.Hash[7] = '\0';
  local_e8.Hash[8] = '\0';
  local_e8.Hash[9] = '\0';
  local_e8.Hash[10] = '\0';
  local_e8.Hash[0xb] = '\0';
  local_e8.Hash[0xc] = '\0';
  local_e8.Hash[0xd] = '\0';
  local_e8.Hash[0xe] = '\0';
  local_e8.Hash[0xf] = '\0';
  local_e8.Hash[0x10] = '\0';
  local_e8.Hash[0x11] = '\0';
  local_e8.Hash[0x12] = '\0';
  local_e8.Hash[0x13] = '\0';
  local_e8.CompressionBlockSize = 0;
  local_e8.CompressionMethodIndex = 0;
  local_e8.Flags = '\0';
  local_e8.Verified = false;
  local_178.Reference = (FPakFile *)0x0;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  GetMountedPaks(this,&local_170);
  bVar7 = FindFileInPakFiles(&local_170,param_1,&local_178,&local_e8);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
  if ((FPakListEntry *)local_170.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  TVar12.Reference = local_178.Reference;
  if ((bVar7) && (local_178.Reference != (FPakFile *)0x0)) {
    if ((local_e8.CompressionMethodIndex != 0) || ((local_e8._72_2_ & 1) != 0)) {
      ::FString::PrintfImpl(&local_160,L"Can\'t map compressed or encrypted file \'%s\'");
      (__return_storage_ptr__->Variant)._padding_ = (longlong)local_160.Data.AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_160.Data.ArrayNum;
      *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_160.Data.ArrayMax
      ;
      *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
      local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.Data.ArrayNum = 0;
      local_160.Data.ArrayMax = 0;
      plVar15 = &(TVar12.Reference)->_padding_;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      LOCK();
      iVar1 = (int)*plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      goto joined_r0x000142a89f1b;
    }
    local_140 = (LPCRITICAL_SECTION)&(local_178.Reference)->MappedFileHandleCriticalSection;
    if (local_140 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_140);
    if (((TVar12.Reference)->MappedFileHandle).Object != (IMappedFileHandle *)0x0) {
LAB_142a89dde:
      pIVar16 = (IMappedFileHandle *)0x0;
      this_00 = ::operator_new(0x40);
      if (this_00 != (IMappedFileHandle *)0x0) {
        iVar1 = ((TVar12.Reference)->Info).Version;
        lVar11 = 0x30;
        uVar2 = (TVar12.Reference)->CachedTotalSize;
        if (2 < iVar1) {
          lVar11 = 0x35;
          if (local_e8.CompressionMethodIndex != 0) {
            lVar11 = (longlong)local_e8.CompressionBlocks.ArrayNum * 0x10 + 0x39;
          }
        }
        pTVar10 = ((TVar12.Reference)->MappedFileHandle).SharedReferenceCount.ReferenceController;
        pIVar16 = ((TVar12.Reference)->MappedFileHandle).Object;
        lVar18 = lVar11 + 8;
        if (1 < iVar1) {
          lVar18 = lVar11;
        }
        lVar18 = lVar18 + local_e8.Offset;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        IMappedFileHandle::IMappedFileHandle(this_00,local_e8.UncompressedSize);
        this_00->_padding_ = (longlong)&___7FMappedFilePakProxy__6B_;
        this_00[1]._padding_ = (longlong)pIVar16;
        this_00[1].MappedFileSize = (ulong64)pTVar10;
        this_00[2].MappedFileSize = uVar2;
        this_00[2]._padding_ = lVar18;
        ::FString::FString((FString *)(this_00 + 3),local_128);
        if (((longlong)this_00[2].MappedFileSize < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PakSize >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                               ,0xf76,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                    *)(*pcVar3)();
          return pTVar8;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pIVar16 = this_00;
      }
      (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar16;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      LeaveCriticalSection(local_140);
      goto LAB_142a89fb9;
    }
    if (((TVar12.Reference)->PakFilename).Data.ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)((TVar12.Reference)->PakFilename).Data.AllocatorInstance.Data;
    }
    local_188 = param_3;
    (**(code **)((longlong)*this->LowerLevel + 0x1b0))(this->LowerLevel,&local_98,pwVar17,param_2);
    uVar14 = (ulonglong)local_80;
    if ((2 < uVar14) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                *)(*pcVar3)();
      return pTVar8;
    }
    if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
          ::__l2::bIsSameType)[uVar14] == '\0') {
      if ((local_80 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                  *)(*pcVar3)();
        return pTVar8;
      }
      pIVar16 = local_98;
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      local_98 = (IMappedFileHandle *)0x0;
      if ((2 < local_80) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                  *)(*pcVar3)();
        return pTVar8;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_80] !=
          UE::Core::Private::
          TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
          ::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_80])(&local_98);
      }
      local_80 = 2;
      local_138 = pIVar16;
      pTVar9 = ::operator_new(0x18);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VIMappedFileHandle__U__DefaultDeleter_VIMappedFileHandle___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9[1]._padding_ = (longlong)pIVar16;
        pTVar10 = pTVar9;
      }
      local_130.ReferenceController = pTVar10;
      if (&(TVar12.Reference)->MappedFileHandle != (TSharedPtr<IMappedFileHandle,1> *)&local_138) {
        ((TVar12.Reference)->MappedFileHandle).Object = pIVar16;
        local_138 = (IMappedFileHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&((TVar12.Reference)->MappedFileHandle).SharedReferenceCount,&local_130);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_130.ReferenceController);
      uVar14 = (ulonglong)local_80;
      if ((2 < local_80) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                  *)(*pcVar3)();
        return pTVar8;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] !=
          UE::Core::Private::
          TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
          ::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(&local_98);
      }
      goto LAB_142a89dde;
    }
    if ((local_80 != 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                *)(*pcVar3)();
      return pTVar8;
    }
    pIVar16 = local_98;
    uVar4 = (undefined4)local_90;
    uVar5 = local_90._4_4_;
    local_98 = (IMappedFileHandle *)0x0;
    local_90 = 0;
    if ((2 < local_80) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
                *)(*pcVar3)();
      return pTVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_80])(&local_98);
    (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar16;
    *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = uVar4;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = uVar5;
    *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = local_88;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    local_80 = 2;
    LeaveCriticalSection(local_140);
    if (TVar12.Reference == (FPakFile *)0x0) goto LAB_142a89fe8;
    plVar15 = &(TVar12.Reference)->_padding_;
    LOCK();
    lVar11 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) goto LAB_142a89fe8;
    if (plVar15 == (longlong *)0x0) {
      TVar12.Reference = (FPakFile *)0x0;
    }
  }
  else {
    ::FString::FString(&local_100,param_1);
    bVar7 = IsNonPakFilenameAllowed(this,&local_100);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      local_188 = param_3;
      (**(code **)((longlong)*this->LowerLevel + 0x1b0))
                (this->LowerLevel,__return_storage_ptr__,param_1,param_2);
    }
    else {
      ::FString::PrintfImpl(&local_150,L"Failed to open mapped file \'%s\'");
      (__return_storage_ptr__->Variant)._padding_ = (longlong)local_150.Data.AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_150.Data.ArrayNum;
      *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_150.Data.ArrayMax
      ;
      *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.Data.ArrayNum = 0;
      local_150.Data.ArrayMax = 0;
    }
LAB_142a89fb9:
    if (TVar12.Reference == (FPakFile *)0x0) goto LAB_142a89fe8;
    plVar15 = &(TVar12.Reference)->_padding_;
    LOCK();
    iVar1 = (int)*plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
joined_r0x000142a89f1b:
    if ((iVar1 != 1) || (&(TVar12.Reference)->_padding_ == (longlong *)0x0)) goto LAB_142a89fe8;
  }
  if (TVar12.Reference != (FPakFile *)0x0) {
    (**(code **)(TVar12.Reference)->_padding_)(TVar12.Reference,1);
  }
LAB_142a89fe8:
  if (local_e8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.CompressionBlocks.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OpenRead @ 142a8a030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */

IFileHandle * __thiscall
FPakPlatformFile::OpenRead(FPakPlatformFile *this,wchar_t *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar9;
  uint uVar10;
  IFileHandle *pIVar11;
  IFileHandle *pIVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  TRefCountPtr<FPakFile> local_e8;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_e0;
  FScriptContainerElement *local_d0;
  IFileHandle *local_c8;
  FString local_c0;
  FString local_b0;
  FPakEntry local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  pIVar12 = (IFileHandle *)0x0;
  local_e8.Reference = local_e8.Reference & 0xffffffff00000000;
  pIVar11 = pIVar12;
  if (this->bLookLooseFirst != false) {
    ::FString::FString(&local_c0,param_1);
    pIVar11 = (IFileHandle *)&DAT_00000001;
    bVar6 = IsNonPakFilenameAllowed(this,&local_c0);
    if (bVar6) {
      bVar6 = true;
      goto LAB_142a8a0a2;
    }
  }
  bVar6 = false;
LAB_142a8a0a2:
  if ((pIVar11 != (IFileHandle *)0x0) &&
     (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  pIVar11 = pIVar12;
  if ((!bVar6) ||
     (pIVar11 = (IFileHandle *)
                (**(code **)((longlong)*this->LowerLevel + 0xe8))(this->LowerLevel,param_1,param_2),
     pIVar11 == (IFileHandle *)0x0)) {
    local_98.Offset = ___xmm_0000000000000000ffffffffffffffff;
    local_98.Size = _UNK_15076adc8;
    local_98.Hash[0x10] = '\0';
    local_98.Hash[0x11] = '\0';
    local_98.Hash[0x12] = '\0';
    local_98.Hash[0x13] = '\0';
    local_98.Flags = '\0';
    local_98.Verified = false;
    local_98.Hash[0] = '\0';
    local_98.Hash[1] = '\0';
    local_98.Hash[2] = '\0';
    local_98.Hash[3] = '\0';
    local_98.Hash[4] = '\0';
    local_98.Hash[5] = '\0';
    local_98.Hash[6] = '\0';
    local_98.Hash[7] = '\0';
    local_98.Hash[8] = '\0';
    local_98.Hash[9] = '\0';
    local_98.Hash[10] = '\0';
    local_98.Hash[0xb] = '\0';
    local_98.Hash[0xc] = '\0';
    local_98.Hash[0xd] = '\0';
    local_98.Hash[0xe] = '\0';
    local_98.Hash[0xf] = '\0';
    local_e8.Reference = (FPakFile *)0x0;
    local_98.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.CompressionBlocks.ArrayNum = 0;
    local_98.CompressionBlocks.ArrayMax = 0;
    local_98.UncompressedSize = 0;
    local_98.CompressionBlockSize = 0;
    local_98.CompressionMethodIndex = 0;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    GetMountedPaks(this,&local_e0);
    bVar6 = FindFileInPakFiles(&local_e0,param_1,&local_e8,&local_98);
    DestructItems<FPakPlatformFile::FPakListEntry,int>
              ((FPakListEntry *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
    if ((FPakListEntry *)local_e0.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
    if (bVar6) {
      pIVar11 = CreatePakFileHandle(this,param_1,&local_e8,&local_98);
      local_c8 = pIVar11;
      if (pIVar11 != (IFileHandle *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  FCoreDelegates::GetOnFileOpenedForReadFromPakFile();
        if (((local_e8.Reference)->PakFilename).Data.ArrayNum == 0) {
          local_d0 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_d0 = ((local_e8.Reference)->PakFilename).Data.AllocatorInstance.Data;
        }
        if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pIVar11 = (IFileHandle *)(*pcVar4)();
          return pIVar11;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        pFVar5 = local_d0;
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        uVar10 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar10) {
          lVar13 = (longlong)(int)uVar10;
          lVar9 = lVar13 << 4;
          do {
            iVar1 = (this_00->InvocationList).ArrayNum;
            uVar8 = 0;
            if ((int)uVar10 < iVar1) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (local_f8 = lVar13, local_f0 = (longlong)iVar1,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pIVar11 = (IFileHandle *)(*pcVar4)();
              return pIVar11;
            }
            pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar2 + lVar9 + 8) == 0) ||
                (plVar3 = *(longlong **)(pFVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,pFVar5,param_1), cVar7 == '\0')) {
              pIVar12 = (IFileHandle *)&DAT_00000001;
            }
            lVar13 = lVar13 + -1;
            lVar9 = lVar9 + -0x10;
            uVar10 = uVar10 - 1;
            pIVar11 = local_c8;
          } while (-1 < (int)uVar10);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if ((char)pIVar12 != '\0') {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
    }
    else {
      ::FString::FString(&local_b0,param_1);
      bVar6 = IsNonPakFilenameAllowed(this,&local_b0);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pIVar11 = (IFileHandle *)
                  (**(code **)((longlong)*this->LowerLevel + 0xe8))
                            (this->LowerLevel,param_1,param_2);
      }
    }
    if (local_98.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.CompressionBlocks.AllocatorInstance.Data);
    }
    if (local_e8.Reference != (FPakFile *)0x0) {
      plVar3 = &(local_e8.Reference)->_padding_;
      LOCK();
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((((int)lVar9 == 1) && (plVar3 != (longlong *)0x0)) &&
         (local_e8.Reference != (FPakFile *)0x0)) {
        (**(code **)(local_e8.Reference)->_padding_)(local_e8.Reference,1);
      }
    }
  }
  return pIVar11;
}

// OpenWrite @ 142a8a350

/* WARNING: Enum "EVersion": Some values do not have unique names */

IFileHandle * __thiscall
FPakPlatformFile::OpenWrite(FPakPlatformFile *this,wchar_t *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  IFileHandle *pIVar2;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  bVar1 = FindFileInPakFiles(&local_18,param_1,(TRefCountPtr<FPakFile> *)0x0,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (bVar1) {
    pIVar2 = (IFileHandle *)0x0;
  }
  else {
    pIVar2 = (IFileHandle *)
             (**(code **)((longlong)*this->LowerLevel + 0x110))
                       (this->LowerLevel,param_1,param_2,param_3);
  }
  return pIVar2;
}

// OptimizeMemoryUsageForMountedPaks @ 142a8a400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakPlatformFile::OptimizeMemoryUsageForMountedPaks(FPakPlatformFile *this)

{
  undefined1 *puVar1;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *this_00;
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  *this_01;
  int iVar2;
  FPakFile *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  FString *pFVar16;
  FTreeNode *pFVar17;
  FTreeNode *pFVar18;
  int iVar19;
  wchar_t wVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  wchar_t wVar25;
  bool bVar26;
  bool bVar27;
  int iVar28;
  bool bVar29;
  ulonglong uVar30;
  ForAnyElementType FVar31;
  FPakListEntry *pFVar32;
  bool local_res10 [8];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_80 [4];
  
  local_res10[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"Pak",L"UnloadPakEntryFilenamesIfPossible",local_res10,&GEngineIni);
  if ((local_res10[0] != false) && (2 < (byte)LogPakFile._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  local_80[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80[0].ArrayNum = 0;
  local_80[0].ArrayMax = 0;
  GetMountedPaks(this,local_80);
  if (FPakFile::bSomePakNeedsPruning != false) {
    iVar28 = local_80[0].ArrayNum;
    pFVar32 = (FPakListEntry *)
              (local_80[0].AllocatorInstance.Data + (longlong)local_80[0].ArrayNum * 0x10);
    FVar31.Data = local_80[0].AllocatorInstance.Data;
    while( true ) {
      if (local_80[0].ArrayNum != iVar28) {
        local_res18[0] = local_res18[0] & 0xffffff00;
        `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if ((FPakListEntry *)FVar31.Data == pFVar32) break;
      pFVar3 = (((FPakListEntry *)FVar31.Data)->PakFile).Reference;
      if (pFVar3->bWillPruneDirectoryIndex != false) {
        if ((pFVar3->bHasPathHashIndex == false) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("PakFile->bHasPathHashIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                ,0x16df,L""), bVar29)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AcquireSRWLockExclusive((PSRWLOCK)&pFVar3->DirectoryIndexLock);
        if (pFVar3->bNeedsLegacyPruning != false) {
          FPakFile::PruneDirectoryIndexInternal
                    (&pFVar3->DirectoryIndex,&pFVar3->DirectoryTreeIndex,
                     &pFVar3->PrunedDirectoryIndex,&pFVar3->PrunedDirectoryTreeIndex,
                     &pFVar3->MountPoint);
          pFVar3->bNeedsLegacyPruning = false;
        }
        uVar5 = *(undefined8 *)&pFVar3->DirectoryIndex;
        uVar6 = *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x8;
        this_00 = &pFVar3->PrunedDirectoryIndex;
        uVar7 = *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x8;
        uVar8 = *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x10;
        uVar9 = *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x18;
        uVar10 = *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x20;
        uVar11 = *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x28;
        uVar12 = *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x30;
        uVar13 = *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x38;
        uVar14 = *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x40;
        uVar15 = *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x48;
        *(undefined8 *)&pFVar3->DirectoryIndex = *(undefined8 *)&this_00->field_0x0;
        *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x8 = uVar7;
        uVar7 = *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x18;
        *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x10 =
             *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x10;
        *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x18 = uVar7;
        uVar7 = *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x28;
        *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x20 =
             *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x20;
        *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x28 = uVar7;
        uVar7 = *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x38;
        *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x30 =
             *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x30;
        *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x38 = uVar7;
        uVar7 = *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x48;
        *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x40 =
             *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x40;
        *(undefined8 *)&(pFVar3->DirectoryIndex).field_0x48 = uVar7;
        *(undefined8 *)&this_00->field_0x0 = uVar5;
        *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x8 = uVar6;
        *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x10 = uVar8;
        *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x18 = uVar9;
        *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x20 = uVar10;
        *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x28 = uVar11;
        *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x30 = uVar12;
        *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x38 = uVar13;
        *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x40 = uVar14;
        *(undefined8 *)&(pFVar3->PrunedDirectoryIndex).field_0x48 = uVar15;
        bVar29 = 1 < *(int *)&(pFVar3->PrunedDirectoryIndex).field_0x48;
        if (!bVar29) {
          TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
                            *)this_00);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_00,0,*(int *)&(pFVar3->PrunedDirectoryIndex).field_0x8);
        puVar1 = &(pFVar3->PrunedDirectoryIndex).field_0xc;
        *(undefined4 *)&(pFVar3->PrunedDirectoryIndex).field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
        }
        *(undefined4 *)&(pFVar3->PrunedDirectoryIndex).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar3->PrunedDirectoryIndex).field_0x34 = 0;
        iVar2 = *(int *)&(pFVar3->PrunedDirectoryIndex).field_0x2c;
        *(undefined4 *)&(pFVar3->PrunedDirectoryIndex).field_0x28 = 0;
        if ((iVar2 < 0) || (0x80 < iVar2)) {
          *(undefined4 *)&(pFVar3->PrunedDirectoryIndex).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(pFVar3->PrunedDirectoryIndex).field_0x10,0);
        }
        if (bVar29) {
          *(undefined4 *)&(pFVar3->PrunedDirectoryIndex).field_0x48 = 1;
          TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
                    *)this_00);
        }
        uVar5 = *(undefined8 *)(pFVar3->DirectoryTreeIndex).Root.Value.Pad;
        uVar6 = *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 8);
        this_01 = &pFVar3->PrunedDirectoryTreeIndex;
        uVar7 = *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 8);
        uVar8 = *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x10);
        uVar9 = *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x18);
        uVar10 = *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x20);
        uVar11 = *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x28);
        uVar12 = *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x30);
        uVar13 = *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x38);
        uVar14 = *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x40);
        uVar15 = *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x48);
        pFVar16 = (pFVar3->DirectoryTreeIndex).Root.RelPaths.Ptr;
        pFVar17 = (pFVar3->DirectoryTreeIndex).Root.ChildNodes.Ptr;
        uVar22 = (pFVar3->DirectoryTreeIndex).Root.NumChildNodesAndFlags;
        iVar23 = (pFVar3->DirectoryTreeIndex).Root.CapacityChildNodes;
        iVar24 = (pFVar3->DirectoryTreeIndex).NumPaths;
        wVar25 = (pFVar3->DirectoryTreeIndex).PathSeparator;
        bVar26 = (pFVar3->DirectoryTreeIndex).bPathSeparatorInitialized;
        bVar27 = (pFVar3->DirectoryTreeIndex).bNeedDriveWithoutPathFixup;
        *(undefined8 *)(pFVar3->DirectoryTreeIndex).Root.Value.Pad =
             *(undefined8 *)(this_01->Root).Value.Pad;
        *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 8) = uVar7;
        uVar7 = *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x18);
        *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x10) =
             *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x10);
        *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x18) = uVar7;
        uVar7 = *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x28);
        *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x20) =
             *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x20);
        *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x28) = uVar7;
        uVar7 = *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x38);
        *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x30) =
             *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x30);
        *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x38) = uVar7;
        uVar7 = *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x48);
        *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x40) =
             *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x40);
        *(undefined8 *)((pFVar3->DirectoryTreeIndex).Root.Value.Pad + 0x48) = uVar7;
        pFVar18 = (pFVar3->PrunedDirectoryTreeIndex).Root.ChildNodes.Ptr;
        (pFVar3->DirectoryTreeIndex).Root.RelPaths.Ptr =
             (pFVar3->PrunedDirectoryTreeIndex).Root.RelPaths.Ptr;
        (pFVar3->DirectoryTreeIndex).Root.ChildNodes.Ptr = pFVar18;
        iVar2 = (pFVar3->PrunedDirectoryTreeIndex).Root.CapacityChildNodes;
        iVar19 = (pFVar3->PrunedDirectoryTreeIndex).NumPaths;
        wVar20 = (pFVar3->PrunedDirectoryTreeIndex).PathSeparator;
        bVar29 = (pFVar3->PrunedDirectoryTreeIndex).bPathSeparatorInitialized;
        bVar21 = (pFVar3->PrunedDirectoryTreeIndex).bNeedDriveWithoutPathFixup;
        (pFVar3->DirectoryTreeIndex).Root.NumChildNodesAndFlags =
             (pFVar3->PrunedDirectoryTreeIndex).Root.NumChildNodesAndFlags;
        (pFVar3->DirectoryTreeIndex).Root.CapacityChildNodes = iVar2;
        (pFVar3->DirectoryTreeIndex).NumPaths = iVar19;
        (pFVar3->DirectoryTreeIndex).PathSeparator = wVar20;
        (pFVar3->DirectoryTreeIndex).bPathSeparatorInitialized = bVar29;
        (pFVar3->DirectoryTreeIndex).bNeedDriveWithoutPathFixup = bVar21;
        *(undefined8 *)(this_01->Root).Value.Pad = uVar5;
        *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 8) = uVar6;
        *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x10) = uVar8;
        *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x18) = uVar9;
        *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x20) = uVar10;
        *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x28) = uVar11;
        *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x30) = uVar12;
        *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x38) = uVar13;
        *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x40) = uVar14;
        *(undefined8 *)((pFVar3->PrunedDirectoryTreeIndex).Root.Value.Pad + 0x48) = uVar15;
        (pFVar3->PrunedDirectoryTreeIndex).Root.RelPaths.Ptr = pFVar16;
        (pFVar3->PrunedDirectoryTreeIndex).Root.ChildNodes.Ptr = pFVar17;
        (pFVar3->PrunedDirectoryTreeIndex).Root.NumChildNodesAndFlags = uVar22;
        (pFVar3->PrunedDirectoryTreeIndex).Root.CapacityChildNodes = iVar23;
        (pFVar3->PrunedDirectoryTreeIndex).NumPaths = iVar24;
        (pFVar3->PrunedDirectoryTreeIndex).PathSeparator = wVar25;
        (pFVar3->PrunedDirectoryTreeIndex).bPathSeparatorInitialized = bVar26;
        (pFVar3->PrunedDirectoryTreeIndex).bNeedDriveWithoutPathFixup = bVar27;
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FTreeNode::Reset(&this_01->Root);
        (pFVar3->PrunedDirectoryTreeIndex).NumPaths = 0;
        (pFVar3->PrunedDirectoryTreeIndex).PathSeparator = L'/';
        (pFVar3->PrunedDirectoryTreeIndex).bPathSeparatorInitialized = false;
        pFVar3->bHasFullDirectoryIndex = false;
        pFVar3->bWillPruneDirectoryIndex = false;
        ReleaseSRWLockExclusive((PSRWLOCK)&pFVar3->DirectoryIndexLock);
      }
      FVar31.Data = FVar31.Data + 0x10;
    }
  }
  uVar30 = (ulonglong)local_80[0].ArrayNum;
  pFVar32 = (FPakListEntry *)(local_80[0].AllocatorInstance.Data + uVar30 * 0x10);
  local_res18[0] = local_80[0].ArrayNum;
  FVar31.Data = local_80[0].AllocatorInstance.Data;
  while( true ) {
    if (local_80[0].ArrayNum != (int)uVar30) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if ((FPakListEntry *)FVar31.Data == pFVar32) break;
    pFVar3 = (((FPakListEntry *)FVar31.Data)->PakFile).Reference;
    bVar29 = pFVar3->bWillPruneDirectoryIndex;
    if (bVar29 != false) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar3->DirectoryIndexLock);
    }
    GetRecursiveAllocatedSize(&pFVar3->DirectoryIndex);
    GetRecursiveAllocatedSize(&pFVar3->DirectoryTreeIndex);
    GetRecursiveAllocatedSize(&pFVar3->PrunedDirectoryIndex);
    GetRecursiveAllocatedSize(&pFVar3->PrunedDirectoryTreeIndex);
    if (bVar29 != false) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar3->DirectoryIndexLock);
    }
    uVar30 = (ulonglong)local_res18[0];
    FVar31.Data = FVar31.Data + 0x10;
  }
  if (4 < (byte)LogPakFile._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_80[0].AllocatorInstance.Data,local_80[0].ArrayNum);
  if ((FPakListEntry *)local_80[0].AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_80[0].AllocatorInstance.Data);
  }
  return;
}

// RefreshPakChunkIndicies @ 142a92a60

void __thiscall FPakPlatformFile::RefreshPakChunkIndicies(FPakPlatformFile *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  lpCriticalSection = &this->PakListCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (this->PakFiles).ArrayNum;
  pFVar8 = (this->PakFiles).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->PakFiles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    local_48.DataPtr = *(wchar_t **)(*(longlong *)(pFVar8 + 8) + 0x18);
    iVar3 = *(int *)(*(longlong *)(pFVar8 + 8) + 0x20);
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iVar6;
    iVar6 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_48);
    pFVar1 = pFVar8 + 8;
    pFVar8 = pFVar8 + 0x10;
    *(int *)(*(longlong *)pFVar1 + 0x2f8) = iVar6;
  }
  iVar2 = (this->PendingEncryptedPakFiles).ArrayNum;
  pFVar8 = (this->PendingEncryptedPakFiles).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x38;
  while( true ) {
    if ((this->PendingEncryptedPakFiles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListDeferredEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar7) break;
    local_38.DataPtr = *(wchar_t **)pFVar8;
    iVar6 = *(int *)(pFVar8 + 8) + -1;
    if (*(int *)(pFVar8 + 8) == 0) {
      iVar6 = 0;
    }
    local_38._12_4_ = uStack_4c;
    local_38.Size = iVar6;
    iVar6 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_38);
    *(int *)(pFVar8 + 0x34) = iVar6;
    pFVar8 = pFVar8 + 0x38;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RegisterEncryptionKey @ 142a92bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakPlatformFile::RegisterEncryptionKey(FPakPlatformFile *this,FGuid *param_1,FAESKey *param_2)

{
  uint *puVar1;
  code *pcVar2;
  FGuid *this_00;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  IPlatformChunkInstall *pIVar10;
  FScriptContainerElement *pFVar11;
  byte bVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  TSparseSetElement<int> *pTVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined1 auStackY_228 [32];
  undefined1 local_1f4 [4];
  FGuid *local_1f0;
  undefined1 local_1e8 [4];
  uint local_1e4;
  int local_1e0 [2];
  FPakPlatformFile *local_1d8;
  int local_1d0;
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c8;
  undefined4 local_1c0;
  uint uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  FString local_1b0;
  uint local_1a0;
  uint uStack_19c;
  uint local_198;
  uint uStack_194;
  longlong *local_190;
  int iStack_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined4 uStack_178;
  uint uStack_174;
  int local_170;
  uint uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  FMemScope local_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  wchar_t *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FSparseArrayAllocationInfo local_e8;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  FPakMountArgs local_c8;
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar21 = (this->PendingEncryptedPakFiles).AllocatorInstance.Data;
  iVar24 = 0;
  local_1e4 = (this->PendingEncryptedPakFiles).ArrayNum;
  uVar13 = (ulonglong)(int)local_1e4;
  pFVar11 = pFVar21 + uVar13 * 0x38;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1f0 = param_1;
  local_1d8 = this;
LAB_142a92c63:
  do {
    if ((this->PendingEncryptedPakFiles).ArrayNum != (int)uVar13) {
      local_1f4[0] = 0;
      `TCheckedPointerIterator<FPakPlatformFile::FPakListDeferredEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1f4);
      param_1 = local_1f0;
    }
    pwVar8 = (wchar_t *)0x0;
    if (pFVar21 == pFVar11) break;
    if (((*(uint *)(pFVar21 + 0x30) == param_1->D && *(uint *)(pFVar21 + 0x2c) == param_1->C) &&
        *(uint *)(pFVar21 + 0x28) == param_1->B) && *(uint *)(pFVar21 + 0x24) == param_1->A) {
      iVar5 = *(int *)(pFVar21 + 0x18);
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        if (iVar5 == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(pFVar21 + 0x10);
        }
      }
      local_c8.PakOrder = *(uint *)(pFVar21 + 0x20);
      if (*(int *)(pFVar21 + 8) == 0) {
        local_c8.PakFilename = L"";
      }
      else {
        local_c8.PakFilename = *(wchar_t **)pFVar21;
      }
      local_c8.MountOptions.MountFlags = None;
      local_c8.bLoadIndex = true;
      local_c8.Path = pwVar8;
      bVar4 = Mount(this,&local_c8,(FIoStatus *)0x0,(FPakListEntry *)0x0);
      if (bVar4) {
        if (4 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        local_f8 = *(wchar_t **)pFVar21;
        iVar24 = iVar24 + 1;
        iStack_f0 = *(int *)(pFVar21 + 8) + -1;
        if (*(int *)(pFVar21 + 8) == 0) {
          iStack_f0 = 0;
        }
        local_a8._12_4_ = uStack_ec;
        local_a8.Size = iStack_f0;
        local_a8.DataPtr = local_f8;
        iVar5 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_a8);
        param_1 = local_1f0;
        if (iVar5 != -1) {
          if (local_64 == 0) {
            iVar6 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                               (int *)(local_98 + 0xc));
            iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
            FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = local_78;
            }
            bVar12 = (byte)iVar7 & 0x1f;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 0x1f;
              bVar12 = bVar12 - 0x20;
            }
            puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar7 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar12 & 0x1f));
            iVar7 = local_68;
          }
          else {
            local_64 = local_64 + -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
            iVar6 = local_68;
            if (local_64 != 0) {
              *(undefined4 *)(local_98._0_8_ + (longlong)iVar7 * 0xc) = 0xffffffff;
            }
          }
          local_68 = iVar7;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_98,&local_e8,iVar6);
          if (local_e8.Pointer == (TSparseSetElement<int> *)0x0) {
            pTVar20 = (TSparseSetElement<int> *)0x0;
          }
          else {
            *(int *)local_e8.Pointer = iVar5;
            *(undefined4 *)((longlong)local_e8.Pointer + 4) = 0xffffffff;
            pTVar20 = local_e8.Pointer;
          }
          uVar22 = *(uint *)pTVar20;
          local_1e0[0] = local_e8.Index;
          bVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                             uVar22,pTVar20,local_1e0,(bool *)0x0);
          param_1 = local_1f0;
          this = local_1d8;
          if (!bVar4) {
            uVar18 = 1;
            uVar15 = local_98._8_4_ - local_64;
            if (3 < uVar15) {
              uVar13 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
              lVar17 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_160 = (undefined4)lVar17;
              uVar18 = 1 << ((byte)lVar17 & 0x1f);
            }
            if (((int)uVar15 < 1) || ((int)uVar18 <= (int)local_50)) {
              uVar22 = local_50 - 1 & uVar22;
              *(uint *)&pTVar20->field_0x8 = uVar22;
              FVar14.Data = (FScriptContainerElement *)local_60;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar14.Data = local_58.Data;
              }
              uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar22;
              *(undefined4 *)&pTVar20->field_0x4 =
                   *(undefined4 *)((longlong)FVar14.Data + uVar13 * 4);
              *(int *)((longlong)FVar14.Data + uVar13 * 4) = local_1e0[0];
            }
            else {
              local_50 = uVar18;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,0,4);
              }
              if (uVar18 != 0) {
                uVar22 = uVar18;
                if (uVar18 < 2) {
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    uVar22 = 0;
                    goto LAB_142a92f1c;
                  }
                }
                else {
LAB_142a92f1c:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_58,0,uVar22,4);
                }
                uVar13 = 0;
                if (0 < (int)uVar18) {
                  uVar23 = (ulonglong)uVar18;
                  do {
                    FVar14.Data = (FScriptContainerElement *)local_60;
                    if ((ForElementType<FSetElementId>)local_58.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar14.Data = local_58.Data;
                    }
                    uVar9 = (longlong)(int)uVar18 - 1U & uVar13;
                    uVar13 = uVar13 + 1;
                    *(undefined4 *)((longlong)FVar14.Data + uVar9 * 4) = 0xffffffff;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              param_1 = local_1f0;
              this = local_1d8;
              if (local_50 != 0) {
                pTStack_1c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                local_1d0 = 0;
                uStack_1cc = 1;
                uStack_1bc = 0;
                iStack_1b8 = 0;
                if (local_70 != 0) {
                  FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                  if (local_78 != (ForElementType<unsigned_int>)0x0) {
                    FVar16 = local_78;
                  }
                  uVar22 = *(uint *)FVar16;
                  while (uVar22 == 0) {
                    iStack_1b8 = iStack_1b8 + 0x20;
                    lVar17 = (longlong)local_1d0;
                    local_1d0 = local_1d0 + 1;
                    if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        local_1d0) goto LAB_142a9302f;
                    uVar22 = ((uint *)((longlong)FVar16 + 4))[lVar17];
                  }
                  uStack_1cc = -uVar22 & uVar22;
                  uVar13 = (ulonglong)uStack_1cc * 2 + 1;
                  lVar17 = 0x3f;
                  if (uVar13 != 0) {
                    for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  local_1a0 = (uint)lVar17;
                  uStack_1bc = (local_1a0 - 1) + iStack_1b8;
                  if ((int)local_70 < (int)uStack_1bc) {
LAB_142a9302f:
                    uStack_1bc = local_70;
                  }
                }
                local_1c0 = 0xffffffff;
                local_150 = (longlong *)local_98;
                local_148._padding_ = CONCAT44(uStack_1cc,local_1d0);
                local_148.CurrentBitIndex = uStack_1bc;
                local_148.UnvisitedBitMask = 0xffffffff;
                local_148._28_4_ = uStack_1b4;
                local_148.BaseBitIndex = iStack_1b8;
                local_148.Array = pTStack_1c8;
                uVar22 = uStack_1bc;
                if ((int)uStack_1bc < (int)local_70) {
                  do {
                    uVar15 = local_50 - 1 & *(uint *)(*local_150 + (longlong)(int)uVar22 * 0xc);
                    lVar17 = *local_150 + (longlong)(int)uVar22 * 0xc;
                    *(uint *)(lVar17 + 8) = uVar15;
                    FVar14.Data = (FScriptContainerElement *)local_60;
                    if ((ForElementType<FSetElementId>)local_58.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar14.Data = local_58.Data;
                    }
                    uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
                    *(undefined4 *)(lVar17 + 4) =
                         *(undefined4 *)((longlong)FVar14.Data + uVar13 * 4);
                    *(uint *)((longlong)FVar14.Data + uVar13 * 4) = uVar22;
                    local_148.UnvisitedBitMask =
                         local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_148);
                    param_1 = local_1f0;
                    this = local_1d8;
                    uVar22 = local_148.CurrentBitIndex;
                  } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
                }
              }
            }
          }
        }
      }
      else {
        param_1 = local_1f0;
        if (2 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          pFVar21 = pFVar21 + 0x38;
          uVar13 = (ulonglong)local_1e4;
          param_1 = local_1f0;
          goto LAB_142a92c63;
        }
      }
    }
    uVar13 = (ulonglong)local_1e4;
    pFVar21 = pFVar21 + 0x38;
  } while( true );
  if (0 < iVar24) {
    pIVar10 = FWindowsPlatformMisc::GetPlatformChunkInstall();
    uVar22 = local_70;
    if (pIVar10 != (IPlatformChunkInstall *)0x0) {
      iStack_188 = 0;
      local_170 = 0;
      uStack_174 = 0;
      uStack_184 = 1;
      if (local_70 != 0) {
        FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_78;
        }
        uVar15 = *(uint *)FVar16;
        local_170 = 0;
        while (uVar15 == 0) {
          lVar17 = (longlong)iStack_188;
          local_170 = local_170 + 0x20;
          iStack_188 = iStack_188 + 1;
          uStack_174 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_188)
          goto LAB_142a93212;
          uVar15 = ((uint *)((longlong)FVar16 + 4))[lVar17];
        }
        uStack_184 = ~(uVar15 - 1) & uVar15;
        uVar13 = (ulonglong)uStack_184 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_198 = (uint)lVar17;
        uStack_174 = local_170 + -1 + local_198;
        if ((int)local_70 < (int)uStack_174) {
          uStack_174 = local_70;
        }
      }
LAB_142a93212:
      local_190 = (longlong *)local_98;
      local_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar15 = local_70 & 0xffffffe0;
      iStack_168 = local_98._8_4_ - local_64;
      uStack_178 = 0xffffffff;
      TStack_120.CurrentBitIndex = uStack_174;
      TStack_120.UnvisitedBitMask = 0xffffffff;
      TStack_120._padding_ = CONCAT44(uStack_184,iStack_188);
      iVar24 = (int)local_70 >> 5;
      TStack_120._28_4_ = uStack_174;
      TStack_120.BaseBitIndex = local_170;
      uStack_100 = CONCAT44(uStack_164,iStack_168);
      bVar12 = (byte)local_70;
      uStack_16c = uStack_174;
      local_128 = local_190;
      TStack_120.Array = local_180;
      if (((int)local_70 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar22 != local_70) {
        FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_78;
        }
        uVar22 = -1 << (bVar12 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar24 * 4);
        while (uVar22 == 0) {
          lVar17 = (longlong)iVar24;
          uVar15 = uVar15 + 0x20;
          iVar24 = iVar24 + 1;
          uVar22 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_142a93330;
          uVar22 = ((uint *)((longlong)FVar16 + 4))[lVar17];
        }
        uVar13 = (ulonglong)(~(uVar22 - 1) & uVar22) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar22 = (int)lVar17 + -1 + uVar15;
        if ((int)local_70 < (int)uVar22) {
          uVar22 = local_70;
        }
      }
LAB_142a93330:
      while( true ) {
        plVar3 = local_128;
        if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
        }
        if (((TStack_120.CurrentBitIndex == uVar22) &&
            (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (this = local_1d8, plVar3 == (longlong *)local_98)) break;
        (**(code **)((longlong)*pIVar10 + 0x50))
                  (pIVar10,*(undefined4 *)(*plVar3 + (longlong)TStack_120.CurrentBitIndex * 0xc));
        TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      }
    }
    iVar24 = (this->PendingEncryptedPakFiles).ArrayNum;
    lVar17 = (longlong)iVar24;
    local_d8 = local_1f0->A;
    uStack_d4 = local_1f0->B;
    uStack_d0 = local_1f0->C;
    uStack_cc = local_1f0->D;
    if (iVar24 != 0) {
      pFVar21 = (this->PendingEncryptedPakFiles).AllocatorInstance.Data;
      iVar5 = 0;
      lVar19 = 0;
      bVar4 = ((uStack_d4 != *(uint *)(pFVar21 + 0x28) || uStack_cc != *(uint *)(pFVar21 + 0x30)) ||
              uStack_d0 != *(uint *)(pFVar21 + 0x2c)) || local_d8 != *(uint *)(pFVar21 + 0x24);
      iVar24 = 0;
      local_1a0 = uStack_d0;
      uStack_19c = uStack_cc;
      local_198 = local_d8;
      uStack_194 = uStack_d4;
      do {
        lVar19 = lVar19 + 1;
        iVar6 = iVar24 + 1;
        if (lVar19 < lVar17) {
          pFVar11 = pFVar21 + lVar19 * 0x38 + 0x2c;
          do {
            if (bVar4 != (((uStack_cc != *(uint *)(pFVar11 + 4) ||
                           uStack_d4 != *(uint *)(pFVar11 + -4)) ||
                          local_198 != *(uint *)(pFVar11 + -8)) || local_1a0 != *(uint *)pFVar11))
            break;
            iVar6 = iVar6 + 1;
            lVar19 = lVar19 + 1;
            pFVar11 = pFVar11 + 0x38;
          } while (lVar19 < lVar17);
        }
        iVar7 = iVar6 - iVar24;
        if (bVar4 == false) {
          DestructItems<FPakPlatformFile::FPakListDeferredEntry,int>
                    ((FPakListDeferredEntry *)(pFVar21 + (longlong)iVar24 * 0x38),iVar7);
        }
        else {
          if (iVar5 != iVar24) {
            memmove(pFVar21 + (longlong)iVar5 * 0x38,pFVar21 + (longlong)iVar24 * 0x38,
                    (longlong)iVar7 * 0x38);
          }
          iVar5 = iVar5 + iVar7;
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar24 = iVar6;
      } while (lVar19 < lVar17);
      (local_1d8->PendingEncryptedPakFiles).ArrayNum = iVar5;
      this = local_1d8;
    }
    this_00 = local_1f0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FName::FName(&LLMScope_Name6576,L"FileSystem/PakFile");
      _Init_thread_footer(&::_TSS2);
    }
    FLLMScope::FLLMScope((FLLMScope *)&local_1e4,LLMScope_Name6576,false,None,Default,true);
    FMemScope::FMemScope(&local_158,&LLMScope_Name6576,true);
    OptimizeMemoryUsageForMountedPaks(this);
    FMemScope::~FMemScope(&local_158);
    FLLMScope::~FLLMScope((FLLMScope *)&local_1e4);
    if (4 < (byte)LogPakFile._0_1_) {
      local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.Data.ArrayNum = 0;
      local_1b0.Data.ArrayMax = 0;
      FGuid::AppendString(this_00,&local_1b0,Digits);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
    }
  }
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// ReleaseOldReaders @ 142a969b0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakPlatformFile::ReleaseOldReaders(FPakPlatformFile *this)

{
  int iVar1;
  ForAnyElementType FVar2;
  FPakListEntry *pFVar3;
  undefined1 local_res10 [8];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  if (GPakReaderReleaseDelay != 0.0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    GetMountedPaks(this,&local_18);
    iVar1 = local_18.ArrayNum;
    pFVar3 = (FPakListEntry *)(local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x10)
    ;
    FVar2.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if (local_18.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if ((FPakListEntry *)FVar2.Data == pFVar3) break;
      FPakFile::ReleaseOldReaders
                ((((FPakListEntry *)FVar2.Data)->PakFile).Reference,(double)GPakReaderReleaseDelay);
      FVar2.Data = FVar2.Data + 0x10;
    }
    DestructItems<FPakPlatformFile::FPakListEntry,int>
              ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// ReloadPakReaders @ 142a96a70

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakPlatformFile::ReloadPakReaders(FPakPlatformFile *this)

{
  IFileIoDispatcherBackend *pIVar1;
  int iVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  FPakListEntry *pFVar5;
  undefined1 local_res10 [8];
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  iVar2 = local_18.ArrayNum;
  pFVar5 = (FPakListEntry *)(local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x10);
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPakPlatformFile::FPakListEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if ((FPakListEntry *)FVar4.Data == pFVar5) break;
    bVar3 = FPakFile::RecreatePakReaders
                      ((((FPakListEntry *)FVar4.Data)->PakFile).Reference,this->LowerLevel);
    if (!bVar3) {
      bVar3 = false;
LAB_142a96af5:
      DestructItems<FPakPlatformFile::FPakListEntry,int>
                ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return bVar3;
    }
    FVar4.Data = FVar4.Data + 0x10;
  }
  pIVar1 = (this->IoDispatcherFileBackend).Object;
  if (pIVar1 != (IFileIoDispatcherBackend *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x78))();
  }
  bVar3 = true;
  goto LAB_142a96af5;
}

// RemoveCachedPakSignaturesFile @ 142a97660

void __cdecl FPakPlatformFile::RemoveCachedPakSignaturesFile(wchar_t *param_1)

{
  uint uVar1;
  FName local_res10;
  FName local_res18 [2];
  
  ::FName::FName(&local_res10,param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
  local_res18[0] = local_res10;
  if (PakSignatureFileCache._8_4_ != PakSignatureFileCache._52_4_) {
    uVar1 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    TSet<TTuple<FName,TSharedPtr<FPakSignatureFile_const_,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FPakSignatureFile_const_,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>,FDefaultSetAllocator>
                         *)&PakSignatureFileCache,local_res10.Number + uVar1,local_res18);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
  return;
}

// SetAsyncMinimumPriority @ 142a9fca0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FPakPlatformFile::SetAsyncMinimumPriority(FPakPlatformFile *this,EAsyncIOPriorityAndFlags param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  EAsyncIOPriorityAndFlags EVar2;
  code *pcVar3;
  FPakPrecacher *this_00;
  bool bVar4;
  
  bVar4 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar4) && (0 < GPakCache_Enable)) {
    if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PakPrecacherSingleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x33f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = PakPrecacherSingleton;
    pFVar1 = &PakPrecacherSingleton->SetAsyncMinimumPriorityScopeLock;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_142a9fd78:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    EVar2 = this_00->AsyncMinPriority;
    if (EVar2 != param_1) {
      this_00->AsyncMinPriority = param_1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (EVar2 != param_1 && (int)param_1 < (int)EVar2) {
      pFVar1 = &this_00->CachedFilesScopeLock;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_142a9fd78;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      FPakPrecacher::StartNextRequest(this_00);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
  }
  return;
}

// SetLowerLevel @ 142a9fe30

void __thiscall FPakPlatformFile::SetLowerLevel(FPakPlatformFile *this,IPlatformFile *param_1)

{
  this->LowerLevel = param_1;
  return;
}

// SetMountStartupPaksWildCard @ 142a9fe40

void __cdecl FPakPlatformFile::SetMountStartupPaksWildCard(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (param_1 != &GMountStartupPaksWildCard) {
    iVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    GMountStartupPaksWildCard.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (GMountStartupPaksWildCard.Data.ArrayMax == 0)) {
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,GMountStartupPaksWildCard.Data.ArrayMax,
               (ForAnyElementType *)&GMountStartupPaksWildCard,iVar1,
               &GMountStartupPaksWildCard.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(GMountStartupPaksWildCard.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  return;
}

// SetReadOnly @ 142aa0020

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakPlatformFile::SetReadOnly(FPakPlatformFile *this,wchar_t *param_1,bool param_2)

{
  bool bVar1;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  bVar1 = FindFileInPakFiles(&local_18,param_1,(TRefCountPtr<FPakFile> *)0x0,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (!bVar1) {
    ::FString::FString((FString *)&local_18,param_1);
    bVar1 = IsNonPakFilenameAllowed(this,(FString *)&local_18);
    if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    if (bVar1) {
      param_2 = (bool)(**(code **)((longlong)*this->LowerLevel + 0xa8))
                                (this->LowerLevel,param_1,param_2);
    }
  }
  return param_2;
}

// SetTimeStamp @ 142aa0100

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakPlatformFile::SetTimeStamp(FPakPlatformFile *this,wchar_t *param_1,FDateTime param_2)

{
  bool bVar1;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMountedPaks(this,&local_18);
  bVar1 = FindFileInPakFiles(&local_18,param_1,(TRefCountPtr<FPakFile> *)0x0,(FPakEntry *)0x0);
  DestructItems<FPakPlatformFile::FPakListEntry,int>
            ((FPakListEntry *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (!bVar1) {
    ::FString::FString((FString *)&local_18,param_1);
    bVar1 = IsNonPakFilenameAllowed(this,(FString *)&local_18);
    if ((FPakListEntry *)local_18.AllocatorInstance.Data != (FPakListEntry *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    if (bVar1) {
      (**(code **)((longlong)*this->LowerLevel + 0xb8))(this->LowerLevel,param_1,param_2.Ticks);
    }
  }
  return;
}

// ShouldBeUsed @ 142aa01d0

bool __thiscall
FPakPlatformFile::ShouldBeUsed(FPakPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  bool bVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  bVar1 = FParse::Param(param_2,L"NoPak");
  if (!bVar1) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    GetPakFolders(param_2,&local_38);
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    ::FString::FString(&local_18,L"*.pak");
    FindAllPakFiles(param_1,&local_38,&local_18,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar1 = 0 < local_28.ArrayNum;
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    return bVar1;
  }
  return false;
}

// Tick @ 142aa3640

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FPakPlatformFile::Tick(FPakPlatformFile *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FIoDispatcher *this_00;
  long64 lVar4;
  long64 lVar5;
  
  if (PakPrecacherSingleton != (FPakPrecacher *)0x0) {
    if (!__CsvProfilerStat4738) {
      FCsvProfilerTrace::OutputInlineStat("PakPrecacherRequests",_GCsvCategory_FileIOVerbose.Index);
      __CsvProfilerStat4738 = true;
    }
    if (PakPrecacherSingleton == (FPakPrecacher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PakPrecacherSingleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x33f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FCsvProfiler::RecordCustomStat
              ("PakPrecacherRequests",_GCsvCategory_FileIOVerbose.Index,
               (PakPrecacherSingleton->RequestCounter).Counter,Set);
    if (__CsvProfilerStat4739 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("PakPrecacherHotBlocksCount",_GCsvCategory_FileIOVerbose.Index);
      __CsvProfilerStat4739 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("PakPrecacherHotBlocksCount",_GCsvCategory_FileIOVerbose.Index,
               (int)GPreCacheHotBlocksCount,Set);
    if (__CsvProfilerStat4740 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("PakPrecacherColdBlocksCount",_GCsvCategory_FileIOVerbose.Index);
      __CsvProfilerStat4740 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("PakPrecacherColdBlocksCount",_GCsvCategory_FileIOVerbose.Index,
               (int)GPreCacheColdBlocksCount,Set);
    if (__CsvProfilerStat4741 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("PakPrecacherTotalLoadedMB",_GCsvCategory_FileIOVerbose.Index);
      __CsvProfilerStat4741 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("PakPrecacherTotalLoadedMB",_GCsvCategory_FileIOVerbose.Index,
               (int)((longlong)
                     ((ulonglong)((uint)(GPreCacheTotalLoaded >> 0x3f) & 0xfffff) +
                     GPreCacheTotalLoaded) >> 0x14),Set);
    if (__CsvProfilerStat4742 == false) {
      FCsvProfilerTrace::OutputInlineStat("PakPrecacherBlockMemoryMB",_GCsvCategory_FileIO.Index);
      __CsvProfilerStat4742 = true;
    }
    if (PakPrecacherSingleton == (FPakPrecacher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PakPrecacherSingleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x33f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FCsvProfiler::RecordCustomStat
              ("PakPrecacherBlockMemoryMB",_GCsvCategory_FileIO.Index,
               (int)((longlong)
                     ((ulonglong)((uint)(PakPrecacherSingleton->BlockMemory >> 0x3f) & 0xfffff) +
                     PakPrecacherSingleton->BlockMemory) >> 0x14),Set);
    if (GPreCacheTotalLoadedLastTick != 0) {
      lVar3 = GPreCacheTotalLoaded - GPreCacheTotalLoadedLastTick;
      if (__CsvProfilerStat4748 == false) {
        FCsvProfilerTrace::OutputInlineStat("PakPrecacherPerFrameKB",_GCsvCategory_FileIO.Index);
        __CsvProfilerStat4748 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("PakPrecacherPerFrameKB",_GCsvCategory_FileIO.Index,
                 (int)((longlong)((ulonglong)((uint)(lVar3 >> 0x3f) & 0x3ff) + lVar3) >> 10),Set);
    }
    GPreCacheTotalLoadedLastTick = GPreCacheTotalLoaded;
    if (__CsvProfilerStat4752 == false) {
      FCsvProfilerTrace::OutputInlineStat("PakPrecacherSeeks",_GCsvCategory_FileIOVerbose.Index);
      __CsvProfilerStat4752 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("PakPrecacherSeeks",_GCsvCategory_FileIOVerbose.Index,(int)GPreCacheSeeks,Set);
    if (__CsvProfilerStat4753 == false) {
      FCsvProfilerTrace::OutputInlineStat("PakPrecacherBadSeeks",_GCsvCategory_FileIOVerbose.Index);
      __CsvProfilerStat4753 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("PakPrecacherBadSeeks",_GCsvCategory_FileIOVerbose.Index,(int)GPreCacheBadSeeks,Set);
    if (__CsvProfilerStat4754 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("PakPrecacherContiguousReads",_GCsvCategory_FileIOVerbose.Index);
      __CsvProfilerStat4754 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("PakPrecacherContiguousReads",_GCsvCategory_FileIOVerbose.Index,
               (int)GPreCacheContiguousReads,Set);
    if (__CsvProfilerStat4756 == false) {
      FCsvProfilerTrace::OutputInlineStat("PakLoads",_GCsvCategory_FileIOVerbose.Index);
      __CsvProfilerStat4756 = true;
    }
    if (PakPrecacherSingleton == (FPakPrecacher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PakPrecacherSingleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x33f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FCsvProfiler::RecordCustomStat
              ("PakLoads",_GCsvCategory_FileIOVerbose.Index,PakPrecacherSingleton->Loads,Set);
  }
  lVar5 = GTotalLoaded;
  if ((this->IoDispatcherFileBackend).Object != (IFileIoDispatcherBackend *)0x0) {
    this_00 = FIoDispatcher::Get();
    lVar4 = FIoDispatcher::GetTotalLoaded(this_00);
    lVar5 = lVar5 + lVar4;
  }
  if (__CsvProfilerStat4774 == false) {
    FCsvProfilerTrace::OutputInlineStat("TotalLoadedMB",_GCsvCategory_FileIOVerbose.Index);
    __CsvProfilerStat4774 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TotalLoadedMB",_GCsvCategory_FileIOVerbose.Index,
             (int)((longlong)((ulonglong)((uint)(lVar5 >> 0x3f) & 0xfffff) + lVar5) >> 0x14),Set);
  if (GTotalLoadedLastTick != 0) {
    lVar3 = lVar5 - GTotalLoadedLastTick;
    if (__CsvProfilerStat4779 == false) {
      FCsvProfilerTrace::OutputInlineStat("PerFrameKB",_GCsvCategory_FileIO.Index);
      __CsvProfilerStat4779 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("PerFrameKB",_GCsvCategory_FileIO.Index,
               (int)((longlong)((ulonglong)((uint)(lVar3 >> 0x3f) & 0x3ff) + lVar3) >> 10),Set);
  }
  GTotalLoadedLastTick = lVar5;
  return;
}

// Unmount @ 142aa8e50

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakPlatformFile::Unmount(FPakPlatformFile *this,wchar_t *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FPakPlatformFile::FPakListEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::FilePackageStorePrivate::FMountedContainer,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  FFilePackageStoreBackend *pFVar7;
  FIoContainerHeader *pFVar8;
  IFileIoDispatcherBackend *pIVar9;
  code *pcVar10;
  FPakPrecacher *this_00;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *pTVar16;
  FName *pFVar17;
  FScriptContainerElement *pFVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  FPakFile *pFVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  FName local_98;
  FName local_90;
  FScriptContainerElement local_88 [8];
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  lpCriticalSection = &this->PakListCritical;
  pFVar21 = (FPakFile *)0x0;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar23 = 0;
  if (0 < (this->PakFiles).ArrayNum) {
    pTVar1 = &this->PakFiles;
    lVar22 = 0;
    do {
      uVar24 = ~uVar23 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar23 < (this->PakFiles).ArrayNum) {
        uVar14 = uVar24;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pFVar18 = (pTVar1->AllocatorInstance).Data;
      uVar14 = 0;
      if ((int)uVar23 < (this->PakFiles).ArrayNum) {
        uVar14 = uVar24;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      lVar5 = *(longlong *)((pTVar1->AllocatorInstance).Data + lVar22 + 8);
      if (*(int *)(lVar5 + 0x20) == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = *(wchar_t **)(lVar5 + 0x18);
      }
      iVar15 = FGenericPlatformStricmp::Stricmp(pwVar19,param_1);
      if (iVar15 == 0) {
        pFVar18 = pFVar18 + (longlong)(int)uVar23 * 0x10 + 8;
        if (local_88 != pFVar18) {
          pFVar21 = *(FPakFile **)pFVar18;
          *(undefined8 *)pFVar18 = 0;
        }
        uVar14 = 0;
        if ((int)uVar23 < (this->PakFiles).ArrayNum) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        pFVar18 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x10;
        puVar6 = *(undefined8 **)(pFVar18 + 8);
        if (puVar6 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar6 + 1);
          LOCK();
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar15 == 1) && (piVar2 != (int *)0x0)) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
        iVar15 = (this->PakFiles).ArrayNum + ~uVar23;
        if (iVar15 != 0) {
          memmove(pFVar18,pFVar18 + 0x10,(longlong)iVar15 << 4);
        }
        piVar2 = &(this->PakFiles).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar1->AllocatorInstance,(this->PakFiles).ArrayNum,
                   &(this->PakFiles).ArrayMax);
        break;
      }
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 0x10;
    } while ((int)uVar23 < (this->PakFiles).ArrayNum);
  }
  cVar13 = '\0';
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (pFVar21 != (FPakFile *)0x0) {
    pTVar16 = FCoreDelegates::GetOnPakFileUnmounting();
    TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
              (pTVar16,(IPakFile *)&pFVar21->_padding_);
    if ((pFVar21->PakFilename).Data.ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar21->PakFilename).Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_98,pwVar19);
    EnterCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
    local_90 = local_98;
    if (PakSignatureFileCache._8_4_ != PakSignatureFileCache._52_4_) {
      uVar23 = ::GetTypeHash(local_98.ComparisonIndex.Value);
      TSet<TTuple<FName,TSharedPtr<FPakSignatureFile_const_,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FPakSignatureFile_const_,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>,FDefaultSetAllocator>
                           *)&PakSignatureFileCache,local_98.Number + uVar23,&local_90);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&PakSignatureFileCacheLock);
  }
  if ((this->IoDispatcherFileBackend).Object != (IFileIoDispatcherBackend *)0x0) {
    if (pFVar21 != (FPakFile *)0x0) {
      if (((this->PackageStoreBackend).Object == (FFilePackageStoreBackend *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pFVar7 = (this->PackageStoreBackend).Object;
      pFVar8 = (pFVar21->IoContainerHeader).Ptr;
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar7->EntriesLock);
      pTVar3 = &pFVar7->MountedContainers;
      uVar23 = 0;
      while( true ) {
        if (((int)uVar23 < 0) || ((pFVar7->MountedContainers).ArrayNum <= (int)uVar23))
        goto LAB_142aa92c7;
        if (((int)uVar23 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        if (*(FIoContainerHeader **)
             ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x20) == pFVar8) break;
        uVar23 = uVar23 + 1;
      }
      uVar14 = 0;
      if ((int)uVar23 < (pFVar7->MountedContainers).ArrayNum) {
        uVar14 = ~uVar23 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pFVar18 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x20;
      iVar15 = (pFVar7->MountedContainers).ArrayNum + ~uVar23;
      if (iVar15 != 0) {
        memmove(pFVar18,pFVar18 + 0x20,(longlong)iVar15 << 5);
      }
      piVar2 = &(pFVar7->MountedContainers).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&pTVar3->AllocatorInstance,(pFVar7->MountedContainers).ArrayNum,
                 &(pFVar7->MountedContainers).ArrayMax);
      pFVar7->bNeedsContainerUpdate = true;
LAB_142aa92c7:
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar7->EntriesLock);
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    ::FString::FString(&local_58,param_1);
    FPaths::ChangeExtension(&local_68,&local_58,&local_78);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (((this->IoDispatcherFileBackend).Object == (IFileIoDispatcherBackend *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    pIVar9 = (this->IoDispatcherFileBackend).Object;
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar20.Data = local_68.Data.AllocatorInstance.Data;
    }
    cVar13 = (**(code **)((longlong)*pIVar9 + 0x70))(pIVar9,FVar20.Data);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (pFVar21 != (FPakFile *)0x0) {
    DestructItems<FPakFile::FArchiveAndLastAccessTime,int>
              ((FArchiveAndLastAccessTime *)(pFVar21->Readers).AllocatorInstance.Data,
               (pFVar21->Readers).ArrayNum);
    (pFVar21->Readers).ArrayNum = 0;
    if ((pFVar21->Readers).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar21->Readers).AllocatorInstance,0,&(pFVar21->Readers).ArrayMax);
    }
  }
  if (GPakCache_Enable == 0) {
    if (pFVar21 != (FPakFile *)0x0) {
      pFVar21->bIsMounted = false;
      goto LAB_142aa949d;
    }
LAB_142aa94fc:
    if (cVar13 == '\0') {
      bVar11 = false;
      goto LAB_142aa94b1;
    }
  }
  else {
    if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PakPrecacherSingleton",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0x33f,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    this_00 = PakPrecacherSingleton;
    pFVar17 = ::FName::FName(&local_80,param_1);
    FPakPrecacher::Unmount(this_00,*pFVar17,pFVar21);
    if (pFVar21 == (FPakFile *)0x0) goto LAB_142aa94fc;
    if ((pFVar21->bIsMounted != false) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UnmountedPak || !UnmountedPak->GetIsMounted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0x1866,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
LAB_142aa949d:
    pTVar16 = FCoreDelegates::GetOnPakFileUnmounted();
    TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
              (pTVar16,(IPakFile *)&pFVar21->_padding_);
  }
  bVar11 = true;
LAB_142aa94b1:
  if (pFVar21 != (FPakFile *)0x0) {
    plVar4 = &pFVar21->_padding_;
    LOCK();
    lVar22 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if (((int)lVar22 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)pFVar21->_padding_)(pFVar21,1);
    }
  }
  return bVar11;
}

