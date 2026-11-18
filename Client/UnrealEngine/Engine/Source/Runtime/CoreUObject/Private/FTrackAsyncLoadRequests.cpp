// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// DeleteUserData @ 141f2cad0

void __cdecl FTrackAsyncLoadRequests::DeleteUserData(void *param_1)

{
  if (param_1 != (void *)0x0) {
    DestructItems<FTrackAsyncLoadRequests::FUserData::FLoadRequest,int>
              (*(FLoadRequest **)param_1,*(int *)((longlong)param_1 + 8));
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    ::operator_delete(param_1,0x10);
  }
  return;
}

// DumpRequestsAfterCsvProfiling @ 141f2dff0

void __thiscall
FTrackAsyncLoadRequests::DumpRequestsAfterCsvProfiling(FTrackAsyncLoadRequests *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)CVarTrackAsyncLoadRequests_DumpAfterCsvProfiling._padding_ + 200
                      ))();
  if (0 < iVar1) {
    DumpRequestsToFile(this,false);
    return;
  }
  return;
}

// DumpRequestsToFile @ 141f2e030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTrackAsyncLoadRequests::DumpRequestsToFile(FTrackAsyncLoadRequests *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  FDateTime this_00;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType FVar4;
  undefined1 auStackY_938 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_908;
  FString local_8f8;
  FString local_8e0;
  FString local_8d0;
  TFunction<void___cdecl(wchar_t_const_*)> local_8b8;
  undefined1 local_888 [2144];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_938;
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,&local_8d0);
  ::FString::PrintfImpl(&local_8f8,L"AsyncLoadRequests_%s.log");
  pTVar3 = &FPaths::ProfilingDir(&local_8e0)->Data;
  iVar2 = local_8f8.Data.ArrayNum + -1;
  if (local_8f8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if ((pTVar3->ArrayNum != 0) || (iVar1 = 2, iVar2 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_908,pTVar3,iVar2 + iVar1);
  ::FString::PathAppend
            ((FString *)&local_908,(wchar_t *)local_8f8.Data.AllocatorInstance.Data,iVar2);
  if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
  }
  if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
  }
  if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
  }
  local_8b8._0_8_ = 0;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_908.ArrayNum != 0) {
    FVar4.Data = local_908.AllocatorInstance.Data;
  }
  local_8b8._40_8_ = 0;
  FOutputDeviceFile::FOutputDeviceFile
            ((FOutputDeviceFile *)local_888,(wchar_t *)FVar4.Data,true,false,true,&local_8b8);
  local_888[8] = true;
  if (3 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_FTrackAsyncLoadRequests::DumpRequestsToFile(bool)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  lpCriticalSection = &this->CritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (**(code **)(*(longlong *)CVarTrackAsyncLoadRequests_Threshhold._padding_ + 200))();
    FStackTracker::DumpStackTraces
              (&this->StackTracker,iVar2,(FOutputDevice *)local_888,__real_3f800000);
    if (param_1) {
      FStackTracker::ResetTracking(&this->StackTracker);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FOutputDeviceFile::~FOutputDeviceFile((FOutputDeviceFile *)local_888);
    if (local_908.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Get @ 141f32b40

FTrackAsyncLoadRequests * __cdecl FTrackAsyncLoadRequests::Get(void)

{
  FCsvProfiler *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FStackTracker::FStackTracker
                (&`public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
                  ::__l2::Instance.StackTracker,UpdateStack,ReportStack,DeleteUserData,true);
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
                  ::__l2::Instance.CritSec,4000);
      pFVar1 = FCsvProfiler::Get();
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<FTrackAsyncLoadRequests>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pFVar1->OnCSVProfileEndDelegate,(FTrackAsyncLoadRequests *)&stack0x00000008,
                 (pmf_37debcd4)0x1550171f0);
      atexit(`FTrackAsyncLoadRequests::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
              ::__l2::Instance;
    }
  }
  return &`public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
          ::__l2::Instance;
}

// ReportStack @ 141f43970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FTrackAsyncLoadRequests::ReportStack(FCallStack *param_1,ulong64 param_2,FOutputDevice *param_3)

{
  int *piVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined1 local_94 [12];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  plVar3 = param_1->UserData;
  bVar2 = param_3->bSuppressEventTag;
  param_3->bSuppressEventTag = true;
  iVar6 = (**(code **)(*(longlong *)CVarTrackAsyncLoadRequests_Dedupe._padding_ + 200))();
  if (iVar6 < 1) {
    FOutputDevice::Log(param_3,L"Requested package names:");
    FOutputDevice::Log(param_3,L"====================");
    lVar5 = plVar3[1];
    lVar10 = *plVar3;
    lVar4 = lVar10 + (longlong)(int)lVar5 * 0x18;
    while( true ) {
      if ((int)plVar3[1] != (int)lVar5) {
        `TCheckedPointerIterator<FTrackAsyncLoadRequests::FUserData::FLoadRequest,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_98);
      }
      if (lVar10 == lVar4) break;
      FOutputDevice::LogfImpl(param_3,L"%d %s");
      lVar10 = lVar10 + 0x18;
    }
  }
  else {
    FOutputDevice::Log(param_3,L"Requested package names (Deduped):");
    FOutputDevice::Log(param_3,L"====================");
    lVar4 = plVar3[1];
    piVar9 = (int *)*plVar3;
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    piVar1 = piVar9 + (longlong)(int)lVar4 * 6;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    while( true ) {
      if ((int)plVar3[1] != (int)lVar4) {
        `TCheckedPointerIterator<FTrackAsyncLoadRequests::FUserData::FLoadRequest,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_98);
      }
      if (piVar9 == piVar1) break;
      if (piVar9[2] == 0) {
        pwVar8 = L"";
        iVar6 = 0;
      }
      else {
        pwVar8 = *(wchar_t **)piVar9;
        iVar6 = piVar9[2] + -1;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(&local_88,uVar7,(FString *)piVar9);
      if (iVar6 == -1) {
        FOutputDevice::LogfImpl(param_3,L"%d %s");
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&local_88,(FString *)local_94,(bool *)piVar9);
      }
      piVar9 = piVar9 + 6;
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  FOutputDevice::Log(param_3,L"====================");
  param_3->bSuppressEventTag = bVar2;
  return;
}

// TrackRequest @ 141f4e100

void __thiscall
FTrackAsyncLoadRequests::TrackRequest
          (FTrackAsyncLoadRequests *this,FString *param_1,wchar_t *param_2,int param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  ForAnyElementType *pFVar10;
  FString local_50;
  FString local_40;
  FString local_30;
  
  pFVar10 = (ForAnyElementType *)0x0;
  iVar5 = (**(code **)(*(longlong *)CVarTrackAsyncLoadRequests_Enable._padding_ + 200))();
  if (iVar5 != 0) {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (ForAnyElementType *)0x0) {
      pFVar7->Data = (FScriptContainerElement *)0x0;
      pFVar7[1].Data = (FScriptContainerElement *)0x0;
      pFVar10 = pFVar7;
    }
    if (param_2 == (wchar_t *)0x0) {
      local_50.Data.ArrayNum = (param_1->Data).ArrayNum;
      lVar9 = (longlong)local_50.Data.ArrayNum;
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      bVar3 = false;
      bVar4 = true;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_50.Data.ArrayNum == 0) {
        local_50.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_50.Data.ArrayNum,0,(ForAnyElementType *)&local_50,
                   local_50.Data.ArrayNum,&local_50.Data.ArrayMax);
        memcpy(local_50.Data.AllocatorInstance.Data,pFVar2,lVar9 * 2);
      }
      pFVar8 = &local_50;
    }
    else {
      pFVar8 = ::FString::FString(&local_40,param_2);
      bVar3 = true;
      bVar4 = false;
    }
    iVar5 = *(int *)&pFVar10[1].Data;
    piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,pFVar10,piVar1);
    }
    *(int *)&pFVar10[1].Data = iVar5 + 1;
    pFVar2 = pFVar10->Data + (longlong)iVar5 * 0x18;
    pFVar8 = ::FString::FString(&local_30,pFVar8);
    *(undefined8 *)pFVar2 = 0;
    *(FScriptContainerElement **)pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar2 + 8) = (pFVar8->Data).ArrayNum;
    *(int *)(pFVar2 + 0xc) = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    *(int *)(pFVar2 + 0x10) = param_3;
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((bVar4) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = &this->CritSec;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar4 = (bool)(**(code **)(*(longlong *)CVarTrackAsyncLoadRequests_Dedupe._padding_ + 0xc0))();
    iVar5 = (**(code **)(*(longlong *)CVarTrackAsyncLoadRequests_StackLen._padding_ + 200))();
    iVar6 = (**(code **)(*(longlong *)CVarTrackAsyncLoadRequests_StackIgnore._padding_ + 200))();
    FStackTracker::CaptureStackTrace(&this->StackTracker,iVar6,pFVar10,iVar5,bVar4);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// UpdateStack @ 141f50050

void __cdecl FTrackAsyncLoadRequests::UpdateStack(FCallStack *param_1,void *param_2)

{
  int iVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = param_1->UserData;
  if (pFVar2 == param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar1,pFVar2,(int *)(pFVar2 + 1),
                       (int *)((longlong)&pFVar2[1].Data + 4));
    ConstructItems<FTrackAsyncLoadRequests::FUserData::FLoadRequest,FTrackAsyncLoadRequests::FUserData::FLoadRequest,int>
              (pFVar2->Data + (longlong)iVar5 * 0x18,*(FLoadRequest **)param_2,iVar1);
  }
  return;
}

