// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs> @ 14b42a470

TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDS_LinkText *pSVar9;
  SDS_LinkText *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_LinkText *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x6c0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDS_LinkText *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSDS_LinkText___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x6b0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SDS_LinkText__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    FText::FText((FText *)(pTVar6 + 0x2d));
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(pTVar6 + 0x2f));
    pTVar6[0x5e]._padding_ = 0;
    pTVar6[0x5e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x5e].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x5f]._padding_ = 0;
    *(undefined1 *)&pTVar6[0x5f].SharedReferenceCount = 0;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar6 + 0x60));
    pSVar9 = (SDS_LinkText *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pSVar9 == (SDS_LinkText *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14b42a600;
    }
  }
  if (((*(longlong *)&pSVar9->field_0x8 == 0) || (*(longlong *)&pSVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar9->field_0x10 + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SDS_LinkText **)&pSVar9->field_0x8 = pSVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pSVar9->field_0x10) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar9->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar9->field_0x10 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14b42a600:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDS_LinkText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDS_LinkText *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x6b0);
  return this;
}

// TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs> @ 14bc800b0

TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDS_TableViewBase<SCommonTileView,UObject_*> *pSVar9;
  SDS_TableViewBase<SCommonTileView,UObject_*> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0xa40);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDS_TableViewBase<SCommonTileView,UObject_*> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SDS_TableViewBase_VSCommonTileView__PEAVUObject_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0xa30);
    SListView<UObject_*>::SListView<UObject_*>((SListView<UObject_*> *)(pTVar6 + 1),Tile);
    *(undefined1 *)&pTVar6[0xa0]._padding_ = 1;
    pTVar6[1]._padding_ =
         (longlong)
         &SDS_TableViewBase<SCommonTileView,UObject*___ptr64>::_vftable__for__SCompoundWidget__;
    pSVar9 = (SDS_TableViewBase<SCommonTileView,UObject_*> *)(pTVar6 + 1);
    *(undefined1 *)&pTVar6[0xa0].SharedReferenceCount = 1;
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &SDS_TableViewBase<SCommonTileView,UObject*___ptr64>::_vftable__for__IScrollableWidget__;
    *(undefined ***)&pTVar6[0x59].SharedReferenceCount =
         &SDS_TableViewBase<SCommonTileView,UObject*___ptr64>::_vftable__for__FGCObject__;
    *(undefined ***)&pTVar6[0x5a].SharedReferenceCount =
         &SDS_TableViewBase<SCommonTileView,UObject*___ptr64>::
          _vftable__for__ITypedTableView<UObject*___ptr64>__;
    pTVar6[0xa1]._padding_ = 0;
    pTVar6[0xa1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xa1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0xa2]._padding_ = 0;
    *(undefined8 *)&pTVar6[0xa2].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar6[0xa3]._padding_ + 4) = 0;
    *(undefined1 *)&pTVar6[0xa3].WeakReferenceCount = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14bc80251;
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
LAB_14bc80251:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa30);
  return this;
}

// TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs> @ 14bc80310

TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDS_TableViewBase<SCommonTreeView,UObject_*> *pSVar9;
  SDS_TableViewBase<SCommonTreeView,UObject_*> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0xb30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDS_TableViewBase<SCommonTreeView,UObject_*> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SDS_TableViewBase_VSCommonTreeView__PEAVUObject_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0xb20);
    SCommonTreeView<UObject_*>::SCommonTreeView<UObject_*>
              ((SCommonTreeView<UObject_*> *)(pTVar6 + 1));
    *(undefined1 *)&pTVar6[0xb2].WeakReferenceCount = 0;
    pTVar6[1]._padding_ =
         (longlong)
         &SDS_TableViewBase<SCommonTreeView,UObject*___ptr64>::_vftable__for__SCompoundWidget__;
    pSVar9 = (SDS_TableViewBase<SCommonTreeView,UObject_*> *)(pTVar6 + 1);
    pTVar6[0xb0]._padding_ = 0;
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &SDS_TableViewBase<SCommonTreeView,UObject*___ptr64>::_vftable__for__IScrollableWidget__;
    *(undefined ***)&pTVar6[0x59].SharedReferenceCount =
         &SDS_TableViewBase<SCommonTreeView,UObject*___ptr64>::_vftable__for__FGCObject__;
    *(undefined ***)&pTVar6[0x5a].SharedReferenceCount =
         &SDS_TableViewBase<SCommonTreeView,UObject*___ptr64>::
          _vftable__for__ITypedTableView<UObject*___ptr64>__;
    pTVar6[0xb0].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xb0].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0xb1]._padding_ = 0;
    *(undefined8 *)&pTVar6[0xb1].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar6[0xb2]._padding_ + 4) = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14bc8049e;
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
LAB_14bc8049e:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xb20);
  return this;
}

// TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> @ 14bc80560

TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDS_TableViewBase<SListView,UObject_*> *pSVar9;
  SDS_TableViewBase<SListView,UObject_*> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_TableViewBase<SListView,UObject_*> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0xa30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDS_TableViewBase<SListView,UObject_*> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SDS_TableViewBase_VSListView__PEAVUObject_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0xa20);
    SListView<UObject_*>::SListView<UObject_*>((SListView<UObject_*> *)(pTVar6 + 1),List);
    *(undefined1 *)&pTVar6[0xa2].WeakReferenceCount = 0;
    pTVar6[1]._padding_ =
         (longlong)&SDS_TableViewBase<SListView,UObject*___ptr64>::_vftable__for__SCompoundWidget__;
    pSVar9 = (SDS_TableViewBase<SListView,UObject_*> *)(pTVar6 + 1);
    pTVar6[0xa0]._padding_ = 0;
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &SDS_TableViewBase<SListView,UObject*___ptr64>::_vftable__for__IScrollableWidget__;
    *(undefined ***)&pTVar6[0x59].SharedReferenceCount =
         &SDS_TableViewBase<SListView,UObject*___ptr64>::_vftable__for__FGCObject__;
    *(undefined ***)&pTVar6[0x5a].SharedReferenceCount =
         &SDS_TableViewBase<SListView,UObject*___ptr64>::
          _vftable__for__ITypedTableView<UObject*___ptr64>__;
    pTVar6[0xa0].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xa0].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0xa1]._padding_ = 0;
    *(undefined8 *)&pTVar6[0xa1].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar6[0xa2]._padding_ + 4) = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDS_TableViewBase<SListView,UObject_*> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_14bc806f0;
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
LAB_14bc806f0:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> *)
              &local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDS_TableViewBase<SListView,UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDS_TableViewBase<SListView,UObject_*> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa20);
  return this;
}

// TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> @ 14bc807b0

TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  SDS_ColorSlider *pSVar8;
  SDS_ColorSlider *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SDS_ColorSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x308);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SDS_ColorSlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSDS_ColorSlider___00_SharedPointerInternals__6B_;
    SDS_ColorSlider::SDS_ColorSlider((SDS_ColorSlider *)(pTVar6 + 1));
    pSVar8 = (SDS_ColorSlider *)(pTVar6 + 1);
    if (pSVar8 == (SDS_ColorSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14bc808cf;
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
LAB_14bc808cf:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SDS_ColorSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SDS_ColorSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDS_ColorSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2f8);
  return this;
}

// TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> @ 14bc80990

TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDS_DynamicEntryHorizontal *pSVar9;
  SDS_DynamicEntryHorizontal *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_DynamicEntryHorizontal *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x268);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDS_DynamicEntryHorizontal *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSDS_DynamicEntryHorizontal___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,600);
    SHorizontalBox::SHorizontalBox((SHorizontalBox *)(pTVar6 + 1));
    pSVar9 = (SDS_DynamicEntryHorizontal *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SDS_DynamicEntryHorizontal__6B_;
    pTVar6[0x26]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDS_DynamicEntryHorizontal *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14bc80ad1;
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
LAB_14bc80ad1:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDS_DynamicEntryHorizontal *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDS_DynamicEntryHorizontal *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,600);
  return this;
}

// TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> @ 14bc80b90

TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDS_DynamicEntryRadial *pSVar9;
  SDS_DynamicEntryRadial *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_DynamicEntryRadial *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x278);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDS_DynamicEntryRadial *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSDS_DynamicEntryRadial___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x268);
    SRadialBox::SRadialBox((SRadialBox *)(pTVar6 + 1));
    pSVar9 = (SDS_DynamicEntryRadial *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SDS_DynamicEntryRadial__6B_;
    pTVar6[0x27]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDS_DynamicEntryRadial *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14bc80cd1;
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
LAB_14bc80cd1:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDS_DynamicEntryRadial *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDS_DynamicEntryRadial *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x268);
  return this;
}

// TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> @ 14bc80d90

TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDS_DynamicEntryVertical *pSVar9;
  SDS_DynamicEntryVertical *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_DynamicEntryVertical *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x268);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDS_DynamicEntryVertical *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSDS_DynamicEntryVertical___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,600);
    SVerticalBox::SVerticalBox((SVerticalBox *)(pTVar6 + 1));
    pSVar9 = (SDS_DynamicEntryVertical *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SDS_DynamicEntryVertical__6B_;
    pTVar6[0x26]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDS_DynamicEntryVertical *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14bc80ed1;
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
LAB_14bc80ed1:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDS_DynamicEntryVertical *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDS_DynamicEntryVertical *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,600);
  return this;
}

// TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> @ 14bc80f90

TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  UDS_SSlider *pUVar9;
  UDS_SSlider *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (UDS_SSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x348);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pUVar9 = (UDS_SSlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VUDS_SSlider___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x338);
    SSlider::SSlider((SSlider *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7UDS_SSlider__6B_;
    pUVar9 = (UDS_SSlider *)(pTVar6 + 1);
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32]._padding_ = 0;
    pTVar6[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33]._padding_ = 0;
    pTVar6[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x34]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pUVar9 == (UDS_SSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14bc810f4;
    }
  }
  if (((pUVar9->_padding_ == 0) || (pUVar9->_padding_ == 0)) ||
     (*(int *)(pUVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar9->_padding_ = (longlong)pUVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pUVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pUVar9->_padding_;
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
      pUVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14bc810f4:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pUVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pUVar9;
    local_38 = (UDS_SSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (UDS_SSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x338);
  return this;
}

// operator<<= @ 14bc84ed0

TSharedRef<SDS_DynamicEntryHorizontal,1> * __thiscall
TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SDS_DynamicEntryHorizontal,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SDS_DynamicEntryHorizontal *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDS_DynamicEntryHorizontal,1> *pTVar7;
  FArguments *pFVar8;
  FArguments local_218;
  
  if ((this->_Widget).Object == (SDS_DynamicEntryHorizontal *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryHorizontal,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  (pSVar2->WidgetObject).WeakPtr = (param_1->_WidgetObject).WeakPtr;
  pFVar8 = SHorizontalBox::FArguments::FArguments(&local_218);
  SHorizontalBox::Construct((SHorizontalBox *)pSVar2,pFVar8);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_218._Slots.AllocatorInstance.Data,local_218._Slots.ArrayNum);
  if ((FSlotArguments *)local_218._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_218._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_218);
  if ((this->_Widget).Object == (SDS_DynamicEntryHorizontal *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryHorizontal,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14bc84fc4;
  }
  bVar6 = 0x20;
LAB_14bc84fc4:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SDS_DynamicEntryHorizontal *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryHorizontal,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SDS_DynamicEntryHorizontal *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryHorizontal,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_DynamicEntryHorizontal *)0x0;
  if (__return_storage_ptr__->Object == (SDS_DynamicEntryHorizontal *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryHorizontal,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14bc85090

TSharedRef<SDS_DynamicEntryRadial,1> * __thiscall
TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SDS_DynamicEntryRadial,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SDS_DynamicEntryRadial *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDS_DynamicEntryRadial,1> *pTVar7;
  FArguments *pFVar8;
  undefined1 local_248 [528];
  undefined1 local_38 [48];
  
  if ((this->_Widget).Object == (SDS_DynamicEntryRadial *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryRadial,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  (pSVar2->WidgetObject).WeakPtr = (param_1->_WidgetObject).WeakPtr;
  pFVar8 = SRadialBox::FArguments::FArguments((FArguments *)local_248);
  pFVar8->_UseAllottedWidth = true;
  pFVar8->_StartingAngle = param_1->_StartingAngle;
  pFVar8->_bDistributeItemsEvenly = param_1->_bDistributeItemsEvenly;
  pFVar8->_AngleBetweenItems = param_1->_AngleBetweenItems;
  pFVar8->_SectorCentralAngle = param_1->_SectorCentralAngle;
  SRadialBox::Construct((SRadialBox *)pSVar2,pFVar8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  if ((void *)local_38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  DestructItems<SRadialBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_248._504_8_,local_248._512_4_);
  if ((FSlotArguments *)local_248._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_248._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_248);
  if ((this->_Widget).Object == (SDS_DynamicEntryRadial *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryRadial,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14bc851e8;
  }
  bVar6 = 0x20;
LAB_14bc851e8:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SDS_DynamicEntryRadial *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryRadial,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SDS_DynamicEntryRadial *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryRadial,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_DynamicEntryRadial *)0x0;
  if (__return_storage_ptr__->Object == (SDS_DynamicEntryRadial *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryRadial,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14bc852c0

TSharedRef<SDS_DynamicEntryVertical,1> * __thiscall
TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SDS_DynamicEntryVertical,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SDS_DynamicEntryVertical *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDS_DynamicEntryVertical,1> *pTVar7;
  FArguments *pFVar8;
  FArguments local_218;
  
  if ((this->_Widget).Object == (SDS_DynamicEntryVertical *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryVertical,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  (pSVar2->WidgetObject).WeakPtr = (param_1->_WidgetObject).WeakPtr;
  pFVar8 = SVerticalBox::FArguments::FArguments(&local_218);
  SVerticalBox::Construct((SVerticalBox *)pSVar2,pFVar8);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_218._Slots.AllocatorInstance.Data,local_218._Slots.ArrayNum);
  if ((FSlotArguments *)local_218._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_218._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_218);
  if ((this->_Widget).Object == (SDS_DynamicEntryVertical *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryVertical,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14bc853b4;
  }
  bVar6 = 0x20;
LAB_14bc853b4:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SDS_DynamicEntryVertical *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryVertical,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SDS_DynamicEntryVertical *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryVertical,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDS_DynamicEntryVertical *)0x0;
  if (__return_storage_ptr__->Object == (SDS_DynamicEntryVertical *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_DynamicEntryVertical,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_> @ 14bd435b0

TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,EStretch::Type_&>_>
* __thiscall
TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_>
::
TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_>
          (void *this,char *param_1,char *param_2,int param_3,
          T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,EStretch::Type_&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,EStretch::Type_&>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  *(T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,EStretch::Type_&>
    **)((longlong)this + 0x10) = param_4;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  pTVar7 = ::operator_new(0x2b8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSDS_EmoteImage___00_SharedPointerInternals__6B_;
    memset(pTVar7 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar7 + 1));
    pTVar9 = pTVar7 + 1;
    pTVar7[1]._padding_ = (longlong)&___7SDS_EmoteImage__6B_;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,EStretch::Type_&>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_14bd436eb;
    }
  }
  lVar3._0_4_ = pTVar9->SharedReferenceCount;
  lVar3._4_4_ = pTVar9->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar9[1]._padding_ == 0)) || (*(int *)(pTVar9[1]._padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)pTVar9[1]._padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar9[1]._padding_;
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
      pTVar9[1]._padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14bd436eb:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar9;
  local_20.ReferenceController = pTVar7;
  if (this != &local_28) {
    *(TReferenceControllerBase<1> **)this = pTVar9;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,EStretch::Type_&>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0x2a8);
  return this;
}

// operator<<= @ 14bd44680

TSharedRef<SDS_EmoteImage,1> * __thiscall
TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_>
::operator<<=(void *this,TSharedRef<SDS_EmoteImage,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDS_EmoteImage,1> *pTVar7;
  undefined4 local_res8;
  char local_resc;
  undefined4 local_res10;
  char local_res14;
  
  if (*(longlong *)this == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_EmoteImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct(*(SWidget **)this,(FSlateBaseNamedArgs *)param_1);
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  local_resc = *(char *)((undefined4 *)puVar1[3] + 1);
  if (local_resc != '\0') {
    local_res8 = *(undefined4 *)puVar1[3];
  }
  local_res14 = *(char *)((undefined4 *)puVar1[2] + 1);
  if (local_res14 != '\0') {
    local_res10 = *(undefined4 *)puVar1[2];
  }
  SDS_EmoteImage::Construct
            (*(SDS_EmoteImage **)this,param_1,(FSlateBrush *)*puVar1,(FTextBlockStyle *)puVar1[1],
             (TOptional<int>)&local_res10,(TOptional<int>)&local_res8,*(Type *)puVar1[4]);
  if (*(longlong *)this == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_EmoteImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  plVar2 = *(longlong **)this;
  if ((*(byte *)(plVar2 + 6) & 0x10) == 0) {
    cVar5 = (**(code **)(*plVar2 + 0x228))(plVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14bd44778;
  }
  bVar6 = 0x20;
LAB_14bd44778:
  *(byte *)(plVar2 + 6) = *(byte *)(plVar2 + 6) & 0xdf;
  *(byte *)(plVar2 + 6) = *(byte *)(plVar2 + 6) | bVar6;
  if (*(longlong *)this == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_EmoteImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(byte *)(*(longlong *)this + 0x31) = *(byte *)(*(longlong *)this + 0x31) | 4;
  if (*(longlong *)this == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_EmoteImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = *(SDS_EmoteImage **)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)this = 0;
  if (__return_storage_ptr__->Object == (SDS_EmoteImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_EmoteImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

