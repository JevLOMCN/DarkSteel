// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 29

// FPreloadableArchive @ 141917420

FPreloadableArchive * __thiscall
FPreloadableArchive::FPreloadableArchive(FPreloadableArchive *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  FEvent *pFVar6;
  FString local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar3 = param_1->DataPtr;
  pFVar1 = &this->ArchiveName;
  this->_padding_ = (longlong)&___7FPreloadableArchive__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveName).Data.ArrayNum = 0;
  (this->ArchiveName).Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize(&local_18,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar5) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ArchiveName).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->ArchiveName).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->PendingAsyncComplete = (FEvent *)0x0;
  this->bInitialized = (TAtomic<bool>)0x0;
  this->bIsPreloading = (TAtomic<bool>)0x0;
  this->bIsPreloadingPaused = (TAtomic<bool>)0x0;
  this->CacheEnd = (TAtomic<__int64>)0x0;
  (this->AsynchronousHandle).Ptr = (IAsyncReadFileHandle *)0x0;
  (this->SynchronousArchive).Ptr = (FArchive *)0x0;
  (this->RetiredRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetiredRequests).ArrayNum = 0;
  (this->RetiredRequests).ArrayMax = 0;
  this->Pos = 0;
  this->Size = -1;
  this->CacheBytes = (uchar *)0x0;
  this->PageSize = 0x10000;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PreloadLock,4000);
  this->bReadCompleteWasCalledInline = false;
  this->bIsInlineReadComplete = false;
  (this->SavedReadCompleteArguments).bCanceled = false;
  (this->SavedReadCompleteArguments).ReadRequest = (IAsyncReadRequest *)0x0;
  pFVar6 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->PendingAsyncComplete = pFVar6;
  (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6);
  (**(code **)(this->_padding_ + 200))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,1);
  return this;
}

// ~FPreloadableArchive @ 14191c030

void __thiscall FPreloadableArchive::~FPreloadableArchive(FPreloadableArchive *this)

{
  FScriptContainerElement *pFVar1;
  FArchive *pFVar2;
  IAsyncReadFileHandle *pIVar3;
  
  this->_padding_ = (longlong)&___7FPreloadableArchive__6B_;
  Close(this);
  (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
            (this->PendingAsyncComplete,0xffffffff,0);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->PendingAsyncComplete);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PreloadLock);
  pFVar1 = (this->RetiredRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->SynchronousArchive).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  pIVar3 = (this->AsynchronousHandle).Ptr;
  if (pIVar3 != (IAsyncReadFileHandle *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pFVar1 = (this->ArchiveName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// AllocateCache @ 141925ef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPreloadableArchive::AllocateCache(FPreloadableArchive *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar *puVar4;
  ulong64 uVar5;
  
  if (this->CacheBytes != (uchar *)0x0) {
    return true;
  }
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    if (1 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
  }
  else if ((-1 < this->Size) && ((this->AsynchronousHandle).Ptr != (IAsyncReadFileHandle *)0x0)) {
    if ((this->CacheBytes != (uchar *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheBytes == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                           ,0x104,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar5 = 1;
    if (1 < this->Size) {
      uVar5 = this->Size;
    }
    puVar4 = FMemory::Malloc(uVar5,0);
    this->CacheBytes = puVar4;
    return true;
  }
  return false;
}

// Close @ 14192d1a0

bool __thiscall FPreloadableArchive::Close(FPreloadableArchive *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  IAsyncReadFileHandle *pIVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
              (this->PendingAsyncComplete,0xffffffff,0);
  }
  if (this->CacheBytes != (uchar *)0x0) {
    if (this->bIsPreloading == (TAtomic<bool>)0x0) {
      lpCriticalSection = &this->PreloadLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FreeRetiredRequests(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      PausePreload(this);
      LOCK();
      this->bIsPreloading = (TAtomic<bool>)0x0;
      UNLOCK();
      LOCK();
      this->bIsPreloadingPaused = (TAtomic<bool>)0x0;
      UNLOCK();
    }
    FMemory::Free(this->CacheBytes);
    this->CacheBytes = (uchar *)0x0;
    if ((this->RetiredRequests).ArrayNum != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RetiredRequests.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                         ,0x117,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    iVar2 = (this->RetiredRequests).ArrayNum;
    piVar1 = &(this->RetiredRequests).ArrayMax;
    if (*piVar1 != iVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,&(this->RetiredRequests).AllocatorInstance,iVar2,piVar1);
    }
  }
  pIVar3 = (this->AsynchronousHandle).Ptr;
  if (pIVar3 != (IAsyncReadFileHandle *)0x0) {
    (this->AsynchronousHandle).Ptr = (IAsyncReadFileHandle *)0x0;
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pFVar4 = (this->SynchronousArchive).Ptr;
  if (pFVar4 != (FArchive *)0x0) {
    (this->SynchronousArchive).Ptr = (FArchive *)0x0;
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
  }
  LOCK();
  this->bInitialized = (TAtomic<bool>)0x0;
  UNLOCK();
  return (bool)((byte)~*(byte *)((longlong)&this->_padding_ + 1) >> 1 & 1);
}

// DetachLowerLevel @ 141934880

FArchive * __thiscall FPreloadableArchive::DetachLowerLevel(FPreloadableArchive *this)

{
  FArchive *pFVar1;
  
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
              (this->PendingAsyncComplete,0xffffffff,0);
  }
  pFVar1 = (this->SynchronousArchive).Ptr;
  (this->SynchronousArchive).Ptr = (FArchive *)0x0;
  return pFVar1;
}

// FreeRetiredRequests @ 141943b10

void __thiscall FPreloadableArchive::FreeRetiredRequests(FPreloadableArchive *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->RetiredRequests).ArrayNum;
  pFVar4 = (this->RetiredRequests).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RetiredRequests).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IAsyncReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (*(char *)((longlong)plVar3 + 0x41) == '\0') {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
    (**(code **)*plVar3)(plVar3);
    pFVar4 = pFVar4 + 8;
  }
  (this->RetiredRequests).ArrayNum = 0;
  if ((this->RetiredRequests).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RetiredRequests).AllocatorInstance,0,&(this->RetiredRequests).ArrayMax)
    ;
  }
  return;
}

// GetArchiveName @ 1419455f0

FString * __thiscall
FPreloadableArchive::GetArchiveName(FPreloadableArchive *this,FString *__return_storage_ptr__)

{
  FArchive *pFVar1;
  
  if (1 < (this->ArchiveName).Data.ArrayNum) {
    ::FString::FString(__return_storage_ptr__,&this->ArchiveName);
    return __return_storage_ptr__;
  }
  pFVar1 = (this->SynchronousArchive).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"FPreloadableArchive");
  return __return_storage_ptr__;
}

