// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 12

// Expose<SPrimitiveDebuggerDetailView> @ 146cfd1f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>::
Expose<SPrimitiveDebuggerDetailView>
          (TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SPrimitiveDebuggerDetailView,1> *param_1)

{
  SPrimitiveDebuggerDetailView *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SPrimitiveDebuggerDetailView,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SPrimitiveDebuggerDetailView,1>::~TSharedPtr<SPrimitiveDebuggerDetailView,1>(&local_18)
  ;
  return this;
}

// TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs> @ 146d02650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
* __thiscall
TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
    SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
              ((SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)(pTVar6 + 1),List)
    ;
    pSVar8 = (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_146d02776;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_146d02776:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
               *)local_38) {
    (this->_Widget).Object =
         (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)local_38._16_8_;
    local_38._0_8_ = (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
  ~TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
            ((TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
             local_38);
  TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
  ~TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
            ((TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
             (local_38 + 0x10));
  if ((this->_Widget).Object ==
      (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> @ 146d02840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDrawPrimitiveDebugger *pSVar9;
  SDrawPrimitiveDebugger *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDrawPrimitiveDebugger *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x3e0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDrawPrimitiveDebugger *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSDrawPrimitiveDebugger___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x3d0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SDrawPrimitiveDebugger__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2e]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x2e]._padding_ + 4) = 0x80;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32]._padding_ = 0;
    pTVar6[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33]._padding_ = 0;
    FText::FText((FText *)&pTVar6[0x33].SharedReferenceCount);
    pTVar6[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35]._padding_ = 0;
    pTVar6[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x36]._padding_ = 0;
    pTVar6[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37]._padding_ = 0;
    pTVar6[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38]._padding_ = 0;
    pTVar6[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x39]._padding_ = 0;
    pTVar6[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x39].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3b]._padding_ = 0;
    pTVar6[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3b].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar6[0x3c]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar6[0x3c]._padding_ = 0xffffffff;
    pTVar6[0x3d]._padding_ = 0;
    pTVar6[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pSVar9 = (SDrawPrimitiveDebugger *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pSVar9 == (SDrawPrimitiveDebugger *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_146d02a66;
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
LAB_146d02a66:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDrawPrimitiveDebugger *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDrawPrimitiveDebugger *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3d0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_> @ 146d02b30

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  SExpanderArrow *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SExpanderArrow *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExpanderArrow___00_SharedPointerInternals__6B_;
    SExpanderArrow::SExpanderArrow((SExpanderArrow *)(pTVar6 + 1));
    pSVar8 = (SExpanderArrow *)(pTVar6 + 1);
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_146d02c4f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_146d02c4f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> @ 146d02d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> *this,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> *pTVar6;
  SPrimitiveDebuggerDetailView *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 local_res8;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SPrimitiveDebuggerDetailView *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_30 = ::operator_new(0x388);
  if (pTStack_30 == (TReferenceControllerBase<1> *)0x0) {
    local_48._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
    pSVar7 = (SPrimitiveDebuggerDetailView *)&DAT_00000010;
  }
  else {
    pTStack_30->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_30->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_30->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSPrimitiveDebuggerDetailView___00_SharedPointerInternals__6B_
    ;
    memset(pTStack_30 + 1,0,0x378);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_30 + 1));
    *(undefined2 *)&pTStack_30[0x30].SharedReferenceCount = 0;
    pTStack_30[1]._padding_ = (longlong)&___7SPrimitiveDebuggerDetailView__6B_;
    pTStack_30[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x2c]._padding_ = 0;
    pTStack_30[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x2d]._padding_ = 0;
    pTStack_30[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x2e]._padding_ = 0;
    pTStack_30[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x2f]._padding_ = 0;
    pTStack_30[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x30]._padding_ = 0;
    FText::FText((FText *)(pTStack_30 + 0x31));
    FText::FText((FText *)(pTStack_30 + 0x32));
    FText::FText((FText *)(pTStack_30 + 0x33));
    FText::FText((FText *)(pTStack_30 + 0x34));
    FText::FText((FText *)(pTStack_30 + 0x35));
    param_4 = (T0RequiredArgs *)0x0;
    pTStack_30[0x36]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTStack_30 + 0x36),(FObjectPtr)&param_4);
    local_res8 = 0;
    pTStack_30[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x36].WeakReferenceCount = (atomic<int>)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTStack_30[0x36].SharedReferenceCount,(FObjectPtr)&local_res8);
    pSVar7 = (SPrimitiveDebuggerDetailView *)(pTStack_30 + 1);
    pTStack_30[0x37]._padding_ = 0;
    pTStack_30[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_30[0x38]._padding_ = 0;
    pTVar8 = pTStack_30;
    local_48._16_8_ = pSVar7;
    if (pSVar7 == (SPrimitiveDebuggerDetailView *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar6;
      }
      goto LAB_146d02f2d;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146d02f2d:
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> *)local_48) {
    (this->_Widget).Object = (SPrimitiveDebuggerDetailView *)local_48._16_8_;
    local_48._0_8_ = (SPrimitiveDebuggerDetailView *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_48 + 8));
  }
  TSharedPtr<SPrimitiveDebuggerDetailView,1>::~TSharedPtr<SPrimitiveDebuggerDetailView,1>
            ((TSharedPtr<SPrimitiveDebuggerDetailView,1> *)local_48);
  TSharedRef<SPrimitiveDebuggerDetailView,1>::~TSharedRef<SPrimitiveDebuggerDetailView,1>
            ((TSharedRef<SPrimitiveDebuggerDetailView,1> *)(local_48 + 0x10));
  if ((this->_Widget).Object == (SPrimitiveDebuggerDetailView *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x378);
  return this;
}

