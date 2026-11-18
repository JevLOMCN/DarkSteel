// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WidgetCarousel
// Functions: 2

// BindSP<SCarouselNavigationBar> @ 14a77a970

void __thiscall
TDelegateRegistration<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
BindSP<SCarouselNavigationBar>
          (TDelegateRegistration<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,SCarouselNavigationBar *param_1,pmf_51f1a24a *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  ulong64 uVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  local_30 = &this->field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
  if (puVar6 == (undefined8 *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar7 = (TReferenceControllerBase<1> *)param_1->_padding_;
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar11 = pTVar10;
    pTVar9 = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar7->SharedReferenceCount;
      do {
        pTVar9 = pTVar10;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14a77aa16;
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar12 = aVar4 == aVar5;
        if (bVar12) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar12);
      pTVar11 = (TReferenceControllerBase<1> *)param_1->_padding_;
      pTVar9 = pTVar7;
    }
LAB_14a77aa16:
    pTVar7 = (TReferenceControllerBase<1> *)&pTVar11->SharedReferenceCount;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = pTVar10;
    }
    if ((pTVar7 != (TReferenceControllerBase<1> *)&param_1->_padding_) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x69a,L""), bVar12)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSCarouselNavigationBar___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = pTVar11;
    puVar6[4] = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000007;
    puVar6[5] = uVar2;
    puVar6[6] = uVar3;
  }
  if (((ulonglong)pTVar10 & 4) != 0) {
    pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar10 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar10 & 2) != 0) {
    pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar10 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar10 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// BindSP<SCarouselNavigationBar,int_&> @ 14a77ab80

void __thiscall
TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
BindSP<SCarouselNavigationBar,int_&>
          (TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,
          SCarouselNavigationBar *param_1,pmf_6cadb94a *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  ulong64 uVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  local_30 = &this->field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
  if (puVar6 == (undefined8 *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar7 = (TReferenceControllerBase<1> *)param_1->_padding_;
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar11 = pTVar10;
    pTVar9 = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar7->SharedReferenceCount;
      do {
        pTVar9 = pTVar10;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14a77ac35;
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar12 = aVar4 == aVar5;
        if (bVar12) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar12);
      pTVar11 = (TReferenceControllerBase<1> *)param_1->_padding_;
      pTVar9 = pTVar7;
    }
LAB_14a77ac35:
    pTVar7 = (TReferenceControllerBase<1> *)&pTVar11->SharedReferenceCount;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = pTVar10;
    }
    if ((pTVar7 != (TReferenceControllerBase<1> *)&param_1->_padding_) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar12)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar6 + 1) = *param_3;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSCarouselNavigationBar___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar6[3] = pTVar11;
    puVar6[4] = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000007;
    puVar6[5] = uVar2;
    puVar6[6] = uVar3;
  }
  if (((ulonglong)pTVar10 & 4) != 0) {
    pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar10 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar10 & 2) != 0) {
    pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar10 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar10 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

