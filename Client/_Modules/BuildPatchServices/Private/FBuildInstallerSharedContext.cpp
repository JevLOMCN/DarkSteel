// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// ~FBuildInstallerSharedContext @ 1432875e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildInstallerSharedContext::~FBuildInstallerSharedContext
          (FBuildInstallerSharedContext *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lpCriticalSection = &this->ThreadFreeListCS;
  this->_padding_ = (longlong)&___7FBuildInstallerSharedContext_BuildPatchServices__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->ThreadFreeList).ArrayNum != this->ThreadCount) {
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerSharedContext.cpp"
                       ,0x95,L"Threads still allocated: Expected %d, Actual %u");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = (this->ThreadFreeList).AllocatorInstance.Data;
  iVar2 = (this->ThreadFreeList).ArrayNum;
  pFVar4 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ThreadFreeList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<BuildPatchServices::IBuildInstallerThread_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar4) break;
    (**(code **)(*(longlong *)(*(longlong *)pFVar7 + 8) + 0x10))();
    pFVar7 = pFVar7 + 8;
  }
  pFVar7 = (this->ThreadFreeList).AllocatorInstance.Data;
  iVar2 = (this->ThreadFreeList).ArrayNum;
  pFVar4 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ThreadFreeList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<BuildPatchServices::IBuildInstallerThread_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar4) break;
    puVar3 = *(undefined8 **)pFVar7;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    pFVar7 = pFVar7 + 8;
  }
  piVar1 = &(this->ThreadFreeList).ArrayMax;
  (this->ThreadFreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ThreadFreeList).AllocatorInstance,0,piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar4 = (this->ThreadFreeList).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7IBuildInstallerSharedContext__6B_;
  return;
}

// CreateThread @ 1432cb940

/* WARNING: Enum "Type": Some values do not have unique names */

IBuildInstallerThread * __thiscall
BuildPatchServices::FBuildInstallerSharedContext::CreateThread(FBuildInstallerSharedContext *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IBuildInstallerThread *pIVar4;
  
  lpCriticalSection = &this->ThreadFreeListCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ThreadFreeList).ArrayNum;
  if (iVar1 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IBuildInstallerThread *)(*pcVar2)();
      return pIVar4;
    }
    iVar1 = (this->ThreadFreeList).ArrayNum;
    pIVar4 = *(IBuildInstallerThread **)
              ((this->ThreadFreeList).AllocatorInstance.Data + (longlong)iVar1 * 8 + -8);
    (this->ThreadFreeList).ArrayNum = iVar1 + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pIVar4 != (IBuildInstallerThread *)0x0) {
      return pIVar4;
    }
  }
  if ((2 < (byte)LogBuildPatchServices._0_1_) && (this->bWarnOnCreateThread != false)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pIVar4 = CreateThreadInternal(this);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pIVar4;
}

// CreateThreadInternal @ 1432cba30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

