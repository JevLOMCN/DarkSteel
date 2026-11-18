// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 1

// BindSP<FAnalyticsProviderET> @ 143190970

void __thiscall
TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::BindSP<FAnalyticsProviderET>
          (TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,FAnalyticsProviderET *param_1,pmf_65b880d0 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uStackX_c;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if ((this == (TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&this->field_0x28);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = *(TReferenceControllerBase<1> **)&param_1->field_0x38;
    pTVar10 = pTVar8;
    pTVar12 = pTVar11;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar8->SharedReferenceCount;
      do {
        pTVar10 = pTVar11;
        if (aVar4 == (atomic<int>)0x0) goto LAB_143190a45;
        LOCK();
        aVar6 = pTVar8->SharedReferenceCount;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      pTVar10 = pTVar8;
      pTVar12 = *(TReferenceControllerBase<1> **)&param_1->field_0x30;
    }
LAB_143190a45:
    pTVar8 = pTVar12 + 3;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = pTVar11;
    }
    if ((pTVar8 != (TReferenceControllerBase<1> *)&param_1->field_0x30) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedThis.Get() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x67f,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFAnalyticsProviderET___00__A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pTVar12;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000007;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (((ulonglong)pTVar11 & 4) != 0) {
    pTVar11 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar11 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (((ulonglong)pTVar11 & 2) != 0) {
    pTVar11 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar11 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (((ulonglong)pTVar11 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (this == (TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143190b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

