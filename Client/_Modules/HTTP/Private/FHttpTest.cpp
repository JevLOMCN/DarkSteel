// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 3

// FHttpTest @ 14314d610

FHttpTest * __thiscall
FHttpTest::FHttpTest(FHttpTest *this,FString *param_1,FString *param_2,FString *param_3,int param_4)

{
  ::FString::FString(&this->Verb,param_1);
  ::FString::FString(&this->Payload,param_2);
  ::FString::FString(&this->Url,param_3);
  this->TestsToRun = param_4;
  return this;
}

// RequestComplete @ 1431788d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpTest::RequestComplete
          (FHttpTest *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
          bool param_3)

{
  IHttpResponse *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined7 in_register_00000089;
  void *local_38 [2];
  void *local_28 [2];
  
  pIVar1 = param_2->Object;
  if (pIVar1 == (IHttpResponse *)0x0) {
    if (4 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
  }
  else if (4 < (byte)LogHttp._0_1_) {
    (**(code **)((longlong)*pIVar1 + 0x60))
              (pIVar1,local_28,param_2,CONCAT71(in_register_00000089,param_3));
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*param_2->Object + 0x58))();
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)**(undefined8 **)param_1->Object)();
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)param_1->Object + 0x58))(param_1->Object,local_38);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  this->TestsToRun = this->TestsToRun + -1;
  if (this->TestsToRun < 1) {
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1->Object + 0xf0))();
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
    if ((lpCriticalSection[1].LockCount != 0) &&
       (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)lpCriticalSection[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(lpCriticalSection + 1),0,0,0x10);
      lpCriticalSection[1].LockCount = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    pFVar2 = (this->Url).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this->Payload).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this->Verb).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(this,0x38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Run @ 14317a9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpTest::Run(FHttpTest *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FHttpModule *pFVar5;
  longlong *plVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar7;
  ulong64 uVar8;
  int iVar9;
  int iVar10;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  if (4 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  iVar10 = 0;
  if (0 < this->TestsToRun) {
    do {
      pFVar5 = FHttpModule::Get();
      plVar6 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x40))(pFVar5,local_38);
      pTVar2 = (TReferenceControllerBase<1> *)plVar6[1];
      plVar6 = (longlong *)*plVar6;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*plVar6 + 0xf0))(plVar6);
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
      puVar7 = UE::Core::Private::DelegateAllocate
                         (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFHttpTest____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
        ;
        puVar7[4] = RequestComplete;
        puVar7[3] = this;
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*plVar6 + 0x68))(plVar6,&this->Url);
      iVar1 = (this->Payload).Data.ArrayNum;
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar9 = 0;
      }
      if (0 < iVar9) {
        if ((plVar6 == (longlong *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(*plVar6 + 0x90))(plVar6,&this->Payload);
      }
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*plVar6 + 0x60))(plVar6,this);
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*plVar6 + 0xe8))(plVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      iVar10 = iVar10 + 1;
    } while (iVar10 < this->TestsToRun);
  }
  return;
}