IBuildInstallerThread * __thiscall
BuildPatchServices::FBuildInstallerSharedContext::CreateThreadInternal
          (FBuildInstallerSharedContext *this)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  IBuildInstallerThread *pIVar4;
  IBuildInstallerThread IVar5;
  IBuildInstallerThread *pIVar6;
  IBuildInstallerThread *pIVar7;
  undefined1 auStackY_478 [32];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_438.Base = local_418;
  local_438.CurPos = local_418;
  local_438.bIsDynamic = false;
  local_438.bIsExternal = false;
  local_438.End = (wchar_t *)local_18;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_438,L"%s #%d");
  if (3 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  pIVar4 = ::operator_new(0x30);
  pIVar6 = (IBuildInstallerThread *)0x0;
  pIVar7 = pIVar6;
  if (pIVar4 != (IBuildInstallerThread *)0x0) {
    pIVar4[5] = (IBuildInstallerThread)0x0;
    pIVar4[2] = (IBuildInstallerThread)0x0;
    *pIVar4 = (IBuildInstallerThread)
              &FBuildInstallerThread::_vftable__for__BuildPatchServices__IBuildInstallerThread__;
    pIVar4[3] = (IBuildInstallerThread)0x0;
    pIVar4[1] = (IBuildInstallerThread)&FBuildInstallerThread::_vftable__for__FRunnable__;
    pIVar4[4] = (IBuildInstallerThread)0x0;
    IVar5 = (IBuildInstallerThread)FMemory::Malloc(0x50,0x10);
    *(undefined8 *)IVar5 = 0;
    pIVar4[4] = IVar5;
    pIVar4[5] = IVar5;
    pIVar7 = pIVar4;
  }
  if (local_438.End < local_438.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_438,1);
  }
  pwVar2 = local_438.Base;
  *local_438.CurPos = L'\0';
  IVar5 = (IBuildInstallerThread)FGenericPlatformProcess::GetSynchEventFromPool(false);
  pIVar7[2] = IVar5;
  pIVar4 = pIVar7 + 1;
  if (pIVar7 == (IBuildInstallerThread *)0x0) {
    pIVar4 = pIVar6;
  }
  IVar5 = (IBuildInstallerThread)
          FForkProcessHelper::CreateForkableThread
                    ((FRunnable *)pIVar4,pwVar2,0,TPri_Normal,0xffffffffffffffff,None,true);
  pIVar7[3] = IVar5;
  if ((IVar5 == (IBuildInstallerThread)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerSharedContext.cpp"
                         ,0x22,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pIVar6 = (IBuildInstallerThread *)(*pcVar1)();
    return pIVar6;
  }
  if ((pIVar7[2] == (IBuildInstallerThread)0x0) || (pIVar7[3] == (IBuildInstallerThread)0x0)) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
  else {
    this->ThreadCount = this->ThreadCount + 1;
    pIVar6 = pIVar7;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  return pIVar6;
}

// NumThreadsPerInstaller @ 1432ddd90

uint __thiscall
BuildPatchServices::FBuildInstallerSharedContext::NumThreadsPerInstaller
          (FBuildInstallerSharedContext *this,bool param_1,bool param_2)

{
  return param_2 + 2 + (uint)param_1;
}

// PreallocateThreads @ 1432e16f0

void __thiscall
BuildPatchServices::FBuildInstallerSharedContext::PreallocateThreads
          (FBuildInstallerSharedContext *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  IBuildInstallerThread *local_18 [2];
  
  if (param_1 != 0) {
    lpCriticalSection = &this->ThreadFreeListCS;
    uVar6 = (ulonglong)param_1;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar6);
    }
    piVar1 = &(this->ThreadFreeList).ArrayMax;
    if ((this->ThreadFreeList).ArrayMax < (int)param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&(this->ThreadFreeList).AllocatorInstance,
                 (this->ThreadFreeList).ArrayNum,piVar1);
    }
    if (param_1 != 0) {
      do {
        local_18[0] = CreateThreadInternal(this);
        if (local_18[0] != (IBuildInstallerThread *)0x0) {
          pFVar2 = (this->ThreadFreeList).AllocatorInstance.Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
              ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (this->ThreadFreeList).ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(this->ThreadFreeList).AllocatorInstance,piVar1);
          }
          (this->ThreadFreeList).ArrayNum = iVar5 + 1;
          *(IBuildInstallerThread **)
           ((this->ThreadFreeList).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    this->bWarnOnCreateThread = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ReleaseThread @ 1432e9160

void __thiscall
BuildPatchServices::FBuildInstallerSharedContext::ReleaseThread
          (FBuildInstallerSharedContext *this,IBuildInstallerThread *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  IBuildInstallerThread *local_res10 [3];
  
  if (param_1 != (IBuildInstallerThread *)0x0) {
    lpCriticalSection = &this->ThreadFreeListCS;
    local_res10[0] = param_1;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = (this->ThreadFreeList).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)(this->ThreadFreeList).ArrayNum * 8;
    for (; pFVar6 != pFVar2; pFVar6 = pFVar6 + 8) {
      if (*(IBuildInstallerThread **)pFVar6 == local_res10[0]) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ThreadFreeList.Contains(Thread)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerSharedContext.cpp"
                           ,0xbe,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
    }
    pFVar2 = (this->ThreadFreeList).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 <
         pFVar2 + (longlong)(this->ThreadFreeList).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->ThreadFreeList).ArrayNum;
    piVar1 = &(this->ThreadFreeList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ThreadFreeList).AllocatorInstance,piVar1);
    }
    (this->ThreadFreeList).ArrayNum = iVar5 + 1;
    *(IBuildInstallerThread **)((this->ThreadFreeList).AllocatorInstance.Data + (longlong)iVar5 * 8)
         = local_res10[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

