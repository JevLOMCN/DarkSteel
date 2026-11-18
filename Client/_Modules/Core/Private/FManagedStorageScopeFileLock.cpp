// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Lock @ 1416b1cd0

void __thiscall FManagedStorageScopeFileLock::Lock(FManagedStorageScopeFileLock *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPersistentStorageManager *pFVar5;
  FPersistentStorageCategory *pFVar6;
  FLockData *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  TArrayView<FPersistentStorageCategory,int> local_18;
  
  if (-1 < (this->ManagedFile).Category) {
    pFVar5 = FPersistentStorageManager::Get();
    pwVar9 = L"";
    local_18.DataPtr =
         (FPersistentStorageCategory *)(pFVar5->Categories).Categories.AllocatorInstance.Data;
    local_18.ArrayNum = (pFVar5->Categories).Categories.ArrayNum;
    if ((local_18.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = TArrayView<FPersistentStorageCategory,int>::operator[]
                       (&local_18,(this->ManagedFile).Category);
    iVar1 = (this->ManagedFile).FullFilename.Data.ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    else {
      pwVar9 = (wchar_t *)(this->ManagedFile).FullFilename.Data.AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
    lpCriticalSection = &(pFVar6->FileLockRegistry).FileLockMapCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar7 = TMapBase<FString,FManagedStorageFileLockRegistry::FLockData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>_>
             ::FindOrAddImpl<FString_const_&>
                       ((TMapBase<FString,FManagedStorageFileLockRegistry::FLockData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>_>
                         *)&pFVar6->FileLockRegistry,uVar4,(FString *)this);
    pFVar7->RefCount = pFVar7->RefCount + 1;
    lpCriticalSection_00 = (LPCRITICAL_SECTION)(pFVar7->CS).Ptr;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->pFileCS = (FWindowsRecursiveMutex *)lpCriticalSection_00;
    EnterCriticalSection(lpCriticalSection_00);
  }
  return;
}

// Unlock @ 1416c4fa0

void __thiscall FManagedStorageScopeFileLock::Unlock(FManagedStorageScopeFileLock *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FManagedStorageFileLockRegistry *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FPersistentStorageManager *pFVar7;
  FPersistentStorageCategory *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  TArrayView<FPersistentStorageCategory,int> local_28;
  
  if ((LPCRITICAL_SECTION)this->pFileCS == (LPCRITICAL_SECTION)0x0) {
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this->pFileCS);
  pFVar7 = FPersistentStorageManager::Get();
  local_28.DataPtr =
       (FPersistentStorageCategory *)(pFVar7->Categories).Categories.AllocatorInstance.Data;
  local_28.ArrayNum = (pFVar7->Categories).Categories.ArrayNum;
  if ((local_28.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = TArrayView<FPersistentStorageCategory,int>::operator[]
                     (&local_28,(this->ManagedFile).Category);
  this_00 = &pFVar8->FileLockRegistry;
  iVar6 = (this->ManagedFile).FullFilename.Data.ArrayNum;
  if (iVar6 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(this->ManagedFile).FullFilename.Data.AllocatorInstance.Data;
  }
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  lpCriticalSection = &(pFVar8->FileLockRegistry).FileLockMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = TSet<TTuple<FString,FManagedStorageFileLockRegistry::FLockData>,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FManagedStorageFileLockRegistry::FLockData>,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>,FDefaultSetAllocator>
                      *)this_00,uVar5,(FString *)this);
  lVar11 = 0;
  if (iVar6 != -1) {
    lVar2 = *(longlong *)&this_00->FileLockMap + (longlong)iVar6 * 0x28;
    lVar11 = lVar2 + 0x10;
    if (lVar2 == 0) {
      lVar11 = 0;
    }
    if (lVar11 != 0) goto LAB_1416c50c0;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("LockData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IPlatformFileManagedStorageWrapper.h"
                     ,0x5b,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1416c50c0:
  piVar1 = (int *)(lVar11 + 8);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) &&
     (*(int *)&(pFVar8->FileLockRegistry).FileLockMap.field_0x8 !=
      *(int *)&(pFVar8->FileLockRegistry).FileLockMap.field_0x34)) {
    TSet<TTuple<FString,FManagedStorageFileLockRegistry::FLockData>,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,FManagedStorageFileLockRegistry::FLockData>,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>,FDefaultSetAllocator>
                *)this_00,uVar5,(FString *)this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->pFileCS = (FWindowsRecursiveMutex *)0x0;
  return;
}

