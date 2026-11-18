// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 10

// ~TCommands<FGenericCommands> @ 1426a9c40

void __thiscall
TCommands<FGenericCommands>::~TCommands<FGenericCommands>(TCommands<FGenericCommands> *this)

{
  *(undefined ***)this = &___7__TCommands_VFGenericCommands____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->field_0x8);
  return;
}

// ~TCommands<FTabCommands> @ 1426a9c60

void __thiscall TCommands<FTabCommands>::~TCommands<FTabCommands>(TCommands<FTabCommands> *this)

{
  *(undefined ***)this = &___7__TCommands_VFTabCommands____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->field_0x8);
  return;
}

// GetInstance @ 1426bd2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TWeakPtr<FTabCommands,1> * __cdecl TCommands<FTabCommands>::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _Inst = 0;
      DAT_1550569d8 = 0;
      atexit(`TCommands<FTabCommands>::GetInstance'::__l2::_dynamic_atexit_destructor_for__Inst__);
      _Init_thread_footer(&`protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TWeakPtr<FTabCommands,1> *)
             &`protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
              ::__l2::Inst;
    }
  }
  return (TWeakPtr<FTabCommands,1> *)
         &`protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
          ::__l2::Inst;
}

// Register @ 1426d5ba0

/* WARNING: Removing unreachable block (ram,0x0001426d5db1) */