// HasValidData @ 14194d1c0

bool __thiscall FPreloadableArchive::HasValidData(FPreloadableArchive *this)

{
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
              (this->PendingAsyncComplete,0xffffffff,0);
  }
  if (((this->SynchronousArchive).Ptr == (FArchive *)0x0) &&
     ((this->AsynchronousHandle).Ptr == (IAsyncReadFileHandle *)0x0)) {
    return false;
  }
  return true;
}

// InitializeAsync @ 141950490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPreloadableArchive::InitializeAsync
          (FPreloadableArchive *this,TUniqueFunction<FArchive_*___cdecl(void)> *param_1,uint param_2
          ,long64 param_3)

{
  longlong *plVar1;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  InitializeInternalAsync
            (this,param_1,(TUniqueFunction<IAsyncReadFileHandle_*___cdecl(void)> *)local_48,
             param_2 & 0xfffffffe,param_3);
  if (local_48._0_8_ != 0) {
    plVar1 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// InitializeAsync @ 141950500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPreloadableArchive::InitializeAsync
          (FPreloadableArchive *this,TUniqueFunction<IAsyncReadFileHandle_*___cdecl(void)> *param_1,
          uint param_2,long64 param_3)

{
  longlong *plVar1;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  InitializeInternalAsync
            (this,(TUniqueFunction<FArchive_*___cdecl(void)> *)local_48,param_1,param_2 | 1,param_3)
  ;
  if (local_48._0_8_ != 0) {
    plVar1 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// InitializeInternal @ 1419508d0

void __thiscall
FPreloadableArchive::InitializeInternal
          (FPreloadableArchive *this,TUniqueFunction<FArchive_*___cdecl(void)> *param_1,
          TUniqueFunction<IAsyncReadFileHandle_*___cdecl(void)> *param_2,uint param_3,long64 param_4
          )

{
  IAsyncReadFileHandle *pIVar1;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  IAsyncReadFileHandle *pIVar6;
  longlong *plVar7;
  longlong lVar8;
  FArchive *pFVar9;
  long64 lVar10;
  
  if (this->bInitialized != (TAtomic<bool>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                       ,0x7b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_3 & 1) == 0) {
    if (*(void **)param_1 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar7 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_1->field_0x28;
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      pFVar9 = (FArchive *)(*pcVar3)(uVar5);
      pFVar2 = (this->SynchronousArchive).Ptr;
      if ((pFVar2 != pFVar9) && ((this->SynchronousArchive).Ptr = pFVar9, pFVar2 != (FArchive *)0x0)
         ) {
        (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      }
    }
    pFVar2 = (this->SynchronousArchive).Ptr;
    if (pFVar2 != (FArchive *)0x0) {
      lVar10 = (**(code **)(*(longlong *)pFVar2 + 0x30))();
      this->Size = lVar10;
      if (((param_3 & 2) != 0) && (0 < param_4)) {
        pFVar2 = (this->SynchronousArchive).Ptr;
        (**(code **)(*(longlong *)pFVar2 + 0x1f0))(pFVar2,0);
      }
    }
  }
  else if ((param_3 & 1) == 1) {
    if (*(void **)param_2 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar3 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      pIVar6 = (IAsyncReadFileHandle *)(*pcVar3)(uVar5);
      pIVar1 = (this->AsynchronousHandle).Ptr;
      if ((pIVar1 != pIVar6) &&
         ((this->AsynchronousHandle).Ptr = pIVar6, pIVar1 != (IAsyncReadFileHandle *)0x0)) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
    }
    pIVar1 = (this->AsynchronousHandle).Ptr;
    if (pIVar1 != (IAsyncReadFileHandle *)0x0) {
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,0);
      if (plVar7 == (longlong *)0x0) {
        pIVar1 = (this->AsynchronousHandle).Ptr;
        if (pIVar1 != (IAsyncReadFileHandle *)0x0) {
          (this->AsynchronousHandle).Ptr = (IAsyncReadFileHandle *)0x0;
          (**(code **)*pIVar1)(pIVar1,1);
        }
      }
      else {
        if (*(char *)((longlong)plVar7 + 0x41) == '\0') {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
        if (((char)plVar7[8] == '\0') || (*(char *)((longlong)plVar7 + 0x44) == '\0')) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bDataIsReady && bSizeRequest",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                             ,0x8c,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = -1;
        if (*(char *)((longlong)plVar7 + 0x43) == '\0') {
          lVar8 = plVar7[1];
        }
        this->Size = lVar8;
        (**(code **)*plVar7)(plVar7,1);
      }
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                       ,0xae,L"Invalid mode %u.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  this->bInitialized = (TAtomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000141950b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->PendingAsyncComplete->_padding_ + 0x10))();
  return;
}

// InitializeInternalAsync @ 141950b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPreloadableArchive::InitializeInternalAsync
          (FPreloadableArchive *this,TUniqueFunction<FArchive_*___cdecl(void)> *param_1,
          TUniqueFunction<IAsyncReadFileHandle_*___cdecl(void)> *param_2,uint param_3,long64 param_4
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  TUniqueFunction<void___cdecl(void)> local_e8;
  undefined1 local_b8 [80];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
              (this->PendingAsyncComplete,0xffffffff,0);
  }
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    cVar2 = (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
                      (this->PendingAsyncComplete,0xffffffff,0);
    if (cVar2 == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingAsyncComplete->Wait()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                         ,0x6f,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(this->PendingAsyncComplete->_padding_ + 0x18))();
    local_b8._32_8_ = *(undefined8 *)param_1;
    local_b8._16_8_ = param_4;
    local_b8._72_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_b8._64_8_ = *(undefined8 *)&param_1->field_0x20;
    local_e8._0_8_ = 0;
    local_e8._40_8_ = 0;
    local_b8._48_8_ = *(undefined8 *)&param_1->field_0x10;
    local_b8._56_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_b8._32_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    local_68 = *(longlong *)param_2;
    local_40 = *(longlong **)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_58[2] = *(longlong *)&param_2->field_0x20;
    local_58[0] = *(longlong *)&param_2->field_0x10;
    local_58[1] = *(longlong *)&param_2->field_0x18;
    if (local_68 != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_b8._0_8_ = this;
    local_b8._8_4_ = param_3;
    Async<_FPreloadableArchive::InitializeInternalAsync_::__l2::<lambda_1>_>
              ((TFuture<void> *)local_f8,TaskGraph,(<lambda_1> *)local_b8,&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_f8._8_8_);
    if (local_68 != 0) {
      plVar4 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar4 = local_40;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_b8._32_8_ != 0) {
      plVar4 = (longlong *)(local_b8 + 0x30);
      if ((longlong *)local_b8._72_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_b8._72_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return;
}

// IsCacheAllocated @ 141951190

bool __thiscall FPreloadableArchive::IsCacheAllocated(FPreloadableArchive *this)

{
  return this->CacheBytes != (uchar *)0x0;
}

// IsInitialized @ 141951f00

bool __thiscall FPreloadableArchive::IsInitialized(FPreloadableArchive *this)

{
  return (bool)this->bInitialized;
}

// IsPreloading @ 141952300

bool __thiscall FPreloadableArchive::IsPreloading(FPreloadableArchive *this)

{
  return (bool)this->bIsPreloading;
}

// OnReadComplete @ 141957690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPreloadableArchive::OnReadComplete
          (FPreloadableArchive *this,bool param_1,IAsyncReadRequest *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<IAsyncReadRequest_*,TSizedDefaultAllocator<32>_> *pTVar1;
  uchar *puVar2;
  FScriptContainerElement *_Src;
  FArchive *pFVar3;
  code *pcVar4;
  IAsyncReadRequest *pIVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uchar *puVar10;
  IAsyncReadRequest *local_res18;
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  
  lpCriticalSection = &this->PreloadLock;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_res18 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  do {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bIsInlineReadComplete != false) {
      (this->SavedReadCompleteArguments).ReadRequest = local_res18;
      (this->SavedReadCompleteArguments).bCanceled = param_1;
      this->bReadCompleteWasCalledInline = true;
      if (((int)local_40 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalRetired.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                             ,0x181,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_141957b20:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      return;
    }
    this->bReadCompleteWasCalledInline = false;
    FreeRetiredRequests(this);
    if (((local_48.Data <= (FScriptContainerElement *)&local_res18) &&
        ((FScriptContainerElement *)&local_res18 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_40;
    if ((int)local_40 == local_40._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_48,(int *)((longlong)&local_40 + 4));
    }
    pIVar5 = local_res18;
    local_40 = CONCAT44(local_40._4_4_,iVar8 + 1);
    *(IAsyncReadRequest **)(local_48.Data + (longlong)iVar8 * 8) = local_res18;
    if (((local_res18->bDataIsReady == false) || (local_res18->bSizeRequest != false)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bDataIsReady && !bSizeRequest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                           ,0x96,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar2 = (uchar *)(pIVar5->field8_0x8).Size;
    if (puVar2 == (uchar *)0x0) {
LAB_1419577ee:
      (pIVar5->field8_0x8).Size = 0;
      puVar10 = puVar2;
    }
    else {
      puVar10 = (uchar *)0x0;
      if (pIVar5->bCanceled == false) {
        if (pIVar5->bUserSuppliedMemory == false) {
          (**(code **)(*(longlong *)pIVar5 + 0x20))(pIVar5);
        }
        goto LAB_1419577ee;
      }
    }
    if ((param_1 != false) || (puVar10 == (uchar *)0x0)) {
      if (2 < (byte)LogCore._0_1_) {
        iVar8 = (this->ArchiveName).Data.ArrayNum;
        if (iVar8 < 2) {
          pFVar3 = (this->SynchronousArchive).Ptr;
          if (pFVar3 == (FArchive *)0x0) {
            ::FString::FString(&local_38,L"FPreloadableArchive");
          }
          else {
            (**(code **)(*(longlong *)pFVar3 + 0x18))(pFVar3,&local_38);
          }
        }
        else {
          _Src = (this->ArchiveName).Data.AllocatorInstance.Data;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.Data.ArrayNum = iVar8;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,0,(ForAnyElementType *)&local_38,iVar8,&local_38.Data.ArrayMax);
          memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pTVar1 = &this->RetiredRequests;
      if ((pTVar1 == (TArray<IAsyncReadRequest_*,TSizedDefaultAllocator<32>_> *)&local_48) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar9 = (longlong)(int)local_40;
      if ((int)local_40 != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,(int)local_40,&pTVar1->AllocatorInstance,
                           &(this->RetiredRequests).ArrayNum,&(this->RetiredRequests).ArrayMax);
        memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8,local_48.Data,lVar9 << 3);
        local_40 = local_40 & 0xffffffff00000000;
      }
      LOCK();
      this->bIsPreloading = (TAtomic<bool>)0x0;
      UNLOCK();
      (**(code **)(this->PendingAsyncComplete->_padding_ + 0x10))();
      goto LAB_141957b20;
    }
    if ((puVar10 != this->CacheBytes + (longlong)this->CacheEnd) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReadResults == CacheBytes + CacheEnd",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                           ,0x19f,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar9 = this->Size - (longlong)this->CacheEnd;
    if (this->PageSize < lVar9) {
      lVar9 = this->PageSize;
    }
    LOCK();
    this->CacheEnd = (TAtomic<__int64>)((longlong)this->CacheEnd + lVar9);
    UNLOCK();
    bVar6 = ResumePreloadNonRecursive(this);
    if (this->bReadCompleteWasCalledInline == false) {
      pTVar1 = &this->RetiredRequests;
      if ((pTVar1 == (TArray<IAsyncReadRequest_*,TSizedDefaultAllocator<32>_> *)&local_48) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar9 = (longlong)(int)local_40;
      if ((int)local_40 != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,(int)local_40,&pTVar1->AllocatorInstance,
                           &(this->RetiredRequests).ArrayNum,&(this->RetiredRequests).ArrayMax);
        memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8,local_48.Data,lVar9 << 3);
        local_40 = local_40 & 0xffffffff00000000;
      }
      if (bVar6) {
        (**(code **)(this->PendingAsyncComplete->_padding_ + 0x10))();
      }
      goto LAB_141957b20;
    }
    if ((bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bComplete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                           ,0x1af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res18 = (this->SavedReadCompleteArguments).ReadRequest;
    param_1 = (this->SavedReadCompleteArguments).bCanceled;
    (this->SavedReadCompleteArguments).ReadRequest = (IAsyncReadRequest *)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  } while( true );
}

// PausePreload @ 14195aa90

void __thiscall FPreloadableArchive::PausePreload(FPreloadableArchive *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  LOCK();
  this->bIsPreloadingPaused = (TAtomic<bool>)0x1;
  UNLOCK();
  (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
            (this->PendingAsyncComplete,0xffffffff,0);
  lpCriticalSection = &this->PreloadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FreeRetiredRequests(this);
                    /* WARNING: Could not recover jumptable at 0x00014195aae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReleaseCache @ 141964970

void __thiscall FPreloadableArchive::ReleaseCache(FPreloadableArchive *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->CacheBytes != (uchar *)0x0) {
    if (this->bIsPreloading == (TAtomic<bool>)0x0) {
      lpCriticalSection = &this->PreloadLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FreeRetiredRequests(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      PausePreload(this);
      LOCK();
      this->bIsPreloading = (TAtomic<bool>)0x0;
      UNLOCK();
      LOCK();
      this->bIsPreloadingPaused = (TAtomic<bool>)0x0;
      UNLOCK();
    }
    FMemory::Free(this->CacheBytes);
    iVar2 = (this->RetiredRequests).ArrayNum;
    this->CacheBytes = (uchar *)0x0;
    if ((iVar2 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RetiredRequests.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                           ,0x117,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = (this->RetiredRequests).ArrayNum;
    piVar1 = &(this->RetiredRequests).ArrayMax;
    if (*piVar1 != iVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,&(this->RetiredRequests).AllocatorInstance,iVar2,piVar1);
    }
  }
  return;
}

// ResumePreload @ 141967970

void __thiscall FPreloadableArchive::ResumePreload(FPreloadableArchive *this)

{
  IAsyncReadRequest *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  
  cVar3 = (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
                    (this->PendingAsyncComplete,0,0);
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingAsyncComplete->Wait(0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                       ,0x13b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  this->bIsPreloadingPaused = (TAtomic<bool>)0x0;
  UNLOCK();
  (**(code **)(this->PendingAsyncComplete->_padding_ + 0x18))();
  bVar4 = ResumePreloadNonRecursive(this);
  if (this->bReadCompleteWasCalledInline == false) {
    if (bVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001419679ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->PendingAsyncComplete->_padding_ + 0x10))();
      return;
    }
    return;
  }
  if (bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bComplete",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                       ,0x149,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->SavedReadCompleteArguments).ReadRequest;
  (this->SavedReadCompleteArguments).ReadRequest = (IAsyncReadRequest *)0x0;
  OnReadComplete(this,(this->SavedReadCompleteArguments).bCanceled,pIVar1);
  return;
}

// ResumePreloadNonRecursive @ 141967a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPreloadableArchive::ResumePreloadNonRecursive(FPreloadableArchive *this)

{
  IAsyncReadFileHandle *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  code **local_58;
  uchar *local_50;
  code *local_48 [2];
  undefined **local_38;
  FPreloadableArchive *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  cVar3 = (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
                    (this->PendingAsyncComplete,0,0);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PendingAsyncComplete->Wait(0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                         ,0x155,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  lVar6 = this->Size - (longlong)this->CacheEnd;
  if (lVar6 < 1) {
    LOCK();
    this->bIsPreloading = (TAtomic<bool>)0x0;
    UNLOCK();
  }
  else if (this->bIsPreloadingPaused == (TAtomic<bool>)0x0) {
    lVar8 = this->PageSize;
    if (lVar6 < this->PageSize) {
      lVar8 = lVar6;
    }
    if (((this->bIsInlineReadComplete != false) || (this->bReadCompleteWasCalledInline != false)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsInlineReadComplete && !bReadCompleteWasCalledInline",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                           ,0x165,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pIVar1 = (this->AsynchronousHandle).Ptr;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FPreloadableArchive::ResumePreloadNonRecursive'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    this->bIsInlineReadComplete = true;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPreloadableArchive::ResumePreloadNonRecursive'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
                  ::Call;
    local_20 = (undefined ***)0x0;
    local_50 = this->CacheBytes + (longlong)this->CacheEnd;
    local_58 = local_48;
    local_30 = this;
    lVar6 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,this->CacheEnd,lVar8,3);
    if (lVar6 == 0) {
      if (2 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      }
      this->bIsInlineReadComplete = false;
      LOCK();
      this->bIsPreloading = (TAtomic<bool>)0x0;
      UNLOCK();
      bVar4 = true;
    }
    else {
      this->bIsInlineReadComplete = false;
      bVar4 = false;
    }
    if (local_48[0] == (code *)0x0) {
      return bVar4;
    }
    pppuVar7 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar7 = local_20;
    }
    (*(code *)(*pppuVar7)[2])();
    return bVar4;
  }
  return true;
}

// Seek @ 1419691b0

void __thiscall FPreloadableArchive::Seek(FPreloadableArchive *this,long64 param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 < 0) {
    iVar1 = (this->ArchiveName).Data.ArrayNum;
    if (iVar1 < 2) {
      pFVar3 = (this->SynchronousArchive).Ptr;
      if (pFVar3 == (FArchive *)0x0) {
        ::FString::FString(&local_28,L"FPreloadableArchive");
      }
      else {
        (**(code **)(*(longlong *)pFVar3 + 0x18))(pFVar3,&local_28);
      }
    }
    else {
      pFVar2 = (this->ArchiveName).Data.AllocatorInstance.Data;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = iVar1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                       ,0x275,
                       L"Attempted to seek to a negative location (%lld/%lld), file: %s. The file is most likely corrupt."
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->Size < param_1) {
    iVar1 = (this->ArchiveName).Data.ArrayNum;
    if (iVar1 < 2) {
      pFVar3 = (this->SynchronousArchive).Ptr;
      if (pFVar3 == (FArchive *)0x0) {
        ::FString::FString(&local_18,L"FPreloadableArchive");
      }
      else {
        (**(code **)(*(longlong *)pFVar3 + 0x18))(pFVar3,&local_18);
      }
    }
    else {
      pFVar2 = (this->ArchiveName).Data.AllocatorInstance.Data;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = iVar1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos <= Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                       ,0x276,
                       L"Attempted to seek past the end of file (%lld/%lld), file: %s. The file is most likely corrupt."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->Pos = param_1;
  return;
}

// Serialize @ 141969520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPreloadableArchive::Serialize(FPreloadableArchive *this,void *param_1,long64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *_Src;
  FArchive *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  TAtomic<bool> TVar6;
  TAtomic<__int64> TVar7;
  TAtomic<__int64> TVar8;
  size_t _Size;
  longlong lVar9;
  TAtomic<__int64> TVar10;
  FString local_28;
  
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    FArchiveState::SetError((FArchiveState *)this);
    if (1 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      return;
    }
  }
  else if (this->Size < this->Pos + param_2) {
    FArchiveState::SetError((FArchiveState *)this);
    if (1 < (byte)LogCore._0_1_) {
      iVar1 = (this->ArchiveName).Data.ArrayNum;
      if (iVar1 < 2) {
        pFVar2 = (this->SynchronousArchive).Ptr;
        if (pFVar2 == (FArchive *)0x0) {
          ::FString::FString(&local_28,L"FPreloadableArchive");
        }
        else {
          (**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2,&local_28);
        }
      }
      else {
        _Src = (this->ArchiveName).Data.AllocatorInstance.Data;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
        memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (this->CacheBytes == (uchar *)0x0) {
    SerializeSynchronously(this,param_1,param_2);
  }
  else {
    TVar6 = this->bIsPreloading;
    TVar7 = this->CacheEnd;
    lVar9 = this->Pos;
    TVar10 = (TAtomic<__int64>)(param_2 + lVar9);
    while (lVar9 < (longlong)TVar10) {
      if (lVar9 < (longlong)TVar7) {
        TVar8 = TVar10;
        if ((longlong)TVar7 < (longlong)TVar10) {
          TVar8 = TVar7;
        }
        _Size = (longlong)TVar8 - lVar9;
        memcpy(param_1,this->CacheBytes + lVar9,_Size);
        param_1 = (void *)((longlong)param_1 + _Size);
        this->Pos = this->Pos + _Size;
      }
      else {
        if (TVar6 != (TAtomic<bool>)0x0) {
          PausePreload(this);
          cVar4 = (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
                            (this->PendingAsyncComplete,0,0);
          if ((cVar4 == '\0') &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PendingAsyncComplete->Wait(0)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                                 ,0x210,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TVar7 = this->CacheEnd;
          if (this->Pos < (longlong)TVar7) {
            lpCriticalSection = &this->PreloadLock;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            ResumePreload(this);
            TVar6 = this->bIsPreloading;
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            goto LAB_1419697de;
          }
          LOCK();
          this->bIsPreloading = (TAtomic<bool>)0x0;
          UNLOCK();
          LOCK();
          this->bIsPreloadingPaused = (TAtomic<bool>)0x0;
          UNLOCK();
          TVar6 = (TAtomic<bool>)0x0;
        }
        lVar9 = (longlong)TVar10 - this->Pos;
        SerializeSynchronously(this,param_1,lVar9);
        param_1 = (void *)((longlong)param_1 + lVar9);
      }
LAB_1419697de:
      lVar9 = this->Pos;
    }
  }
  return;
}

// SerializeSynchronously @ 14196a010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPreloadableArchive::SerializeSynchronously(FPreloadableArchive *this,void *param_1,long64 param_2)

{
  int iVar1;
  FArchive *pFVar2;
  FScriptContainerElement *pFVar3;
  IAsyncReadFileHandle *pIVar4;
  code *pcVar5;
  bool bVar6;
  IAsyncReadRequest *this_00;
  uchar *puVar7;
  ForAnyElementType FVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar2 = (this->SynchronousArchive).Ptr;
  if (pFVar2 == (FArchive *)0x0) {
    pIVar4 = (this->AsynchronousHandle).Ptr;
    if (pIVar4 == (IAsyncReadFileHandle *)0x0) {
      if ((this->_padding_ & 0x200) != 0) {
        return;
      }
      if ((byte)LogCore._0_1_ < 3) goto LAB_14196a548;
      iVar1 = (this->ArchiveName).Data.ArrayNum;
      if (iVar1 < 2) {
        ::FString::FString(&local_28,L"FPreloadableArchive");
      }
      else {
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar3 = (this->ArchiveName).Data.AllocatorInstance.Data;
        local_28.Data.ArrayNum = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
        memcpy(local_28.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      FVar8.Data = local_28.Data.AllocatorInstance.Data;
    }
    else {
      if (param_2 == 0) {
        return;
      }
      this_00 = (IAsyncReadRequest *)(**(code **)((longlong)*pIVar4 + 0x10))();
      if (this_00 != (IAsyncReadRequest *)0x0) {
        if ((this_00->bCompleteAndCallbackCalled == false) &&
           ((**(code **)(*(longlong *)this_00 + 0x10))(this_00,0),
           this_00->bCompleteAndCallbackCalled == false)) {
          if ((this->_padding_ & 0x200) == 0) {
            if (2 < (byte)LogCore._0_1_) {
              iVar1 = (this->ArchiveName).Data.ArrayNum;
              if (iVar1 < 2) {
                pFVar2 = (this->SynchronousArchive).Ptr;
                if (pFVar2 == (FArchive *)0x0) {
                  ::FString::FString(&local_38,L"FPreloadableArchive");
                }
                else {
                  (**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2,&local_38);
                }
              }
              else {
                local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                pFVar3 = (this->ArchiveName).Data.AllocatorInstance.Data;
                local_38.Data.ArrayNum = iVar1;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar1,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Data.ArrayMax)
                ;
                memcpy(local_38.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
            }
            FArchiveState::SetError((FArchiveState *)this);
            (*(code *)**(undefined8 **)this_00)(this_00,1);
            return;
          }
        }
        else {
          puVar7 = IAsyncReadRequest::GetReadResults(this_00);
          if ((puVar7 != param_1) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_5189247446294723999>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                                 ,0x261,"ReadRequest->GetReadResults() == V"), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this->Pos = this->Pos + param_2;
        }
        (*(code *)**(undefined8 **)this_00)(this_00,1);
        return;
      }
      if ((this->_padding_ & 0x200) != 0) {
        return;
      }
      if ((byte)LogCore._0_1_ < 3) goto LAB_14196a548;
      iVar1 = (this->ArchiveName).Data.ArrayNum;
      if (iVar1 < 2) {
        pFVar2 = (this->SynchronousArchive).Ptr;
        if (pFVar2 == (FArchive *)0x0) {
          ::FString::FString(&local_48,L"FPreloadableArchive");
        }
        else {
          (**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2,&local_48);
        }
      }
      else {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar3 = (this->ArchiveName).Data.AllocatorInstance.Data;
        local_48.Data.ArrayNum = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
        memcpy(local_48.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
LAB_14196a548:
    FArchiveState::SetError((FArchiveState *)this);
    return;
  }
  (**(code **)(*(longlong *)pFVar2 + 0x1b8))(pFVar2,this->Pos);
  pFVar2 = (this->SynchronousArchive).Ptr;
  if ((pFVar2->field_0x29 & 2) == 0) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_1,param_2);
    pFVar2 = (this->SynchronousArchive).Ptr;
    if (((pFVar2->field_0x29 & 2) == 0) || ((this->_padding_ & 0x200) != 0)) goto LAB_14196a225;
    if (2 < (byte)LogCore._0_1_) {
      iVar1 = (this->ArchiveName).Data.ArrayNum;
      if (iVar1 < 2) {
        if (pFVar2 == (FArchive *)0x0) {
          ::FString::FString(&local_58,L"FPreloadableArchive");
        }
        else {
          (**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2,&local_58);
        }
      }
      else {
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar3 = (this->ArchiveName).Data.AllocatorInstance.Data;
        local_58.Data.ArrayNum = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_58,iVar1,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
      goto LAB_14196a213;
    }
  }
  else {
    if ((this->_padding_ & 0x200) != 0) goto LAB_14196a225;
    if (2 < (byte)LogCore._0_1_) {
      iVar1 = (this->ArchiveName).Data.ArrayNum;
      if (iVar1 < 2) {
        if (pFVar2 == (FArchive *)0x0) {
          ::FString::FString(&local_68,L"FPreloadableArchive");
        }
        else {
          (**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2,&local_68);
        }
      }
      else {
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar3 = (this->ArchiveName).Data.AllocatorInstance.Data;
        local_68.Data.ArrayNum = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_68,iVar1,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      FVar8.Data = local_68.Data.AllocatorInstance.Data;
LAB_14196a213:
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
  }
  FArchiveState::SetError((FArchiveState *)this);
LAB_14196a225:
  this->Pos = this->Pos + param_2;
  return;
}

// SetPageSize @ 14196cd70

void __thiscall FPreloadableArchive::SetPageSize(FPreloadableArchive *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
              (this->PendingAsyncComplete,0xffffffff,0);
  }
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    this->PageSize = param_1;
  }
  else if (this->bInitialized != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                       ,0x45,L"It is invalid to SetPageSize after initialization");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StartPreload @ 14196ea50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPreloadableArchive::StartPreload(FPreloadableArchive *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar *puVar4;
  ulong64 uVar5;
  
  if (this->bIsPreloading != (TAtomic<bool>)0x0) {
    return true;
  }
  if (this->bInitialized == (TAtomic<bool>)0x0) {
    if (1 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
  }
  else {
    if (this->CacheBytes != (uchar *)0x0) {
LAB_14196eb52:
      (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
                (this->PendingAsyncComplete,0xffffffff,0);
      lpCriticalSection = &this->PreloadLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      LOCK();
      this->bIsPreloading = (TAtomic<bool>)0x1;
      UNLOCK();
      if (this->bIsPreloadingPaused != (TAtomic<bool>)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsPreloadingPaused",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                           ,0xd7,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      ResumePreload(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    if (this->bInitialized == (TAtomic<bool>)0x0) {
      if (1 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        return false;
      }
    }
    else if ((-1 < this->Size) && ((this->AsynchronousHandle).Ptr != (IAsyncReadFileHandle *)0x0)) {
      if (this->CacheBytes != (uchar *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheBytes == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                           ,0x104,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      uVar5 = 1;
      if (1 < this->Size) {
        uVar5 = this->Size;
      }
      puVar4 = FMemory::Malloc(uVar5,0);
      this->CacheBytes = puVar4;
      goto LAB_14196eb52;
    }
  }
  return false;
}

// StopPreload @ 14196f100

void __thiscall FPreloadableArchive::StopPreload(FPreloadableArchive *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (this->bIsPreloading != (TAtomic<bool>)0x0) {
    PausePreload(this);
    LOCK();
    this->bIsPreloading = (TAtomic<bool>)0x0;
    UNLOCK();
    LOCK();
    this->bIsPreloadingPaused = (TAtomic<bool>)0x0;
    UNLOCK();
    return;
  }
  lpCriticalSection = &this->PreloadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FreeRetiredRequests(this);
                    /* WARNING: Could not recover jumptable at 0x00014196f144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Tell @ 14196f5c0

long64 __thiscall FPreloadableArchive::Tell(FPreloadableArchive *this)

{
  return this->Pos;
}

// TotalSize @ 141973260

long64 __thiscall FPreloadableArchive::TotalSize(FPreloadableArchive *this)

{
  return this->Size;
}

// WaitForInitialization @ 14197c830

void __thiscall FPreloadableArchive::WaitForInitialization(FPreloadableArchive *this)

{
  if (this->bInitialized == (TAtomic<bool>)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014197c84e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->PendingAsyncComplete->_padding_ + 0x20))
              (this->PendingAsyncComplete,0xffffffff,0);
    return;
  }
  return;
}

