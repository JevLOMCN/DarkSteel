// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// BindSP<FLiveLinkDebugUIEntry> @ 14cffaa20

void __thiscall
TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<FLiveLinkDebugUIEntry>
          (TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
          FLiveLinkDebugUIEntry *param_1,pmf_2a13e278 param_2)

{
  int *piVar1;
  FLiveLinkDebugUIEntry *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FLiveLinkDebugUIEntry *pFVar8;
  FLiveLinkDebugUIEntry *pFVar9;
  bool bVar10;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pFVar9 = (FLiveLinkDebugUIEntry *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  local_30 = &this->field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar6 == (undefined8 *)0x0) {
    pFVar8 = (FLiveLinkDebugUIEntry *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pFVar2 = (FLiveLinkDebugUIEntry *)param_1->_padding_;
    pFVar8 = pFVar2;
    if (pFVar2 != (FLiveLinkDebugUIEntry *)0x0) {
      iVar4 = (int)pFVar2->_padding_;
      do {
        pFVar8 = pFVar9;
        if (iVar4 == 0) goto LAB_14cffaac6;
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
      pFVar9 = (FLiveLinkDebugUIEntry *)param_1->_padding_;
      pFVar8 = pFVar2;
    }
LAB_14cffaac6:
    if ((pFVar9 != param_1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x69a,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pFVar9 == (FLiveLinkDebugUIEntry *)0x0) {
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
    if (pFVar8 != (FLiveLinkDebugUIEntry *)0x0) {
      LOCK();
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBUFLiveLinkDebugUIEntry___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = pFVar9;
    puVar6[4] = pFVar8;
    if (pFVar8 != (FLiveLinkDebugUIEntry *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pFVar8->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(pmf_2a13e278 *)(puVar6 + 5) = param_2;
    pFVar9 = (FLiveLinkDebugUIEntry *)&DAT_00000007;
  }
  if (((ulonglong)pFVar9 & 4) != 0) {
    pFVar9 = (FLiveLinkDebugUIEntry *)(ulonglong)((uint)pFVar9 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  if (((ulonglong)pFVar9 & 2) != 0) {
    pFVar9 = (FLiveLinkDebugUIEntry *)(ulonglong)((uint)pFVar9 & 0xfffffffd);
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

