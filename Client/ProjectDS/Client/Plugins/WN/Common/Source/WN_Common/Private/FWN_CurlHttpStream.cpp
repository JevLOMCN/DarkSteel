// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 12

// ~FWN_CurlHttpStream @ 149490040

void __thiscall FWN_CurlHttpStream::~FWN_CurlHttpStream(FWN_CurlHttpStream *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  IFileHandle *pIVar5;
  longlong *plVar6;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompleteCallback);
  pvVar3 = *(void **)&(this->CompleteCallback).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CompleteCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ProgressAsyncCallback);
  pvVar3 = *(void **)&(this->ProgressAsyncCallback).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ProgressAsyncCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->InitCompleteCallback);
  pvVar3 = *(void **)&(this->InitCompleteCallback).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InitCompleteCallback);
  DestructItems<FString,int>
            ((FString *)(this->FailureReasons).AllocatorInstance.Data,
             (this->FailureReasons).ArrayNum);
  pFVar4 = (this->FailureReasons).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Url).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Request).SharedReferenceCount.ReferenceController);
  pIVar5 = (this->FileHandle).Ptr;
  if (pIVar5 != (IFileHandle *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return;
}

// Cancel @ 149498050

/* WARNING: Removing unreachable block (ram,0x00014949837e) */

void __thiscall FWN_CurlHttpStream::Cancel(FWN_CurlHttpStream *this)

{
  TSharedPtr<IHttpRequest,1> *pTVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  LPCRITICAL_SECTION p_Var7;
  FScriptContainerElement *pFVar8;
  FString local_38;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  
  if ((this->bResult != false) &&
     (((this->NumTasks == 0 || (this->NumTasks != this->NumProcessedTasks)) &&
      (pTVar1 = &this->Request, (this->Request).Object != (IHttpRequest *)0x0)))) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->InitCompleteCallback);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ProgressAsyncCallback);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompleteCallback);
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)pTVar1->Object + 0x118))();
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    p_Var7 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf8))();
    if ((p_Var7 == (LPCRITICAL_SECTION)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection(p_Var7);
    if ((p_Var7[1].LockCount != 0) && (p_Var7[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var7[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var7 + 1),0,0,0x10);
      p_Var7[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var7);
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    p_Var7 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf0))();
    if ((p_Var7 == (LPCRITICAL_SECTION)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection(p_Var7);
    if ((p_Var7[1].LockCount != 0) && (p_Var7[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var7[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var7 + 1),0,0,0x10);
      p_Var7[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var7);
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IHttpRequest,1> *)&local_28) {
      pTVar1->Object = (IHttpRequest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Request).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    pTVar3 = &this->FailureReasons;
    ::FString::PrintfImpl(&local_38,L"%s 가 취소됐습니다.");
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar8 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->FailureReasons).ArrayNum;
    piVar2 = &(this->FailureReasons).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->FailureReasons).ArrayNum = iVar6 + 1;
    pFVar8 = (pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(FScriptContainerElement **)pFVar8 = local_38.Data.AllocatorInstance.Data;
    *(int *)(pFVar8 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar8 + 0xc) = local_38.Data.ArrayMax;
    this->bResult = false;
  }
  return;
}

// CheckComplete @ 1494998f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_CurlHttpStream::CheckComplete(FWN_CurlHttpStream *this)

{
  IFileHandle *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  LARGE_INTEGER local_res8;
  FReadAccessScope local_28;
  
  if ((this->Request).Object == (IHttpRequest *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ProgressAsyncCallback);
    if (this->bInitialized != false) {
      if ((this->bResult == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bResult",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\Patch\\WN_CurlHttpStream.cpp"
                             ,0x178,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->FileHandle).Ptr == (IFileHandle *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FileHandle.IsValid()",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\Patch\\WN_CurlHttpStream.cpp"
                             ,0x179,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar1 = (this->FileHandle).Ptr;
      (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,1);
      pIVar1 = (this->FileHandle).Ptr;
      if (pIVar1 != (IFileHandle *)0x0) {
        (this->FileHandle).Ptr = (IFileHandle *)0x0;
        (**(code **)*pIVar1)(pIVar1,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CompleteCallback,
               &local_28);
    if ((*(int *)&(this->CompleteCallback).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->CompleteCallback).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,this);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompleteCallback);
    QueryPerformanceCounter(&local_res8);
    this->EndTimeSecs =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    if (4 < (byte)Common._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&Common);
    }
  }
  return;
}

// FlushFile @ 14949fdf0

void __thiscall FWN_CurlHttpStream::FlushFile(FWN_CurlHttpStream *this)

{
  IFileHandle *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bInitialized != false) {
    if (this->bResult == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bResult",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\Patch\\WN_CurlHttpStream.cpp"
                         ,0x178,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->FileHandle).Ptr == (IFileHandle *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileHandle.IsValid()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\Patch\\WN_CurlHttpStream.cpp"
                         ,0x179,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->FileHandle).Ptr;
    (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,1);
    pIVar1 = (this->FileHandle).Ptr;
    if (pIVar1 != (IFileHandle *)0x0) {
      (this->FileHandle).Ptr = (IFileHandle *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014949fe86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*pIVar1)(pIVar1,1);
      return;
    }
  }
  return;
}

// Initialize @ 1494a4ef0

/* WARNING: Removing unreachable block (ram,0x0001494a5278) */

bool __thiscall
FWN_CurlHttpStream::Initialize
          (FWN_CurlHttpStream *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy> *param_3)

{
  TSharedPtr<IHttpRequest,1> *pTVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  IHttpRequest *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  FHttpModule *pFVar10;
  undefined8 *puVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  FString local_58;
  IHttpRequest *local_48;
  FSharedReferencer<1> local_40;
  FString local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pFVar10 = FHttpModule::Get();
  this->HttpModule = pFVar10;
  ::FString::operator=(&this->Url,param_1);
  ::FString::operator=(&this->FilePath,param_2);
  TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>::operator=
            (&this->InitCompleteCallback,param_3);
  puVar11 = (undefined8 *)
            (**(code **)(this->HttpModule->_padding_ + 0x40))(this->HttpModule,local_28);
  local_40.ReferenceController = (TReferenceControllerBase<1> *)puVar11[1];
  local_48 = (IHttpRequest *)*puVar11;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->Request;
  if (pTVar1 != (TSharedPtr<IHttpRequest,1> *)&local_48) {
    pTVar1->Object = local_48;
    local_48 = (IHttpRequest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Request).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  (**(code **)(*(longlong *)pTVar1->Object + 0x68))(pTVar1->Object,&this->Url);
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pIVar4 = pTVar1->Object;
  pcVar5 = *(code **)(*(longlong *)pIVar4 + 0x60);
  ::FString::FString(&local_38,L"HEAD");
  (*pcVar5)(pIVar4,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf0))();
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  EnterCriticalSection(lpCriticalSection);
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(lpCriticalSection + 1))
  ;
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFWN_CurlHttpStream____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar11[4] = OnInitComplete;
    puVar11[3] = this;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  cVar8 = (**(code **)(*(longlong *)pTVar1->Object + 0xe8))();
  if (cVar8 == '\0') {
    this->bResult = false;
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    (**(code **)(*(longlong *)pTVar1->Object + 0x18))();
    pTVar3 = &this->FailureReasons;
    ::FString::PrintfImpl(&local_58,L"%s 의 헤더 요청에 실패했습니다 : %s.");
    pFVar13 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar13 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar9 = (this->FailureReasons).ArrayNum;
    piVar2 = &(this->FailureReasons).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->FailureReasons).ArrayNum = iVar9 + 1;
    pFVar13 = (pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 = local_58.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_58.Data.ArrayNum;
    *(int *)(pFVar13 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    CheckComplete(this);
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  return bVar6;
}

// OnInitComplete @ 1494a6c80

/* WARNING: Removing unreachable block (ram,0x0001494a73d7) */
/* WARNING: Removing unreachable block (ram,0x0001494a72a9) */
/* WARNING: Removing unreachable block (ram,0x0001494a75de) */
/* WARNING: Removing unreachable block (ram,0x0001494a6e07) */

void __thiscall
FWN_CurlHttpStream::OnInitComplete
          (FWN_CurlHttpStream *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  TSharedPtr<IHttpRequest,1> *pTVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  IHttpRequest *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  LPCRITICAL_SECTION p_Var9;
  IHttpResponse *pIVar10;
  ulong64 uVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  wchar_t *local_b8;
  int local_b0;
  longlong local_a8;
  FSharedReferencer<1> FStack_a0;
  longlong local_98;
  FSharedReferencer<1> FStack_90;
  wchar_t *local_88;
  int local_80;
  FString local_78;
  FString local_68;
  FReadAccessScope local_58;
  
  pTVar1 = &this->Request;
  pIVar4 = (this->Request).Object;
  if (param_1->Object == pIVar4) {
    if ((pIVar4 == (IHttpRequest *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    p_Var9 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf8))();
    if ((p_Var9 == (LPCRITICAL_SECTION)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EnterCriticalSection(p_Var9);
    if ((p_Var9[1].LockCount != 0) && (p_Var9[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var9[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var9 + 1),0,0,0x10);
      p_Var9[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var9);
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    p_Var9 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf0))();
    if ((p_Var9 == (LPCRITICAL_SECTION)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EnterCriticalSection(p_Var9);
    if ((p_Var9[1].LockCount != 0) && (p_Var9[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var9[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var9 + 1),0,0,0x10);
      p_Var9[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var9);
    local_98 = 0;
    FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IHttpRequest,1> *)&local_98) {
      pTVar1->Object = (IHttpRequest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Request).SharedReferenceCount,&FStack_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_90.ReferenceController);
    if (param_2->Object == (IHttpResponse *)0x0) {
      pTVar3 = &this->FailureReasons;
      ::FString::PrintfImpl(&local_c8,L"%s 응답이 유효하지 않습니다.");
      pFVar13 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           pFVar13 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->FailureReasons).ArrayNum;
      piVar2 = &(this->FailureReasons).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar3->AllocatorInstance,piVar2);
      }
      (this->FailureReasons).ArrayNum = iVar8 + 1;
      pFVar13 = (pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(FScriptContainerElement **)pFVar13 = local_c8.Data.AllocatorInstance.Data;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar13 + 8) = local_c8.Data.ArrayNum;
      *(int *)(pFVar13 + 0xc) = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
    }
    else {
      pIVar10 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      if (param_3) {
        pcVar6 = *(code **)((longlong)*pIVar10 + 0x28);
        ::FString::FString(&local_78,L"Accept-Ranges");
        (*pcVar6)(pIVar10,&local_88,&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((local_80 < 2) ||
           (iVar8 = FGenericPlatformStricmp::Stricmp(local_88,L"none"), iVar8 == 0)) {
          pTVar3 = &this->FailureReasons;
          ::FString::PrintfImpl
                    (&local_e8,L"%s 에 대해 Accept-Range 가 지원되지 않습니다.");
          pFVar13 = (pTVar3->AllocatorInstance).Data;
          if ((pFVar13 <= (FScriptContainerElement *)&local_e8) &&
             (((FScriptContainerElement *)&local_e8 <
               pFVar13 + (longlong)(this->FailureReasons).ArrayMax * 0x10 &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (this->FailureReasons).ArrayNum;
          piVar2 = &(this->FailureReasons).ArrayMax;
          if (iVar8 == *piVar2) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar3->AllocatorInstance,piVar2);
          }
          (this->FailureReasons).ArrayNum = iVar8 + 1;
          pFVar13 = (pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
          *(undefined8 *)pFVar13 = 0;
          *(FScriptContainerElement **)pFVar13 = local_e8.Data.AllocatorInstance.Data;
          *(int *)(pFVar13 + 8) = local_e8.Data.ArrayNum;
          *(int *)(pFVar13 + 0xc) = local_e8.Data.ArrayMax;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          this->bResult = false;
        }
        else {
          pIVar10 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
          pcVar6 = *(code **)((longlong)*pIVar10 + 0x28);
          ::FString::FString(&local_68,L"Content-Length");
          (*pcVar6)(pIVar10,&local_b8,&local_68);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          pwVar12 = L"";
          if (local_b0 != 0) {
            pwVar12 = local_b8;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp(pwVar12,L"none");
          if (iVar8 == 0) {
            pTVar3 = &this->FailureReasons;
            ::FString::PrintfImpl
                      (&local_f8,L"%s 에 대해 Content-Length 가 지원되지 않습니다.");
            pFVar13 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar13 <= (FScriptContainerElement *)&local_f8) &&
                ((FScriptContainerElement *)&local_f8 <
                 pFVar13 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = (this->FailureReasons).ArrayNum;
            piVar2 = &(this->FailureReasons).ArrayMax;
            if (iVar8 == *piVar2) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&pTVar3->AllocatorInstance,piVar2);
            }
            (this->FailureReasons).ArrayNum = iVar8 + 1;
            pFVar13 = (pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
            *(undefined8 *)pFVar13 = 0;
            *(FScriptContainerElement **)pFVar13 = local_f8.Data.AllocatorInstance.Data;
            *(int *)(pFVar13 + 8) = local_f8.Data.ArrayNum;
            *(int *)(pFVar13 + 0xc) = local_f8.Data.ArrayMax;
            local_f8.Data.ArrayNum = 0;
            local_f8.Data.ArrayMax = 0;
            local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            this->bResult = false;
          }
          else {
            pwVar12 = L"";
            if (local_b0 != 0) {
              pwVar12 = local_b8;
            }
            uVar11 = _wtoi64(pwVar12);
            this->FileSize = uVar11;
            this->bInitialized = true;
          }
          if (local_b8 != (wchar_t *)0x0) {
            FMemory::Free(local_b8);
          }
        }
        if (local_88 != (wchar_t *)0x0) {
          FMemory::Free(local_88);
        }
        goto LAB_1494a75e7;
      }
      (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10);
      pTVar3 = &this->FailureReasons;
      ::FString::PrintfImpl(&local_d8,L"%s 응답이 실패했습니다 : %s");
      pFVar13 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar13 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->FailureReasons).ArrayNum;
      piVar2 = &(this->FailureReasons).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar3->AllocatorInstance,piVar2);
      }
      (this->FailureReasons).ArrayNum = iVar8 + 1;
      pFVar13 = (pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(FScriptContainerElement **)pFVar13 = local_d8.Data.AllocatorInstance.Data;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar13 + 8) = local_d8.Data.ArrayNum;
      *(int *)(pFVar13 + 0xc) = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
    }
    this->bResult = false;
  }
  else {
    pTVar3 = &this->FailureReasons;
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (*(code *)**(undefined8 **)param_1->Object)();
    ::FString::PrintfImpl(&local_108,L"%s 를 요청했지만 %s 가 왔습니다.");
    pFVar13 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 <
         pFVar13 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (this->FailureReasons).ArrayNum;
    piVar2 = &(this->FailureReasons).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->FailureReasons).ArrayNum = iVar8 + 1;
    pFVar13 = (pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 = local_108.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_108.Data.ArrayNum;
    *(int *)(pFVar13 + 0xc) = local_108.Data.ArrayMax;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->bResult = false;
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    p_Var9 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf8))();
    if ((p_Var9 == (LPCRITICAL_SECTION)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EnterCriticalSection(p_Var9);
    if ((p_Var9[1].LockCount != 0) && (p_Var9[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var9[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var9 + 1),0,0,0x10);
      p_Var9[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var9);
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    p_Var9 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf0))();
    if ((p_Var9 == (LPCRITICAL_SECTION)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EnterCriticalSection(p_Var9);
    if ((p_Var9[1].LockCount != 0) && (p_Var9[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var9[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var9 + 1),0,0,0x10);
      p_Var9[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var9);
    local_a8 = 0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IHttpRequest,1> *)&local_a8) {
      pTVar1->Object = (IHttpRequest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Request).SharedReferenceCount,&FStack_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a0.ReferenceController);
  }
LAB_1494a75e7:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->InitCompleteCallback,
             &local_58);
  if ((*(int *)&(this->InitCompleteCallback).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->InitCompleteCallback).field_0x8, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x68))(plVar5,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->InitCompleteCallback);
  if (this->bResult == false) {
    CheckComplete(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnPartialDownloadComplete @ 1494a7990

/* WARNING: Removing unreachable block (ram,0x0001494a7b1f) */
/* WARNING: Removing unreachable block (ram,0x0001494a810c) */
/* WARNING: Removing unreachable block (ram,0x0001494a7fb5) */
/* WARNING: Removing unreachable block (ram,0x0001494a830d) */

void __thiscall
FWN_CurlHttpStream::OnPartialDownloadComplete
          (FWN_CurlHttpStream *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  TSharedPtr<IHttpRequest,1> *pTVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  IFileHandle *pIVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  LPCRITICAL_SECTION p_Var11;
  IHttpResponse *pIVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  longlong local_88;
  FSharedReferencer<1> FStack_80;
  longlong local_78;
  FSharedReferencer<1> FStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pTVar1 = &this->Request;
  bVar7 = false;
  LOCK();
  this->DownloadingSize = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  if (param_1->Object == pTVar1->Object) {
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    p_Var11 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf8))();
    if ((p_Var11 == (LPCRITICAL_SECTION)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection(p_Var11);
    if ((p_Var11[1].LockCount != 0) && (p_Var11[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var11[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var11 + 1),0,0,0x10);
      p_Var11[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var11);
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    p_Var11 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf0))();
    if ((p_Var11 == (LPCRITICAL_SECTION)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection(p_Var11);
    if ((p_Var11[1].LockCount != 0) && (p_Var11[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var11[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var11 + 1),0,0,0x10);
      p_Var11[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var11);
    local_78 = 0;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IHttpRequest,1> *)&local_78) {
      pTVar1->Object = (IHttpRequest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Request).SharedReferenceCount,&FStack_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
    if (param_2->Object == (IHttpResponse *)0x0) {
      pTVar3 = &this->FailureReasons;
      ::FString::PrintfImpl(&local_98,L"%s 요청에 대한 응답이 유효하지 않습니다.");
      pFVar14 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar14 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (this->FailureReasons).ArrayNum;
      piVar2 = &(this->FailureReasons).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar2);
      }
      (this->FailureReasons).ArrayNum = iVar10 + 1;
      pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = local_98.Data.AllocatorInstance.Data;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar14 + 8) = local_98.Data.ArrayNum;
      *(int *)(pFVar14 + 0xc) = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
    }
    else {
      pIVar12 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      if (param_3) {
        iVar10 = (**(code **)((longlong)*pIVar12 + 0x58))(pIVar12);
        if (iVar10 == 0xce) {
          pIVar12 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
          pcVar5 = *(code **)((longlong)*pIVar12 + 0x28);
          ::FString::FString(&local_48,L"Content-Range");
          (*pcVar5)(pIVar12,&local_58,&local_48);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_68,L"bytes %llu-");
          if (local_58.Data.ArrayNum < 2) {
LAB_1494a7ebd:
            pTVar3 = &this->FailureReasons;
            ::FString::PrintfImpl(&local_c8,L"%s 응답이 잘못된 영역을 반환합니다.");
            pFVar14 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_c8) &&
                ((FScriptContainerElement *)&local_c8 <
                 pFVar14 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = (this->FailureReasons).ArrayNum;
            piVar2 = &(this->FailureReasons).ArrayMax;
            if (iVar10 == *piVar2) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar3->AllocatorInstance,piVar2);
            }
            (this->FailureReasons).ArrayNum = iVar10 + 1;
            pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
            *(undefined8 *)pFVar14 = 0;
            *(FScriptContainerElement **)pFVar14 = local_c8.Data.AllocatorInstance.Data;
            *(int *)(pFVar14 + 8) = local_c8.Data.ArrayNum;
            *(int *)(pFVar14 + 0xc) = local_c8.Data.ArrayMax;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            this->bResult = false;
          }
          else {
            iVar10 = local_68.Data.ArrayNum + -1;
            FVar6.Data = local_68.Data.AllocatorInstance.Data;
            if (local_68.Data.ArrayNum == 0) {
              iVar10 = 0;
              FVar6.Data = (FScriptContainerElement *)L"";
            }
            bVar8 = ::FString::StartsWith(&local_58,(wchar_t *)FVar6.Data,iVar10,IgnoreCase);
            if (!bVar8) goto LAB_1494a7ebd;
            bVar7 = true;
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        if (this->bResult != false) {
          pIVar12 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
          puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar12 + 0x48))(pIVar12);
          pIVar4 = (this->FileHandle).Ptr;
          lVar15 = (longlong)*(int *)(puVar13 + 1);
          this->DownloadedSize = this->DownloadedSize + lVar15;
          cVar9 = (**(code **)((longlong)*pIVar4 + 0x30))(pIVar4,*puVar13,lVar15);
          if (cVar9 == '\0') {
            pTVar3 = &this->FailureReasons;
            ::FString::PrintfImpl(&local_b8,L"%s 파일을 쓰는 데 실패했습니다.");
            pFVar14 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_b8) &&
                ((FScriptContainerElement *)&local_b8 <
                 pFVar14 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = (this->FailureReasons).ArrayNum;
            piVar2 = &(this->FailureReasons).ArrayMax;
            if (iVar10 == *piVar2) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar3->AllocatorInstance,piVar2);
            }
            (this->FailureReasons).ArrayNum = iVar10 + 1;
            pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
            *(undefined8 *)pFVar14 = 0;
            *(FScriptContainerElement **)pFVar14 = local_b8.Data.AllocatorInstance.Data;
            *(int *)(pFVar14 + 8) = local_b8.Data.ArrayNum;
            *(int *)(pFVar14 + 0xc) = local_b8.Data.ArrayMax;
            local_b8.Data.ArrayNum = 0;
            local_b8.Data.ArrayMax = 0;
            local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            this->bResult = false;
          }
          this->WrittenSize = this->WrittenSize + lVar15;
        }
        goto LAB_1494a8316;
      }
      (**(code **)((longlong)*pIVar12 + 0x18))(pIVar12);
      pTVar3 = &this->FailureReasons;
      ::FString::PrintfImpl(&local_a8,L"%s 요청에 대한 응답이 실패했습니다 : %s.");
      pFVar14 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar14 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (this->FailureReasons).ArrayNum;
      piVar2 = &(this->FailureReasons).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar2);
      }
      (this->FailureReasons).ArrayNum = iVar10 + 1;
      pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = local_a8.Data.AllocatorInstance.Data;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar14 + 8) = local_a8.Data.ArrayNum;
      *(int *)(pFVar14 + 0xc) = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
    }
    this->bResult = false;
  }
  else {
    pTVar3 = &this->FailureReasons;
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*(code *)**(undefined8 **)param_1->Object)();
    ::FString::PrintfImpl(&local_d8,L"%s 를 요청했지만 %s 가 왔습니다.");
    pFVar14 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar14 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 <
         pFVar14 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = (this->FailureReasons).ArrayNum;
    piVar2 = &(this->FailureReasons).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->FailureReasons).ArrayNum = iVar10 + 1;
    pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar14 = 0;
    *(FScriptContainerElement **)pFVar14 = local_d8.Data.AllocatorInstance.Data;
    *(int *)(pFVar14 + 8) = local_d8.Data.ArrayNum;
    *(int *)(pFVar14 + 0xc) = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->bResult = false;
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    p_Var11 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf8))();
    if ((p_Var11 == (LPCRITICAL_SECTION)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection(p_Var11);
    if ((p_Var11[1].LockCount != 0) && (p_Var11[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var11[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var11 + 1),0,0,0x10);
      p_Var11[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var11);
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    p_Var11 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf0))();
    if ((p_Var11 == (LPCRITICAL_SECTION)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection(p_Var11);
    if ((p_Var11[1].LockCount != 0) && (p_Var11[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var11[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var11 + 1),0,0,0x10);
      p_Var11[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var11);
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IHttpRequest,1> *)&local_88) {
      pTVar1->Object = (IHttpRequest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Request).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
  }
LAB_1494a8316:
  iVar10 = this->NumProcessedTasks + 1;
  this->NumProcessedTasks = iVar10;
  if (this->bResult != false) {
    if (bVar7) {
      if (iVar10 < this->NumTasks) {
        RequestNextTask(this);
        goto LAB_1494a836c;
      }
    }
    else {
      this->NumTasks = iVar10;
    }
  }
  CheckComplete(this);
LAB_1494a836c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnPartialDownloadProgressAsync @ 1494a83a0

void __thiscall
FWN_CurlHttpStream::OnPartialDownloadProgressAsync
          (FWN_CurlHttpStream *this,TSharedPtr<IHttpRequest,1> *param_1,ulong64 param_2,
          ulong64 param_3)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  LOCK();
  this->DownloadingSize = (TAtomic<unsigned___int64>)param_3;
  UNLOCK();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ProgressAsyncCallback,
             &local_28);
  if ((*(int *)&(this->ProgressAsyncCallback).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ProgressAsyncCallback).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RequestNextTask @ 1494ab770

/* WARNING: Removing unreachable block (ram,0x0001494abc82) */

bool __thiscall FWN_CurlHttpStream::RequestNextTask(FWN_CurlHttpStream *this)

{
  TSharedPtr<IHttpRequest,1> *pTVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  IHttpRequest *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  LPCRITICAL_SECTION p_Var11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  FString local_88;
  IHttpRequest *local_78;
  FSharedReferencer<1> local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  if (this->NumTasks <= this->NumProcessedTasks) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2497583659410783934>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\Patch\\WN_CurlHttpStream.cpp"
                       ,0x142,"false");
    if (!bVar6) {
      return false;
    }
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pTVar1 = &this->Request;
  if (((this->Request).Object != (IHttpRequest *)0x0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2497583659410783930>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\Patch\\WN_CurlHttpStream.cpp"
                         ,0x146,"Request.IsValid() == false"), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  ::FString::PrintfImpl(&local_48,L"bytes=%llu-%llu");
  puVar10 = (undefined8 *)
            (**(code **)(this->HttpModule->_padding_ + 0x40))(this->HttpModule,local_38);
  local_70.ReferenceController = (TReferenceControllerBase<1> *)puVar10[1];
  local_78 = (IHttpRequest *)*puVar10;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<IHttpRequest,1> *)&local_78) {
    pTVar1->Object = local_78;
    local_78 = (IHttpRequest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Request).SharedReferenceCount,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  (**(code **)(*(longlong *)pTVar1->Object + 0x68))(pTVar1->Object,&this->Url);
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pIVar4 = pTVar1->Object;
  pcVar5 = *(code **)(*(longlong *)pIVar4 + 0x60);
  ::FString::FString(&local_68,L"GET");
  (*pcVar5)(pIVar4,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pIVar4 = pTVar1->Object;
  pcVar5 = *(code **)(*(longlong *)pIVar4 + 0xb0);
  ::FString::FString(&local_58,L"Range");
  (*pcVar5)(pIVar4,&local_58,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  p_Var11 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf8))();
  if ((p_Var11 == (LPCRITICAL_SECTION)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  EnterCriticalSection(p_Var11);
  puVar10 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(p_Var11 + 1));
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFWN_CurlHttpStream____A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar10[4] = OnPartialDownloadProgressAsync;
    puVar10[3] = this;
  }
  if (p_Var11 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var11);
  }
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  p_Var11 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pTVar1->Object + 0xf0))();
  if ((p_Var11 == (LPCRITICAL_SECTION)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  EnterCriticalSection(p_Var11);
  puVar10 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(p_Var11 + 1));
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFWN_CurlHttpStream____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar10[4] = OnPartialDownloadComplete;
    puVar10[3] = this;
  }
  if (p_Var11 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var11);
  }
  if ((pTVar1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  cVar8 = (**(code **)(*(longlong *)pTVar1->Object + 0xe8))();
  if (cVar8 == '\0') {
    if ((pTVar1->Object == (IHttpRequest *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    (**(code **)(*(longlong *)pTVar1->Object + 0x18))();
    pTVar3 = &this->FailureReasons;
    ::FString::PrintfImpl(&local_88,L"%s 요청에 대한 응답이 실패했습니다 : %s.");
    pFVar13 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar13 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar9 = (this->FailureReasons).ArrayNum;
    piVar2 = &(this->FailureReasons).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->FailureReasons).ArrayNum = iVar9 + 1;
    pFVar13 = (pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 = local_88.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_88.Data.ArrayNum;
    *(int *)(pFVar13 + 0xc) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->bResult = false;
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// Start @ 1494adc30

/* WARNING: Removing unreachable block (ram,0x0001494ae089) */

bool __thiscall
FWN_CurlHttpStream::Start
          (FWN_CurlHttpStream *this,ulong64 param_1,
          TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy> *param_3)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  IFileHandle *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  IPlatformFile *pIVar9;
  IFileHandle *pIVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  LARGE_INTEGER local_res8;
  FString *local_58;
  FString *local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  
  QueryPerformanceCounter(&local_res8);
  this->StartTimeSecs =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>::operator=
            (&this->ProgressAsyncCallback,param_2);
  TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>::operator=
            (&this->CompleteCallback,param_3);
  if (this->bInitialized == false) {
    ::FString::PrintfImpl
              (&local_38,
               L"%s 를 다운로드하고 싶으면, Initialize() 를 먼저 호출하고 Callback 응답을 기다리세요."
              );
    pTVar2 = &this->FailureReasons;
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar14 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar14 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar8 = (this->FailureReasons).ArrayNum;
    piVar1 = &(this->FailureReasons).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
    (this->FailureReasons).ArrayNum = iVar8 + 1;
    pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar14 = 0;
    *(int *)(pFVar14 + 8) = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum == 0) {
      *(int *)(pFVar14 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,local_38.Data.ArrayNum,
                 (int *)(pFVar14 + 0xc));
      memcpy(*(void **)pFVar14,FVar5.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    local_58 = &local_38;
    this->bResult = false;
    `FWN_CurlHttpStream::Start'::__l5::<lambda_1>::operator()(&local_58);
    CheckComplete(this);
  }
  else {
    if (this->FileSize != 0) {
      IFileManager::Get();
      pIVar9 = IPlatformFile::GetPlatformPhysical();
      if ((this->FilePath).Data.ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
      }
      pIVar10 = (IFileHandle *)(**(code **)((longlong)*pIVar9 + 0x110))(pIVar9,pwVar11,0,0);
      pIVar3 = (this->FileHandle).Ptr;
      if ((pIVar3 != pIVar10) && ((this->FileHandle).Ptr = pIVar10, pIVar3 != (IFileHandle *)0x0)) {
        (**(code **)*pIVar3)();
      }
      if ((this->FileHandle).Ptr == (IFileHandle *)0x0) {
        pTVar2 = &this->FailureReasons;
        ::FString::PrintfImpl(&local_48,L"%s 를 생성하는데 실패했습니다.");
        pFVar14 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar14 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar14 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = (this->FailureReasons).ArrayNum;
        piVar1 = &(this->FailureReasons).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar12 = (longlong)iVar8;
        (this->FailureReasons).ArrayNum = iVar8 + 1;
        pFVar14 = (pTVar2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar14 + lVar12 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar14 + lVar12 * 0x10) =
             local_48.Data.AllocatorInstance.Data;
        *(int *)(pFVar14 + lVar12 * 0x10 + 8) = local_48.Data.ArrayNum;
        *(int *)(pFVar14 + lVar12 * 0x10 + 0xc) = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this->bResult = false;
      }
      else {
        if (param_1 < 0x4000) {
          param_1 = 0x4000;
        }
        this->Granularity = param_1;
        uVar13 = this->FileSize % param_1;
        iVar8 = (int)(this->FileSize / param_1);
        this->NumTasks = iVar8;
        this->LastDownloadSize = uVar13;
        if (uVar13 == 0) {
          this->LastDownloadSize = param_1;
        }
        else {
          this->NumTasks = iVar8 + 1;
        }
        bVar6 = RequestNextTask(this);
        if (bVar6) {
          return true;
        }
      }
      CheckComplete(this);
      return false;
    }
    ::FString::PrintfImpl(&local_28,L"%s 파일 크기가 유효하지 않습니다.");
    pTVar2 = &this->FailureReasons;
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar14 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar14 + (longlong)(this->FailureReasons).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar8 = (this->FailureReasons).ArrayNum;
    piVar1 = &(this->FailureReasons).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
    (this->FailureReasons).ArrayNum = iVar8 + 1;
    pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar14 = 0;
    *(int *)(pFVar14 + 8) = local_28.Data.ArrayNum;
    if (local_28.Data.ArrayNum == 0) {
      *(int *)(pFVar14 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,local_28.Data.ArrayNum,
                 (int *)(pFVar14 + 0xc));
      memcpy(*(void **)pFVar14,FVar5.Data,(longlong)local_28.Data.ArrayNum * 2);
    }
    local_50 = &local_28;
    this->bResult = false;
    `FWN_CurlHttpStream::Start'::__l8::<lambda_2>::operator()(&local_50);
    CheckComplete(this);
    local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// operator() @ 150543350

bool __thiscall `FWN_CurlHttpStream::Start'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2497583659410784172>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_2497583659410784172>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150543530

bool __thiscall `FWN_CurlHttpStream::Start'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2497583659410784162>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_2497583659410784162>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

