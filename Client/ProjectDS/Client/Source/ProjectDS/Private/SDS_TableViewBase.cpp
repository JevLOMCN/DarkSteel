// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// OnKeyDown @ 14bcb6390

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SCommonTileView,UObject_*>::OnKeyDown
          (SDS_TableViewBase<SCommonTileView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  SListView<UObject_*>::OnKeyDown
            ((SListView<UObject_*> *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 14bcb6400

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SCommonTreeView,UObject_*>::OnKeyDown
          (SDS_TableViewBase<SCommonTreeView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  STreeView<UObject_*>::OnKeyDown
            ((STreeView<UObject_*> *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 14bcb6470

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SListView,UObject_*>::OnKeyDown
          (SDS_TableViewBase<SListView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  SListView<UObject_*>::OnKeyDown
            ((SListView<UObject_*> *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnMouseMove @ 14bcb7200

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SCommonTileView,UObject_*>::OnMouseMove
          (SDS_TableViewBase<SCommonTileView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  STableViewBase::OnMouseMove((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnMouseMove @ 14bcb7270

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SCommonTreeView,UObject_*>::OnMouseMove
          (SDS_TableViewBase<SCommonTreeView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  STableViewBase::OnMouseMove((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnMouseMove @ 14bcb72e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SListView,UObject_*>::OnMouseMove
          (SDS_TableViewBase<SListView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  STableViewBase::OnMouseMove((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnMouseWheel @ 14bcb7350

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SCommonTileView,UObject_*>::OnMouseWheel
          (SDS_TableViewBase<SCommonTileView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  STableViewBase::OnMouseWheel((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnMouseWheel @ 14bcb73c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SCommonTreeView,UObject_*>::OnMouseWheel
          (SDS_TableViewBase<SCommonTreeView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  STableViewBase::OnMouseWheel((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnMouseWheel @ 14bcb7430

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SListView,UObject_*>::OnMouseWheel
          (SDS_TableViewBase<SListView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  STableViewBase::OnMouseWheel((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnTouchMoved @ 14bcbb9b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SCommonTileView,UObject_*>::OnTouchMoved
          (SDS_TableViewBase<SCommonTileView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FReadAccessScope local_28;
  
  STableViewBase::OnTouchMoved((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ != '\0') {
    bVar2 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar2) {
      *(undefined1 *)&this->_padding_ = 0;
      pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_28);
      FReply::SetUserFocus(__return_storage_ptr__,pTVar3,SetDirectly,false);
    }
  }
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnTouchMoved @ 14bcbba50

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SCommonTreeView,UObject_*>::OnTouchMoved
          (SDS_TableViewBase<SCommonTreeView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FReadAccessScope local_28;
  
  STableViewBase::OnTouchMoved((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ != '\0') {
    bVar2 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar2) {
      *(undefined1 *)&this->_padding_ = 0;
      pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_28);
      FReply::SetUserFocus(__return_storage_ptr__,pTVar3,SetDirectly,false);
    }
  }
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// OnTouchMoved @ 14bcbbaf0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_TableViewBase<SListView,UObject_*>::OnTouchMoved
          (SDS_TableViewBase<SListView,UObject_*> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  STableViewBase::OnTouchMoved((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUserScrollInteracted,&local_28);
    if ((*(int *)&(this->OnUserScrollInteracted).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUserScrollInteracted).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return __return_storage_ptr__;
}

// Tick @ 14bccc500

void __thiscall
SDS_TableViewBase<SCommonTileView,UObject_*>::Tick
          (SDS_TableViewBase<SCommonTileView,UObject_*> *this,FGeometry *param_1,double param_2,
          float param_3)

{
  bool bVar1;
  
  STableViewBase::Tick((STableViewBase *)this,param_1,param_2,param_3);
  if ((char)this->_padding_ == '\x01') {
    bVar1 = STableViewBase::IsUserScrolling((STableViewBase *)this);
    if ((this->WasScrolling == true) && (!bVar1)) {
      (**(code **)(this->_padding_ + 0x2b8))(this);
    }
    this->WasScrolling = bVar1;
  }
  return;
}

// Tick @ 14bccc560

void __thiscall
SDS_TableViewBase<SCommonTreeView,UObject_*>::Tick
          (SDS_TableViewBase<SCommonTreeView,UObject_*> *this,FGeometry *param_1,double param_2,
          float param_3)

{
  bool bVar1;
  
  STreeView<UObject_*>::Tick((STreeView<UObject_*> *)this,param_1,param_2,param_3);
  if ((char)this->_padding_ == '\x01') {
    bVar1 = STableViewBase::IsUserScrolling((STableViewBase *)this);
    if ((this->WasScrolling == true) && (!bVar1)) {
      (**(code **)(this->_padding_ + 0x2b8))(this);
    }
    this->WasScrolling = bVar1;
  }
  return;
}

// Tick @ 14bccc5c0

void __thiscall
SDS_TableViewBase<SListView,UObject_*>::Tick
          (SDS_TableViewBase<SListView,UObject_*> *this,FGeometry *param_1,double param_2,
          float param_3)

{
  bool bVar1;
  
  STableViewBase::Tick((STableViewBase *)this,param_1,param_2,param_3);
  if ((char)this->_padding_ == '\x01') {
    bVar1 = STableViewBase::IsUserScrolling((STableViewBase *)this);
    if ((this->WasScrolling == true) && (!bVar1)) {
      (**(code **)(this->_padding_ + 0x2b8))(this);
    }
    this->WasScrolling = bVar1;
  }
  return;
}

// UpdateScrollBarThickness @ 14bccf0e0

void __thiscall
SDS_TableViewBase<SCommonTreeView,UObject_*>::UpdateScrollBarThickness
          (SDS_TableViewBase<SCommonTreeView,UObject_*> *this,float *param_1)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  SBox *this_00;
  bool bVar6;
  TAttribute<FOptionalSize> local_78;
  TAttribute<FOptionalSize> local_58;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  lVar1 = this->_padding_;
  this->Thickness = *param_1;
  if (lVar1 != 0) {
    pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 0x1d0);
    this_00 = (SBox *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14bccf144;
        }
        LOCK();
        aVar4 = pTVar5->SharedReferenceCount;
        bVar6 = aVar3 == aVar4;
        if (bVar6) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar6);
      this_00 = *(SBox **)(lVar1 + 0x1c8);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_14bccf144:
    if (this_00 != (SBox *)0x0) {
      local_78.Value.Size = (this->Padding).Bottom + (this->Padding).Top;
      local_78.bIsSet = true;
      local_78.Getter._16_8_ = 0;
      local_78.Getter._0_8_ = 0;
      local_78.Getter._8_8_ = 0;
      SBox::SetHeightOverride(this_00,&local_78);
      local_58.bIsSet = true;
      local_58.Getter._16_8_ = 0;
      local_58.Value.Size = (this->Padding).Right + (this->Padding).Left + this->Thickness;
      local_58.Getter._0_8_ = 0;
      local_58.Getter._8_8_ = 0;
      SBox::SetWidthOverride(this_00,&local_58);
      if ((this->_padding_ == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38._s_0.X = (double)*param_1;
      local_28 = 1;
      local_10 = 0;
      local_38._s_0.Y = __real_4049000000000000;
      local_20 = 0;
      uStack_18 = 0;
      SScrollBar::SetThickness
                ((SScrollBar *)this->_padding_,
                 (TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// UpdateScrollBarThickness @ 14bccf2a0

void __thiscall
SDS_TableViewBase<SListView,UObject_*>::UpdateScrollBarThickness
          (SDS_TableViewBase<SListView,UObject_*> *this,float *param_1)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  SBox *this_00;
  bool bVar6;
  TAttribute<FOptionalSize> local_78;
  TAttribute<FOptionalSize> local_58;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  lVar1 = this->_padding_;
  this->Thickness = *param_1;
  if (lVar1 != 0) {
    pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 0x1d0);
    this_00 = (SBox *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14bccf304;
        }
        LOCK();
        aVar4 = pTVar5->SharedReferenceCount;
        bVar6 = aVar3 == aVar4;
        if (bVar6) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar6);
      this_00 = *(SBox **)(lVar1 + 0x1c8);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_14bccf304:
    if (this_00 != (SBox *)0x0) {
      local_78.Value.Size = (this->Padding).Bottom + (this->Padding).Top;
      local_78.bIsSet = true;
      local_78.Getter._16_8_ = 0;
      local_78.Getter._0_8_ = 0;
      local_78.Getter._8_8_ = 0;
      SBox::SetHeightOverride(this_00,&local_78);
      local_58.bIsSet = true;
      local_58.Getter._16_8_ = 0;
      local_58.Value.Size = (this->Padding).Right + (this->Padding).Left + this->Thickness;
      local_58.Getter._0_8_ = 0;
      local_58.Getter._8_8_ = 0;
      SBox::SetWidthOverride(this_00,&local_58);
      if ((this->_padding_ == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38._s_0.X = (double)*param_1;
      local_28 = 1;
      local_10 = 0;
      local_38._s_0.Y = __real_4049000000000000;
      local_20 = 0;
      uStack_18 = 0;
      SScrollBar::SetThickness
                ((SScrollBar *)this->_padding_,
                 (TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