void __cdecl TCommands<FGenericCommands>::Register(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  TWeakPtr<FGenericCommands,1> *pTVar8;
  FGenericCommands *pFVar9;
  ISlateStyle *pIVar10;
  FName *pFVar11;
  FText *pFVar12;
  FInputBindingManager *this;
  TRawPtrProxy<FGenericCommands> local_res10;
  FName local_res18;
  FName local_res20;
  TSharedPtr<FBindingContext,1> local_68;
  TSharedRef<FGenericCommands,1> local_58;
  FText local_48;
  
  pTVar8 = GetInstance();
  if (((pTVar8->Object == (FGenericCommands *)0x0) ||
      (pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    pFVar9 = ::operator_new(0x120);
    if (pFVar9 == (FGenericCommands *)0x0) {
      pFVar9 = (FGenericCommands *)0x0;
    }
    else {
      pIVar10 = FAppStyle::Get();
      pFVar11 = (FName *)(**(code **)((longlong)*pIVar10 + 8))(pIVar10);
      FVar4 = *pFVar11;
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"GenericCommands",L"Generic Commands",L"Common Commands");
      pFVar11 = ::FName::FName(&local_res20,L"GenericCommands");
      FBindingContext::FBindingContext
                ((FBindingContext *)&pFVar9->_padding_,*pFVar11,pFVar12,(FName)0x0,FVar4);
      pFVar9->_padding_ = (longlong)&___7__TCommands_VFGenericCommands____6B_;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      pFVar9->_padding_ = (longlong)&___7FGenericCommands__6B_;
      (pFVar9->Cut).Object = (FUICommandInfo *)0x0;
      (pFVar9->Cut).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar9->Copy).Object = (FUICommandInfo *)0x0;
      (pFVar9->Copy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar9->Paste).Object = (FUICommandInfo *)0x0;
      (pFVar9->Paste).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar9->Duplicate).Object = (FUICommandInfo *)0x0;
      (pFVar9->Duplicate).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar9->Undo).Object = (FUICommandInfo *)0x0;
      (pFVar9->Undo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar9->Redo).Object = (FUICommandInfo *)0x0;
      (pFVar9->Redo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar9->Delete).Object = (FUICommandInfo *)0x0;
      (pFVar9->Delete).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      (pFVar9->Rename).Object = (FUICommandInfo *)0x0;
      (pFVar9->Rename).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      (pFVar9->SelectAll).Object = (FUICommandInfo *)0x0;
      (pFVar9->SelectAll).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (((pFVar9->_padding_ != 0) && (pFVar9->_padding_ != 0)) &&
         ((0 < *(int *)(pFVar9->_padding_ + 8) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar7)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_res10.Object = pFVar9;
    TSharedRef<FGenericCommands,1>::TSharedRef<FGenericCommands,1><FGenericCommands>
              (&local_58,&local_res10);
    this = FInputBindingManager::Get();
    local_res18 = (FName)(local_58.Object)->_padding_;
    FInputBindingManager::GetContextByName(this,&local_68,&local_res18);
    FVar6.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.Object == (FBindingContext *)0x0) {
      pTVar8->Object = local_58.Object;
      if (local_58.SharedReferenceCount.ReferenceController !=
          (pTVar8->WeakReferenceCount).ReferenceController) {
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController;
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
        (pTVar8->WeakReferenceCount).ReferenceController =
             local_58.SharedReferenceCount.ReferenceController;
      }
      (**(code **)((local_58.Object)->_padding_ + 8))(local_58.Object);
      TMulticastDelegate<void___cdecl(FBindingContext_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&FBindingContext::CommandsChanged,(FBindingContext *)&(local_58.Object)->_padding_);
    }
    else {
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar8->Object = (FGenericCommands *)&local_68.Object[-1].Bundles.field_0x48;
      if (local_68.SharedReferenceCount.ReferenceController !=
          (pTVar8->WeakReferenceCount).ReferenceController) {
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController;
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
        (pTVar8->WeakReferenceCount).ReferenceController = FVar6.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Register @ 1426d5e90

/* WARNING: Removing unreachable block (ram,0x0001426d604e) */

void __cdecl TCommands<FTabCommands>::Register(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  TWeakPtr<FTabCommands,1> *pTVar8;
  FTabCommands *pFVar9;
  ISlateStyle *pIVar10;
  FName *pFVar11;
  FText *pFVar12;
  FInputBindingManager *this;
  TRawPtrProxy<FTabCommands> local_res10;
  FName local_res18;
  FName local_res20;
  TSharedPtr<FBindingContext,1> local_68;
  TSharedRef<FTabCommands,1> local_58;
  FText local_48;
  
  pTVar8 = GetInstance();
  if (((pTVar8->Object == (FTabCommands *)0x0) ||
      (pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    pFVar9 = ::operator_new(0xc0);
    if (pFVar9 == (FTabCommands *)0x0) {
      pFVar9 = (FTabCommands *)0x0;
    }
    else {
      pIVar10 = FAppStyle::Get();
      pFVar11 = (FName *)(**(code **)((longlong)*pIVar10 + 8))(pIVar10);
      FVar4 = *pFVar11;
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"TabCommands",L"DockingTabCommands",L"Docking Tab Commands");
      pFVar11 = ::FName::FName(&local_res20,L"TabCommands");
      FBindingContext::FBindingContext
                ((FBindingContext *)&pFVar9->_padding_,*pFVar11,pFVar12,(FName)0x0,FVar4);
      pFVar9->_padding_ = (longlong)&___7__TCommands_VFTabCommands____6B_;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      pFVar9->_padding_ = (longlong)&___7FTabCommands__6B_;
      (pFVar9->CloseMajorTab).Object = (FUICommandInfo *)0x0;
      (pFVar9->CloseMajorTab).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar9->CloseMinorTab).Object = (FUICommandInfo *)0x0;
      (pFVar9->CloseMinorTab).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar9->CloseFocusedTab).Object = (FUICommandInfo *)0x0;
      (pFVar9->CloseFocusedTab).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (((pFVar9->_padding_ != 0) && (pFVar9->_padding_ != 0)) &&
         ((0 < *(int *)(pFVar9->_padding_ + 8) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar7)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_res10.Object = pFVar9;
    TSharedRef<FTabCommands,1>::TSharedRef<FTabCommands,1><FTabCommands>(&local_58,&local_res10);
    this = FInputBindingManager::Get();
    local_res18 = (FName)(local_58.Object)->_padding_;
    FInputBindingManager::GetContextByName(this,&local_68,&local_res18);
    FVar6.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.Object == (FBindingContext *)0x0) {
      pTVar8->Object = local_58.Object;
      if (local_58.SharedReferenceCount.ReferenceController !=
          (pTVar8->WeakReferenceCount).ReferenceController) {
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController;
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
        (pTVar8->WeakReferenceCount).ReferenceController =
             local_58.SharedReferenceCount.ReferenceController;
      }
      (**(code **)((local_58.Object)->_padding_ + 8))(local_58.Object);
      TMulticastDelegate<void___cdecl(FBindingContext_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&FBindingContext::CommandsChanged,(FBindingContext *)&(local_58.Object)->_padding_);
    }
    else {
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar8->Object = (FTabCommands *)&local_68.Object[-1].Bundles.field_0x48;
      if (local_68.SharedReferenceCount.ReferenceController !=
          (pTVar8->WeakReferenceCount).ReferenceController) {
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController;
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
        (pTVar8->WeakReferenceCount).ReferenceController = FVar6.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Unregister @ 1426e3b70

void __cdecl TCommands<FGenericCommands>::Unregister(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  atomic<int> aVar4;
  TWeakPtr<FGenericCommands,1> *pTVar5;
  FInputBindingManager *this;
  FGenericCommands *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FName local_res8;
  
  pTVar5 = GetInstance();
  if (pTVar5->Object == (FGenericCommands *)0x0) {
    return;
  }
  pTVar7 = (pTVar5->WeakReferenceCount).ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar7->SharedReferenceCount < 1) {
    return;
  }
  pTVar7 = (pTVar5->WeakReferenceCount).ReferenceController;
  pFVar6 = (FGenericCommands *)0x0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        this = FInputBindingManager::Get();
        goto LAB_1426e3bf3;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pFVar6 = pTVar5->Object;
  }
  this = FInputBindingManager::Get();
  if (pFVar6 == (FGenericCommands *)0x0) {
LAB_1426e3bf3:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8 = (FName)pFVar6->_padding_;
  FInputBindingManager::RemoveContextByName(this,&local_res8);
  TMulticastDelegate<void___cdecl(FBindingContext_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&FBindingContext::CommandsChanged,(FBindingContext *)&pFVar6->_padding_);
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) ||
     (pTVar7->SharedReferenceCount != (atomic<int>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstancePtr.IsUnique()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Commands\\Commands.h"
                       ,0x5e,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1426e3cb4;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->SharedReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)pTVar7->_padding_)();
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
  }
LAB_1426e3cb4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Unregister @ 1426e3ce0

void __cdecl TCommands<FTabCommands>::Unregister(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  atomic<int> aVar4;
  TWeakPtr<FTabCommands,1> *pTVar5;
  FInputBindingManager *this;
  FTabCommands *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FName local_res8;
  
  pTVar5 = GetInstance();
  if (pTVar5->Object == (FTabCommands *)0x0) {
    return;
  }
  pTVar7 = (pTVar5->WeakReferenceCount).ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar7->SharedReferenceCount < 1) {
    return;
  }
  pTVar7 = (pTVar5->WeakReferenceCount).ReferenceController;
  pFVar6 = (FTabCommands *)0x0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        this = FInputBindingManager::Get();
        goto LAB_1426e3d63;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pFVar6 = pTVar5->Object;
  }
  this = FInputBindingManager::Get();
  if (pFVar6 == (FTabCommands *)0x0) {
LAB_1426e3d63:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8 = (FName)pFVar6->_padding_;
  FInputBindingManager::RemoveContextByName(this,&local_res8);
  TMulticastDelegate<void___cdecl(FBindingContext_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&FBindingContext::CommandsChanged,(FBindingContext *)&pFVar6->_padding_);
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) ||
     (pTVar7->SharedReferenceCount != (atomic<int>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstancePtr.IsUnique()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Commands\\Commands.h"
                       ,0x5e,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1426e3e24;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->SharedReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)pTVar7->_padding_)();
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
  }
LAB_1426e3e24:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Get @ 1427391d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTabCommands * __cdecl TCommands<FTabCommands>::Get(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FTabCommands *pFVar4;
  FTabCommands *pFVar5;
  FTabCommands *pFVar6;
  bool bVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Inst = (FTabCommands *)0x0;
    DAT_1550569d8 = (FTabCommands *)0x0;
    atexit(`TCommands<FTabCommands>::GetInstance'::__l2::_dynamic_atexit_destructor_for__Inst__);
    _Init_thread_footer(&`protected:_static_class_TWeakPtr<FTabCommands,1>&___ptr64___cdecl_TCommands<FTabCommands>::GetInstance(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar4 = DAT_1550569d8;
  pFVar6 = (FTabCommands *)0x0;
  pFVar5 = pFVar4;
  if (DAT_1550569d8 != (FTabCommands *)0x0) {
    iVar2 = (int)DAT_1550569d8->_padding_;
    do {
      pFVar5 = pFVar6;
      if (iVar2 == 0) goto LAB_142739223;
      LOCK();
      iVar3 = (int)pFVar4->_padding_;
      bVar7 = iVar2 == iVar3;
      if (bVar7) {
        *(int *)&pFVar4->_padding_ = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar7);
    pFVar5 = pFVar4;
    pFVar6 = _Inst;
    if (_Inst != (FTabCommands *)0x0) goto LAB_142739249;
  }
LAB_142739223:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  pFVar4 = pFVar5;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTabCommands *)(*pcVar1)();
    return pFVar4;
  }
LAB_142739249:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return pFVar6;
}

// GetInstance @ 14273f1c0

TWeakPtr<FGenericCommands,1> * __cdecl TCommands<FGenericCommands>::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`TCommands<FGenericCommands>::GetInstance'::__l2::
             _dynamic_atexit_destructor_for__Inst__);
      _Init_thread_footer(&::_TSS0);
      return &Inst;
    }
  }
  return &Inst;
}

// Get @ 1429e8b90

FGenericCommands * __cdecl TCommands<FGenericCommands>::Get(void)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TWeakPtr<FGenericCommands,1> *pTVar4;
  FGenericCommands *pFVar5;
  FGenericCommands *pFVar6;
  FGenericCommands *pFVar7;
  bool bVar8;
  
  pTVar4 = GetInstance();
  pFVar7 = (FGenericCommands *)0x0;
  pFVar5 = (FGenericCommands *)(pTVar4->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar5;
  if (pFVar5 != (FGenericCommands *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar5->_padding_;
    do {
      pFVar6 = pFVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429e8bc5;
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
    if (pFVar7 != (FGenericCommands *)0x0) goto LAB_1429e8beb;
  }
LAB_1429e8bc5:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  pFVar5 = pFVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FGenericCommands *)(*pcVar1)();
    return pFVar5;
  }
LAB_1429e8beb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar7;
}

