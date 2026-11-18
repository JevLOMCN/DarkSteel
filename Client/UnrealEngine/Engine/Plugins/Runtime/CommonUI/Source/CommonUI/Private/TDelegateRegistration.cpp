// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 3

// BindSP<FCarouselDisplayItem> @ 14a792dc0

void __thiscall
TDelegateRegistration<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
BindSP<FCarouselDisplayItem>
          (TDelegateRegistration<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,FCarouselDisplayItem *param_1,pmf_fa83f212 param_2)

{
  int *piVar1;
  FCarouselDisplayItem *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FCarouselDisplayItem *pFVar8;
  FCarouselDisplayItem *pFVar9;
  bool bVar10;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pFVar9 = (FCarouselDisplayItem *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  local_30 = &this->field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar6 == (undefined8 *)0x0) {
    pFVar8 = (FCarouselDisplayItem *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pFVar2 = (FCarouselDisplayItem *)param_1->_padding_;
    pFVar8 = pFVar2;
    if (pFVar2 != (FCarouselDisplayItem *)0x0) {
      iVar4 = (int)pFVar2->_padding_;
      do {
        pFVar8 = pFVar9;
        if (iVar4 == 0) goto LAB_14a792e66;
        LOCK();
        iVar5 = (int)pFVar2->_padding_;
        bVar10 = iVar4 == iVar5;
        if (bVar10) {
          *(int *)&pFVar2->_padding_ = iVar4 + 1;
          iVar5 = iVar4;
        }
        UNLOCK();
        iVar4 = iVar5;
      } while (!bVar10);
      pFVar9 = (FCarouselDisplayItem *)param_1->_padding_;
      pFVar8 = pFVar2;
    }
LAB_14a792e66:
    if ((pFVar9 != param_1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x69a,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pFVar9 == (FCarouselDisplayItem *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar8 != (FCarouselDisplayItem *)0x0) {
      LOCK();
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBUFCarouselDisplayItem___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = pFVar9;
    puVar6[4] = pFVar8;
    if (pFVar8 != (FCarouselDisplayItem *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pFVar8->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(pmf_fa83f212 *)(puVar6 + 5) = param_2;
    pFVar9 = (FCarouselDisplayItem *)&DAT_00000007;
  }
  if (((ulonglong)pFVar9 & 4) != 0) {
    pFVar9 = (FCarouselDisplayItem *)(ulonglong)((uint)pFVar9 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  if (((ulonglong)pFVar9 & 2) != 0) {
    pFVar9 = (FCarouselDisplayItem *)(ulonglong)((uint)pFVar9 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  if (((ulonglong)pFVar9 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// BindSP<SCommonButtonTableRow<UObject_*>_> @ 14a792fc0

void __thiscall
TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::BindSP<SCommonButtonTableRow<UObject_*>_>
          (TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this,SCommonButtonTableRow<UObject_*> *param_1,pmf_262bbc68 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->field_0x8,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindUObject<UCommonUIActionRouterBase> @ 14a7930e0

void __thiscall
TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
BindUObject<UCommonUIActionRouterBase>
          (TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          UCommonUIActionRouterBase *param_1,pmf_83b3fc76 param_2)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UCommonUIActionRouterBase *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UCommonUIActionRouterBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar1[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UCommonUIActionRouterBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    *(pmf_83b3fc76 *)(puVar1 + 4) = param_2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

