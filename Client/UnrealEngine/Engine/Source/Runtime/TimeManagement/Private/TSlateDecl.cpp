// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 3

// TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs> @ 14603e960

TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SErrorHint *pSVar9;
  SErrorHint *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SErrorHint *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x370);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SErrorHint *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSErrorHint___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x360);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    *(undefined2 *)&pTVar6[0x2c]._padding_ = 0x19;
    pTVar6[1]._padding_ = (longlong)&SErrorHint::_vftable__for__SCompoundWidget__;
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &SErrorHint::_vftable__for__IErrorReportingWidget__;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    FCurveSequence::FCurveSequence((FCurveSequence *)(pTVar6 + 0x2e));
    pTVar6[0x35]._padding_ = 0;
    pTVar6[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35].WeakReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar6 + 0x36));
    pSVar9 = (SErrorHint *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pSVar9 == (SErrorHint *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14603eaec;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14603eaec:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SErrorHint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SErrorHint *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x360);
  return this;
}

// TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs> @ 14603ebb0

TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SFrameRateEntryBox *pSVar9;
  SFrameRateEntryBox *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFrameRateEntryBox *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x328);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SFrameRateEntryBox *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSFrameRateEntryBox___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x318);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SFrameRateEntryBox__6B_;
    pSVar9 = (SFrameRateEntryBox *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0xea60;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x1;
    *(undefined1 *)&pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2f]._padding_ = 0;
    *(undefined2 *)&pTVar6[0x2f].SharedReferenceCount = 0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SFrameRateEntryBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14603ed5a;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14603ed5a:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SFrameRateEntryBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SFrameRateEntryBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x318);
  return this;
}

// TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs> @ 14603ee20

TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SFrameRatePicker *pSVar9;
  SFrameRatePicker *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFrameRatePicker *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x3d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SFrameRatePicker *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSFrameRatePicker___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x3c0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SFrameRatePicker__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0xea60;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x1;
    *(undefined1 *)&pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x30]._padding_ = 0;
    *(undefined2 *)&pTVar6[0x30].SharedReferenceCount = 0;
    pTVar6[0x32]._padding_ = 0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)&pTVar6[0x32].SharedReferenceCount);
    *(undefined1 *)&pTVar6[0x33].SharedReferenceCount = 0;
    pTVar6[0x35]._padding_ = 0;
    pTVar6[0x34]._padding_ = 0;
    pTVar6[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x34].WeakReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)&pTVar6[0x35].SharedReferenceCount);
    *(undefined1 *)&pTVar6[0x36].SharedReferenceCount = 0;
    pTVar6[0x38]._padding_ = 0;
    pTVar6[0x37]._padding_ = 0;
    pTVar6[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37].WeakReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)&pTVar6[0x38].SharedReferenceCount);
    *(undefined1 *)&pTVar6[0x39].SharedReferenceCount = 0;
    pSVar9 = (SFrameRatePicker *)(pTVar6 + 1);
    pTVar6[0x3b]._padding_ = 0;
    pTVar6[0x3a]._padding_ = 0;
    pTVar6[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3c]._padding_ = 0;
    pTVar6[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SFrameRatePicker *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14603f057;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14603f057:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SFrameRatePicker *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SFrameRatePicker *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3c0);
  return this;
}

