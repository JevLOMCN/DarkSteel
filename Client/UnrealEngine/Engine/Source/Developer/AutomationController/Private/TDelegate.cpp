// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 1

// CreateSP<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_> @ 148c4f8e0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *param_1,pmf_0e4b5987 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  ulong64 uVar9;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar10;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar11;
  bool bVar12;
  uint uStackX_c;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  pTVar11 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_58);
  local_40 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)
              ((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar3 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)param_1->_padding_;
    pTVar10 = pTVar3;
    if (pTVar3 != (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
      iVar5 = (int)pTVar3->_padding_;
      do {
        pTVar10 = pTVar11;
        if (iVar5 == 0) goto LAB_148c4f987;
        LOCK();
        iVar6 = (int)pTVar3->_padding_;
        bVar12 = iVar5 == iVar6;
        if (bVar12) {
          *(int *)&pTVar3->_padding_ = iVar5 + 1;
          iVar6 = iVar5;
        }
        UNLOCK();
        iVar5 = iVar6;
      } while (!bVar12);
      pTVar11 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)param_1->_padding_;
      pTVar10 = pTVar3;
    }
LAB_148c4f987:
    if ((pTVar11 != param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar4)();
      return pTVar8;
    }
    if (pTVar11 == (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar12) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar4)();
        return pTVar8;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar12) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar4)();
        return pTVar8;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar10 != (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
      LOCK();
      *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
      UNLOCK();
    }
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__TFilterCollection_AEBV__TSharedPtr_VIAutomationReport___00_____00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pTVar11;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)&pTVar10->_padding_ + 4);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    pTVar11 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)&DAT_00000007;
    *(pmf_0e4b5987 *)(puVar7 + 5) = param_2;
  }
  if (((ulonglong)pTVar11 & 4) != 0) {
    pTVar11 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)
              (ulonglong)((uint)pTVar11 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar10);
  }
  if (((ulonglong)pTVar11 & 2) != 0) {
    pTVar11 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)
              (ulonglong)((uint)pTVar11 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar10);
  }
  if (((ulonglong)pTVar11 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar10);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return __return_storage_ptr__;
}