// ~TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> @ 146d04350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// operator<<= @ 146d07870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> * __thiscall
TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
::operator<<=(TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
              *this,TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object ==
      (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::Construct
            ((this->_Widget).Object,param_1);
  if ((this->_Widget).Object ==
      (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_146d07911;
  }
  bVar6 = 0x20;
LAB_146d07911:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object ==
      (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 146d079e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar3->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (STableViewBase *)pSVar5;
  local_28.SharedReferenceCount.ReferenceController = pTVar4;
  STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::ConstructInternal
            (pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_146d07ae2;
  }
  bVar9 = 0x20;
LAB_146d07ae2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 146d07bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> * __thiscall
TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  SDrawPrimitiveDebuggerListViewRow *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *pTVar7;
  
  if ((this->_Widget).Object == (SDrawPrimitiveDebuggerListViewRow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  SDrawPrimitiveDebuggerListViewRow::Construct
            ((this->_Widget).Object,param_1,this->_RequiredArgs->Arg0);
  if ((this->_Widget).Object == (SDrawPrimitiveDebuggerListViewRow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_146d07c5e;
  }
  bVar6 = 0x20;
LAB_146d07c5e:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SDrawPrimitiveDebuggerListViewRow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SDrawPrimitiveDebuggerListViewRow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDrawPrimitiveDebuggerListViewRow *)0x0;
  if (__return_storage_ptr__->Object == (SDrawPrimitiveDebuggerListViewRow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 146d07d20

TSharedRef<SExpandableArea,1> * __thiscall
TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SExpandableArea,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpandableArea *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SExpandableArea,1> *pTVar7;
  
  if ((this->_Widget).Object == (SExpandableArea *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SExpandableArea,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SExpandableArea::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SExpandableArea *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SExpandableArea,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_146d07dc1;
  }
  bVar6 = 0x20;
LAB_146d07dc1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SExpandableArea *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SExpandableArea,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SExpandableArea *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SExpandableArea,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SExpandableArea *)0x0;
  if (__return_storage_ptr__->Object == (SExpandableArea *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SExpandableArea,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 146d07e90

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SExpanderArrow,1> *pTVar8;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  local_18.Object = (ITableRow *)pTVar3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SExpanderArrow::Construct(pSVar2,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_146d07f61;
  }
  bVar7 = 0x20;
LAB_146d07f61:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  if (__return_storage_ptr__->Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 146d08030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<SPrimitiveDebuggerDetailView,1> * __thiscall
TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SPrimitiveDebuggerDetailView,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SPrimitiveDebuggerDetailView *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SPrimitiveDebuggerDetailView,1> *pTVar7;
  
  if ((this->_Widget).Object == (SPrimitiveDebuggerDetailView *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimitiveDebuggerDetailView,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SPrimitiveDebuggerDetailView::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SPrimitiveDebuggerDetailView *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimitiveDebuggerDetailView,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_146d080d1;
  }
  bVar6 = 0x20;
LAB_146d080d1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SPrimitiveDebuggerDetailView *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimitiveDebuggerDetailView,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SPrimitiveDebuggerDetailView *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimitiveDebuggerDetailView,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SPrimitiveDebuggerDetailView *)0x0;
  if (__return_storage_ptr__->Object == (SPrimitiveDebuggerDetailView *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimitiveDebuggerDetailView,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

