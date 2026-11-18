// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// ~FReply @ 14242ef60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FReply::~FReply(FReply *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DragDropContent).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DetectDragForMouseButton).KeyDetails.SharedReferenceCount.ReferenceController);
  pTVar3 = (this->NavigationDestination).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->DetectDragForWidget).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->MouseLockWidget).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->FocusRecipient).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->MouseCaptor).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->EventHandler).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// FReply @ 1424ea010

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall FReply::FReply(FReply *this,bool param_1)

{
  undefined1 *puVar1;
  
  this->bReleaseMouseCapture = 0;
  this->bEndDragDrop = 0;
  this->bPreventThrottling = 0;
  this->bUseHighPrecisionMouse = 0;
  this->bShouldReleaseMouseLock = 0;
  this->bAllUsers = 0;
  this->bReleaseUserFocus = 0;
  this->bSetUserFocus = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->RequestedMousePos).bIsSet = false;
  (this->EventHandler).Object = (SWidget *)0x0;
  (this->EventHandler).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MouseCaptor).Object = (SWidget *)0x0;
  (this->MouseCaptor).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->FocusRecipient).Object = (SWidget *)0x0;
  (this->FocusRecipient).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->MouseLockWidget).Object = (SWidget *)0x0;
  (this->MouseLockWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DetectDragForWidget).Object = (SWidget *)0x0;
  (this->DetectDragForWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->NavigationDestination).Object = (SWidget *)0x0;
  (this->NavigationDestination).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DetectDragForMouseButton).KeyName.ComparisonIndex = 0;
  (this->DetectDragForMouseButton).KeyName.Number = 0;
  (this->DetectDragForMouseButton).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->DetectDragForMouseButton).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DragDropContent).Object = (FDragDropOperation *)0x0;
  (this->DragDropContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(bool *)&this->_padding_ = param_1;
  this->FocusChangeReason = SetDirectly;
  this->NavigationType = Invalid;
  this->NavigationGenesis = User;
  this->NavigationSource = FocusedWidget;
  return this;
}

// FReply @ 1424ea0a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall FReply::FReply(FReply *this,FReply *param_1)

{
  bool bVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  this->_padding_ = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  (this->RequestedMousePos).bIsSet = false;
  bVar1 = (param_1->RequestedMousePos).bIsSet;
  (this->RequestedMousePos).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->RequestedMousePos).TypedValue.field0_0x0 =
         (param_1->RequestedMousePos).TypedValue.field0_0x0;
  }
  (this->EventHandler).Object = (param_1->EventHandler).Object;
  pTVar3 = (param_1->EventHandler).WeakReferenceCount.ReferenceController;
  (this->EventHandler).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->MouseCaptor).Object = (param_1->MouseCaptor).Object;
  pTVar3 = (param_1->MouseCaptor).WeakReferenceCount.ReferenceController;
  (this->MouseCaptor).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->FocusRecipient).Object = (param_1->FocusRecipient).Object;
  pTVar3 = (param_1->FocusRecipient).WeakReferenceCount.ReferenceController;
  (this->FocusRecipient).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->MouseLockWidget).Object = (param_1->MouseLockWidget).Object;
  pTVar3 = (param_1->MouseLockWidget).WeakReferenceCount.ReferenceController;
  (this->MouseLockWidget).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->DetectDragForWidget).Object = (param_1->DetectDragForWidget).Object;
  pTVar3 = (param_1->DetectDragForWidget).WeakReferenceCount.ReferenceController;
  (this->DetectDragForWidget).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->NavigationDestination).Object = (param_1->NavigationDestination).Object;
  pTVar3 = (param_1->NavigationDestination).WeakReferenceCount.ReferenceController;
  (this->NavigationDestination).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->DetectDragForMouseButton).KeyName = (param_1->DetectDragForMouseButton).KeyName;
  (this->DetectDragForMouseButton).KeyDetails.Object =
       (param_1->DetectDragForMouseButton).KeyDetails.Object;
  pTVar3 = (param_1->DetectDragForMouseButton).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->DetectDragForMouseButton).KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->DragDropContent).Object = (param_1->DragDropContent).Object;
  pTVar3 = (param_1->DragDropContent).SharedReferenceCount.ReferenceController;
  (this->DragDropContent).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->FocusChangeReason = param_1->FocusChangeReason;
  this->NavigationType = param_1->NavigationType;
  this->NavigationGenesis = param_1->NavigationGenesis;
  this->NavigationSource = param_1->NavigationSource;
  uVar4 = (ZPULL(*(undefined4 *)&this->field_0xb4,0,1) ^ param_1->bReleaseMouseCapture) & 1 ^
          *(undefined4 *)&this->field_0xb4;
  *(uint *)&this->field_0xb4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xb4) & 2 ^ uVar4;
  *(uint *)&this->field_0xb4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xb4) & 4 ^ uVar4;
  *(uint *)&this->field_0xb4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xb4) & 8 ^ uVar4;
  *(uint *)&this->field_0xb4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xb4) & 0x10 ^ uVar4;
  *(uint *)&this->field_0xb4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xb4) & 0x20 ^ uVar4;
  *(uint *)&this->field_0xb4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xb4) & 0x40 ^ uVar4;
  *(uint *)&this->field_0xb4 = uVar4;
  *(uint *)&this->field_0xb4 = (uVar4 ^ *(uint *)&param_1->field_0xb4) & 0x80 ^ uVar4;
  return this;
}

