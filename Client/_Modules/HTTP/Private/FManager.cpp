// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 18

// FManager @ 14314d9a0

FManager * __thiscall
FHttpRetrySystem::FManager::FManager
          (FManager *this,TOptional<unsigned_int> *param_1,TOptional<double> *param_2,
          TOptional<unsigned_int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FHttpModule *pFVar3;
  FManager *pFVar4;
  
  (this->RetryLimitCountDefault).bIsSet = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FManager_FHttpRetrySystem__6B_;
  (this->RandomFailureRate).bIsSet = false;
  bVar2 = param_1->bIsSet;
  (this->RetryLimitCountDefault).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->RetryLimitCountDefault).TypedValue = param_1->TypedValue;
  }
  (this->RetryLimitCountForConnectionErrorDefault).bIsSet = false;
  bVar2 = param_3->bIsSet;
  (this->RetryLimitCountForConnectionErrorDefault).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->RetryLimitCountForConnectionErrorDefault).TypedValue = param_3->TypedValue;
  }
  (this->RetryTimeoutRelativeSecondsDefault).bIsSet = false;
  bVar2 = param_2->bIsSet;
  (this->RetryTimeoutRelativeSecondsDefault).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->RetryTimeoutRelativeSecondsDefault).TypedValue = param_2->TypedValue;
  }
  (this->RequestList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestList).ArrayNum = 0;
  (this->RequestList).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RequestListLock,4000);
  pFVar3 = FHttpModule::Get();
  if (pFVar3->HttpManager == (FHttpManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HttpManager != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FManager *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (pFVar3->HttpManager->Thread == (FHttpThreadBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FHttpModule::Get().GetHttpManager().GetThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                       ,0x14c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FManager *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// ~FManager @ 143150c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpRetrySystem::FManager::~FManager(FManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FHttpLogVerbosityTracker *this_00;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->RequestListLock;
  this->_padding_ = (longlong)&___7FManager_FHttpRetrySystem__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (this->RequestList).ArrayNum;
  pFVar5 = (this->RequestList).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->RequestList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    if (*(int *)(pFVar5 + 4) != 0) {
      this_00 = FHttpLogVerbosityTracker::Get();
      FHttpLogVerbosityTracker::DecrementRetriedRequests(this_00);
    }
    pFVar5 = pFVar5 + 0x30;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DestructItems<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,int>
            ((FHttpRetryRequestEntry *)(this->RequestList).AllocatorInstance.Data,
             (this->RequestList).ArrayNum);
  pFVar5 = (this->RequestList).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000143150cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 1431518d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::__l2::<lambda_1>::operator()(void *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  IHttpRequest *pIVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *this_00;
  TSharedPtr<IHttpResponse,1> *pTVar8;
  FHttpLogVerbosityTracker *this_01;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  IHttpRequest *pIVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  IHttpRequest *pIVar15;
  bool bVar16;
  TSharedPtr<IHttpRequest,1> local_58;
  undefined1 local_48 [16];
  
  pIVar1 = *(IHttpRequest **)((longlong)this + 8);
  pIVar11 = (IHttpRequest *)0x0;
  if (pIVar1 != (IHttpRequest *)0x0) {
    aVar4 = *(atomic<int> *)&pIVar1->field_0x8;
    do {
      pIVar15 = pIVar11;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1431519db;
      LOCK();
      aVar6 = *(atomic<int> *)&pIVar1->field_0x8;
      bVar16 = aVar4 == aVar6;
      if (bVar16) {
        *(atomic<int> *)&pIVar1->field_0x8 = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar16);
    pIVar11 = *(IHttpRequest **)this;
  }
  pIVar15 = pIVar1;
  if (pIVar11 == (IHttpRequest *)0x0) goto LAB_1431519db;
  pTVar9 = *(TReferenceControllerBase<1> **)&pIVar11[0x17].field_0x10;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_143151b9e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if ((pIVar11 == (IHttpRequest *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143151958;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar16 = aVar4 == aVar6;
      if (bVar16) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar16);
    lVar2 = *(longlong *)&pIVar11[0x17].field_0x8;
    if (lVar2 == 0) goto LAB_143151b9e;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x50);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    if (pIVar1 != (IHttpRequest *)0x0) {
      LOCK();
      *(atomic<int> *)&pIVar1->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pIVar1->field_0x8 + 1);
      UNLOCK();
    }
    lVar13 = *(longlong *)(lVar2 + 0x40);
    lVar12 = (longlong)*(int *)(lVar2 + 0x48) * 0x30 + lVar13;
    if (lVar13 != lVar12) {
      lVar10 = lVar13;
      if (pIVar11 == (IHttpRequest *)0x0) goto LAB_143151a52;
      do {
        if (pIVar11 == *(IHttpRequest **)(lVar10 + 0x20)) {
          lVar13 = (lVar10 - lVar13) / 6 + (lVar10 - lVar13 >> 0x3f);
          uVar14 = (int)(lVar13 >> 3) - (int)(lVar13 >> 0x3f);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pIVar1);
          if (uVar14 == 0xffffffff) goto LAB_143151a66;
          uVar7 = 0;
          if ((int)uVar14 < *(int *)(lVar2 + 0x48)) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)(lVar2 + 0x40) + 4 + (longlong)(int)uVar14 * 0x30) != 0) {
            this_01 = FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::Get();
            FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::DecrementRetriedRequests(this_01);
          }
          uVar7 = 0;
          if ((int)uVar14 < *(int *)(lVar2 + 0x48)) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl((TArray<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,TSizedDefaultAllocator<32>_>
                            *)(lVar2 + 0x40),uVar14);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,(ForAnyElementType *)(lVar2 + 0x40),*(int *)(lVar2 + 0x48),
                     (int *)(lVar2 + 0x4c));
          LeaveCriticalSection(lpCriticalSection);
          goto LAB_143151958;
        }
LAB_143151a52:
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != lVar12);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pIVar1);
LAB_143151a66:
    LeaveCriticalSection(lpCriticalSection);
LAB_143151958:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  this_00 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *)(**(code **)(*(longlong *)pIVar11 + 0xf0))(pIVar11);
  bVar16 = *(bool *)((longlong)this + 0x10);
  if ((pIVar11 == (IHttpRequest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar8 = (TSharedPtr<IHttpResponse,1> *)
           (**(code **)(*(longlong *)pIVar11 + 0x120))(pIVar11,local_48);
  if (pIVar1 != (IHttpRequest *)0x0) {
    LOCK();
    *(atomic<int> *)&pIVar1->field_0x8 = (atomic<int>)((int)*(atomic<int> *)&pIVar1->field_0x8 + 1);
    UNLOCK();
  }
  local_58.Object = pIVar11;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar1;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  ::ExecuteIfBound(this_00,&local_58,pTVar8,bVar16);
LAB_1431519db:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar15);
  return;
}

// operator() @ 143151c00

void __thiscall
`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::__l2::<lambda_1>::operator()(void *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FManager *this_00;
  FScriptContainerElement *pFVar3;
  FRequest *pFVar4;
  IHttpResponse *pIVar5;
  code *pcVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  FHttpRetryRequestEntry *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  pTVar18 = pTVar17;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar1->SharedReferenceCount;
    do {
      pTVar15 = pTVar17;
      if (aVar7 == (atomic<int>)0x0) goto LAB_143151c7c;
      LOCK();
      aVar8 = pTVar1->SharedReferenceCount;
      bVar19 = aVar7 == aVar8;
      if (bVar19) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar19);
    pTVar18 = *(TReferenceControllerBase<1> **)this;
  }
  pTVar15 = pTVar1;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)&pTVar18[0x23].SharedReferenceCount;
    pTVar14 = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = pTVar2->SharedReferenceCount;
      do {
        pTVar14 = pTVar17;
        if (aVar7 == (atomic<int>)0x0) goto LAB_143151c74;
        LOCK();
        aVar8 = pTVar2->SharedReferenceCount;
        bVar19 = aVar7 == aVar8;
        if (bVar19) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar8 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar8;
      } while (!bVar19);
      this_00 = (FManager *)pTVar18[0x23]._padding_;
      pTVar14 = pTVar2;
      if (this_00 != (FManager *)0x0) {
        lpCriticalSection = &this_00->RequestListLock;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar3 = (this_00->RequestList).AllocatorInstance.Data;
        if (pFVar3 != pFVar3 + (longlong)(this_00->RequestList).ArrayNum * 0x30) {
          pFVar10 = pFVar3;
          if (pTVar18 == (TReferenceControllerBase<1> *)0x0) goto LAB_143151cef;
          do {
            if (pTVar18 == *(TReferenceControllerBase<1> **)(pFVar10 + 0x20)) {
              lVar11 = ((longlong)pFVar10 - (longlong)pFVar3) / 6 +
                       ((longlong)pFVar10 - (longlong)pFVar3 >> 0x3f);
              uVar12 = (int)(lVar11 >> 3) - (int)(lVar11 >> 0x3f);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              if (uVar12 == 0xffffffff) goto LAB_143151d03;
              uVar16 = 0;
              if ((int)uVar12 < (this_00->RequestList).ArrayNum) {
                uVar16 = ~uVar12 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar13 = (FHttpRetryRequestEntry *)
                        ((this_00->RequestList).AllocatorInstance.Data +
                        (longlong)(int)uVar12 * 0x30);
              pFVar4 = (pFVar13->Request).Object;
              puVar9 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 0x120))(pFVar4,local_48);
              pFVar4 = (pFVar13->Request).Object;
              pTVar1 = (TReferenceControllerBase<1> *)puVar9[1];
              pIVar5 = (IHttpResponse *)*puVar9;
              if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
                UNLOCK();
              }
              pTVar18 = (pFVar4->LastResponse).SharedReferenceCount.ReferenceController;
              (pFVar4->LastResponse).Object = pIVar5;
              (pFVar4->LastResponse).SharedReferenceCount.ReferenceController = pTVar1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar18);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_40);
              ((pFVar13->Request).Object)->bLastSucceeded = *(bool *)((longlong)this + 0x10);
              FHttpRetrySystem::FManager::RetryHttpRequest(this_00,pFVar13);
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              goto LAB_143151c74;
            }
LAB_143151cef:
            pFVar10 = pFVar10 + 0x30;
          } while (pFVar10 != pFVar3 + (longlong)(this_00->RequestList).ArrayNum * 0x30);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
LAB_143151d03:
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
LAB_143151c74:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
LAB_143151c7c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// BlockUntilFlushed @ 143155c20

void __thiscall FHttpRetrySystem::FManager::BlockUntilFlushed(FManager *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  float fVar2;
  bool bVar3;
  FHttpModule *pFVar4;
  float fVar5;
  
  fVar2 = __real_3c83126f;
  fVar5 = 0.0;
  if (0.0 < param_1) {
    lpCriticalSection = &this->RequestListLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((this->RequestList).ArrayNum == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar4 = FHttpModule::Get();
      if ((pFVar4->HttpManager == (FHttpManager *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("HttpManager != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                             ,0x50,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(pFVar4->HttpManager->_padding_ + 8))(pFVar4->HttpManager,fVar2);
      FWindowsPlatformProcess::Sleep(fVar2);
      fVar5 = fVar5 + fVar2;
    } while (fVar5 < param_1);
  }
  return;
}

// CanRetry @ 143156fd0

bool __thiscall FHttpRetrySystem::FManager::CanRetry(FManager *this,FHttpRetryRequestEntry *param_1)

{
  bool bVar1;
  FRequest *pFVar2;
  char cVar3;
  TOptional<unsigned_int> *pTVar4;
  undefined1 local_18 [16];
  
  cVar3 = (**(code **)(((param_1->Request).Object)->_padding_ + 0x18))();
  if (cVar3 == '\x01') {
    pFVar2 = (param_1->Request).Object;
    bVar1 = (pFVar2->RetryLimitCountForConnectionErrorOverride).bIsSet;
    if ((bVar1 != false) || ((this->RetryLimitCountForConnectionErrorDefault).bIsSet != false)) {
      local_18._0_4_ = 0;
      pTVar4 = (TOptional<unsigned_int> *)local_18;
      if ((this->RetryLimitCountForConnectionErrorDefault).bIsSet != false) {
        pTVar4 = &this->RetryLimitCountForConnectionErrorDefault;
      }
      if (bVar1 != false) {
        pTVar4 = &pFVar2->RetryLimitCountForConnectionErrorOverride;
      }
      return param_1->CurrentRetryCountForConnectionError < pTVar4->TypedValue;
    }
  }
  pFVar2 = (param_1->Request).Object;
  local_18._4_4_ = 0;
  pTVar4 = (TOptional<unsigned_int> *)(local_18 + 4);
  if ((this->RetryLimitCountDefault).bIsSet != false) {
    pTVar4 = &this->RetryLimitCountDefault;
  }
  if ((pFVar2->RetryLimitCountOverride).bIsSet != false) {
    pTVar4 = &pFVar2->RetryLimitCountOverride;
  }
  return param_1->CurrentRetryCount < pTVar4->TypedValue;
}

// CanRetryForConnectionError @ 143157090

bool __thiscall
FHttpRetrySystem::FManager::CanRetryForConnectionError
          (FManager *this,FHttpRetryRequestEntry *param_1)

{
  FRequest *pFVar1;
  TOptional<unsigned_int> *pTVar2;
  TOptional<unsigned_int> *pTVar3;
  TOptional<unsigned_int> local_18 [3];
  
  pFVar1 = (param_1->Request).Object;
  local_18[0].TypedValue = 0;
  pTVar2 = local_18;
  if ((this->RetryLimitCountForConnectionErrorDefault).bIsSet != false) {
    pTVar2 = &this->RetryLimitCountForConnectionErrorDefault;
  }
  pTVar3 = &pFVar1->RetryLimitCountForConnectionErrorOverride;
  if ((pFVar1->RetryLimitCountForConnectionErrorOverride).bIsSet == false) {
    pTVar3 = pTVar2;
  }
  return param_1->CurrentRetryCountForConnectionError < pTVar3->TypedValue;
}

// CanRetryInGeneral @ 1431570e0

bool __thiscall
FHttpRetrySystem::FManager::CanRetryInGeneral(FManager *this,FHttpRetryRequestEntry *param_1)

{
  FRequest *pFVar1;
  TOptional<unsigned_int> *pTVar2;
  TOptional<unsigned_int> *pTVar3;
  TOptional<unsigned_int> local_18 [3];
  
  pFVar1 = (param_1->Request).Object;
  local_18[0].TypedValue = 0;
  pTVar2 = local_18;
  if ((this->RetryLimitCountDefault).bIsSet != false) {
    pTVar2 = &this->RetryLimitCountDefault;
  }
  pTVar3 = &pFVar1->RetryLimitCountOverride;
  if ((pFVar1->RetryLimitCountOverride).bIsSet == false) {
    pTVar3 = pTVar2;
  }
  return param_1->CurrentRetryCount < pTVar3->TypedValue;
}

// CancelRequest @ 1431574d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRetrySystem::FManager::CancelRequest
          (FManager *this,TSharedRef<FHttpRetrySystem::FRequest,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TSharedRef<FHttpRetrySystem::FRequest,1> *pTVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRetrySystem::FManager::CancelRequest(TSharedRef<FHttpRetrySystem::FRequest,1>_&)_::_3_::FStat_STAT_FHttpRetrySystem_FManager_CancelRequest>
  FVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  longlong lVar17;
  FColor_u_0 local_res8 [2];
  TSharedRef<FHttpRetrySystem::FRequest,1> *local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_98;
  FName local_90;
  FName local_88;
  FScriptContainerElement local_78 [4];
  undefined8 local_74;
  double local_68;
  undefined8 local_60;
  FRequest *local_58;
  TReferenceControllerBase<1> *local_50;
  
  uVar16 = 0;
  local_res10 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FHttpRetrySystem_FManager_CancelRequest ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRetrySystem::FManager::CancelRequest(TSharedRef<FHttpRetrySystem::FRequest,1>_&)_::_3_::FStat_STAT_FHttpRetrySystem_FManager_CancelRequest>
           )0x0) {
        pFVar12 = ::FName::FName(&local_98,"STAT_FHttpRetrySystem_FManager_CancelRequest");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FHttpRetrySystem_FManager_CancelRequest,*pFVar12,
                   L"STAT_FHttpRetrySystem_FManager_CancelRequest","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = StatPtr_STAT_FHttpRetrySystem_FManager_CancelRequest;
  if (StatPtr_STAT_FHttpRetrySystem_FManager_CancelRequest ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRetrySystem::FManager::CancelRequest(TSharedRef<FHttpRetrySystem::FRequest,1>_&)_::_3_::FStat_STAT_FHttpRetrySystem_FManager_CancelRequest>
       )0x0) {
    pFVar12 = ::FName::FName(&local_90,"STAT_FHttpRetrySystem_FManager_CancelRequest");
    FVar13 = (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRetrySystem::FManager::CancelRequest(TSharedRef<FHttpRetrySystem::FRequest,1>_&)_::_3_::FStat_STAT_FHttpRetrySystem_FManager_CancelRequest>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FHttpRetrySystem_FManager_CancelRequest,*pFVar12,
                          L"STAT_FHttpRetrySystem_FManager_CancelRequest","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar13;
  bVar4 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar10 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar10 == 0)) {
LAB_14315762f:
    bVar5 = false;
    FVar15 = local_88;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                   ,0x282);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14315762f;
    local_res20.s.LowPart = FVar14.Value;
    local_res20.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar5 = true;
  }
  if (&this->RequestListLock == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->RequestListLock);
  pTVar7 = local_res10;
  bVar9 = false;
  if (0 < (this->RequestList).ArrayNum) {
    lVar17 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar16 < (this->RequestList).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->RequestList).AllocatorInstance.Data;
      if (*(FRequest **)(pFVar2 + lVar17 + 0x20) == pTVar7->Object) {
        pFVar2[lVar17] = (FScriptContainerElement)0x1;
        bVar9 = true;
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x30;
    } while ((int)uVar16 < (this->RequestList).ArrayNum);
    param_1 = local_res10;
    if (bVar9) goto LAB_143157826;
  }
  local_74 = 0;
  QueryPerformanceCounter(&local_res20);
  local_58 = param_1->Object;
  local_50 = (param_1->SharedReferenceCount).ReferenceController;
  local_68 = (double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) *
             FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = (this->RequestList).AllocatorInstance.Data;
  local_78[0] = (FScriptContainerElement)0x1;
  if ((pFVar2 <= local_78) && (local_78 < pFVar2 + (longlong)(this->RequestList).ArrayMax * 0x30)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar11 = (this->RequestList).ArrayNum;
  piVar1 = &(this->RequestList).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&(this->RequestList).AllocatorInstance,piVar1);
  }
  lVar17 = (longlong)iVar11;
  (this->RequestList).ArrayNum = iVar11 + 1;
  pFVar2 = (this->RequestList).AllocatorInstance.Data;
  pFVar2[lVar17 * 0x30] = local_78[0];
  *(undefined4 *)(pFVar2 + lVar17 * 0x30 + 4) = (undefined4)local_74;
  *(undefined4 *)(pFVar2 + lVar17 * 0x30 + 8) = local_74._4_4_;
  *(double *)(pFVar2 + lVar17 * 0x30 + 0x10) = local_68;
  *(undefined8 *)(pFVar2 + lVar17 * 0x30 + 0x18) = local_60;
  *(FRequest **)(pFVar2 + lVar17 * 0x30 + 0x20) = local_58;
  *(TReferenceControllerBase<1> **)(pFVar2 + lVar17 * 0x30 + 0x28) = local_50;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
LAB_143157826:
  (**(code **)(*(longlong *)param_1->Object->_padding_ + 0x118))();
  param_1->Object->RetryStatus = Cancelled;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->RequestListLock);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// CreateRequest @ 14315b550

TSharedRef<FHttpRetrySystem::FRequest,1> * __thiscall
FHttpRetrySystem::FManager::CreateRequest
          (FManager *this,TSharedRef<FHttpRetrySystem::FRequest,1> *__return_storage_ptr__,
          TOptional<unsigned_int> *param_1,TOptional<double> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_4,
          TSharedPtr<FHttpRetrySystem::FRetryDomains,1> *param_5,TOptional<unsigned_int> *param_6,
          FExponentialBackoffCurve *param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FRequest *pFVar4;
  FHttpModule *pFVar5;
  TSharedRef<IHttpRequest,1> *pTVar6;
  FManager *pFVar7;
  TSharedRef<FHttpRetrySystem::FRequest,1> *pTVar8;
  FManager *pFVar9;
  FManager *pFVar10;
  FManager *pFVar11;
  bool bVar12;
  TRawPtrProxy<FHttpRetrySystem::FRequest> local_res10;
  TSharedRef<FHttpRetrySystem::FManager,1> local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  pFVar11 = (FManager *)0x0;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  pFVar4 = ::operator_new(0x270);
  if (pFVar4 == (FRequest *)0x0) {
    pFVar4 = (FRequest *)0x0;
  }
  else {
    pFVar5 = FHttpModule::Get();
    pTVar6 = (TSharedRef<IHttpRequest,1> *)(**(code **)(pFVar5->_padding_ + 0x40))(pFVar5,local_38);
    pFVar7 = (FManager *)this->_padding_;
    pFVar9 = pFVar7;
    pFVar10 = pFVar11;
    if (pFVar7 != (FManager *)0x0) {
      iVar2 = (int)pFVar7->_padding_;
      do {
        pFVar9 = pFVar11;
        pFVar10 = (FManager *)0x0;
        if (iVar2 == 0) goto LAB_14315b5f1;
        LOCK();
        iVar3 = (int)pFVar7->_padding_;
        bVar12 = iVar2 == iVar3;
        if (bVar12) {
          *(int *)&pFVar7->_padding_ = iVar2 + 1;
          iVar3 = iVar2;
        }
        UNLOCK();
        iVar2 = iVar3;
      } while (!bVar12);
      pFVar9 = pFVar7;
      pFVar10 = (FManager *)this->_padding_;
    }
LAB_14315b5f1:
    pFVar7 = (FManager *)&pFVar10->_padding_;
    if (pFVar10 == (FManager *)0x0) {
      pFVar7 = pFVar11;
    }
    if ((pFVar7 != (FManager *)&this->_padding_) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar12)) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<FHttpRetrySystem::FRequest,1> *)(*pcVar1)();
      return pTVar8;
    }
    if ((pFVar10 == (FManager *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar12)) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<FHttpRetrySystem::FRequest,1> *)(*pcVar1)();
      return pTVar8;
    }
    local_48.Object = pFVar10;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
    if ((pFVar10 == (FManager *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar12)) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<FHttpRetrySystem::FRequest,1> *)(*pcVar1)();
      return pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar4 = FRequest::FRequest(pFVar4,&local_48,pTVar6,param_1,param_2,param_3,param_4,param_5,
                                param_6,param_7);
    pFVar11 = (FManager *)&DAT_00000001;
    if ((((pFVar4 != (FRequest *)0x0) && (pFVar4->_padding_ != 0)) && (pFVar4->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar4->_padding_ + 8) &&
        (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar12)))) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<FHttpRetrySystem::FRequest,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  local_res10.Object = pFVar4;
  TSharedRef<FHttpRetrySystem::FRequest,1>::
  TSharedRef<FHttpRetrySystem::FRequest,1><FHttpRetrySystem::FRequest>
            (__return_storage_ptr__,&local_res10);
  if (pFVar11 != (FManager *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  return __return_storage_ptr__;
}

// GetLockoutPeriodSeconds @ 143162dd0

float __thiscall
FHttpRetrySystem::FManager::GetLockoutPeriodSeconds(FManager *this,FHttpRetryRequestEntry *param_1)

{
  float fVar1;
  FRequest *pFVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  TSharedPtr<IHttpResponse,1> *pTVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  TOptional<double> local_68;
  undefined1 local_58 [80];
  
  pFVar2 = (param_1->Request).Object;
  pTVar6 = (TSharedPtr<IHttpResponse,1> *)(**(code **)(pFVar2->_padding_ + 0x120))(pFVar2,local_58);
  ReadThrottledTimeFromResponseInSeconds(&local_68,pTVar6);
  if ((local_68.bIsSet == false) ||
     (fVar9 = (float)local_68.TypedValue, (float)local_68.TypedValue <= 0.0)) {
    iVar4 = (**(code **)(((param_1->Request).Object)->_padding_ + 0x10))();
    if ((iVar4 == 2) &&
       ((cVar3 = (**(code **)(((param_1->Request).Object)->_padding_ + 0x18))(), cVar3 == '\x01' &&
        ((((param_1->Request).Object)->RetryDomains).Object != (FRetryDomains *)0x0)))) {
      return 0.0;
    }
    pFVar2 = (param_1->Request).Object;
    fVar9 = (pFVar2->RetryExponentialBackoffCurve).ExponentBias;
    fVar1 = (pFVar2->RetryExponentialBackoffCurve).Base;
    fVar7 = powf(fVar1,(float)(param_1->CurrentRetryCount + 1) + fVar9);
    fVar8 = __real_3f800000;
    if ((__real_3f800000 < fVar1) && (0.0 <= fVar9)) {
      fVar9 = (pFVar2->RetryExponentialBackoffCurve).MaxCoefficient;
      fVar1 = (pFVar2->RetryExponentialBackoffCurve).MinCoefficient;
      if ((fVar1 <= fVar9) && ((__real_3a83126f < fVar9 && (0.0 <= fVar1)))) {
        uVar5 = rand();
        fVar8 = (float)(uVar5 & 0x7fff) * (fVar9 - fVar1) * __real_38000100 + fVar1;
      }
    }
    fVar1 = (pFVar2->RetryExponentialBackoffCurve).MaxBackoffSeconds;
    fVar9 = fVar8 * fVar7;
    if (fVar1 <= fVar8 * fVar7) {
      fVar9 = fVar1;
    }
  }
  return fVar9;
}

// HasTimedOut @ 143168df0

bool __thiscall
FHttpRetrySystem::FManager::HasTimedOut
          (FManager *this,FHttpRetryRequestEntry *param_1,double param_2)

{
  FRequest *pFVar1;
  double dVar2;
  
  pFVar1 = (param_1->Request).Object;
  if ((pFVar1->RetryTimeoutRelativeSecondsOverride).bIsSet == false) {
    if ((this->RetryTimeoutRelativeSecondsDefault).bIsSet == false) {
      return false;
    }
    dVar2 = (this->RetryTimeoutRelativeSecondsDefault).TypedValue;
  }
  else {
    dVar2 = (pFVar1->RetryTimeoutRelativeSecondsOverride).TypedValue;
  }
  return param_1->RequestStartTimeAbsoluteSeconds + dVar2 <= param_2;
}

// HttpRequestTimeoutAfterDelay @ 143169ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay
          (FManager *this,FHttpRetryRequestEntry *param_1,bool param_2,float param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FRequest *pFVar4;
  FHttpManager *pFVar5;
  FHttpThreadBase *pFVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  FHttpModule *pFVar10;
  longlong *plVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar3 = (param_1->Request).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->Request).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_68._0_8_ = (code *)0x0;
  local_68._40_8_ = FMemory::Malloc(0x20,8);
  *(FRequest **)(local_68._40_8_ + 8) = pFVar4;
  *(TReferenceControllerBase<1> **)(local_68._40_8_ + 0x10) = pTVar3;
  *(undefined ***)local_68._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  *(bool *)(local_68._40_8_ + 0x18) = param_2;
  if ((undefined1 *)local_68._40_8_ != &DAT_fffffffffffffff8) {
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::__l2::<lambda_1>,void>
         ::Call;
  }
  cVar8 = (**(code **)(((param_1->Request).Object)->_padding_ + 0x140))();
  if (cVar8 == '\0') {
    pFVar10 = FHttpModule::Get();
    if (pFVar10->HttpManager == (FHttpManager *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FHttpManager::AddGameThreadTask
              (pFVar10->HttpManager,(TFunction<void___cdecl(void)> *)local_68,param_3);
  }
  else {
    pFVar10 = FHttpModule::Get();
    if (pFVar10->HttpManager == (FHttpManager *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar5 = pFVar10->HttpManager;
    if (pFVar5->Thread == (FHttpThreadBase *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                         ,0x15f,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = pFVar5->Thread;
    (**(code **)(pFVar6->_padding_ + 0x60))(pFVar6,local_78,local_68,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  if ((code *)local_68._0_8_ != (code *)0x0) {
    plVar11 = (longlong *)(local_68 + 0x10);
    if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_68._40_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

// ProcessRequest @ 143174850

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHttpRetrySystem::FManager::ProcessRequest
          (FManager *this,TSharedRef<FHttpRetrySystem::FRequest,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FRequest *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_protected:_bool___cdecl_FHttpRetrySystem::FManager::ProcessRequest(TSharedRef<FHttpRetrySystem::FRequest,1>_&)_::_2_::FStat_STAT_FHttpRetrySystem_FManager_ProcessRequest>
  FVar12;
  longlong lVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  double dVar17;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FStatMessage local_88;
  FScriptContainerElement local_78 [4];
  undefined8 local_74;
  double local_68;
  undefined8 local_60;
  FRequest *local_58;
  TReferenceControllerBase<1> *local_50;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FHttpRetrySystem_FManager_ProcessRequest ==
          (FThreadSafeStaticStat<_protected:_bool___cdecl_FHttpRetrySystem::FManager::ProcessRequest(TSharedRef<FHttpRetrySystem::FRequest,1>_&)_::_2_::FStat_STAT_FHttpRetrySystem_FManager_ProcessRequest>
           )0x0) {
        pFVar11 = ::FName::FName(&local_a8,"STAT_FHttpRetrySystem_FManager_ProcessRequest");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FHttpRetrySystem_FManager_ProcessRequest,*pFVar11,
                   L"STAT_FHttpRetrySystem_FManager_ProcessRequest","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar12 = StatPtr_STAT_FHttpRetrySystem_FManager_ProcessRequest;
  if (StatPtr_STAT_FHttpRetrySystem_FManager_ProcessRequest ==
      (FThreadSafeStaticStat<_protected:_bool___cdecl_FHttpRetrySystem::FManager::ProcessRequest(TSharedRef<FHttpRetrySystem::FRequest,1>_&)_::_2_::FStat_STAT_FHttpRetrySystem_FManager_ProcessRequest>
       )0x0) {
    pFVar11 = ::FName::FName(&local_a0,"STAT_FHttpRetrySystem_FManager_ProcessRequest");
    FVar12 = (FThreadSafeStaticStat<_protected:_bool___cdecl_FHttpRetrySystem::FManager::ProcessRequest(TSharedRef<FHttpRetrySystem::FRequest,1>_&)_::_2_::FStat_STAT_FHttpRetrySystem_FManager_ProcessRequest>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FHttpRetrySystem_FManager_ProcessRequest,*pFVar11,
                          L"STAT_FHttpRetrySystem_FManager_ProcessRequest","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar14 == 0)) {
LAB_1431749ae:
    bVar6 = false;
    FVar16 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                   ,0x26a);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1431749ae;
    local_res18.s.LowPart = FVar15.Value;
    local_res18.s.HighPart = uVar14;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
  }
  pFVar2 = param_1->Object;
  if ((pFVar2->RetryTimeoutRelativeSecondsOverride).bIsSet == false) {
    if ((this->RetryTimeoutRelativeSecondsDefault).bIsSet == false) goto LAB_1431749e2;
    dVar17 = (this->RetryTimeoutRelativeSecondsDefault).TypedValue;
  }
  else {
    dVar17 = (pFVar2->RetryTimeoutRelativeSecondsOverride).TypedValue;
  }
  (**(code **)(pFVar2->_padding_ + 0xc0))(pFVar2,(float)dVar17);
LAB_1431749e2:
  lpCriticalSection = &this->RequestListLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_78[0] = (FScriptContainerElement)0x0;
  local_74 = 0;
  QueryPerformanceCounter(&local_res18);
  local_58 = param_1->Object;
  local_50 = (param_1->SharedReferenceCount).ReferenceController;
  local_68 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
             FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = (this->RequestList).AllocatorInstance.Data;
  if ((pFVar3 <= local_78) && (local_78 < pFVar3 + (longlong)(this->RequestList).ArrayMax * 0x30)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  iVar10 = (this->RequestList).ArrayNum;
  piVar1 = &(this->RequestList).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&(this->RequestList).AllocatorInstance,piVar1);
  }
  lVar13 = (longlong)iVar10;
  (this->RequestList).ArrayNum = iVar10 + 1;
  pFVar3 = (this->RequestList).AllocatorInstance.Data;
  pFVar3[lVar13 * 0x30] = local_78[0];
  *(undefined4 *)(pFVar3 + lVar13 * 0x30 + 4) = (undefined4)local_74;
  *(undefined4 *)(pFVar3 + lVar13 * 0x30 + 8) = local_74._4_4_;
  *(double *)(pFVar3 + lVar13 * 0x30 + 0x10) = local_68;
  *(undefined8 *)(pFVar3 + lVar13 * 0x30 + 0x18) = local_60;
  *(FRequest **)(pFVar3 + lVar13 * 0x30 + 0x20) = local_58;
  *(TReferenceControllerBase<1> **)(pFVar3 + lVar13 * 0x30 + 0x28) = local_50;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  param_1->Object->RetryStatus = Processing;
  (**(code **)(*(longlong *)param_1->Object->_padding_ + 0xe8))();
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return true;
}

// RetryHttpRequest @ 143179b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRetrySystem::FManager::RetryHttpRequest(FManager *this,FHttpRetryRequestEntry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRequest *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FHttpLogVerbosityTracker *pFVar6;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (param_1->CurrentRetryCount == 0) {
    pFVar6 = FHttpLogVerbosityTracker::Get();
    lpCriticalSection = &pFVar6->NumRetriedRequestsLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6->NumRetriedRequests = pFVar6->NumRetriedRequests + 1;
    if (pFVar6->NumRetriedRequests == 1) {
      pFVar6->OriginalVerbosity = LogHttp._0_1_;
      if (pFVar6->TargetVerbosity != NoLogging) {
        if (2 < (byte)LogHttp._0_1_) {
          ::ToString(pFVar6->TargetVerbosity);
          ::ToString(pFVar6->OriginalVerbosity);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogHttp,pFVar6->TargetVerbosity);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar1 = (param_1->Request).Object;
  param_1->CurrentRetryCount = param_1->CurrentRetryCount + 1;
  cVar3 = (**(code **)(pFVar1->_padding_ + 0x18))();
  if (cVar3 == '\x01') {
    param_1->CurrentRetryCountForConnectionError = param_1->CurrentRetryCountForConnectionError + 1;
  }
  ((param_1->Request).Object)->RetryStatus = Processing;
  pFVar1 = (param_1->Request).Object;
  (**(code **)(pFVar1->_padding_ + 0x120))(pFVar1,&local_18);
  if (local_18 == (longlong *)0x0) {
    if (2 < (byte)LogHttp._0_1_) {
      (**(code **)((param_1->Request).Object)->_padding_)();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
  }
  else {
    if ((local_18 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (**(code **)(*local_18 + 0x58))();
    if (iVar5 < 400) {
      if (4 < (byte)LogHttp._0_1_) {
        (**(code **)((param_1->Request).Object)->_padding_)();
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
    }
    else if (2 < (byte)LogHttp._0_1_) {
      (**(code **)((param_1->Request).Object)->_padding_)();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
                    /* WARNING: Could not recover jumptable at 0x000143179d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)((param_1->Request).Object)->_padding_ + 0xe8))();
  return;
}

// RetryHttpRequestWithDelay @ 143179d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHttpRetrySystem::FManager::RetryHttpRequestWithDelay
          (FManager *this,FHttpRetryRequestEntry *param_1,float param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FRequest *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FHttpManager *pFVar5;
  FHttpThreadBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  float *pfVar9;
  FHttpModule *pFVar10;
  float *pfVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  code *local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar3 = (param_1->Request).Object;
  pfVar9 = (float *)(**(code **)(pFVar3->_padding_ + 0xe0))(pFVar3,local_90);
  pFVar10 = FHttpModule::Get();
  pfVar11 = &pFVar10->HttpTotalTimeout;
  if (*(char *)(pfVar9 + 1) != '\0') {
    pfVar11 = pfVar9;
  }
  fVar13 = *pfVar11;
  if (fVar13 != 0.0) {
    QueryPerformanceCounter(&local_98);
    fVar13 = fVar13 - (float)(((double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                              __real_4170000000000000) - param_1->RequestStartTimeAbsoluteSeconds);
    if (fVar13 < param_2) {
      HttpRequestTimeoutAfterDelay(this,param_1,param_3,fVar13);
      return;
    }
  }
  pTVar4 = (param_1->Request).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->Request).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = FHttpModule::Get();
  if ((pFVar10->HttpManager == (FHttpManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = pFVar10->HttpManager;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78[0] = (code *)0x0;
  local_50 = FMemory::Malloc(0x20,8);
  local_50[1] = (longlong)pFVar3;
  local_50[2] = (longlong)pTVar4;
  *local_50 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(bool *)(local_50 + 3) = param_3;
  if (local_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::__l2::<lambda_1>,void>
                  ::Call;
  }
  if ((pFVar5->Thread == (FHttpThreadBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                         ,0x15f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = pFVar5->Thread;
  (**(code **)(pFVar6->_padding_ + 0x60))(pFVar6,local_88,local_78,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  if (local_78[0] != (code *)0x0) {
    plVar12 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar12 = local_50;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// RetryLimitForConnectionErrorIsSet @ 143179f80

bool __thiscall
FHttpRetrySystem::FManager::RetryLimitForConnectionErrorIsSet
          (FManager *this,FHttpRetryRequestEntry *param_1)

{
  if (((((param_1->Request).Object)->RetryLimitCountForConnectionErrorOverride).bIsSet == false) &&
     ((this->RetryLimitCountForConnectionErrorDefault).bIsSet == false)) {
    return false;
  }
  return true;
}

// ShouldRetry @ 1431820d0

bool __thiscall
FHttpRetrySystem::FManager::ShouldRetry(FManager *this,FHttpRetryRequestEntry *param_1)

{
  int iVar1;
  FRequest *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ForElementType<FSetElementId> FVar11;
  wchar_t *pwVar12;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FName local_28;
  FName FStack_20;
  void *local_18 [2];
  
  pFVar2 = (param_1->Request).Object;
  (**(code **)(pFVar2->_padding_ + 0x120))(pFVar2,&local_38);
  pFVar2 = (param_1->Request).Object;
  if (local_38 == (longlong *)0x0) {
    iVar9 = (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2);
    if (iVar9 != 2) {
      bVar5 = false;
      goto LAB_143182351;
    }
    cVar7 = (**(code **)(((param_1->Request).Object)->_padding_ + 0x18))();
    if (cVar7 == '\x01') {
      bVar5 = true;
      goto LAB_143182351;
    }
    pFVar2 = (param_1->Request).Object;
    puVar10 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 0x58))(pFVar2,local_18);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)*puVar10;
    }
    ::FName::FName(&local_res10,pwVar12);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    pFVar2 = (param_1->Request).Object;
    if (*(int *)&(pFVar2->RetryVerbs).Elements.field_0x8 ==
        *(int *)&(pFVar2->RetryVerbs).Elements.field_0x34) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&local_28,L"GET");
        ::FName::FName(&FStack_20,L"HEAD");
        local_48.ArrayNum = 2;
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,2,0,&local_48.AllocatorInstance,2,&local_48.ArrayMax);
        *(FName *)local_48.AllocatorInstance.Data = local_28;
        *(FName *)(local_48.AllocatorInstance.Data + 8) = FStack_20;
        DefaultRetryVerbs.Elements._0_8_ = 0;
        DefaultRetryVerbs.Elements._8_8_ = 0;
        DefaultRetryVerbs.Elements._32_8_ = 0;
        DefaultRetryVerbs.Elements._40_4_ = 0;
        DefaultRetryVerbs.Elements._44_4_ = 0x80;
        DefaultRetryVerbs.Elements._48_4_ = 0xffffffff;
        DefaultRetryVerbs.Elements._52_4_ = 0;
        DefaultRetryVerbs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        DefaultRetryVerbs.HashSize = 0;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Append<TSizedDefaultAllocator<32>_>(&DefaultRetryVerbs,&local_48);
        if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        atexit(`FHttpRetrySystem::FManager::ShouldRetry'::__l2::
               _dynamic_atexit_destructor_for__DefaultRetryVerbs__);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
      iVar9 = -1;
      if (DefaultRetryVerbs.Elements._8_4_ != DefaultRetryVerbs.Elements._52_4_) {
        FVar11 = (ForElementType<FSetElementId>)0x155064ff8;
        if (DefaultRetryVerbs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar11 = DefaultRetryVerbs.Hash.SecondaryData;
        }
        iVar1 = *(int *)((longlong)FVar11 +
                        (ulonglong)(DefaultRetryVerbs.HashSize - 1U & local_res10.Number + uVar8) *
                        4);
        while ((iVar9 = -1, iVar1 != -1 &&
               (iVar9 = iVar1,
               *(FName *)(DefaultRetryVerbs.Elements._0_8_ + (longlong)iVar1 * 0x10) != local_res10)
               )) {
          iVar1 = *(int *)(DefaultRetryVerbs.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10);
        }
      }
    }
    else {
      uVar8 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
      if (*(int *)&(pFVar2->RetryVerbs).Elements.field_0x8 !=
          *(int *)&(pFVar2->RetryVerbs).Elements.field_0x34) {
        FVar11 = (pFVar2->RetryVerbs).Hash.SecondaryData;
        if (FVar11 == (ForElementType<FSetElementId>)0x0) {
          FVar11 = (ForElementType<FSetElementId>)&(pFVar2->RetryVerbs).Hash;
        }
        iVar9 = *(int *)((longlong)FVar11 +
                        (ulonglong)((pFVar2->RetryVerbs).HashSize - 1U & local_res10.Number + uVar8)
                        * 4);
        if (iVar9 != -1) {
          lVar3 = *(longlong *)&(pFVar2->RetryVerbs).Elements;
          do {
            if (*(FName *)(lVar3 + (longlong)iVar9 * 0x10) == local_res10) goto LAB_14318234b;
            iVar9 = *(int *)(lVar3 + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      iVar9 = -1;
    }
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar8 = (**(code **)(*local_38 + 0x58))();
    if (*(int *)&(pFVar2->RetryResponseCodes).Elements.field_0x8 !=
        *(int *)&(pFVar2->RetryResponseCodes).Elements.field_0x34) {
      FVar11 = (pFVar2->RetryResponseCodes).Hash.SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&(pFVar2->RetryResponseCodes).Hash;
      }
      iVar9 = *(int *)((longlong)FVar11 +
                      (ulonglong)((pFVar2->RetryResponseCodes).HashSize - 1U & uVar8) * 4);
      if (iVar9 != -1) {
        lVar3 = *(longlong *)&(pFVar2->RetryResponseCodes).Elements;
        do {
          if (*(uint *)(lVar3 + (longlong)iVar9 * 0xc) == uVar8) goto LAB_14318234b;
          iVar9 = *(int *)(lVar3 + 4 + (longlong)iVar9 * 0xc);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
  }
LAB_14318234b:
  bVar5 = iVar9 != -1;
LAB_143182351:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return bVar5;
}

