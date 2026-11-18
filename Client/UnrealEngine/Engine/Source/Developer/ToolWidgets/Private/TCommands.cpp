// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 4

// ~TCommands<FDialogCommands> @ 142d64ca0

void __thiscall
TCommands<FDialogCommands>::~TCommands<FDialogCommands>(TCommands<FDialogCommands> *this)

{
  *(undefined ***)this = &___7__TCommands_VFDialogCommands____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->field_0x8);
  return;
}

// Get @ 142daa3a0

FDialogCommands * __cdecl TCommands<FDialogCommands>::Get(void)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TWeakPtr<FDialogCommands,1> *pTVar4;
  FDialogCommands *pFVar5;
  FDialogCommands *pFVar6;
  FDialogCommands *pFVar7;
  bool bVar8;
  
  pTVar4 = GetInstance();
  pFVar7 = (FDialogCommands *)0x0;
  pFVar5 = (FDialogCommands *)(pTVar4->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar5;
  if (pFVar5 != (FDialogCommands *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar5->_padding_;
    do {
      pFVar6 = pFVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142daa3d5;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar5->_padding_;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        *(atomic<int> *)&pFVar5->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pFVar7 = pTVar4->Object;
    pFVar6 = pFVar5;
    if (pFVar7 != (FDialogCommands *)0x0) goto LAB_142daa3fb;
  }
LAB_142daa3d5:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  pFVar5 = pFVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FDialogCommands *)(*pcVar1)();
    return pFVar5;
  }
LAB_142daa3fb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar7;
}

// GetInstance @ 142dacd50

TWeakPtr<FDialogCommands,1> * __cdecl TCommands<FDialogCommands>::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`TCommands<FDialogCommands>::GetInstance'::__l2::_dynamic_atexit_destructor_for__Inst__
            );
      _Init_thread_footer(&::_TSS0);
      return &Inst;
    }
  }
  return &Inst;
}

// Register @ 142dd1b90

/* WARNING: Removing unreachable block (ram,0x000142dd1db6) */

void __cdecl TCommands<FDialogCommands>::Register(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITextData *pIVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  TWeakPtr<FDialogCommands,1> *pTVar11;
  FDialogCommands *pFVar12;
  FName FVar13;
  FText *pFVar14;
  FName *pFVar15;
  FInputBindingManager *this;
  uint uVar16;
  FSharedReferencer<1> FVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  TRawPtrProxy<FDialogCommands> local_res18;
  FName local_res20;
  FName local_90;
  TSharedRef<FDialogCommands,1> local_88;
  TSharedPtr<FBindingContext,1> local_78;
  FText local_68;
  FDestructionSentinel local_58;
  
  pTVar11 = GetInstance();
  if (((pTVar11->Object == (FDialogCommands *)0x0) ||
      (pTVar3 = (pTVar11->WeakReferenceCount).ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    pFVar12 = ::operator_new(0xb0);
    if (pFVar12 == (FDialogCommands *)0x0) {
      pFVar12 = (FDialogCommands *)0x0;
    }
    else {
      FVar13 = FAppStyle::GetAppStyleSetName();
      local_res10 = 0;
      lVar18 = *(longlong *)FVar13;
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"Contexts",L"DialogCommands",L"Dialog Commands");
      pFVar15 = ::FName::FName(&local_90,L"Dialogs");
      FVar13 = *pFVar15;
      pFVar12->_padding_ = 0;
      pFVar12->_padding_ = 0;
      pFVar12->_padding_ = (longlong)FVar13;
      pFVar12->_padding_ = 0;
      pFVar12->_padding_ = 0;
      pIVar4 = (pFVar14->TextData).Reference;
      pFVar12->_padding_ = (longlong)pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
      }
      *(uint *)&pFVar12->_padding_ = pFVar14->Flags;
      pFVar12->_padding_ = lVar18;
      pFVar12->_padding_ = 0;
      pFVar12->_padding_ = 0;
      pFVar12->_padding_ = 0;
      *(undefined4 *)&pFVar12->_padding_ = 0;
      *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar12->_padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = 0;
      pFVar12->_padding_ = 0;
      *(undefined4 *)&pFVar12->_padding_ = 0;
      if ((lVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InStyleSetName.IsNone()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Commands\\UICommandInfo.h"
                             ,0x65,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12->_padding_ = (longlong)&___7__TCommands_VFDialogCommands____6B_;
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      pFVar12->_padding_ = (longlong)&___7FDialogCommands__6B_;
      (pFVar12->Cancel).Object = (FUICommandInfo *)0x0;
      (pFVar12->Cancel).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar12->Confirm).Object = (FUICommandInfo *)0x0;
      (pFVar12->Confirm).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (((pFVar12->_padding_ != 0) && (pFVar12->_padding_ != 0)) &&
         ((0 < *(int *)(pFVar12->_padding_ + 8) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar7)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_res18.Object = pFVar12;
    TSharedRef<FDialogCommands,1>::TSharedRef<FDialogCommands,1><FDialogCommands>
              (&local_88,&local_res18);
    this = FInputBindingManager::Get();
    local_res20 = (FName)(local_88.Object)->_padding_;
    FInputBindingManager::GetContextByName(this,&local_78,&local_res20);
    FVar6.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
    FVar17.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
    if (local_78.Object == (FBindingContext *)0x0) {
      pTVar11->Object = local_88.Object;
      if (local_88.SharedReferenceCount.ReferenceController !=
          (pTVar11->WeakReferenceCount).ReferenceController) {
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (pTVar11->WeakReferenceCount).ReferenceController;
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
        (pTVar11->WeakReferenceCount).ReferenceController = FVar17.ReferenceController;
      }
      (**(code **)((local_88.Object)->_padding_ + 8))(local_88.Object);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FBindingContext::CommandsChanged,(FWriteAccessScope *)&local_58);
      bVar7 = false;
      FBindingContext::CommandsChanged._28_4_ = FBindingContext::CommandsChanged._28_4_ + 1;
      uVar16 = FBindingContext::CommandsChanged._16_4_ - 1;
      if (-1 < (int)uVar16) {
        lVar18 = (longlong)(int)uVar16 << 4;
        bVar7 = false;
        do {
          uVar10 = 0;
          if ((int)uVar16 < (int)FBindingContext::CommandsChanged._16_4_) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((*(int *)(lVar18 + 8 + FBindingContext::CommandsChanged._8_8_) == 0) ||
              (*(longlong **)(lVar18 + FBindingContext::CommandsChanged._8_8_) == (longlong *)0x0))
             || (cVar9 = (**(code **)(**(longlong **)
                                        (lVar18 + FBindingContext::CommandsChanged._8_8_) + 0x68))()
                , cVar9 == '\0')) {
            bVar7 = true;
          }
          lVar18 = lVar18 + -0x10;
          uVar16 = uVar16 - 1;
          FVar17.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
        } while (-1 < (int)uVar16);
      }
      FBindingContext::CommandsChanged._28_4_ = FBindingContext::CommandsChanged._28_4_ + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FBindingContext::CommandsChanged,false);
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
    }
    else {
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar11->Object = (FDialogCommands *)&local_78.Object[-1].Bundles.field_0x48;
      if (local_78.SharedReferenceCount.ReferenceController !=
          (pTVar11->WeakReferenceCount).ReferenceController) {
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (pTVar11->WeakReferenceCount).ReferenceController;
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
        (pTVar11->WeakReferenceCount).ReferenceController = FVar6.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      FVar17.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar17.ReferenceController);
  }
  return;
}

