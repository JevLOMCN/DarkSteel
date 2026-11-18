// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FreeHandles @ 14879a2d0

void __thiscall FStreamable::FreeHandles(FStreamable *this)

{
  int *piVar1;
  int iVar2;
  FStreamableHandle *this_00;
  FStreamableHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FStreamableHandle *pFVar8;
  FStreamableHandle *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  FStreamableHandle *pFVar12;
  undefined1 local_res8 [8];
  TSharedPtr<FStreamableHandle,1> local_58;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  ulonglong local_38;
  FDestructionSentinel local_30;
  
  iVar2 = (this->LoadingHandles).ArrayNum;
  pFVar7 = (this->LoadingHandles).AllocatorInstance.Data;
  pFVar10 = pFVar7 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->LoadingHandles).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FStreamableHandle,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar10) break;
    *(int *)(*(longlong *)pFVar7 + 0xb4) = *(int *)(*(longlong *)pFVar7 + 0xb4) + -1;
    pFVar7 = pFVar7 + 0x10;
  }
  DestructItems<TSharedRef<FStreamableHandle,1>,int>
            ((TSharedRef<FStreamableHandle,1> *)(this->LoadingHandles).AllocatorInstance.Data,
             (this->LoadingHandles).ArrayNum);
  pFVar12 = (FStreamableHandle *)0x0;
  piVar1 = &(this->LoadingHandles).ArrayMax;
  (this->LoadingHandles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->LoadingHandles).AllocatorInstance,0,piVar1);
  }
  iVar2 = (this->ActiveHandles).ArrayNum;
  do {
    if (iVar2 < 1) {
      return;
    }
    if (((this->ActiveHandles).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->ActiveHandles).ArrayNum;
    this_00 = *(FStreamableHandle **)
               ((this->ActiveHandles).AllocatorInstance.Data + (longlong)iVar2 * 8 + -8);
    (this->ActiveHandles).ArrayNum = iVar2 + -1;
    if (this_00->bCanceled == false) {
      this_00->bCanceled = true;
      this_00->OwningManager = (FStreamableManager *)0x0;
      if (this_00->bReleased == false) {
        pFVar3 = (FStreamableHandle *)this_00->_padding_;
        pFVar8 = pFVar3;
        pFVar9 = pFVar12;
        if (pFVar3 != (FStreamableHandle *)0x0) {
          iVar2 = (int)pFVar3->_padding_;
          do {
            pFVar8 = pFVar12;
            if (iVar2 == 0) goto LAB_14879a425;
            LOCK();
            iVar6 = (int)pFVar3->_padding_;
            bVar5 = iVar2 == iVar6;
            if (bVar5) {
              *(int *)&pFVar3->_padding_ = iVar2 + 1;
              iVar6 = iVar2;
            }
            UNLOCK();
            iVar2 = iVar6;
          } while (!bVar5);
          pFVar8 = pFVar3;
          pFVar9 = (FStreamableHandle *)this_00->_padding_;
        }
LAB_14879a425:
        if ((pFVar9 != this_00) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SharedThis.Get() == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x67f,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pFVar9 == (FStreamableHandle *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pFVar8 == (FStreamableHandle *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &pFVar8->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar8);
        local_38 = 0;
        local_48 = (undefined1  [8])0x0;
        local_40.Data = (FScriptContainerElement *)0x0;
        if (pFVar8 != (FStreamableHandle *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_58.Object = pFVar9;
        local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        UE::StreamableManager::Private::
        ExecuteDelegateInternal<TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>_>
                  (&this_00->CancelDelegate,&local_58,
                   (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                    *)local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                   (FWriteAccessScope *)&local_30);
        if (((int)local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_40.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
          local_38 = local_38 & 0xffffffff00000000;
        }
        if (local_30.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
        }
        if (local_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_48);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->CancelDelegate);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->UpdateDelegate);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->CompleteDelegate);
        FStreamableHandle::NotifyParentsOfCancellation(this_00);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar8);
      }
      else {
        FStreamableHandle::NotifyParentsOfCancellation(this_00);
      }
    }
    iVar2 = (this->ActiveHandles).ArrayNum;
  } while( true );
}

