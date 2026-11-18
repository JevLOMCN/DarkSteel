// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// FCrashReporterScope @ 14d4b12f0

FCrashReporterScope * __thiscall
UE::StateTree::FCrashReporterScope::FCrashReporterScope
          (FCrashReporterScope *this,TNotNull<UObject_const_*> param_1,
          TNotNull<UStateTree_const_*> param_2,FName param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  FCrashReporterHandlerImpl *pFVar4;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  FCrashReporterScope *pFVar8;
  FContext *pFVar9;
  ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> FVar10;
  
  this->bWasEnabled = false;
  this->ID = 0;
  bVar5 = StateTree::Private::bCrashHandlerEnabled;
  this->bWasEnabled = StateTree::Private::bCrashHandlerEnabled;
  if (bVar5 != false) {
    if (StateTree::Private::Instance.Object == (FCrashReporterHandlerImpl *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private::Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\CrashReporter\\StateTreeCrashReporterHandler.cpp"
                         ,0x95,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FCrashReporterScope *)(*pcVar3)();
        return pFVar8;
      }
      if (StateTree::Private::Instance.Object == (FCrashReporterHandlerImpl *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FCrashReporterScope *)(*pcVar3)();
          return pFVar8;
        }
      }
    }
    pFVar4 = StateTree::Private::Instance.Object;
    lpCriticalSection = &(StateTree::Private::Instance.Object)->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FCrashReporterScope *)(*pcVar3)();
        return pFVar8;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DVar6 = GetCurrentThreadId();
    piVar1 = &(pFVar4->Contexts).ArrayMax;
    iVar7 = (pFVar4->Contexts).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>_>
                        (0x420,(ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>
                                *)pFVar4,piVar1);
    }
    (pFVar4->Contexts).ArrayNum = iVar7 + 1;
    FVar10 = (pFVar4->Contexts).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)0x0)
    {
      FVar10 = (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)pFVar4;
    }
    pFVar9 = StateTree::Private::FCrashReporterHandlerImpl::FContext::FContext
                       ((FContext *)((longlong)FVar10 + (longlong)iVar7 * 0x20),param_1,param_2,
                        param_3,DVar6);
    uVar2 = pFVar9->ID;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    this->ID = uVar2;
  }
  return this;
}

// ~FCrashReporterScope @ 14d4b3660

void __thiscall UE::StateTree::FCrashReporterScope::~FCrashReporterScope(FCrashReporterScope *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  FCrashReporterHandlerImpl *this_00;
  bool bVar3;
  uint uVar4;
  ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> FVar5;
  uint uVar6;
  ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> FVar7;
  
  if (this->bWasEnabled != false) {
    if ((StateTree::Private::Instance.Object == (FCrashReporterHandlerImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = StateTree::Private::Instance.Object;
    uVar6 = this->ID;
    lpCriticalSection = &(StateTree::Private::Instance.Object)->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar5 = (this_00->Contexts).AllocatorInstance.SecondaryData;
    iVar1 = (this_00->Contexts).ArrayNum;
    if (FVar5 == (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)0x0) {
      FVar5 = (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)this_00;
    }
    for (FVar7 = FVar5;
        FVar7 != (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)
                 ((longlong)iVar1 * 0x20 + (longlong)FVar5);
        FVar7 = (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)
                ((longlong)FVar7 + 0x20)) {
      if (*(uint *)((longlong)FVar7 + 0x1c) == uVar6) {
        uVar6 = (uint)((longlong)FVar7 - (longlong)FVar5 >> 5);
        if (uVar6 != 0xffffffff) {
          uVar4 = 0;
          if ((int)uVar6 < iVar1) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TArray<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          ::RemoveAtSwapImpl(&this_00->Contexts,uVar6);
          Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>_>
                    (0x20,4,(ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>
                             *)this_00,(this_00->Contexts).ArrayNum,&(this_00->Contexts).ArrayMax);
        }
        break;
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

