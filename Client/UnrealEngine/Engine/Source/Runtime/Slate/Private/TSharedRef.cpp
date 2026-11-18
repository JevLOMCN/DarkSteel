// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 109

// TSharedRef<FGenericWindowDefinition,1><FGenericWindowDefinition> @ 14269c090

TSharedRef<FGenericWindowDefinition,1> * __thiscall
TSharedRef<FGenericWindowDefinition,1>::
TSharedRef<FGenericWindowDefinition,1><FGenericWindowDefinition>
          (TSharedRef<FGenericWindowDefinition,1> *this,
          TRawPtrProxy<FGenericWindowDefinition> *param_1)

{
  FGenericWindowDefinition *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FGenericWindowDefinition,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFGenericWindowDefinition__U__DefaultDeleter_UFGenericWindowDefinition___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FGenericWindowDefinition *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FGenericWindowDefinition,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FGenericCommands,1><FGenericCommands> @ 14269c130

TSharedRef<FGenericCommands,1> * __thiscall
TSharedRef<FGenericCommands,1>::TSharedRef<FGenericCommands,1><FGenericCommands>
          (TSharedRef<FGenericCommands,1> *this,TRawPtrProxy<FGenericCommands> *param_1)

{
  int *piVar1;
  int iVar2;
  FGenericCommands *pFVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FGenericCommands,1> *pTVar7;
  longlong *plVar8;
  
  this->Object = param_1->Object;
  pFVar3 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGenericCommands__U__DefaultDeleter_VFGenericCommands___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar3;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1->Object == (FGenericCommands *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FGenericCommands,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = param_1->Object;
  if ((pFVar3 != (FGenericCommands *)0x0) &&
     (((plVar8 = &pFVar3->_padding_, *plVar8 == 0 || (pFVar3->_padding_ == 0)) ||
      (*(int *)(pFVar3->_padding_ + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar8 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<FGenericCommands,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    *plVar8 = (longlong)plVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar3->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar8 = (longlong *)pFVar3->_padding_;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      pFVar3->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<FMenuInHostWidget,1><FMenuInHostWidget> @ 14269c270

TSharedRef<FMenuInHostWidget,1> * __thiscall
TSharedRef<FMenuInHostWidget,1>::TSharedRef<FMenuInHostWidget,1><FMenuInHostWidget>
          (TSharedRef<FMenuInHostWidget,1> *this,TRawPtrProxy<FMenuInHostWidget> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FMenuInHostWidget *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FMenuInHostWidget,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuInHostWidget__U__DefaultDeleter_VFMenuInHostWidget___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FMenuInHostWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FMenuInHostWidget,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FMenuInHostWidget *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FMenuInPopup,1><FMenuInPopup> @ 14269c370

TSharedRef<FMenuInPopup,1> * __thiscall
TSharedRef<FMenuInPopup,1>::TSharedRef<FMenuInPopup,1><FMenuInPopup>
          (TSharedRef<FMenuInPopup,1> *this,TRawPtrProxy<FMenuInPopup> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FMenuInPopup *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FMenuInPopup,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuInPopup__U__DefaultDeleter_VFMenuInPopup___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FMenuInPopup *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FMenuInPopup,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FMenuInPopup *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMenuInPopup **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FMenuInWindow,1><FMenuInWindow> @ 14269c470

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FMenuInWindow,1> * __thiscall
TSharedRef<FMenuInWindow,1>::TSharedRef<FMenuInWindow,1><FMenuInWindow>
          (TSharedRef<FMenuInWindow,1> *this,TRawPtrProxy<FMenuInWindow> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FMenuInWindow *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FMenuInWindow,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuInWindow__U__DefaultDeleter_VFMenuInWindow___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FMenuInWindow *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FMenuInWindow,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FMenuInWindow *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FTabCommands,1><FTabCommands> @ 14269c5e0

TSharedRef<FTabCommands,1> * __thiscall
TSharedRef<FTabCommands,1>::TSharedRef<FTabCommands,1><FTabCommands>
          (TSharedRef<FTabCommands,1> *this,TRawPtrProxy<FTabCommands> *param_1)

{
  int *piVar1;
  int iVar2;
  FTabCommands *pFVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FTabCommands,1> *pTVar7;
  longlong *plVar8;
  
  this->Object = param_1->Object;
  pFVar3 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTabCommands__U__DefaultDeleter_VFTabCommands___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar3;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1->Object == (FTabCommands *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FTabCommands,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = param_1->Object;
  if ((pFVar3 != (FTabCommands *)0x0) &&
     (((plVar8 = &pFVar3->_padding_, *plVar8 == 0 || (pFVar3->_padding_ == 0)) ||
      (*(int *)(pFVar3->_padding_ + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar8 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<FTabCommands,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    *plVar8 = (longlong)plVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar3->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar8 = (longlong *)pFVar3->_padding_;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      pFVar3->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<FNavigationConfig,1> @ 1426a5cd0

TSharedRef<FNavigationConfig,1> * __thiscall
TSharedRef<FNavigationConfig,1>::TSharedRef<FNavigationConfig,1>
          (TSharedRef<FNavigationConfig,1> *this,FNavigationConfig *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FNavigationConfig,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FNavigationConfig *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<FNavigationConfig,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<FInputChord,1><FInputChord> @ 1426e6670

TSharedRef<FInputChord,1> * __thiscall
TSharedRef<FInputChord,1>::TSharedRef<FInputChord,1><FInputChord>
          (TSharedRef<FInputChord,1> *this,TRawPtrProxy<FInputChord> *param_1)

{
  FInputChord *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FInputChord,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFInputChord__U__DefaultDeleter_UFInputChord___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FInputChord *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FInputChord,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FTabSpawnerEntry,1><FTabSpawnerEntry> @ 1426e6790

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabSpawnerEntry,1> * __thiscall
TSharedRef<FTabSpawnerEntry,1>::TSharedRef<FTabSpawnerEntry,1><FTabSpawnerEntry>
          (TSharedRef<FTabSpawnerEntry,1> *this,TRawPtrProxy<FTabSpawnerEntry> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FTabSpawnerEntry *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FTabSpawnerEntry,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFTabSpawnerEntry__U__DefaultDeleter_UFTabSpawnerEntry___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FTabSpawnerEntry *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FTabSpawnerEntry,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FTabSpawnerEntry *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<TJsonReader<char>,1><TJsonReader<char>_> @ 1426e6930

TSharedRef<TJsonReader<char>,1> * __thiscall
TSharedRef<TJsonReader<char>,1>::TSharedRef<TJsonReader<char>,1><TJsonReader<char>_>
          (TSharedRef<TJsonReader<char>,1> *this,TRawPtrProxy<TJsonReader<char>_> *param_1)

{
  TJsonReader<char> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonReader<char>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonReader_D__U__DefaultDeleter_V__TJsonReader_D___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonReader<char> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonReader<char>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1><TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>_> @ 1426e69d0

TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1>
* __thiscall
TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1>
::
TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1><TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>_>
          (TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1>
           *this,TRawPtrProxy<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>_>
                 *param_1)

{
  TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1>
  *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TMap_VFName__V__TSharedRef_UFTabSpawnerEntry___00__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__V__TSharedRef_UFTabSpawnerEntry___00___0A_____U__DefaultDeleter_V__TMap_VFName__V__TSharedRef_UFTabSpawnerEntry___00__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__V__TSharedRef_UFTabSpawnerEntry___00___0A______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object ==
      (TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FTabManager::FArea,1><FTabManager::FArea> @ 1426e6a70

TSharedRef<FTabManager::FArea,1> * __thiscall
TSharedRef<FTabManager::FArea,1>::TSharedRef<FTabManager::FArea,1><FTabManager::FArea>
          (TSharedRef<FTabManager::FArea,1> *this,TRawPtrProxy<FTabManager::FArea> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FArea *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FTabManager::FArea,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFArea_FTabManager__U__DefaultDeleter_VFArea_FTabManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FArea *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FTabManager::FArea,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FArea *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FDockingDragOperation,1><FDockingDragOperation> @ 1426e6b70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FDockingDragOperation,1> * __thiscall
TSharedRef<FDockingDragOperation,1>::TSharedRef<FDockingDragOperation,1><FDockingDragOperation>
          (TSharedRef<FDockingDragOperation,1> *this,TRawPtrProxy<FDockingDragOperation> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FDockingDragOperation *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FDockingDragOperation,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDockingDragOperation__U__DefaultDeleter_VFDockingDragOperation___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FDockingDragOperation *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FDockingDragOperation,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FDockingDragOperation *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FGlobalTabmanager,1><FGlobalTabmanager> @ 1426e6c70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FGlobalTabmanager,1> * __thiscall
TSharedRef<FGlobalTabmanager,1>::TSharedRef<FGlobalTabmanager,1><FGlobalTabmanager>
          (TSharedRef<FGlobalTabmanager,1> *this,TRawPtrProxy<FGlobalTabmanager> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FGlobalTabmanager *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FGlobalTabmanager,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGlobalTabmanager__U__DefaultDeleter_VFGlobalTabmanager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FGlobalTabmanager *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FGlobalTabmanager,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FGlobalTabmanager *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FJsonObject,1><FJsonObject> @ 1426e6d70

TSharedRef<FJsonObject,1> * __thiscall
TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
          (TSharedRef<FJsonObject,1> *this,TRawPtrProxy<FJsonObject> *param_1)

{
  FJsonObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonObject__U__DefaultDeleter_VFJsonObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FJsonObject,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout> @ 1426e6f60

TSharedRef<FTabManager::FLayout,1> * __thiscall
TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
          (TSharedRef<FTabManager::FLayout,1> *this,TRawPtrProxy<FTabManager::FLayout> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FLayout *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FTabManager::FLayout,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLayout_FTabManager__U__DefaultDeleter_VFLayout_FTabManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FLayout *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FNamePermissionList,1><FNamePermissionList> @ 1426e7060

TSharedRef<FNamePermissionList,1> * __thiscall
TSharedRef<FNamePermissionList,1>::TSharedRef<FNamePermissionList,1><FNamePermissionList>
          (TSharedRef<FNamePermissionList,1> *this,TRawPtrProxy<FNamePermissionList> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FNamePermissionList *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FNamePermissionList,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFNamePermissionList__U__DefaultDeleter_VFNamePermissionList___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FNamePermissionList *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FNamePermissionList,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FNamePermissionList *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FTabManager::FPrivateApi,1><FTabManager::FPrivateApi> @ 1426e7160

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager::FPrivateApi,1> * __thiscall
TSharedRef<FTabManager::FPrivateApi,1>::
TSharedRef<FTabManager::FPrivateApi,1><FTabManager::FPrivateApi>
          (TSharedRef<FTabManager::FPrivateApi,1> *this,
          TRawPtrProxy<FTabManager::FPrivateApi> *param_1)

{
  FPrivateApi *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FTabManager::FPrivateApi,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFPrivateApi_FTabManager__U__DefaultDeleter_VFPrivateApi_FTabManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FPrivateApi *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FTabManager::FPrivateApi,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateUser,1><FSlateUser> @ 1426e7200

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateUser,1> * __thiscall
TSharedRef<FSlateUser,1>::TSharedRef<FSlateUser,1><FSlateUser>
          (TSharedRef<FSlateUser,1> *this,TRawPtrProxy<FSlateUser> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FSlateUser *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FSlateUser,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateUser__U__DefaultDeleter_VFSlateUser___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FSlateUser *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FSlateUser,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FSlateUser *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FTabManager::FSplitter,1><FTabManager::FSplitter> @ 1426e7300

TSharedRef<FTabManager::FSplitter,1> * __thiscall
TSharedRef<FTabManager::FSplitter,1>::TSharedRef<FTabManager::FSplitter,1><FTabManager::FSplitter>
          (TSharedRef<FTabManager::FSplitter,1> *this,TRawPtrProxy<FTabManager::FSplitter> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FSplitter *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FTabManager::FSplitter,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSplitter_FTabManager__U__DefaultDeleter_VFSplitter_FTabManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FSplitter *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FTabManager::FSplitter,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FSplitter *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FTabManager::FStack,1><FTabManager::FStack> @ 1426e7400

TSharedRef<FTabManager::FStack,1> * __thiscall
TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
          (TSharedRef<FTabManager::FStack,1> *this,TRawPtrProxy<FTabManager::FStack> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FStack *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FTabManager::FStack,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFStack_FTabManager__U__DefaultDeleter_VFStack_FTabManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FStack *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FTabManager::FStack,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FStack *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FTabManager,1><FTabManager> @ 1426e7500

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager,1> * __thiscall
TSharedRef<FTabManager,1>::TSharedRef<FTabManager,1><FTabManager>
          (TSharedRef<FTabManager,1> *this,TRawPtrProxy<FTabManager> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FTabManager *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FTabManager,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTabManager__U__DefaultDeleter_VFTabManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FTabManager *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FTabManager,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FTabManager *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FUICommandDragDropOp,1><FUICommandDragDropOp> @ 1426e7660

TSharedRef<FUICommandDragDropOp,1> * __thiscall
TSharedRef<FUICommandDragDropOp,1>::TSharedRef<FUICommandDragDropOp,1><FUICommandDragDropOp>
          (TSharedRef<FUICommandDragDropOp,1> *this,TRawPtrProxy<FUICommandDragDropOp> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FUICommandDragDropOp *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FUICommandDragDropOp,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFUICommandDragDropOp__U__DefaultDeleter_VFUICommandDragDropOp___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FUICommandDragDropOp *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FUICommandDragDropOp,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FUICommandDragDropOp *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<SWidget,1><SBorder> @ 1426e7760

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>
          (TSharedRef<SWidget,1> *this,TSharedRef<SBorder,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SBox> @ 1426e7790

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<SBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SButton> @ 1426e78f0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>
          (TSharedRef<SWidget,1> *this,TSharedRef<SButton,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SComplexGradient> @ 1426e7920

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComplexGradient>
          (TSharedRef<SWidget,1> *this,TSharedRef<SComplexGradient,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SOverlay> @ 1426e7c80

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>
          (TSharedRef<SWidget,1> *this,TSharedRef<SOverlay,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SSpacer> @ 1426e7cb0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpacer>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSpacer,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SVerticalBox> @ 1426e7ce0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<SVerticalBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SDockingArea,1><SWidget> @ 1426e7d10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockingArea,1> * __thiscall
TSharedRef<SDockingArea,1>::TSharedRef<SDockingArea,1><SWidget>
          (TSharedRef<SDockingArea,1> *this,TSharedRef<SWidget,1> *param_1,FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SDockingArea *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator=<FInputChord> @ 1426e7d40

TSharedRef<FInputChord,1> * __thiscall
TSharedRef<FInputChord,1>::operator=<FInputChord>
          (TSharedRef<FInputChord,1> *this,TRawPtrProxy<FInputChord> *param_1)

{
  FInputChord *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedRef<FInputChord,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  if (param_1->Object == (FInputChord *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x18d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FInputChord,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFInputChord__U__DefaultDeleter_UFInputChord___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)pFVar1;
  }
  if (param_1->Object == (FInputChord *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FInputChord,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar1;
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// TSharedRef<FWorkspaceItem,1> @ 1426f6570

TSharedRef<FWorkspaceItem,1> * __thiscall
TSharedRef<FWorkspaceItem,1>::TSharedRef<FWorkspaceItem,1>
          (TSharedRef<FWorkspaceItem,1> *this,FWorkspaceItem *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FWorkspaceItem,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FWorkspaceItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<FWorkspaceItem,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<FButtonRowBlock,1><FButtonRowBlock> @ 142795860

TSharedRef<FButtonRowBlock,1> * __thiscall
TSharedRef<FButtonRowBlock,1>::TSharedRef<FButtonRowBlock,1><FButtonRowBlock>
          (TSharedRef<FButtonRowBlock,1> *this,FButtonRowBlock *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FButtonRowBlock,1> *pTVar7;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFButtonRowBlock__U__DefaultDeleter_VFButtonRowBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FButtonRowBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FButtonRowBlock,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar6 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<ISlateMetaData,1><FDriverIdMetaData> @ 142795970

TSharedRef<ISlateMetaData,1> * __thiscall
TSharedRef<ISlateMetaData,1>::TSharedRef<ISlateMetaData,1><FDriverIdMetaData>
          (TSharedRef<ISlateMetaData,1> *this,TRawPtrProxy<FDriverIdMetaData> *param_1)

{
  FDriverIdMetaData *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<ISlateMetaData,1> *pTVar5;
  
  this->Object = (ISlateMetaData *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDriverIdMetaData__U__DefaultDeleter_VFDriverIdMetaData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FDriverIdMetaData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<ISlateMetaData,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FMultiBlock_const_,1><FEditableTextBlock> @ 142795a10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<FMultiBlock_const_,1> * __thiscall
TSharedRef<FMultiBlock_const_,1>::TSharedRef<FMultiBlock_const_,1><FEditableTextBlock>
          (TSharedRef<FMultiBlock_const_,1> *this,TRawPtrProxy<FEditableTextBlock> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FEditableTextBlock *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FMultiBlock_const_,1> *pTVar9;
  
  this->Object = (FMultiBlock *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFEditableTextBlock__U__DefaultDeleter_VFEditableTextBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FEditableTextBlock *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FMultiBlock_const_,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FEditableTextBlock *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FGroupEndBlock,1><FGroupEndBlock> @ 142795b10

TSharedRef<FGroupEndBlock,1> * __thiscall
TSharedRef<FGroupEndBlock,1>::TSharedRef<FGroupEndBlock,1><FGroupEndBlock>
          (TSharedRef<FGroupEndBlock,1> *this,FGroupEndBlock *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FGroupEndBlock,1> *pTVar7;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGroupEndBlock__U__DefaultDeleter_VFGroupEndBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FGroupEndBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FGroupEndBlock,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x8 == 0) || (*(longlong *)&param_1->field_0x10 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x10 + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FGroupEndBlock **)&param_1->field_0x8 = param_1;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&param_1->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&param_1->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<FGroupStartBlock,1><FGroupStartBlock> @ 142795c20

TSharedRef<FGroupStartBlock,1> * __thiscall
TSharedRef<FGroupStartBlock,1>::TSharedRef<FGroupStartBlock,1><FGroupStartBlock>
          (TSharedRef<FGroupStartBlock,1> *this,FGroupStartBlock *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FGroupStartBlock,1> *pTVar7;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGroupStartBlock__U__DefaultDeleter_VFGroupStartBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FGroupStartBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FGroupStartBlock,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x8 == 0) || (*(longlong *)&param_1->field_0x10 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x10 + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FGroupStartBlock **)&param_1->field_0x8 = param_1;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&param_1->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&param_1->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<FMultiBlock_const_,1><FMenuSeparatorBlock> @ 142795d30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<FMultiBlock_const_,1> * __thiscall
TSharedRef<FMultiBlock_const_,1>::TSharedRef<FMultiBlock_const_,1><FMenuSeparatorBlock>
          (TSharedRef<FMultiBlock_const_,1> *this,TRawPtrProxy<FMenuSeparatorBlock> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FMenuSeparatorBlock *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FMultiBlock_const_,1> *pTVar9;
  
  this->Object = (FMultiBlock *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuSeparatorBlock__U__DefaultDeleter_VFMenuSeparatorBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FMenuSeparatorBlock *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FMultiBlock_const_,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FMenuSeparatorBlock *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMenuSeparatorBlock **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FMenuSeparatorBlock,1><FMenuSeparatorBlock> @ 142795e30

TSharedRef<FMenuSeparatorBlock,1> * __thiscall
TSharedRef<FMenuSeparatorBlock,1>::TSharedRef<FMenuSeparatorBlock,1><FMenuSeparatorBlock>
          (TSharedRef<FMenuSeparatorBlock,1> *this,FMenuSeparatorBlock *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FMenuSeparatorBlock,1> *pTVar7;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuSeparatorBlock__U__DefaultDeleter_VFMenuSeparatorBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FMenuSeparatorBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FMenuSeparatorBlock,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x8 == 0) || (*(longlong *)&param_1->field_0x10 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x10 + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMenuSeparatorBlock **)&param_1->field_0x8 = param_1;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&param_1->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&param_1->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<FMultiBox,1><FMultiBox> @ 142795f40

TSharedRef<FMultiBox,1> * __thiscall
TSharedRef<FMultiBox,1>::TSharedRef<FMultiBox,1><FMultiBox>
          (TSharedRef<FMultiBox,1> *this,TRawPtrProxy<FMultiBox> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FMultiBox *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FMultiBox,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMultiBox__U__DefaultDeleter_VFMultiBox___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FMultiBox *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FMultiBox,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FMultiBox *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FToolBarButtonBlock,1><FToolBarButtonBlock> @ 1427962f0

TSharedRef<FToolBarButtonBlock,1> * __thiscall
TSharedRef<FToolBarButtonBlock,1>::TSharedRef<FToolBarButtonBlock,1><FToolBarButtonBlock>
          (TSharedRef<FToolBarButtonBlock,1> *this,FToolBarButtonBlock *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FToolBarButtonBlock,1> *pTVar7;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFToolBarButtonBlock__U__DefaultDeleter_VFToolBarButtonBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FToolBarButtonBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FToolBarButtonBlock,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar6 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<FToolBarComboButtonBlock,1><FToolBarComboButtonBlock> @ 142796400

TSharedRef<FToolBarComboButtonBlock,1> * __thiscall
TSharedRef<FToolBarComboButtonBlock,1>::
TSharedRef<FToolBarComboButtonBlock,1><FToolBarComboButtonBlock>
          (TSharedRef<FToolBarComboButtonBlock,1> *this,FToolBarComboButtonBlock *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FToolBarComboButtonBlock,1> *pTVar7;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFToolBarComboButtonBlock__U__DefaultDeleter_VFToolBarComboButtonBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FToolBarComboButtonBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FToolBarComboButtonBlock,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar6 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<FToolBarStackButtonBlock,1><FToolBarStackButtonBlock> @ 142796510

TSharedRef<FToolBarStackButtonBlock,1> * __thiscall
TSharedRef<FToolBarStackButtonBlock,1>::
TSharedRef<FToolBarStackButtonBlock,1><FToolBarStackButtonBlock>
          (TSharedRef<FToolBarStackButtonBlock,1> *this,FToolBarStackButtonBlock *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FToolBarStackButtonBlock,1> *pTVar7;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFToolBarStackButtonBlock__U__DefaultDeleter_VFToolBarStackButtonBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FToolBarStackButtonBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FToolBarStackButtonBlock,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar6 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<SWidget,1><SHorizontalBox> @ 1427966e0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<SHorizontalBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SImage> @ 142796710

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>
          (TSharedRef<SWidget,1> *this,TSharedRef<SImage,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SImage> @ 142796740

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>
          (TSharedRef<SWidget,1> *this,TSharedRef<SImage,1> *param_1,FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SLayeredImage> @ 142796770

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SLayeredImage>
          (TSharedRef<SWidget,1> *this,TSharedRef<SLayeredImage,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SScrollBox> @ 142796a20

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<SScrollBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><STextBlock> @ 142796a50

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>
          (TSharedRef<SWidget,1> *this,TSharedRef<STextBlock,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SUniformWrapPanel> @ 142796bf0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformWrapPanel>
          (TSharedRef<SWidget,1> *this,TSharedRef<SUniformWrapPanel,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SToolBarButtonBlock,1><SWidget> @ 142796ce0

TSharedRef<SToolBarButtonBlock,1> * __thiscall
TSharedRef<SToolBarButtonBlock,1>::TSharedRef<SToolBarButtonBlock,1><SWidget>
          (TSharedRef<SToolBarButtonBlock,1> *this,TSharedRef<SWidget,1> *param_1,
          FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SToolBarButtonBlock *pSVar2;
  
  pSVar2 = (SToolBarButtonBlock *)&param_1->Object[-1].StatID;
  if (param_1->Object == (SWidget *)0x0) {
    pSVar2 = (SToolBarButtonBlock *)0x0;
  }
  this->Object = pSVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SToolBarComboButtonBlock,1><SWidget> @ 142796d10

TSharedRef<SToolBarComboButtonBlock,1> * __thiscall
TSharedRef<SToolBarComboButtonBlock,1>::TSharedRef<SToolBarComboButtonBlock,1><SWidget>
          (TSharedRef<SToolBarComboButtonBlock,1> *this,TSharedRef<SWidget,1> *param_1,
          FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SToolBarComboButtonBlock *pSVar2;
  
  pSVar2 = (SToolBarComboButtonBlock *)&param_1->Object[-1].StatID;
  if (param_1->Object == (SWidget *)0x0) {
    pSVar2 = (SToolBarComboButtonBlock *)0x0;
  }
  this->Object = pSVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SToolBarStackButtonBlock,1><SWidget> @ 142796d40

TSharedRef<SToolBarStackButtonBlock,1> * __thiscall
TSharedRef<SToolBarStackButtonBlock,1>::TSharedRef<SToolBarStackButtonBlock,1><SWidget>
          (TSharedRef<SToolBarStackButtonBlock,1> *this,TSharedRef<SWidget,1> *param_1,
          FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SToolBarStackButtonBlock *pSVar2;
  
  pSVar2 = (SToolBarStackButtonBlock *)&param_1->Object[-1].StatID;
  if (param_1->Object == (SWidget *)0x0) {
    pSVar2 = (SToolBarStackButtonBlock *)0x0;
  }
  this->Object = pSVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> @ 1427aa8e0

TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>::TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *this,
          STableRow<TSharedPtr<SWidget,1>_> *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedPtr<SWidget,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<FMenuSpacerBlock,1> @ 1427aaa00

TSharedRef<FMenuSpacerBlock,1> * __thiscall
TSharedRef<FMenuSpacerBlock,1>::TSharedRef<FMenuSpacerBlock,1>
          (TSharedRef<FMenuSpacerBlock,1> *this,FMenuSpacerBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FMenuSpacerBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FMenuSpacerBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<FMenuSpacerBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x8 == 0) || (*(longlong *)&param_1->field_0x10 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x10 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMenuSpacerBlock **)&param_1->field_0x8 = param_1;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x10) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x10;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x10 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<FToolBarSeparatorBlock,1> @ 1427aaae0

TSharedRef<FToolBarSeparatorBlock,1> * __thiscall
TSharedRef<FToolBarSeparatorBlock,1>::TSharedRef<FToolBarSeparatorBlock,1>
          (TSharedRef<FToolBarSeparatorBlock,1> *this,FToolBarSeparatorBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FToolBarSeparatorBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FToolBarSeparatorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<FToolBarSeparatorBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x8 == 0) || (*(longlong *)&param_1->field_0x10 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x10 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FToolBarSeparatorBlock **)&param_1->field_0x8 = param_1;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x10) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x10;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x10 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<FWidgetBlock,1> @ 1427aabc0

TSharedRef<FWidgetBlock,1> * __thiscall
TSharedRef<FWidgetBlock,1>::TSharedRef<FWidgetBlock,1>
          (TSharedRef<FWidgetBlock,1> *this,FWidgetBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FWidgetBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FWidgetBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<FWidgetBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SButtonRowBlock,1> @ 1427aaca0

TSharedRef<SButtonRowBlock,1> * __thiscall
TSharedRef<SButtonRowBlock,1>::TSharedRef<SButtonRowBlock,1>
          (TSharedRef<SButtonRowBlock,1> *this,SButtonRowBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SButtonRowBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SButtonRowBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SButtonRowBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SButtonRowBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SCustomToolbarPreviewWidget,1> @ 1427aadc0

TSharedRef<SCustomToolbarPreviewWidget,1> * __thiscall
TSharedRef<SCustomToolbarPreviewWidget,1>::TSharedRef<SCustomToolbarPreviewWidget,1>
          (TSharedRef<SCustomToolbarPreviewWidget,1> *this,SCustomToolbarPreviewWidget *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SCustomToolbarPreviewWidget,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SCustomToolbarPreviewWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCustomToolbarPreviewWidget,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SCustomToolbarPreviewWidget,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SEditableTextBlock,1> @ 1427aaee0

TSharedRef<SEditableTextBlock,1> * __thiscall
TSharedRef<SEditableTextBlock,1>::TSharedRef<SEditableTextBlock,1>
          (TSharedRef<SEditableTextBlock,1> *this,SEditableTextBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SEditableTextBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SEditableTextBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SEditableTextBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SEditableTextBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SGroupMarkerBlock,1> @ 1427ab000

TSharedRef<SGroupMarkerBlock,1> * __thiscall
TSharedRef<SGroupMarkerBlock,1>::TSharedRef<SGroupMarkerBlock,1>
          (TSharedRef<SGroupMarkerBlock,1> *this,SGroupMarkerBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SGroupMarkerBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SGroupMarkerBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGroupMarkerBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SGroupMarkerBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SHeadingBlock,1> @ 1427ab120

TSharedRef<SHeadingBlock,1> * __thiscall
TSharedRef<SHeadingBlock,1>::TSharedRef<SHeadingBlock,1>
          (TSharedRef<SHeadingBlock,1> *this,SHeadingBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SHeadingBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SHeadingBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SHeadingBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SHeadingBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SMenuEntryBlock,1> @ 1427ab240

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SMenuEntryBlock,1> * __thiscall
TSharedRef<SMenuEntryBlock,1>::TSharedRef<SMenuEntryBlock,1>
          (TSharedRef<SMenuEntryBlock,1> *this,SMenuEntryBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SMenuEntryBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SMenuEntryBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMenuEntryBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SMenuEntryBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SMenuSeparatorBlock,1> @ 1427ab360

TSharedRef<SMenuSeparatorBlock,1> * __thiscall
TSharedRef<SMenuSeparatorBlock,1>::TSharedRef<SMenuSeparatorBlock,1>
          (TSharedRef<SMenuSeparatorBlock,1> *this,SMenuSeparatorBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SMenuSeparatorBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SMenuSeparatorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMenuSeparatorBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SMenuSeparatorBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SMenuSpacerBlock,1> @ 1427ab480

TSharedRef<SMenuSpacerBlock,1> * __thiscall
TSharedRef<SMenuSpacerBlock,1>::TSharedRef<SMenuSpacerBlock,1>
          (TSharedRef<SMenuSpacerBlock,1> *this,SMenuSpacerBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SMenuSpacerBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SMenuSpacerBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMenuSpacerBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SMenuSpacerBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SToolBarButtonBlock,1> @ 1427ab5a0

TSharedRef<SToolBarButtonBlock,1> * __thiscall
TSharedRef<SToolBarButtonBlock,1>::TSharedRef<SToolBarButtonBlock,1>
          (TSharedRef<SToolBarButtonBlock,1> *this,SToolBarButtonBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SToolBarButtonBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SToolBarButtonBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SToolBarButtonBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SToolBarButtonBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SToolBarComboButtonBlock,1> @ 1427ab6c0

TSharedRef<SToolBarComboButtonBlock,1> * __thiscall
TSharedRef<SToolBarComboButtonBlock,1>::TSharedRef<SToolBarComboButtonBlock,1>
          (TSharedRef<SToolBarComboButtonBlock,1> *this,SToolBarComboButtonBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SToolBarComboButtonBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SToolBarComboButtonBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SToolBarComboButtonBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SToolBarComboButtonBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SToolBarSeparatorBlock,1> @ 1427ab7e0

TSharedRef<SToolBarSeparatorBlock,1> * __thiscall
TSharedRef<SToolBarSeparatorBlock,1>::TSharedRef<SToolBarSeparatorBlock,1>
          (TSharedRef<SToolBarSeparatorBlock,1> *this,SToolBarSeparatorBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SToolBarSeparatorBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SToolBarSeparatorBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SToolBarSeparatorBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SToolBarSeparatorBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SToolBarStackButtonBlock,1> @ 1427ab900

TSharedRef<SToolBarStackButtonBlock,1> * __thiscall
TSharedRef<SToolBarStackButtonBlock,1>::TSharedRef<SToolBarStackButtonBlock,1>
          (TSharedRef<SToolBarStackButtonBlock,1> *this,SToolBarStackButtonBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SToolBarStackButtonBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SToolBarStackButtonBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SToolBarStackButtonBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SToolBarStackButtonBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SUniformToolbarButtonBlock,1> @ 1427aba20

TSharedRef<SUniformToolbarButtonBlock,1> * __thiscall
TSharedRef<SUniformToolbarButtonBlock,1>::TSharedRef<SUniformToolbarButtonBlock,1>
          (TSharedRef<SUniformToolbarButtonBlock,1> *this,SUniformToolbarButtonBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SUniformToolbarButtonBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SUniformToolbarButtonBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUniformToolbarButtonBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SUniformToolbarButtonBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SWidget,1> @ 1427abb40

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1>
          (TSharedRef<SWidget,1> *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidgetBlock,1> @ 1427abb70

TSharedRef<SWidgetBlock,1> * __thiscall
TSharedRef<SWidgetBlock,1>::TSharedRef<SWidgetBlock,1>
          (TSharedRef<SWidgetBlock,1> *this,SWidgetBlock *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SWidgetBlock,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SWidgetBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetBlock,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidgetBlock,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// operator= @ 1427bb7d0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::operator=(TSharedRef<SWidget,1> *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pSVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// TSharedRef<FDefaultLayoutBlock,1><FDefaultLayoutBlock> @ 14283cad0

TSharedRef<FDefaultLayoutBlock,1> * __thiscall
TSharedRef<FDefaultLayoutBlock,1>::TSharedRef<FDefaultLayoutBlock,1><FDefaultLayoutBlock>
          (TSharedRef<FDefaultLayoutBlock,1> *this,TRawPtrProxy<FDefaultLayoutBlock> *param_1)

{
  FDefaultLayoutBlock *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FDefaultLayoutBlock,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDefaultLayoutBlock__U__DefaultDeleter_VFDefaultLayoutBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FDefaultLayoutBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FDefaultLayoutBlock,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FDefaultRichTextMarkupParser,1><FDefaultRichTextMarkupParser> @ 14283cb70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FDefaultRichTextMarkupParser,1> * __thiscall
TSharedRef<FDefaultRichTextMarkupParser,1>::
TSharedRef<FDefaultRichTextMarkupParser,1><FDefaultRichTextMarkupParser>
          (TSharedRef<FDefaultRichTextMarkupParser,1> *this,
          TRawPtrProxy<FDefaultRichTextMarkupParser> *param_1)

{
  FDefaultRichTextMarkupParser *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FDefaultRichTextMarkupParser,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDefaultRichTextMarkupParser__U__DefaultDeleter_VFDefaultRichTextMarkupParser___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FDefaultRichTextMarkupParser *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FDefaultRichTextMarkupParser,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FDefaultRichTextMarkupWriter,1><FDefaultRichTextMarkupWriter> @ 14283cc10

TSharedRef<FDefaultRichTextMarkupWriter,1> * __thiscall
TSharedRef<FDefaultRichTextMarkupWriter,1>::
TSharedRef<FDefaultRichTextMarkupWriter,1><FDefaultRichTextMarkupWriter>
          (TSharedRef<FDefaultRichTextMarkupWriter,1> *this,
          TRawPtrProxy<FDefaultRichTextMarkupWriter> *param_1)

{
  FDefaultRichTextMarkupWriter *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FDefaultRichTextMarkupWriter,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDefaultRichTextMarkupWriter__U__DefaultDeleter_VFDefaultRichTextMarkupWriter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FDefaultRichTextMarkupWriter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FDefaultRichTextMarkupWriter,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FHyperlinkDecorator,1><FHyperlinkDecorator> @ 14283ccb0

TSharedRef<FHyperlinkDecorator,1> * __thiscall
TSharedRef<FHyperlinkDecorator,1>::TSharedRef<FHyperlinkDecorator,1><FHyperlinkDecorator>
          (TSharedRef<FHyperlinkDecorator,1> *this,TRawPtrProxy<FHyperlinkDecorator> *param_1)

{
  FHyperlinkDecorator *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FHyperlinkDecorator,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFHyperlinkDecorator__U__DefaultDeleter_VFHyperlinkDecorator___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FHyperlinkDecorator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FHyperlinkDecorator,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FImageDecorator,1><FImageDecorator> @ 14283cd50

TSharedRef<FImageDecorator,1> * __thiscall
TSharedRef<FImageDecorator,1>::TSharedRef<FImageDecorator,1><FImageDecorator>
          (TSharedRef<FImageDecorator,1> *this,TRawPtrProxy<FImageDecorator> *param_1)

{
  FImageDecorator *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FImageDecorator,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFImageDecorator__U__DefaultDeleter_VFImageDecorator___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FImageDecorator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FImageDecorator,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FPlainTextLayoutMarshaller,1><FPlainTextLayoutMarshaller> @ 14283cdf0

TSharedRef<FPlainTextLayoutMarshaller,1> * __thiscall
TSharedRef<FPlainTextLayoutMarshaller,1>::
TSharedRef<FPlainTextLayoutMarshaller,1><FPlainTextLayoutMarshaller>
          (TSharedRef<FPlainTextLayoutMarshaller,1> *this,
          TRawPtrProxy<FPlainTextLayoutMarshaller> *param_1)

{
  FPlainTextLayoutMarshaller *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FPlainTextLayoutMarshaller,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFPlainTextLayoutMarshaller__U__DefaultDeleter_VFPlainTextLayoutMarshaller___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FPlainTextLayoutMarshaller *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FPlainTextLayoutMarshaller,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FRichTextLayoutMarshaller,1><FRichTextLayoutMarshaller> @ 14283ce90

TSharedRef<FRichTextLayoutMarshaller,1> * __thiscall
TSharedRef<FRichTextLayoutMarshaller,1>::
TSharedRef<FRichTextLayoutMarshaller,1><FRichTextLayoutMarshaller>
          (TSharedRef<FRichTextLayoutMarshaller,1> *this,
          TRawPtrProxy<FRichTextLayoutMarshaller> *param_1)

{
  FRichTextLayoutMarshaller *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FRichTextLayoutMarshaller,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFRichTextLayoutMarshaller__U__DefaultDeleter_VFRichTextLayoutMarshaller___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FRichTextLayoutMarshaller *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FRichTextLayoutMarshaller,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1><FRichTextSyntaxHighlighterTextLayoutMarshaller> @ 14283cf30

TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1> * __thiscall
TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1>::
TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1><FRichTextSyntaxHighlighterTextLayoutMarshaller>
          (TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1> *this,
          TRawPtrProxy<FRichTextSyntaxHighlighterTextLayoutMarshaller> *param_1)

{
  FRichTextSyntaxHighlighterTextLayoutMarshaller *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFRichTextSyntaxHighlighterTextLayoutMarshaller__U__DefaultDeleter_VFRichTextSyntaxHighlighterTextLayoutMarshaller___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FRichTextSyntaxHighlighterTextLayoutMarshaller *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FShapedGlyphSequence_const_,1><FShapedGlyphSequence> @ 14283cfd0

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
TSharedRef<FShapedGlyphSequence_const_,1>::
TSharedRef<FShapedGlyphSequence_const_,1><FShapedGlyphSequence>
          (TSharedRef<FShapedGlyphSequence_const_,1> *this,
          TRawPtrProxy<FShapedGlyphSequence> *param_1)

{
  FShapedGlyphSequence *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFShapedGlyphSequence__U__DefaultDeleter_VFShapedGlyphSequence___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FShapedGlyphSequence *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateHyperlinkRun,1><FSlateHyperlinkRun> @ 14283d070

TSharedRef<FSlateHyperlinkRun,1> * __thiscall
TSharedRef<FSlateHyperlinkRun,1>::TSharedRef<FSlateHyperlinkRun,1><FSlateHyperlinkRun>
          (TSharedRef<FSlateHyperlinkRun,1> *this,TRawPtrProxy<FSlateHyperlinkRun> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FSlateHyperlinkRun *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FSlateHyperlinkRun,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateHyperlinkRun__U__DefaultDeleter_VFSlateHyperlinkRun___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FSlateHyperlinkRun *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FSlateHyperlinkRun,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FSlateHyperlinkRun *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FSlateHyperlinkRun **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FSlateImageRun,1><FSlateImageRun> @ 14283d170

TSharedRef<FSlateImageRun,1> * __thiscall
TSharedRef<FSlateImageRun,1>::TSharedRef<FSlateImageRun,1><FSlateImageRun>
          (TSharedRef<FSlateImageRun,1> *this,TRawPtrProxy<FSlateImageRun> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FSlateImageRun *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FSlateImageRun,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateImageRun__U__DefaultDeleter_VFSlateImageRun___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FSlateImageRun *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FSlateImageRun,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FSlateImageRun *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FSlatePasswordRun,1><FSlatePasswordRun> @ 14283d270

TSharedRef<FSlatePasswordRun,1> * __thiscall
TSharedRef<FSlatePasswordRun,1>::TSharedRef<FSlatePasswordRun,1><FSlatePasswordRun>
          (TSharedRef<FSlatePasswordRun,1> *this,TRawPtrProxy<FSlatePasswordRun> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FSlatePasswordRun *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FSlatePasswordRun,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlatePasswordRun__U__DefaultDeleter_VFSlatePasswordRun___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FSlatePasswordRun *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FSlatePasswordRun,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FSlatePasswordRun *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FSlatePasswordRun **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FSlateTextHighlightRunRenderer,1><FSlateTextHighlightRunRenderer> @ 14283d370

TSharedRef<FSlateTextHighlightRunRenderer,1> * __thiscall
TSharedRef<FSlateTextHighlightRunRenderer,1>::
TSharedRef<FSlateTextHighlightRunRenderer,1><FSlateTextHighlightRunRenderer>
          (TSharedRef<FSlateTextHighlightRunRenderer,1> *this,
          TRawPtrProxy<FSlateTextHighlightRunRenderer> *param_1)

{
  FSlateTextHighlightRunRenderer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateTextHighlightRunRenderer,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateTextHighlightRunRenderer__U__DefaultDeleter_VFSlateTextHighlightRunRenderer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateTextHighlightRunRenderer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateTextHighlightRunRenderer,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateTextLayout,1><FSlateTextLayout> @ 14283d410

TSharedRef<FSlateTextLayout,1> * __thiscall
TSharedRef<FSlateTextLayout,1>::TSharedRef<FSlateTextLayout,1><FSlateTextLayout>
          (TSharedRef<FSlateTextLayout,1> *this,TRawPtrProxy<FSlateTextLayout> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FSlateTextLayout *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FSlateTextLayout,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateTextLayout__U__DefaultDeleter_VFSlateTextLayout___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FSlateTextLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FSlateTextLayout,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FSlateTextLayout *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FSlateTextLayout **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FSlateTextRun,1><FSlateTextRun> @ 14283d510

TSharedRef<FSlateTextRun,1> * __thiscall
TSharedRef<FSlateTextRun,1>::TSharedRef<FSlateTextRun,1><FSlateTextRun>
          (TSharedRef<FSlateTextRun,1> *this,TRawPtrProxy<FSlateTextRun> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FSlateTextRun *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FSlateTextRun,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateTextRun__U__DefaultDeleter_VFSlateTextRun___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FSlateTextRun *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FSlateTextRun,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FSlateTextRun *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FSlateTextRun **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FSlateTextStrikeLineHighlighter,1><FSlateTextStrikeLineHighlighter> @ 14283d610

TSharedRef<FSlateTextStrikeLineHighlighter,1> * __thiscall
TSharedRef<FSlateTextStrikeLineHighlighter,1>::
TSharedRef<FSlateTextStrikeLineHighlighter,1><FSlateTextStrikeLineHighlighter>
          (TSharedRef<FSlateTextStrikeLineHighlighter,1> *this,
          TRawPtrProxy<FSlateTextStrikeLineHighlighter> *param_1)

{
  FSlateTextStrikeLineHighlighter *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateTextStrikeLineHighlighter,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateTextStrikeLineHighlighter__U__DefaultDeleter_VFSlateTextStrikeLineHighlighter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateTextStrikeLineHighlighter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateTextStrikeLineHighlighter,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateTextUnderlineLineHighlighter,1><FSlateTextUnderlineLineHighlighter> @ 14283d6b0

TSharedRef<FSlateTextUnderlineLineHighlighter,1> * __thiscall
TSharedRef<FSlateTextUnderlineLineHighlighter,1>::
TSharedRef<FSlateTextUnderlineLineHighlighter,1><FSlateTextUnderlineLineHighlighter>
          (TSharedRef<FSlateTextUnderlineLineHighlighter,1> *this,
          TRawPtrProxy<FSlateTextUnderlineLineHighlighter> *param_1)

{
  FSlateTextUnderlineLineHighlighter *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateTextUnderlineLineHighlighter,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateTextUnderlineLineHighlighter__U__DefaultDeleter_VFSlateTextUnderlineLineHighlighter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateTextUnderlineLineHighlighter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateTextUnderlineLineHighlighter,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateWidgetRun,1><FSlateWidgetRun> @ 14283d750

TSharedRef<FSlateWidgetRun,1> * __thiscall
TSharedRef<FSlateWidgetRun,1>::TSharedRef<FSlateWidgetRun,1><FSlateWidgetRun>
          (TSharedRef<FSlateWidgetRun,1> *this,TRawPtrProxy<FSlateWidgetRun> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FSlateWidgetRun *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FSlateWidgetRun,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateWidgetRun__U__DefaultDeleter_VFSlateWidgetRun___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FSlateWidgetRun *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FSlateWidgetRun,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FSlateWidgetRun *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FString,1><FString> @ 14283d850

TSharedRef<FString,1> * __thiscall
TSharedRef<FString,1>::TSharedRef<FString,1><FString>
          (TSharedRef<FString,1> *this,TRawPtrProxy<FString> *param_1)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FString,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFString__U__DefaultDeleter_VFString___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FString *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FString,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSyntaxTokenizer,1><FSyntaxTokenizer> @ 14283d8f0

TSharedRef<FSyntaxTokenizer,1> * __thiscall
TSharedRef<FSyntaxTokenizer,1>::TSharedRef<FSyntaxTokenizer,1><FSyntaxTokenizer>
          (TSharedRef<FSyntaxTokenizer,1> *this,TRawPtrProxy<FSyntaxTokenizer> *param_1)

{
  FSyntaxTokenizer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSyntaxTokenizer,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSyntaxTokenizer__U__DefaultDeleter_VFSyntaxTokenizer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSyntaxTokenizer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSyntaxTokenizer,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FWidgetDecorator,1><FWidgetDecorator> @ 14283d990

TSharedRef<FWidgetDecorator,1> * __thiscall
TSharedRef<FWidgetDecorator,1>::TSharedRef<FWidgetDecorator,1><FWidgetDecorator>
          (TSharedRef<FWidgetDecorator,1> *this,TRawPtrProxy<FWidgetDecorator> *param_1)

{
  FWidgetDecorator *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FWidgetDecorator,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWidgetDecorator__U__DefaultDeleter_VFWidgetDecorator___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FWidgetDecorator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FWidgetDecorator,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FWidgetLayoutBlock,1><FWidgetLayoutBlock> @ 14283da30

TSharedRef<FWidgetLayoutBlock,1> * __thiscall
TSharedRef<FWidgetLayoutBlock,1>::TSharedRef<FWidgetLayoutBlock,1><FWidgetLayoutBlock>
          (TSharedRef<FWidgetLayoutBlock,1> *this,TRawPtrProxy<FWidgetLayoutBlock> *param_1)

{
  FWidgetLayoutBlock *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FWidgetLayoutBlock,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWidgetLayoutBlock__U__DefaultDeleter_VFWidgetLayoutBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FWidgetLayoutBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FWidgetLayoutBlock,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1><FSlateHyperlinkRun::FWidgetViewModel> @ 14283dad0

TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1> * __thiscall
TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>::
TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1><FSlateHyperlinkRun::FWidgetViewModel>
          (TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1> *this,
          TRawPtrProxy<FSlateHyperlinkRun::FWidgetViewModel> *param_1)

{
  FWidgetViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWidgetViewModel_FSlateHyperlinkRun__U__DefaultDeleter_VFWidgetViewModel_FSlateHyperlinkRun___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FWidgetViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> @ 1428b1f30

TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> * __thiscall
TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1>::TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1>
          (TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> *this,
          SComboRow<TSharedPtr<FString,1>_> *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SComboRow<TSharedPtr<FString,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> @ 1428b2050

TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>::TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *this,
          STableRow<TSharedPtr<FString,1>_> *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedPtr<FString,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1><SlateEditableTextTypes::FCursorLineHighlighter> @ 1429b1530

TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1> * __thiscall
TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1>::
TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1><SlateEditableTextTypes::FCursorLineHighlighter>
          (TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1> *this,
          TRawPtrProxy<SlateEditableTextTypes::FCursorLineHighlighter> *param_1)

{
  FCursorLineHighlighter *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFCursorLineHighlighter_SlateEditableTextTypes__U__DefaultDeleter_VFCursorLineHighlighter_SlateEditableTextTypes___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FCursorLineHighlighter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1><SlateEditableTextTypes::FTextCompositionHighlighter> @ 1429b15d0

TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1> * __thiscall
TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1>::
TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1><SlateEditableTextTypes::FTextCompositionHighlighter>
          (TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1> *this,
          TRawPtrProxy<SlateEditableTextTypes::FTextCompositionHighlighter> *param_1)

{
  FTextCompositionHighlighter *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTextCompositionHighlighter_SlateEditableTextTypes__U__DefaultDeleter_VFTextCompositionHighlighter_SlateEditableTextTypes___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FTextCompositionHighlighter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1><FSlateEditableTextLayout::FTextInputMethodContext> @ 1429b1670

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> * __thiscall
TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1>::
TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1><FSlateEditableTextLayout::FTextInputMethodContext>
          (TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *this,
          TRawPtrProxy<FSlateEditableTextLayout::FTextInputMethodContext> *param_1)

{
  FTextInputMethodContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTextInputMethodContext_FSlateEditableTextLayout__U__DefaultDeleter_VFTextInputMethodContext_FSlateEditableTextLayout___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FTextInputMethodContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1><SlateEditableTextTypes::FTextSearchHighlighter> @ 1429b1710

TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1> * __thiscall
TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1>::
TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1><SlateEditableTextTypes::FTextSearchHighlighter>
          (TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1> *this,
          TRawPtrProxy<SlateEditableTextTypes::FTextSearchHighlighter> *param_1)

{
  FTextSearchHighlighter *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTextSearchHighlighter_SlateEditableTextTypes__U__DefaultDeleter_VFTextSearchHighlighter_SlateEditableTextTypes___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FTextSearchHighlighter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1><SlateEditableTextTypes::FTextSelectionHighlighter> @ 1429b17b0

TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> * __thiscall
TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1>::
TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1><SlateEditableTextTypes::FTextSelectionHighlighter>
          (TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> *this,
          TRawPtrProxy<SlateEditableTextTypes::FTextSelectionHighlighter> *param_1)

{
  FTextSelectionHighlighter *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTextSelectionHighlighter_SlateEditableTextTypes__U__DefaultDeleter_VFTextSelectionHighlighter_SlateEditableTextTypes___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FTextSelectionHighlighter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1><FSlateEditableTextLayout::FVirtualKeyboardEntry> @ 1429b1880

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> * __thiscall
TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1>::
TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1><FSlateEditableTextLayout::FVirtualKeyboardEntry>
          (TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *this,
          TRawPtrProxy<FSlateEditableTextLayout::FVirtualKeyboardEntry> *param_1)

{
  FVirtualKeyboardEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFVirtualKeyboardEntry_FSlateEditableTextLayout__U__DefaultDeleter_VFVirtualKeyboardEntry_FSlateEditableTextLayout___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FVirtualKeyboardEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<SWidget,1><SCheckBox> @ 1429b1920

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<SCheckBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SHyperlink> @ 1429b1950

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHyperlink>
          (TSharedRef<SWidget,1> *this,TSharedRef<SHyperlink,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SSplitter> @ 142a15350

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitter>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSplitter,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><STableColumnHeader> @ 142a15380

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STableColumnHeader>
          (TSharedRef<SWidget,1> *this,TSharedRef<STableColumnHeader,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