// operator= @ 1424ed680

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall FReply::operator=(FReply *this,FReply *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  FKeyDetails *pFVar7;
  FDragDropOperation *pFVar8;
  undefined4 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uVar11;
  undefined8 in_R8;
  undefined8 in_R9;
  longlong lVar12;
  TReferenceControllerBase<1> *pTVar13;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  lVar3 = param_1->_padding_;
  lVar4 = param_1->_padding_;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar12 = this->_padding_;
  pTVar13 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = lVar4;
  this->_padding_ = lVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (&param_1->RequestedMousePos != &this->RequestedMousePos) {
    if ((param_1->RequestedMousePos).bIsSet == false) {
      if ((this->RequestedMousePos).bIsSet != false) {
        (this->RequestedMousePos).bIsSet = false;
      }
    }
    else {
      (this->RequestedMousePos).TypedValue.field0_0x0 =
           (param_1->RequestedMousePos).TypedValue.field0_0x0;
      (this->RequestedMousePos).bIsSet = true;
    }
  }
  pTVar5 = (param_1->EventHandler).WeakReferenceCount.ReferenceController;
  pSVar6 = (param_1->EventHandler).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  uVar9 = *(undefined4 *)&(this->EventHandler).Object;
  pTVar10 = (this->EventHandler).WeakReferenceCount.ReferenceController;
  (this->EventHandler).Object = pSVar6;
  (this->EventHandler).WeakReferenceCount.ReferenceController = pTVar5;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar10->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1,in_R8,in_R9,lVar12,pTVar13,uVar9);
    }
  }
  pTVar13 = (param_1->MouseCaptor).WeakReferenceCount.ReferenceController;
  pSVar6 = (param_1->MouseCaptor).Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->MouseCaptor).WeakReferenceCount.ReferenceController;
  (this->MouseCaptor).Object = pSVar6;
  (this->MouseCaptor).WeakReferenceCount.ReferenceController = pTVar13;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar13 = (param_1->FocusRecipient).WeakReferenceCount.ReferenceController;
  pSVar6 = (param_1->FocusRecipient).Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->FocusRecipient).WeakReferenceCount.ReferenceController;
  (this->FocusRecipient).Object = pSVar6;
  (this->FocusRecipient).WeakReferenceCount.ReferenceController = pTVar13;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar13 = (param_1->MouseLockWidget).WeakReferenceCount.ReferenceController;
  pSVar6 = (param_1->MouseLockWidget).Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->MouseLockWidget).WeakReferenceCount.ReferenceController;
  (this->MouseLockWidget).Object = pSVar6;
  (this->MouseLockWidget).WeakReferenceCount.ReferenceController = pTVar13;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar13 = (param_1->DetectDragForWidget).WeakReferenceCount.ReferenceController;
  pSVar6 = (param_1->DetectDragForWidget).Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->DetectDragForWidget).WeakReferenceCount.ReferenceController;
  (this->DetectDragForWidget).Object = pSVar6;
  (this->DetectDragForWidget).WeakReferenceCount.ReferenceController = pTVar13;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar13 = (param_1->NavigationDestination).WeakReferenceCount.ReferenceController;
  pSVar6 = (param_1->NavigationDestination).Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->NavigationDestination).WeakReferenceCount.ReferenceController;
  (this->NavigationDestination).Object = pSVar6;
  (this->NavigationDestination).WeakReferenceCount.ReferenceController = pTVar13;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  (this->DetectDragForMouseButton).KeyName = (param_1->DetectDragForMouseButton).KeyName;
  pTVar13 = (param_1->DetectDragForMouseButton).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar7 = (param_1->DetectDragForMouseButton).KeyDetails.Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->DetectDragForMouseButton).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->DetectDragForMouseButton).KeyDetails.Object = pFVar7;
  (this->DetectDragForMouseButton).KeyDetails.SharedReferenceCount.ReferenceController = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar13 = (param_1->DragDropContent).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_1->DragDropContent).Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->DragDropContent).SharedReferenceCount.ReferenceController;
  (this->DragDropContent).Object = pFVar8;
  (this->DragDropContent).SharedReferenceCount.ReferenceController = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  this->FocusChangeReason = param_1->FocusChangeReason;
  this->NavigationType = param_1->NavigationType;
  this->NavigationGenesis = param_1->NavigationGenesis;
  this->NavigationSource = param_1->NavigationSource;
  uVar11 = (ZPULL(*(undefined4 *)&this->field_0xb4,0,1) ^ param_1->bReleaseMouseCapture) & 1 ^
           *(undefined4 *)&this->field_0xb4;
  *(uint *)&this->field_0xb4 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0xb4) & 2 ^ uVar11;
  *(uint *)&this->field_0xb4 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0xb4) & 4 ^ uVar11;
  *(uint *)&this->field_0xb4 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0xb4) & 8 ^ uVar11;
  *(uint *)&this->field_0xb4 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0xb4) & 0x10 ^ uVar11;
  *(uint *)&this->field_0xb4 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0xb4) & 0x20 ^ uVar11;
  *(uint *)&this->field_0xb4 = uVar11;
  uVar11 = (uVar11 ^ *(uint *)&param_1->field_0xb4) & 0x40 ^ uVar11;
  *(uint *)&this->field_0xb4 = uVar11;
  *(uint *)&this->field_0xb4 = (uVar11 ^ *(uint *)&param_1->field_0xb4) & 0x80 ^ uVar11;
  return this;
}

