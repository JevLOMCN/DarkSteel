// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// Construct @ 1469aec20

void __thiscall
SMouseHoverWidget::Construct
          (SMouseHoverWidget *this,FArguments *param_1,UMouseHoverComponent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  UMouseHoverComponent *local_res8;
  
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UMouseHoverComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->MouseHoverComponent).WeakPtr,(FObjectPtr)&local_res8);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  return;
}

// OnMouseEnter @ 1469eeb40

void __thiscall
SMouseHoverWidget::OnMouseEnter(SMouseHoverWidget *this,FGeometry *param_1,FPointerEvent *param_2)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldId local_18;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->MouseHoverComponent).WeakPtr);
  if (bVar2) {
    cVar1 = *(char *)((longlong)&this->_padding_ + 3);
    SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
    if ((cVar1 == '\0') && (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
      pUVar3 = FWeakObjectPtr::Get(&(this->MouseHoverComponent).WeakPtr);
      if (pUVar3[2].field_0x8 != '\x01') {
        pUVar3[2].field_0x8 = 1;
        local_18.BitNumber =
             UMouseHoverComponent::FFieldNotificationClassDescriptor::bIsHovered.BitNumber;
        local_18.FieldName =
             UMouseHoverComponent::FFieldNotificationClassDescriptor::bIsHovered.FieldName;
        UUIComponent::BroadcastFieldValueChanged((UUIComponent *)(pUVar3 + 1),&local_18);
      }
    }
  }
  return;
}

// OnMouseLeave @ 1469eecd0

void __thiscall SMouseHoverWidget::OnMouseLeave(SMouseHoverWidget *this,FPointerEvent *param_1)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldId local_18;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->MouseHoverComponent).WeakPtr);
  if (bVar2) {
    cVar1 = *(char *)((longlong)&this->_padding_ + 3);
    SWidget::OnMouseLeave((SWidget *)this,param_1);
    if ((cVar1 != '\0') && (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
      pUVar3 = FWeakObjectPtr::Get(&(this->MouseHoverComponent).WeakPtr);
      if (pUVar3[2].field_0x8 != '\0') {
        pUVar3[2].field_0x8 = 0;
        local_18.BitNumber =
             UMouseHoverComponent::FFieldNotificationClassDescriptor::bIsHovered.BitNumber;
        local_18.FieldName =
             UMouseHoverComponent::FFieldNotificationClassDescriptor::bIsHovered.FieldName;
        UUIComponent::BroadcastFieldValueChanged((UUIComponent *)(pUVar3 + 1),&local_18);
      }
    }
  }
  return;
}