// CancelFocusRequest @ 142503920

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall FReply::CancelFocusRequest(FReply *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [2];
  
  this->bSetUserFocus = 0;
  if (&this->FocusRecipient != (TWeakPtr<SWidget,1> *)local_18) {
    pTVar3 = (this->FocusRecipient).WeakReferenceCount.ReferenceController;
    (this->FocusRecipient).Object = (SWidget *)0x0;
    (this->FocusRecipient).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  this->bReleaseUserFocus = 0;
  return this;
}

// ClearUserFocus @ 142504820

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall FReply::ClearUserFocus(FReply *this,EFocusCause param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [2];
  
  if (&this->FocusRecipient != (TWeakPtr<SWidget,1> *)local_18) {
    pTVar3 = (this->FocusRecipient).WeakReferenceCount.ReferenceController;
    (this->FocusRecipient).Object = (SWidget *)0x0;
    (this->FocusRecipient).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  this->FocusChangeReason = param_1;
  *(uint *)&this->field_0xb4 = (uint)param_2 << 3 | *(uint *)&this->field_0xb4 & 0xfffffff5 | 4;
  return this;
}

// SetMousePos @ 14251f5e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall FReply::SetMousePos(FReply *this,TIntPoint<int> *param_1)

{
  if ((TOptional<UE::Math::TIntPoint<int>_> *)param_1 != &this->RequestedMousePos) {
    (this->RequestedMousePos).TypedValue.field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)param_1->field0_0x0;
    (this->RequestedMousePos).bIsSet = true;
  }
  return this;
}

// SetUserFocus @ 14251f720

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FReply::SetUserFocus(FReply *this,TSharedRef<SWidget,1> *param_1,EFocusCause param_2,bool param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  this->bSetUserFocus = 1;
  (this->FocusRecipient).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (this->FocusRecipient).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->FocusRecipient).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->FocusRecipient).WeakReferenceCount.ReferenceController = pTVar4;
  }
  this->bReleaseUserFocus = 0;
  this->bAllUsers = 0;
  *(uint *)&this->field_0xb4 = *(uint *)&this->field_0xb4 | (uint)param_3 << 3;
  this->FocusChangeReason = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ToString @ 142520ad0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FReply::ToString(FReply *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"Unhandled";
  if ((char)this->_padding_ != '\0') {
    pwVar1 = L"Handled";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  if (this->bReleaseMouseCapture != 0) {
    ::FString::AppendChars(__return_storage_ptr__,L"+ReleaseMouseCapture",0x14);
  }
  if (this->bSetUserFocus != 0) {
    ::FString::AppendChars(__return_storage_ptr__,L"+SetUserFocus",0xd);
  }
  return __return_storage_ptr__;
}

// SetNavigation @ 1425fd010

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FReply::SetNavigation
          (FReply *this,EUINavigation param_1,ENavigationGenesis param_2,ENavigationSource param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [2];
  
  this->NavigationType = param_1;
  this->NavigationGenesis = param_2;
  this->NavigationSource = param_3;
  if (&this->NavigationDestination != (TWeakPtr<SWidget,1> *)local_18) {
    pTVar3 = (this->NavigationDestination).WeakReferenceCount.ReferenceController;
    (this->NavigationDestination).Object = (SWidget *)0x0;
    (this->NavigationDestination).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  return this;
}

